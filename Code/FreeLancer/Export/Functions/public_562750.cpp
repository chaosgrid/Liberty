#include "FreeLancer-PCH.h"

PROC_DECLARE(0x562750, internal_562750, public_562750);
extern "C" NAKED register_t __cdecl internal_562750()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_5e2098]
        mov edx, dword ptr ds : [public_67a440]
        mov eax, dword ptr ds : [public_5e209c]
        mov dword ptr ds : [public_614830], ecx
        mov dword ptr ds : [public_614834], edx
        mov dword ptr ds : [public_614850], ecx
        mov ecx, dword ptr ds : [public_5e209c]
        mov dword ptr ds : [public_614854], edx
        mov edx, dword ptr ds : [public_5e2098]
        mov dword ptr ds : [public_61486c], ecx
        mov ecx, dword ptr ds : [public_67a440]
        mov dword ptr ds : [public_614870], edx
        mov edx, dword ptr ds : [public_67a43c]
        mov dword ptr ds : [public_614874], ecx
        mov ecx, dword ptr ds : [public_5e209c]
        mov dword ptr ds : [public_614878], edx
        mov edx, dword ptr ds : [public_5e2098]
        mov dword ptr ds : [public_61488c], ecx
        mov ecx, dword ptr ds : [public_67a440]
        mov dword ptr ds : [public_614890], edx
        mov edx, dword ptr ds : [public_67a43c]
        mov dword ptr ds : [public_61482c], eax
        mov dword ptr ds : [public_61484c], eax
        mov eax, dword ptr ds : [public_67a43c]
        mov dword ptr ds : [public_614894], ecx
        mov ecx, dword ptr ds : [public_5e209c]
        mov dword ptr ds : [public_614898], edx
        mov edx, dword ptr ds : [public_5e2098]
        mov dword ptr ds : [public_614858], eax
        xor al, al
        mov dword ptr ds : [public_6148ac], ecx
        mov ecx, dword ptr ds : [public_67a440]
        mov dword ptr ds : [public_6148b0], edx
        mov edx, dword ptr ds : [public_67a43c]
        mov dword ptr ds : [public_614838], 0x3DF5C28F
        mov byte ptr ds : [public_61483c], 1
        mov dword ptr ds : [public_614840], 0x60078
        mov dword ptr ds : [public_614844], 0x1B58
        mov dword ptr ds : [public_614848], 0x3D75C28F
        mov byte ptr ds : [public_61485c], al
        mov dword ptr ds : [public_614860], 0x60074
        mov dword ptr ds : [public_614864], 0x1B59
        mov dword ptr ds : [public_614868], 0
        mov byte ptr ds : [public_61487c], al
        mov dword ptr ds : [public_614880], 0x60073
        mov dword ptr ds : [public_614884], 0x1B5A
        mov dword ptr ds : [public_614888], 0xBD75C28F
        mov byte ptr ds : [public_61489c], al
        mov dword ptr ds : [public_6148a0], 0x60077
        mov dword ptr ds : [public_6148a4], 0x1B5C
        mov dword ptr ds : [public_6148a8], 0xBDF5C28F
        mov dword ptr ds : [public_6148b4], ecx
        mov dword ptr ds : [public_6148b8], edx
        mov byte ptr ds : [public_6148bc], al
        mov dword ptr ds : [public_6148c0], 0x60075
        mov dword ptr ds : [public_6148c4], 0x1B5D
        ret 
        UNREACHABLE_TRAP(0x562750)
    }
}
