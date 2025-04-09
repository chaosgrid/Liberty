#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_410190);
CLANG_FORWARD_PROC_SYMBOL(public_4215b0);
CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_423b60);
CLANG_FORWARD_PROC_SYMBOL(public_4e7090);
CLANG_FORWARD_PROC_SYMBOL(public_4ffbb0);
CLANG_FORWARD_PROC_SYMBOL(public_501810);

#define public_4ffbeb _public_4ffbeb

PROC_DECLARE(0x4ffbb0, internal_4ffbb0, public_4ffbb0);
extern "C" NAKED register_t __cdecl internal_4ffbb0()
{
    __asm
    {
        sub esp, 0x88
        fld dword ptr ss : [esp+0x90]
        push ebx
        fadd qword ptr ds : [public_5da738]
        push ebp
        push esi
        push edi
        fst dword ptr ss : [esp+0x30]
        mov esi, ecx
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 0x41
        jne public_4ffbeb
        fld dword ptr ss : [esp+0xA0]
        fsub qword ptr ds : [public_5da738]
        fstp dword ptr ss : [esp+0x30]
        public_4ffbeb : nop
        mov ebx, dword ptr ss : [esp+0xA0]
        lea edi, ds:[esi+0x118]
        push ebx
        mov ecx, edi
        call public_501810
        fstp dword ptr ss : [esp+0x28]
        lea ebp, ds:[esi+0xF0]
        push ebx
        mov ecx, ebp
        call public_501810
        fstp dword ptr ss : [esp+0x2C]
        lea ecx, ds:[esi+0xC8]
        push ebx
        mov dword ptr ss : [esp+0x44], ecx
        call public_501810
        mov eax, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x28]
        lea edx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x14], eax
        push edx
        lea eax, ss:[esp+0x48]
        mov dword ptr ss : [esp+0x1C], ecx
        add esi, 0x230
        fstp dword ptr ss : [esp+0x14]
        push eax
        mov ecx, esi
        call public_4e7090
        mov ebx, dword ptr ss : [esp+0x30]
        push ebx
        mov ecx, edi
        call public_501810
        fstp dword ptr ss : [esp+0x2C]
        push ebx
        mov ecx, ebp
        call public_501810
        fstp dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x40]
        push ebx
        call public_501810
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x14], ecx
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x90]
        push ecx
        fstp dword ptr ss : [esp+0x18]
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], edx
        call public_4e7090
        lea edx, ss:[esp+0x44]
        push edx
        lea eax, ss:[esp+0x90]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        call public_423b60
        add esp, 0xC
        lea ecx, ss:[esp+0x10]
        call public_410190
        fdivr dword ptr ds : [public_5c75dc]
        sub esp, 0xC
        lea ecx, ss:[esp+0x28]
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x20]
        fmul st, st(2)
        fld dword ptr ss : [esp+0x24]
        fmul st, st(3)
        fchs 
        fstp dword ptr ss : [esp+8]
        fchs 
        fstp dword ptr ss : [esp+4]
        fchs 
        fstp dword ptr ss : [esp]
        fstp st(0)
        call public_422b80
        lea ecx, ss:[esp+0x5C]
        call public_4215b0
        fld dword ptr ss : [esp+0x20]
        sub esp, 0xC
        fmul dword ptr ds : [public_5c7474]
        lea ecx, ss:[esp+0x1C]
        fld dword ptr ss : [esp+0x28]
        fsub st, st(1)
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ds : [public_5c7474]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [public_5c7474]
        fsubp 
        fstp dword ptr ss : [esp+4]
        fsub dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x18]
        sub esp, 0xC
        fchs 
        lea ecx, ss:[esp+0x40]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x20]
        fchs 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x1C]
        fchs 
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x38]
        sub esp, 0xC
        fmul dword ptr ss : [esp+0x28]
        lea ecx, ss:[esp+0x5C]
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x40]
        fsubp 
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ss : [esp+0x28]
        fsubp 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ss : [esp+0x30]
        fsubp 
        fstp dword ptr ss : [esp]
        call public_422b80
        mov eax, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x68], eax
        mov eax, dword ptr ss : [esp+0x54]
        mov dword ptr ss : [esp+0x74], ecx
        mov ecx, dword ptr ss : [esp+0x58]
        mov dword ptr ss : [esp+0x6C], eax
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x5C], edx
        mov edx, dword ptr ss : [esp+0x50]
        mov dword ptr ss : [esp+0x78], ecx
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x70], eax
        mov eax, dword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0x60], edx
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x7C], ecx
        mov ecx, dword ptr ss : [esp+0x4C]
        mov dword ptr ss : [esp+0x84], eax
        mov eax, dword ptr ss : [esp+0x9C]
        mov dword ptr ss : [esp+0x64], edx
        mov edx, dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x88], ecx
        mov ecx, 0xC
        lea esi, ss:[esp+0x5C]
        mov edi, eax
        mov dword ptr ss : [esp+0x80], edx
        rep movsd
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x88
        ret 8
        UNREACHABLE_TRAP(0x4ffbb0)
    }
}

#undef public_4ffbeb
