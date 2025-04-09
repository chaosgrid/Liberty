#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5760d0);
CLANG_FORWARD_PROC_SYMBOL(public_5760f0);
CLANG_FORWARD_PROC_SYMBOL(public_577d50);
CLANG_FORWARD_PROC_SYMBOL(public_57bfa0);

#define public_57bfdd _public_57bfdd
#define public_57bfe2 _public_57bfe2

PROC_DECLARE(0x57bfa0, internal_57bfa0, public_57bfa0);
extern "C" NAKED register_t __cdecl internal_57bfa0()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        push esi
        mov esi, ecx
        cmp byte ptr ds : [esi+0x4C0], al
        push edi
        je public_57bfe2
        mov byte ptr ds : [esi+0x4C0], al
        lea edi, ds:[esi+0x498]
        call public_577d50
        cmp eax, edi
        jne public_57bfe2
        mov al, byte ptr ds : [esi+0x4C0]
        test al, al
        mov ecx, edi
        push 0xF
        je public_57bfdd
        call public_5760f0
        pop edi
        pop esi
        ret 4
        public_57bfdd : nop
        call public_5760d0
        public_57bfe2 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x57bfa0)
    }
}

#undef public_57bfdd
#undef public_57bfe2
