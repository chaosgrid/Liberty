#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41f970);

#define public_41f998 _public_41f998
#define public_41f9a4 _public_41f9a4
#define public_41f9b6 _public_41f9b6
#define public_41f9bd _public_41f9bd
#define public_41f9d9 _public_41f9d9
#define public_41f9e7 _public_41f9e7
#define public_41f9fb _public_41f9fb
#define public_41fa02 _public_41fa02

PROC_DECLARE(0x41f970, internal_41f970, public_41f970);
extern "C" NAKED register_t __cdecl internal_41f970()
{
    __asm
    {
        mov cl, byte ptr ds : [ecx+0x14]
        mov edx, dword ptr ss : [esp+4]
        not cl
        shr cl, 4
        and cl, 1
        xor al, al
        test edx, edx
        push esi
        je public_41f9bd
        mov edx, dword ptr ds : [public_616840]
        test edx, edx
        jge public_41f9a4
        test cl, cl
        je public_41f998
        mov al, 1
        jmp public_41f9bd
        public_41f998 : nop
        mov dword ptr ds : [public_616840], 0
        jmp public_41f9bd
        public_41f9a4 : nop
        mov esi, dword ptr ds : [public_610850]
        cmp edx, esi
        jl public_41f9bd
        test cl, cl
        je public_41f9b6
        mov al, 1
        jmp public_41f9bd
        public_41f9b6 : nop
        dec esi
        mov dword ptr ds : [public_616840], esi
        public_41f9bd : nop
        mov edx, dword ptr ss : [esp+0xC]
        test edx, edx
        je public_41fa02
        mov edx, dword ptr ds : [public_616844]
        test edx, edx
        jge public_41f9e7
        test cl, cl
        je public_41f9d9
        mov al, 1
        pop esi
        ret 8
        public_41f9d9 : nop
        mov dword ptr ds : [public_616844], 0
        pop esi
        ret 8
        public_41f9e7 : nop
        mov esi, dword ptr ds : [public_610854]
        cmp edx, esi
        jl public_41fa02
        test cl, cl
        je public_41f9fb
        mov al, 1
        pop esi
        ret 8
        public_41f9fb : nop
        dec esi
        mov dword ptr ds : [public_616844], esi
        public_41fa02 : nop
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x41f970)
    }
}

#undef public_41f998
#undef public_41f9a4
#undef public_41f9b6
#undef public_41f9bd
#undef public_41f9d9
#undef public_41f9e7
#undef public_41f9fb
#undef public_41fa02
