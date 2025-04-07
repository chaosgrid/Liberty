#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3cd20);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d3cd3d _public_6d3cd3d
#define public_6d3cd46 _public_6d3cd46

PROC_DECLARE(0x6d3cd20, internal_6d3cd20, public_6d3cd20);
extern "C" NAKED register_t __cdecl internal_6d3cd20()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_6d3cd46
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_6d3cd3d
        cmp cl, 0xFF
        je public_6d3cd3d
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6d3cd46
        public_6d3cd3d : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d3cd46 : nop
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+0xC], 0
        mov dword ptr ds : [esi+0x10], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d3cd20)
    }
}

#undef public_6d3cd3d
#undef public_6d3cd46
