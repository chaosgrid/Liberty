#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_5553b0);

#define public_5455cd _public_5455cd
#define public_5455d9 _public_5455d9
#define public_545612 _public_545612
#define public_54561a _public_54561a
#define public_545650 _public_545650
#define public_545666 _public_545666
#define public_545668 _public_545668

PROC_DECLARE(0x5455b0, internal_5455b0, public_5455b0);
extern "C" NAKED register_t __cdecl internal_5455b0()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        fadd dword ptr ds : [esi+0x34]
        mov eax, dword ptr ds : [esi+0x158]
        cmp eax, 2
        fstp dword ptr ds : [esi+0x34]
        je public_5455cd
        cmp eax, 3
        jne public_5455d9
        public_5455cd : nop
        xor eax, eax
        mov dword ptr ds : [esi+0x38], eax
        mov dword ptr ds : [esi+0x3C], eax
        pop esi
        ret 4
        public_5455d9 : nop
        mov dword ptr ss : [esp+8], 0x3F800000
        call public_54baf0
        cmp esi, eax
        jne public_54561a
        fld dword ptr ds : [esi+0x3C]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_545612
        fld dword ptr ds : [esi+0x3C]
        mov dword ptr ss : [esp+8], 0x3DCCCCCD
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jnp public_54561a
        public_545612 : nop
        mov dword ptr ss : [esp+8], 0x3F000000
        public_54561a : nop
        fld dword ptr ds : [esi+0x34]
        fcomp dword ptr ss : [esp+8]
        fnstsw ax
        test ah, 0x41
        jne public_545668
        mov eax, dword ptr ds : [esi+0x38]
        mov edx, dword ptr ds : [esi]
        push eax
        lea ecx, ds:[esi+0x3C]
        push ecx
        mov ecx, esi
        call dword ptr ds : [edx]
        push eax
        call public_5553b0
        fld dword ptr ds : [esi+0x34]
        fcom dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi+0x38], eax
        add esp, 0xC
        fnstsw ax
        test ah, 0x41
        jne public_545666
        public_545650 : nop
        fsub dword ptr ss : [esp+8]
        fcom dword ptr ss : [esp+8]
        fnstsw ax
        test ah, 0x41
        je public_545650
        fstp dword ptr ds : [esi+0x34]
        pop esi
        ret 4
        public_545666 : nop
        fstp st(0)
        public_545668 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x5455b0)
    }
}

#undef public_5455cd
#undef public_5455d9
#undef public_545612
#undef public_54561a
#undef public_545650
#undef public_545666
#undef public_545668
