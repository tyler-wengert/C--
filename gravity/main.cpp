#include <iostream>
#include <cmath>

double getHeight()
{
    std::cout << "Please input the building height: ";
    double h {};
    std::cin >> h;
    return h;
}

double simVelocity(double t)
{
    return (9.8 * t);
}

void simFall(double h)
{
    double t {0};
    double t_total {std::sqrt((2 * h)/9.8)};
    std::cout << t_total;

    while (t >= 0)
    {
        double distF {9.8 * (t * t)/2};
        double gap {h - distF};

        if (t >= t_total)
        {
            std::cout << "The ball is on the ground at " << t_total << " seconds. The impact velocity was: " << simVelocity(t) << " m/s" << '\n';
            break;
        }
        else
        {
            std::cout << "Time Elapsed: " << t << " sec" << "\nCurrent Height: " << gap << " m" << "\nDistance Fallen: " << distF << " m" << "\nVelocity: " << simVelocity(t_total) << "m/s" << "\n\n";
        }
        t += 1; //change value to set increment for display/calculation
    }
}

int main()
{
    double height{getHeight()};

    simFall(height);

    return 0;
}
