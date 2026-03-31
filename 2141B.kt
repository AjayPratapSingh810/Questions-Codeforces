import java.util.*

fun main() {
    val scanner = Scanner(System.`in`)
    val cases = scanner.nextInt()

    repeat(cases) {
        val n = scanner.nextInt()
        val m = scanner.nextInt()

        val mp = HashMap<Int, Boolean>()

        repeat(n) {
            val a = scanner.nextInt()
            mp[a] = true
        }

        var count = 0

        repeat(m) {
            val a = scanner.nextInt()
            if (mp[a] == true) {
                count++
            }
        }

        if (n - count <= m - count) {
            println((n - count) * 2 + 1)
        } else {
            println((m - count) * 2 + 2)
        }
    }
}
