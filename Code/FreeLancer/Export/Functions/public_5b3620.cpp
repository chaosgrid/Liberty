#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b3620);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

PROC_DECLARE(0x5b3620, internal_5b3620, public_5b3620);
/* CHUNK of public_5b4180 */
extern "C" NAKED register_t __cdecl internal_5b3620()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        push eax
        call public_5b7e1d
        add esp, 4
        mov dword ptr ds : [esi], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x5b3620)
    }
}
