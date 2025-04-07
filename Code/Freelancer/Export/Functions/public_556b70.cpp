#include "Freelancer-PCH.h"

PROC_DECLARE(0x556b70, internal_556b70, public_556b70);
extern "C" NAKED register_t __cdecl internal_556b70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        add eax, 0x80
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], ecx
        ret 8
        UNREACHABLE_TRAP(0x556b70)
    }
}
