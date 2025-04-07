#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3cd60);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d3cd7d _public_6d3cd7d
#define public_6d3cd89 _public_6d3cd89

PROC_DECLARE(0x6d3cd60, internal_6d3cd60, public_6d3cd60);
extern "C" NAKED register_t __cdecl internal_6d3cd60()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_6d3cd89
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_6d3cd7d
        cmp cl, 0xFF
        je public_6d3cd7d
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_6d3cd89
        public_6d3cd7d : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d3cd89 : nop
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+0xC], 0
        mov dword ptr ds : [esi+0x10], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d3cd60)
    }
}

#undef public_6d3cd7d
#undef public_6d3cd89
