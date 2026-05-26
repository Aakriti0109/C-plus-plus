import java.util.Scanner;

public class HairCareAdvisor {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int score = 0;

        System.out.println("=== 💖 Hair Care Advisor 💖 ===\n");

       
        System.out.println("1. How long does your hair take to dry?");
        System.out.println("1. Very fast");
        System.out.println("2. Normal");
        System.out.println("3. Takes a long time");
        int q1 = sc.nextInt();
        score += q1;

       
        System.out.println("\n2. How does your hair absorb products?");
        System.out.println("1. Absorbs very quickly");
        System.out.println("2. Absorbs normally");
        System.out.println("3. Products sit on top");
        int q2 = sc.nextInt();
        score += q2;

       
        System.out.println("\n3. How often does your hair feel dry?");
        System.out.println("1. Very often");
        System.out.println("2. Sometimes");
        System.out.println("3. Rarely");
        int q3 = sc.nextInt();
        score += q3;

        String hairType;

        // Determine hair porosity
        if (score <= 4) {
            hairType = "High Porosity";
        } else if (score <= 7) {
            hairType = "Medium Porosity";
        } else {
            hairType = "Low Porosity";
        }

        System.out.println("\n✨ Your Hair Type: " + hairType);

        // Suggest oil
        System.out.println("\n💆‍♀️ Recommended Hair Oils:");

        if (hairType.equals("High Porosity")) {
            System.out.println("- Coconut Oil");
            System.out.println("- Olive Oils");
            System.out.println("- Castor Oil");
        } else if (hairType.equals("Medium Porosity")) {
            System.out.println("- Argan Oil");
            System.out.println("- Jojoba Oil");
            System.out.println("- Almond Oil");
        } else {
            System.out.println("- Lightweight oils like:");
            System.out.println("  • Grapeseed Oil");
            System.out.println("  • Argan Oil");
            System.out.println("  • Jojoba Oil");
        }

        System.out.println("\nStay fabulous and take care of your hair 💖✨");

        sc.close();
    }
}