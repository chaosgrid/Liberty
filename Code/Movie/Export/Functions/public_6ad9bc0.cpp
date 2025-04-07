#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac1500);
CLANG_FORWARD_PROC_SYMBOL(public_6ad23f0);
CLANG_FORWARD_PROC_SYMBOL(public_6ad9a9f);
CLANG_FORWARD_PROC_SYMBOL(public_6ad9bc0);

#define public_6ad9bed _public_6ad9bed

PROC_DECLARE(0x6ad9bc0, internal_6ad9bc0, public_6ad9bc0);
extern "C" NAKED register_t __cdecl internal_6ad9bc0()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr ds : [edi+4]
        test esi, esi
        je public_6ad9bed
        mov al, byte ptr ds : [esi-1]
        test al, al
        je public_6ad9bed
        cmp al, 0xFF
        je public_6ad9bed
        push 1
        call public_6ac1500
        push esi
        call public_6ad23f0
        pop ecx
        push eax
        push esi
        mov ecx, edi
        call public_6ad9a9f
        public_6ad9bed : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ad9bc0)
    }
}

#undef public_6ad9bed
