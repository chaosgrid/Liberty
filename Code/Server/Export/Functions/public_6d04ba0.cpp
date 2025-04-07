#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cee360);
CLANG_FORWARD_PROC_SYMBOL(public_6d04ba0);

PROC_DECLARE(0x6d04ba0, internal_6d04ba0, public_6d04ba0);
extern "C" NAKED register_t __cdecl internal_6d04ba0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6cee360
        xor eax, eax
        mov dword ptr ds : [esi+0x64], eax
        mov byte ptr ds : [esi+0x60], al
        mov dword ptr ds : [esi], offset public_6d67894
        mov dword ptr ds : [esi+4], offset public_6d67814
        mov dword ptr ds : [esi+0xC], offset public_6d67808
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d04ba0)
    }
}
