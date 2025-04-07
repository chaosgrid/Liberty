#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce6620);
CLANG_FORWARD_PROC_SYMBOL(public_6d02b70);

PROC_DECLARE(0x6d02b70, internal_6d02b70, public_6d02b70);
extern "C" NAKED register_t __cdecl internal_6d02b70()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6ce6620
        mov dword ptr ds : [esi], offset public_6d6746c
        mov dword ptr ds : [esi+4], offset public_6d673ec
        mov dword ptr ds : [esi+0xC], offset public_6d673e4
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d02b70)
    }
}
