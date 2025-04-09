#include "Freelancer-PCH.h"

PROC_DECLARE(0x453ec0, internal_453ec0, public_453ec0);
extern "C" NAKED register_t __cdecl internal_453ec0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        add eax, 0x6C
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], ecx
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x453ec0)
    }
}
