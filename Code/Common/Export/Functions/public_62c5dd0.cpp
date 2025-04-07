#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a33c0);
CLANG_FORWARD_PROC_SYMBOL(public_62a33e0);
CLANG_FORWARD_PROC_SYMBOL(public_62a66b0);
CLANG_FORWARD_PROC_SYMBOL(public_62d20d0);
CLANG_FORWARD_PROC_SYMBOL(public_62d21d0);
CLANG_FORWARD_PROC_SYMBOL(public_62d76b0);
CLANG_FORWARD_PROC_SYMBOL(public_62d88b0);
CLANG_FORWARD_PROC_SYMBOL(public_62d8910);
CLANG_FORWARD_PROC_SYMBOL(public_62d8930);
CLANG_FORWARD_PROC_SYMBOL(public_62d8950);
CLANG_FORWARD_PROC_SYMBOL(public_62d8960);
CLANG_FORWARD_PROC_SYMBOL(public_62d9490);
CLANG_FORWARD_PROC_SYMBOL(public_6303450);

#define public_62c5e96 _public_62c5e96
#define public_62c5eb4 _public_62c5eb4
#define public_62c5eb6 _public_62c5eb6
#define public_62c5eff _public_62c5eff
#define public_62c5f1b _public_62c5f1b

PROC_DECLARE(0x62c5dd0, internal_62c5dd0, public_62c5dd0);
extern "C" NAKED register_t __cdecl internal_62c5dd0()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        push esi
        push edi
        mov esi, ecx
        call public_62d20d0
        push 3
        push 1
        mov ecx, esi
        call public_62d21d0
        lea eax, ss:[esp+0x14]
        xor ebx, ebx
        push 0x3F800000
        push eax
        mov dword ptr ds : [esi+0x344], 0x43960000
        mov dword ptr ds : [esi+0x308], ebx
        mov byte ptr ds : [esi+0x304], bl
        call public_6303450
        mov edx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [public_6399308]
        lea ecx, ds:[esi+0x2F4]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov eax, dword ptr ds : [esi+0x24]
        mov dword ptr ds : [esi+0x30C], 0x40A00000
        mov dword ptr ds : [esi+0x310], ebx
        mov dword ptr ds : [esi+0x318], ebx
        mov dword ptr ds : [esi+0x338], ebx
        mov dword ptr ds : [esi+0x340], ebx
        fld dword ptr ds : [eax+0x1620]
        fadd dword ptr ds : [eax+0x1624]
        add esp, 8
        fadd dword ptr ds : [eax+0x161C]
        fstp dword ptr ss : [esp+0x10]
        call edi
        mov ecx, dword ptr ds : [esi+0x24]
        mov dword ptr ss : [esp+0xC], eax
        fild dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_63997d0]
        fcom dword ptr ds : [ecx+0x1620]
        fnstsw ax
        test ah, 5
        jp public_62c5e96
        fstp st(0)
        mov eax, 1
        jmp public_62c5eb6
        public_62c5e96 : nop
        fld dword ptr ds : [ecx+0x1624]
        fadd dword ptr ds : [ecx+0x1620]
        fxch 
        fcompp 
        fnstsw ax
        test ah, 5
        jp public_62c5eb4
        mov eax, 2
        jmp public_62c5eb6
        public_62c5eb4 : nop
        xor eax, eax
        public_62c5eb6 : nop
        mov dword ptr ds : [esi+0x31C], eax
        fld dword ptr ds : [ecx+0x1678]
        fadd dword ptr ds : [ecx+0x1680]
        fadd dword ptr ds : [ecx+0x167C]
        fstp dword ptr ss : [esp+0xC]
        call edi
        mov ecx, dword ptr ds : [esi+0x24]
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [public_63997d0]
        fcom dword ptr ds : [ecx+0x1678]
        fnstsw ax
        test ah, 5
        jp public_62c5eff
        fstp st(0)
        mov ebx, 1
        jmp public_62c5f1b
        public_62c5eff : nop
        fld dword ptr ds : [ecx+0x1680]
        fadd dword ptr ds : [ecx+0x1678]
        fxch 
        fcompp 
        fnstsw ax
        test ah, 5
        jp public_62c5f1b
        mov ebx, 2
        public_62c5f1b : nop
        mov dword ptr ds : [esi+0x320], ebx
        mov ecx, dword ptr ds : [ecx+0x1628]
        mov dword ptr ds : [esi+0x324], ecx
        call edi
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi+0x24]
        lea edi, ds:[esi+0x178]
        fmul dword ptr ds : [public_63997d0]
        fadd st(0), st
        fsub dword ptr ds : [public_639a1d0]
        fmul dword ptr ds : [eax+0x162C]
        fadd dword ptr ds : [public_639a1d0]
        fmul dword ptr ds : [esi+0x324]
        fstp dword ptr ds : [esi+0x324]
        mov edx, dword ptr ds : [eax+0x1618]
        mov dword ptr ds : [esi+0x33C], edx
        mov ecx, dword ptr ds : [eax+0x1684]
        mov dword ptr ds : [esi+0x32C], ecx
        mov edx, dword ptr ds : [eax+0x1688]
        mov dword ptr ds : [esi+0x334], edx
        mov ecx, dword ptr ds : [eax+0x1630]
        mov dword ptr ds : [esi+0x34C], ecx
        mov edx, dword ptr ds : [eax+0x1634]
        mov eax, ecx
        push eax
        mov ecx, edi
        mov dword ptr ds : [esi+0x350], edx
        call public_62d9490
        mov ecx, dword ptr ds : [esi+0x24]
        mov edx, dword ptr ds : [ecx+0x1654]
        push edx
        mov ecx, edi
        call public_62a66b0
        mov eax, dword ptr ds : [esi+0x24]
        mov ecx, dword ptr ds : [eax+0x1658]
        push ecx
        mov ecx, edi
        call public_62a33e0
        mov edx, dword ptr ds : [esi+0x24]
        mov eax, dword ptr ds : [edx+0x165C]
        push eax
        mov ecx, edi
        call public_62d88b0
        mov ecx, dword ptr ds : [esi+0x24]
        mov edx, dword ptr ds : [ecx+0x1660]
        push edx
        mov ecx, edi
        call public_62a33c0
        mov eax, dword ptr ds : [esi+0x24]
        mov ecx, dword ptr ds : [eax+0x1650]
        push ecx
        mov ecx, edi
        call public_62d8910
        mov eax, dword ptr ds : [esi+0x24]
        mov edx, dword ptr ds : [eax+0x164C]
        mov ecx, dword ptr ds : [eax+0x1648]
        push edx
        mov edx, dword ptr ds : [eax+0x1644]
        mov eax, dword ptr ds : [eax+0x1640]
        push ecx
        push edx
        push eax
        lea ecx, ds:[esi+0x18C]
        call public_62d76b0
        mov ecx, dword ptr ds : [esi+0x24]
        mov edx, dword ptr ds : [ecx+0x1638]
        push edx
        mov ecx, edi
        call public_62d8950
        mov eax, dword ptr ds : [esi+0x24]
        xor ecx, ecx
        mov cl, byte ptr ds : [eax+0x163C]
        push ecx
        mov ecx, edi
        call public_62d8960
        mov edx, dword ptr ds : [esi+0x24]
        mov eax, dword ptr ds : [edx+0x166C]
        push eax
        mov ecx, edi
        call public_62d8930
        mov eax, dword ptr ds : [esi+0x24]
        mov ecx, dword ptr ds : [eax+0x169C]
        mov edx, dword ptr ds : [eax+0x1698]
        push ecx
        mov ecx, dword ptr ds : [eax+0x1694]
        push edx
        mov edx, dword ptr ds : [eax+0x1690]
        push ecx
        push edx
        lea ecx, ds:[esi+0x26C]
        call public_62d76b0
        mov eax, dword ptr ds : [esi+0x24]
        mov ecx, dword ptr ds : [eax+0x16A8]
        pop edi
        mov dword ptr ds : [esi+0x348], ecx
        pop esi
        pop ebx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x62c5dd0)
    }
}

#undef public_62c5e96
#undef public_62c5eb4
#undef public_62c5eb6
#undef public_62c5eff
#undef public_62c5f1b
