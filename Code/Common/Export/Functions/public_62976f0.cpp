#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_6299ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6299b70);
CLANG_FORWARD_PROC_SYMBOL(public_6299f80);
CLANG_FORWARD_PROC_SYMBOL(public_62b1760);

#define public_6297811 _public_6297811
#define public_6297813 _public_6297813
#define public_6297829 _public_6297829
#define public_6297836 _public_6297836
#define public_629783b _public_629783b

PROC_DECLARE(0x62976f0, internal_62976f0, public_62976f0);
extern "C" NAKED register_t __cdecl internal_62976f0()
{
    __asm
    {
        sub esp, 0x30
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x3C]
        push edi
        mov esi, ecx
        call public_6299f80
        cmp eax, 9
        jne public_629783b
        fld dword ptr ds : [public_63ed1c4]
        push 0
        fmul dword ptr ds : [public_639d210]
        lea eax, ss:[esp+0x30]
        push eax
        mov ecx, esi
        fstp dword ptr ss : [esp+0x44]
        call public_6299ac0
        fld dword ptr ds : [edi+8]
        sub esp, 0xC
        fsub dword ptr ds : [eax+8]
        lea ecx, ss:[esp+0x14]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [edi+4]
        fsub dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [edi]
        fsub dword ptr ds : [eax]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x10]
        push 0
        fmul dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_639a1d0]
        fld dword ptr ss : [esp+0xC]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x18], ecx
        fmul st, st(1)
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, esi
        fstp dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x20], edx
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x24], eax
        fstp st(0)
        call public_6299b70
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x24]
        faddp 
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x20]
        faddp 
        fld dword ptr ss : [esp+0x3C]
        fcos 
        fxch 
        fxch 
        fcompp 
        fnstsw ax
        test ah, 5
        jp public_6297836
        mov esi, dword ptr ds : [esi+4]
        test esi, esi
        je public_6297829
        mov edx, dword ptr ds : [esi+0x4C]
        and edx, 0x503
        cmp edx, 0x503
        jne public_6297829
        test esi, esi
        je public_6297811
        mov eax, dword ptr ds : [esi+0x4C]
        and eax, edx
        cmp eax, edx
        jne public_6297811
        mov ecx, esi
        jmp public_6297813
        public_6297811 : nop
        xor ecx, ecx
        public_6297813 : nop
        call public_62b1760
        test al, al
        je public_6297829
        pop edi
        mov eax, 6
        pop esi
        add esp, 0x30
        ret 4
        public_6297829 : nop
        pop edi
        mov eax, 9
        pop esi
        add esp, 0x30
        ret 4
        public_6297836 : nop
        mov eax, 5
        public_629783b : nop
        pop edi
        pop esi
        add esp, 0x30
        ret 4
        UNREACHABLE_TRAP(0x62976f0)
    }
}

#undef public_6297811
#undef public_6297813
#undef public_6297829
#undef public_6297836
#undef public_629783b
