#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628bed0);
CLANG_FORWARD_PROC_SYMBOL(public_62c4780);
CLANG_FORWARD_PROC_SYMBOL(public_634a3f0);

#define public_634a3fb _public_634a3fb
#define public_634a4a0 _public_634a4a0
#define public_634a4b7 _public_634a4b7
#define public_634a4cb _public_634a4cb
#define public_634a4cd _public_634a4cd

PROC_DECLARE(0x634a3f0, internal_634a3f0, public_634a3f0);
extern "C" NAKED register_t __cdecl internal_634a3f0()
{
    __asm
    {
        sub esp, 0x34
        push esi
        mov esi, dword ptr ss : [esp+0x3C]
        push edi
        mov edi, ecx
        public_634a3fb : nop
        fld dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+0x14]
        fld dword ptr ds : [edi+0x4C]
        mov eax, dword ptr ds : [esi+0xC]
        fmul dword ptr ds : [public_63a5460]
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ss : [esp+0x40], edx
        mov dword ptr ss : [esp+0x20], eax
        fadd dword ptr ss : [esp+0x40]
        mov dword ptr ss : [esp+0x24], ecx
        lea ecx, ss:[esp+0xC]
        fstp dword ptr ss : [esp+8]
        fsub dword ptr ds : [edi+0x14]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x20]
        fsub dword ptr ds : [edi+0x18]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x24]
        fsub dword ptr ds : [edi+0x1C]
        fstp dword ptr ss : [esp+0x14]
        call public_62c4780
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+8]
        fld st(1)
        fcompp 
        fnstsw ax
        test ah, 1
        je public_634a4cb
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+8]
        fcomp dword ptr ss : [esp+8]
        fnstsw ax
        test ah, 1
        jne public_634a4a0
        lea eax, ss:[esp+0xC]
        push eax
        lea ecx, ds:[edi+0x34]
        push ecx
        lea ecx, ss:[esp+0x34]
        call public_628bed0
        lea ecx, ss:[esp+0x2C]
        call public_62c4780
        fsubr dword ptr ss : [esp+8]
        fcomp dword ptr ds : [public_63a54ac]
        fnstsw ax
        test ah, 1
        jne public_634a4cd
        public_634a4a0 : nop
        cmp dword ptr ds : [esi], 0
        je public_634a4b7
        lea edx, ds:[esi+0x1C]
        push edx
        mov ecx, edi
        call public_634a3f0
        add esi, dword ptr ds : [esi]
        jmp public_634a3fb
        public_634a4b7 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        add ecx, esi
        push ecx
        mov ecx, edi
        call dword ptr ds : [eax]
        pop edi
        pop esi
        add esp, 0x34
        ret 4
        public_634a4cb : nop
        fstp st(0)
        public_634a4cd : nop
        pop edi
        pop esi
        add esp, 0x34
        ret 4
        UNREACHABLE_TRAP(0x634a3f0)
    }
}

#undef public_634a3fb
#undef public_634a4a0
#undef public_634a4b7
#undef public_634a4cb
#undef public_634a4cd
