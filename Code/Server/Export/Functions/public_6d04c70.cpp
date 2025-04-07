#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cee360);
CLANG_FORWARD_PROC_SYMBOL(public_6d04c70);

PROC_DECLARE(0x6d04c70, internal_6d04c70, public_6d04c70);
extern "C" NAKED register_t __cdecl internal_6d04c70()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6cee360
        mov eax, 0x3F800000
        mov dword ptr ds : [esi+0x80], eax
        mov dword ptr ds : [esi+0x7C], eax
        mov dword ptr ds : [esi], offset public_6d67aec
        mov dword ptr ds : [esi+4], offset public_6d67a6c
        mov dword ptr ds : [esi+0xC], offset public_6d67a60
        mov dword ptr ds : [esi+0x60], offset public_6d67a54
        mov dword ptr ds : [esi+0x78], 0
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d04c70)
    }
}
