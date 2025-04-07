#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d572a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d572bd _public_6d572bd
#define public_6d572c6 _public_6d572c6

PROC_DECLARE(0x6d572a0, internal_6d572a0, public_6d572a0);
extern "C" NAKED register_t __cdecl internal_6d572a0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6d572c6
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_6d572bd
        cmp cl, 0xFF
        je public_6d572bd
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6d572c6
        public_6d572bd : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d572c6 : nop
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+0xC], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d572a0)
    }
}

#undef public_6d572bd
#undef public_6d572c6
