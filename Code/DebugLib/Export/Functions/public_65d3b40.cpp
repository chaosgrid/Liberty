#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d3b40);
CLANG_FORWARD_PROC_SYMBOL(public_65d6cb8);

#define public_65d3b65 _public_65d3b65
#define public_65d3b6e _public_65d3b6e

PROC_DECLARE(0x65d3b40, internal_65d3b40, public_65d3b40);
extern "C" NAKED register_t __cdecl internal_65d3b40()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        push esi
        test al, al
        mov esi, ecx
        je public_65d3b6e
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_65d3b6e
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_65d3b65
        cmp cl, 0xFF
        je public_65d3b65
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_65d3b6e
        public_65d3b65 : nop
        push eax
        call public_65d6cb8
        add esp, 4
        public_65d3b6e : nop
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+0xC], 0
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x65d3b40)
    }
}

#undef public_65d3b65
#undef public_65d3b6e
