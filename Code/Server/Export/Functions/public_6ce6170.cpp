#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce6170);
CLANG_FORWARD_PROC_SYMBOL(public_6cee360);

PROC_DECLARE(0x6ce6170, internal_6ce6170, public_6ce6170);
extern "C" NAKED register_t __cdecl internal_6ce6170()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6cee360
        mov dword ptr ds : [esi], offset public_6d64fcc
        mov dword ptr ds : [esi+4], offset public_6d64f4c
        mov dword ptr ds : [esi+0xC], offset public_6d64f44
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ce6170)
    }
}
