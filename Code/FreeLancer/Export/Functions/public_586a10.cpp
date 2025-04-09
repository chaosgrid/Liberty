#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_586a10);

PROC_DECLARE(0x586a10, internal_586a10, public_586a10);
extern "C" NAKED register_t __cdecl internal_586a10()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        add ecx, 0x47C
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        ret 4
        UNREACHABLE_TRAP(0x586a10)
    }
}
