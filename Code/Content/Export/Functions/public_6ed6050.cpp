#include "Content-PCH.h"

PROC_DECLARE(0x6ed6050, internal_6ed6050, public_6ed6050);
extern "C" NAKED register_t __cdecl internal_6ed6050()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6fce76c]
        mov ecx, eax
        inc eax
        mov dword ptr ds : [public_6fce76c], eax
        mov dword ptr ds : [public_6fcf0f4], ecx
        ret 
        UNREACHABLE_TRAP(0x6ed6050)
    }
}
