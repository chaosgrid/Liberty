#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4dd9a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4dd9bd _public_4dd9bd
#define public_4dd9c6 _public_4dd9c6

PROC_DECLARE(0x4dd9a0, internal_4dd9a0, public_4dd9a0);
extern "C" NAKED register_t __cdecl internal_4dd9a0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_4dd9c6
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_4dd9bd
        cmp cl, 0xFF
        je public_4dd9bd
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_4dd9c6
        public_4dd9bd : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_4dd9c6 : nop
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+0xC], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4dd9a0)
    }
}

#undef public_4dd9bd
#undef public_4dd9c6
