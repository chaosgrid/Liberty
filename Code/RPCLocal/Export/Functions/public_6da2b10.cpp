#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da2b10);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);

#define public_6da2b2d _public_6da2b2d
#define public_6da2b36 _public_6da2b36

PROC_DECLARE(0x6da2b10, internal_6da2b10, public_6da2b10);
extern "C" NAKED register_t __cdecl internal_6da2b10()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6da2b36
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_6da2b2d
        cmp cl, 0xFF
        je public_6da2b2d
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6da2b36
        public_6da2b2d : nop
        push eax
        call public_6db1dc2
        add esp, 4
        public_6da2b36 : nop
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+0xC], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6da2b10)
    }
}

#undef public_6da2b2d
#undef public_6da2b36
