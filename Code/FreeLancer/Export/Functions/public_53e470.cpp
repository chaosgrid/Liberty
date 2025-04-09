#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_53e470);
CLANG_FORWARD_PROC_SYMBOL(public_547440);

PROC_DECLARE(0x53e470, internal_53e470, public_53e470);
extern "C" NAKED register_t __cdecl internal_53e470()
{
    __asm
    {
        push esi
        push 7
        mov esi, ecx
        call public_547440
        mov dword ptr ds : [esi+0xAC], 0
        mov dword ptr ds : [esi], offset public_5df5d4
        mov dword ptr ds : [esi+4], offset public_5df554
        mov dword ptr ds : [esi+0xC], offset public_5df548
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x53e470)
    }
}
