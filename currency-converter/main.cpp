#include <iostream>

#include <string>

using std::cout;
struct Rate
{
    std::string country;
    std::string currency;
    double value;
};

int main()
{
    bool find = true;
    std::string fromc;
    std::string toc;
    std::string hm;
    std::string hmm;
    double amount;
    double val = 0;
    double val1 = 0;
    Rate r[] = {
        {"USA", "USD", 1.0},
        {"UAE", "AED", 3.6725},
        {"Afghanistan", "AFN", 64.65149},
        {"Albania", "ALL", 79.536476},
        {"Armenia", "AMD", 363.488226},
        {"Curacao and Sint Maarten", "ANG", 1.79},
        {"Angola", "AOA", 929.62742},
        {"Argentina", "ARS", 1509.1055},
        {"Australia", "AUD", 1.406483},
        {"Aruba", "AWG", 1.79},
        {"Azerbaijan", "AZN", 1.700393},
        {"Bosnia and Herzegovina", "BAM", 1.700197},
        {"Barbados", "BBD", 2.0},
        {"Bangladesh", "BDT", 123.112197},
        {"Bulgaria", "BGN", 1.700197},
        {"Bahrain", "BHD", 0.376},
        {"Burundi", "BIF", 2993.181611},
        {"Bermuda", "BMD", 1.0},
        {"Brunei", "BND", 1.275546},
        {"Bolivia", "BOB", 11.308599},
        {"Brazil", "BRL", 5.150657},
        {"Bahamas", "BSD", 1.0},
        {"Bhutan", "BTN", 96.031363},
        {"Botswana", "BWP", 14.13789},
        {"Belarus", "BYN", 3.029792},
        {"Belize", "BZD", 2.0},
        {"Canada", "CAD", 1.3956},
        {"DR Congo", "CDF", 2309.518397},
        {"Switzerland", "CHF", 0.822575},
        {"Chile (Unidad de Fomento)", "CLF", 0.02418},
        {"Chile", "CLP", 955.763063},
        {"China (Offshore)", "CNH", 6.709709},
        {"China", "CNY", 6.722291},
        {"Colombia", "COP", 3114.012529},
        {"Costa Rica", "CRC", 447.716964},
        {"Cuba", "CUP", 24.0},
        {"Cape Verde", "CVE", 95.853048},
        {"Czech Republic", "CZK", 21.131515},
        {"Djibouti", "DJF", 177.721},
        {"Denmark", "DKK", 6.478402},
        {"Dominican Republic", "DOP", 59.013382},
        {"Algeria", "DZD", 133.749593},
        {"Egypt", "EGP", 52.18941},
        {"Eritrea", "ERN", 15.0},
        {"Ethiopia", "ETB", 161.898455},
        {"Eurozone", "EUR", 0.869296},
        {"Fiji", "FJD", 2.216716},
        {"Falkland Islands", "FKP", 0.744933},
        {"Faroe Islands", "FOK", 6.478401},
        {"United Kingdom", "GBP", 0.744929},
        {"Georgia", "GEL", 2.604045},
        {"Guernsey", "GGP", 0.744933},
        {"Ghana", "GHS", 11.447901},
        {"Gibraltar", "GIP", 0.744933},
        {"Gambia", "GMD", 74.583099},
        {"Guinea", "GNF", 8788.894388},
        {"Guatemala", "GTQ", 7.636227},
        {"Guyana", "GYD", 209.344897},
        {"Hong Kong", "HKD", 7.844225},
        {"Honduras", "HNL", 26.864956},
        {"Croatia", "HRK", 6.549719},
        {"Haiti", "HTG", 130.697935},
        {"Hungary", "HUF", 317.205335},
        {"Indonesia", "IDR", 17699.867769},
        {"Isle of Man", "IMP", 0.744933},
        {"India", "INR", 96.021592},
        {"Iraq", "IQD", 1311.463335},
        {"Iran", "IRR", 1407923.935886},
        {"Iceland", "ISK", 121.163413},
        {"Jersey", "JEP", 0.744933},
        {"Jamaica", "JMD", 157.858906},
        {"Jordan", "JOD", 0.709},
        {"Japan", "JPY", 155.579132},
        {"Kenya", "KES", 129.577086},
        {"Kyrgyzstan", "KGS", 87.496894},
        {"Cambodia", "KHR", 4047.452548},
        {"Kiribati", "KID", 1.406732},
        {"Comoros", "KMF", 427.666154},
        {"South Korea", "KRW", 1369.81121},
        {"Kuwait", "KWD", 0.308151},
        {"Cayman Islands", "KYD", 0.833333},
        {"Kazakhstan", "KZT", 446.432485},
        {"Laos", "LAK", 22299.303382},
        {"Lebanon", "LBP", 89500.0},
        {"Sri Lanka", "LKR", 331.016113},
        {"Liberia", "LRD", 173.909229},
        {"Lesotho", "LSL", 16.324418},
        {"Libya", "LYD", 6.354681},
        {"Morocco", "MAD", 9.459634},
        {"Moldova", "MDL", 17.397953},
        {"Madagascar", "MGA", 4336.537181},
        {"North Macedonia", "MKD", 53.352266},
        {"Myanmar", "MMK", 2101.107757},
        {"Mongolia", "MNT", 3618.798155},
        {"Macau", "MOP", 8.079566},
        {"Mauritania", "MRU", 40.292459},
        {"Mauritius", "MUR", 47.184501},
        {"Maldives", "MVR", 15.451835},
        {"Malawi", "MWK", 1743.086732},
        {"Mexico", "MXN", 17.192668},
        {"Malaysia", "MYR", 4.08682},
        {"Mozambique", "MZN", 63.841905},
        {"Namibia", "NAD", 16.324418},
        {"Nigeria", "NGN", 1327.882853},
        {"Nicaragua", "NIO", 36.782874},
        {"Norway", "NOK", 9.387304},
        {"Nepal", "NPR", 153.65018},
        {"New Zealand", "NZD", 1.742765},
        {"Oman", "OMR", 0.384497},
        {"Panama", "PAB", 1.0},
        {"Peru", "PEN", 3.359426},
        {"Papua New Guinea", "PGK", 4.490155},
        {"Philippines", "PHP", 62.795587},
        {"Pakistan", "PKR", 277.510311},
        {"Poland", "PLN", 3.786669},
        {"Paraguay", "PYG", 5938.840564},
        {"Qatar", "QAR", 3.64},
        {"Romania", "RON", 4.561574},
        {"Serbia", "RSD", 101.722563},
        {"Russia", "RUB", 84.356053},
        {"Rwanda", "RWF", 1473.939286},
        {"Saudi Arabia", "SAR", 3.75},
        {"Solomon Islands", "SBD", 7.922189},
        {"Seychelles", "SCR", 13.934195},
        {"Sudan", "SDG", 544.265793},
        {"Sweden", "SEK", 9.820002},
        {"Singapore", "SGD", 1.275514},
        {"Saint Helena", "SHP", 0.744933},
        {"Sierra Leone (new)", "SLE", 24.668256},
        {"Sierra Leone (old)", "SLL", 24668.255807},
        {"Somalia", "SOS", 571.892221},
        {"Suriname", "SRD", 37.71086},
        {"South Sudan", "SSP", 5654.992034},
        {"Sao Tome and Principe", "STN", 21.29778},
        {"Syria", "SYP", 121.871145},
        {"Eswatini", "SZL", 16.324418},
        {"Thailand", "THB", 33.300712},
        {"Tajikistan", "TJS", 9.235609},
        {"Turkmenistan", "TMT", 3.503213},
        {"Tunisia", "TND", 2.916668},
        {"Tonga", "TOP", 2.383786},
        {"Turkey", "TRY", 48.68476},
        {"Trinidad and Tobago", "TTD", 6.771711},
        {"Tuvalu", "TVD", 1.406732},
        {"Taiwan", "TWD", 31.841358},
        {"Tanzania", "TZS", 2647.085263},
        {"Ukraine", "UAH", 44.611186},
        {"Uganda", "UGX", 3794.171905},
        {"Uruguay", "UYU", 40.221766},
        {"Uzbekistan", "UZS", 11786.376515},
        {"Venezuela", "VES", 847.4442},
        {"Vietnam", "VND", 25960.348693},
        {"Vanuatu", "VUV", 117.536107},
        {"Samoa", "WST", 2.70803},
        {"Central African CFA (CEMAC)", "XAF", 570.221538},
        {"Eastern Caribbean", "XCD", 2.7},
        {"Curacao/Sint Maarten (new)", "XCG", 1.79},
        {"West African CFA (UEMOA)", "XOF", 570.221538},
        {"French Pacific Territories", "XPF", 103.734965},
        {"Yemen", "YER", 236.681887},
        {"South Africa", "ZAR", 16.32417},
        {"Zambia", "ZMW", 19.407314},
        {"Zimbabwe (ZiG)", "ZWG", 26.6843},
        {"Zimbabwe (old dollar)", "ZWL", 26.6843}};

    std::cout << "Enter Amount : ";
    std::cin >> amount;

    while (find)
    {
        cout << "Enter Country or Currency Name you want to convert from : ";

        std::cin >> fromc;

        for (int i = 0; i < sizeof(r) / sizeof(r[0]); i++)
        {
            if (r[i].country == fromc || r[i].currency == fromc)
            {
                std::cout << "Country : " << r[i].country << '\n'
                          << "Currency : " << r[i].currency << '\n';
                hm = r[i].currency;
                val = r[i].value;
                find = false;
            }
        }
        if (find)
        {
            std::cout << "Country or Currency Name not categorised\n\n";
        }
    }

    find = true;
    while (find)
    {
        std::cout << "Enter Country or Currency Name to convert to : ";
        std::cin >> toc;
        for (int i = 0; i < sizeof(r) / sizeof(r[0]); i++)
        {
            if (r[i].country == toc || r[i].currency == toc)
            {
                std::cout << "Country : " << r[i].country << '\n'
                          << "Currency : " << r[i].currency << '\n';
                hmm = r[i].currency;
                val1 = r[i].value;
                find = false;
            }
        }
        if (find)
        {
            std::cout << "Country or Currency Name not categorised\n\n";
        }
    }

    double result = (amount / val) * val1;
    std::cout << amount << " " << hm << " Amount of money in " << hmm << " = " << result;

    return 0;
}
