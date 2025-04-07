#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_5431e9 _public_5431e9
#define public_54320f _public_54320f
#define public_54322f _public_54322f
#define public_543242 _public_543242
#define public_543272 _public_543272
#define public_5432ef _public_5432ef
#define public_543312 _public_543312

PROC_DECLARE(0x5431c0, internal_5431c0, public_5431c0);
extern "C" NAKED register_t __cdecl internal_5431c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ds : [eax]
        sub esp, 0x50
        push esi
        mov esi, ecx
        fadd dword ptr ds : [esi+0x14]
        fcom dword ptr ds : [esi+0x18]
        fst dword ptr ds : [esi+0x14]
        fnstsw ax
        test ah, 0x41
        jne public_5431e9
        mov byte ptr ds : [esi+0x58], 1
        fstp st(0)
        pop esi
        add esp, 0x50
        ret 8
        public_5431e9 : nop
        fdiv dword ptr ds : [esi+0x18]
        fld st(0)
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x58]
        fstp st(0)
        fld dword ptr ss : [esp+0x58]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 0x41
        jne public_54320f
        mov dword ptr ss : [esp+0x58], 0x3F800000
        public_54320f : nop
        mov eax, dword ptr ds : [esi+0x10]
        test ah, 8
        je public_54322f
        lea ecx, ds:[esi+0x20]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x10], edx
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [ecx+0xC]
        jmp public_543272
        public_54322f : nop
        mov eax, dword ptr ds : [public_678b68]
        test eax, eax
        jne public_543242
        call public_5b73e0
        mov dword ptr ds : [public_678b68], eax
        public_543242 : nop
        mov edx, dword ptr ss : [esp+0x58]
        mov ecx, dword ptr ds : [eax]
        push edx
        lea edx, ds:[esi+0x3C]
        push edx
        lea edx, ds:[esi+0x20]
        push edx
        lea edx, ss:[esp+0x2C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x58]
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x14], ecx
        public_543272 : nop
        fld dword ptr ds : [esi+0x30]
        mov dword ptr ss : [esp+0x18], edx
        fld dword ptr ds : [esi+0x4C]
        mov dword ptr ss : [esp+0x1C], eax
        fsub st, st(1)
        fmul dword ptr ss : [esp+0x58]
        fadd st, st(1)
        fstp dword ptr ss : [esp+4]
        fstp st(0)
        fld dword ptr ds : [esi+0x34]
        fld dword ptr ds : [esi+0x50]
        fsub st, st(1)
        fmul dword ptr ss : [esp+0x58]
        fadd st, st(1)
        fstp dword ptr ss : [esp+8]
        fstp st(0)
        fld dword ptr ds : [esi+0x38]
        fld dword ptr ds : [esi+0x54]
        mov esi, dword ptr ds : [esi+0x1C]
        test esi, esi
        fsub st, st(1)
        fmul dword ptr ss : [esp+0x58]
        fadd st, st(1)
        fstp dword ptr ss : [esp+0xC]
        fstp st(0)
        je public_543312
        lea eax, ds:[esi+0xC]
        test eax, eax
        je public_543312
        mov esi, dword ptr ds : [eax+4]
        test esi, esi
        je public_543312
        mov ecx, dword ptr ds : [esi+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        jne public_543312
        mov eax, dword ptr ds : [public_678b68]
        test eax, eax
        jne public_5432ef
        call public_5b73e0
        mov dword ptr ds : [public_678b68], eax
        public_5432ef : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x10]
        push ecx
        lea ecx, ss:[esp+0x34]
        push ecx
        push eax
        call dword ptr ds : [edx+0x54]
        mov edx, dword ptr ds : [esi]
        push 0
        lea eax, ss:[esp+0x34]
        push eax
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, esi
        call dword ptr ds : [edx+0x7C]
        public_543312 : nop
        pop esi
        add esp, 0x50
        ret 8
        UNREACHABLE_TRAP(0x5431c0)
    }
}

#undef public_5431e9
#undef public_54320f
#undef public_54322f
#undef public_543242
#undef public_543272
#undef public_5432ef
#undef public_543312
