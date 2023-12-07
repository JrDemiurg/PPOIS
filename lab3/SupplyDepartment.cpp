#include "SupplyDepartment.h"

SupplyDepartment::SupplyDepartment(int supplyDepartmentID) : supplyDepartmentID(supplyDepartmentID){}

void SupplyDepartment::addMaterial(string material)
{
    materials.push_back(material);
}

bool SupplyDepartment::deliverMaterial(string material)
{
    int a = 0;
    for (string i : materials)
    {
        if (i==material)
        {
            materials.erase(materials.begin()+a);
            return true;
        }
        a++;
    }
    return false;
}

int SupplyDepartment::getSupplyDepartmentID()
{
    return supplyDepartmentID;
}

int SupplyDepartment::getNumberOfMaterials()
{
    int a = 0;
    for (string i : materials )
    {
        a++;
    }
    return a;
}
