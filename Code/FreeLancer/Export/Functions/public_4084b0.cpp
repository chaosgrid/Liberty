#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_402500);
CLANG_FORWARD_PROC_SYMBOL(public_406c50);

#define public_4084db _public_4084db
#define public_4084f7 _public_4084f7
#define public_408502 _public_408502
#define public_40850d _public_40850d

PROC_DECLARE(0x4084b0, internal_4084b0, public_4084b0);
extern "C" NAKED register_t __cdecl internal_4084b0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [edi+4]
        mov esi, ecx
        push eax
        lea ecx, ds:[esi+4]
        push ecx
        call public_402500
        fld dword ptr ds : [edi+8]
        fcomp dword ptr ds : [esi+8]
        add esp, 8
        fnstsw ax
        test ah, 0x44
        jnp public_4084db
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], edx
        public_4084db : nop
        push 0
        mov ecx, esi
        call public_406c50
        fld dword ptr ds : [edi+0x54]
        fcomp dword ptr ds : [esi+0x54]
        fnstsw ax
        test ah, 0x44
        jnp public_4084f7
        mov eax, dword ptr ds : [edi+0x54]
        mov dword ptr ds : [esi+0x54], eax
        public_4084f7 : nop
        mov eax, dword ptr ds : [edi+0x58]
        cmp eax, dword ptr ds : [esi+0x58]
        je public_408502
        mov dword ptr ds : [esi+0x58], eax
        public_408502 : nop
        mov edi, dword ptr ds : [edi+0x60]
        cmp edi, dword ptr ds : [esi+0x60]
        je public_40850d
        mov dword ptr ds : [esi+0x60], edi
        public_40850d : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4084b0)
    }
}

#undef public_4084db
#undef public_4084f7
#undef public_408502
#undef public_40850d
