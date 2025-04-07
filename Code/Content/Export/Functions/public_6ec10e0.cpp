#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15940);
CLANG_FORWARD_PROC_SYMBOL(public_6f478c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);

#define public_6ec1136 _public_6ec1136
#define public_6ec118a _public_6ec118a
#define public_6ec11a1 _public_6ec11a1
#define public_6ec11ab _public_6ec11ab
#define public_6ec11ad _public_6ec11ad

PROC_DECLARE(0x6ec10e0, internal_6ec10e0, public_6ec10e0);
extern "C" NAKED register_t __cdecl internal_6ec10e0()
{
    __asm
    {
        sub esp, 0x30
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        add eax, 0xC
        push eax
        xor bl, bl
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6ec11a1
        mov ecx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_6ec11a1
        call public_6f478c0
        test eax, eax
        je public_6ec11a1
        test dword ptr ds : [esi+0x54], 0x3FFFFFFF
        jne public_6ec1136
        mov ecx, dword ptr ds : [esi+4]
        lea edx, ds:[esi+0xC]
        push edx
        call public_6f15940
        mov dword ptr ds : [esi+0x54], eax
        public_6ec1136 : nop
        mov eax, dword ptr ds : [esi+0x54]
        test eax, 0x3FFFFFFF
        je public_6ec11a1
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0xC]
        push edx
        push eax
        call dword ptr ds : [public_6fb3664]
        add esp, 0xC
        test eax, eax
        jne public_6ec11a1
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [esi+0x48]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [esi+0x44]
        faddp 
        fld dword ptr ss : [esp+8]
        fmul dword ptr ds : [esi+0x40]
        faddp 
        fadd dword ptr ds : [esi+0x4C]
        fld dword ptr ds : [public_6fb444c]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_6ec118a
        mov eax, dword ptr ds : [esi+0x50]
        test eax, eax
        je public_6ec11ab
        public_6ec118a : nop
        fld dword ptr ds : [public_6fb444c]
        fcomp 
        fnstsw ax
        fstp st(0)
        test ah, 5
        jp public_6ec11a1
        cmp dword ptr ds : [esi+0x50], 1
        je public_6ec11ad
        public_6ec11a1 : nop
        pop esi
        mov al, bl
        pop ebx
        add esp, 0x30
        ret 8
        public_6ec11ab : nop
        fstp st(0)
        public_6ec11ad : nop
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x30
        ret 8
        UNREACHABLE_TRAP(0x6ec10e0)
    }
}

#undef public_6ec1136
#undef public_6ec118a
#undef public_6ec11a1
#undef public_6ec11ab
#undef public_6ec11ad
