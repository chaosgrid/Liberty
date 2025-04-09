#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_412cb0);

PROC_DECLARE(0x412cb0, internal_412cb0, public_412cb0);
/* CHUNK of public_4127d0 */
extern "C" NAKED register_t __cdecl internal_412cb0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [public_5c6e0c]
        ret 
        UNREACHABLE_TRAP(0x412cb0)
    }
}
