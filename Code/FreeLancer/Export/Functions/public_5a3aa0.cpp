#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42d680);
CLANG_FORWARD_PROC_SYMBOL(public_5a17b0);

#define public_5a3ad6 _public_5a3ad6
#define public_5a3afc _public_5a3afc
#define public_5a3afe _public_5a3afe

PROC_DECLARE(0x5a3aa0, internal_5a3aa0, public_5a3aa0);
extern "C" NAKED register_t __cdecl internal_5a3aa0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_5a17b0
        mov al, byte ptr ds : [esi+0x35E]
        test al, al
        je public_5a3afe
        call public_42d680
        fadd dword ptr ds : [esi+0x360]
        fcom dword ptr ds : [public_5c75dc]
        fst dword ptr ds : [esi+0x360]
        fnstsw ax
        test ah, 0x41
        jne public_5a3afc
        mov cl, byte ptr ds : [esi+0x35F]
        public_5a3ad6 : nop
        fsub dword ptr ds : [public_5c75dc]
        test cl, cl
        sete cl
        fcom dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 0x41
        je public_5a3ad6
        fstp dword ptr ds : [esi+0x360]
        mov byte ptr ds : [esi+0x35F], cl
        pop esi
        ret 
        public_5a3afc : nop
        fstp st(0)
        public_5a3afe : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x5a3aa0)
    }
}

#undef public_5a3ad6
#undef public_5a3afc
#undef public_5a3afe
