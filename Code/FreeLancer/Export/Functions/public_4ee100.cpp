#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4ecfd0);
CLANG_FORWARD_PROC_SYMBOL(public_4ee100);
CLANG_FORWARD_PROC_SYMBOL(public_540fc0);

#define public_4ee131 _public_4ee131
#define public_4ee22b _public_4ee22b
#define public_4ee22d _public_4ee22d
#define public_4ee252 _public_4ee252

PROC_DECLARE(0x4ee100, internal_4ee100, public_4ee100);
extern "C" NAKED register_t __cdecl internal_4ee100()
{
    __asm
    {
        sub esp, 0x38
        push ebp
        push esi
        push edi
        lea eax, ss:[esp+0x18]
        push eax
        mov edi, ecx
        xor ebp, ebp
        mov dword ptr ss : [esp+0x14], 0x60AD78EC
        mov dword ptr ss : [esp+0x1C], 2
        call public_540fc0
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_4ee252
        public_4ee131 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x150]
        test eax, eax
        je public_4ee22d
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        jne public_4ee22d
        mov cl, byte ptr ds : [eax+0xE0]
        test cl, cl
        jns public_4ee22d
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x2C]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x14]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x150]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x38]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x64]
        lea edx, ss:[esp+0x14]
        push edx
        lea eax, ss:[esp+0x10]
        push eax
        fstp dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x24]
        lea ecx, ss:[esp+0x28]
        push ecx
        push edx
        lea eax, ss:[esp+0x3C]
        push eax
        mov ecx, edi
        call public_4ecfd0
        test al, al
        je public_4ee22d
        fld dword ptr ss : [esp+0xC]
        fadd st(0), st
        fstp dword ptr ss : [esp+0xC]
        fild dword ptr ds : [public_616840]
        fld dword ptr ss : [esp+0x20]
        fsub dword ptr ss : [esp+0xC]
        fld st(1)
        fcompp 
        fnstsw ax
        test ah, 1
        jne public_4ee22b
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ss : [esp+0xC]
        fxch 
        fcompp 
        fnstsw ax
        test ah, 0x41
        jp public_4ee22d
        fild dword ptr ds : [public_616844]
        fld dword ptr ss : [esp+0x24]
        fsub dword ptr ss : [esp+0xC]
        fld st(1)
        fcompp 
        fnstsw ax
        test ah, 1
        jne public_4ee22b
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ss : [esp+0xC]
        fxch 
        fcompp 
        fnstsw ax
        test ah, 0x41
        jp public_4ee22d
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 5
        jp public_4ee22d
        mov ecx, dword ptr ss : [esp+0x14]
        mov ebp, esi
        mov dword ptr ss : [esp+0x10], ecx
        jmp public_4ee22d
        public_4ee22b : nop
        fstp st(0)
        public_4ee22d : nop
        mov esi, dword ptr ds : [esi+0x14]
        test esi, esi
        jne public_4ee131
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_5d9610]
        fnstsw ax
        test ah, 5
        jp public_4ee252
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        add esp, 0x38
        ret 
        public_4ee252 : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        add esp, 0x38
        ret 
        UNREACHABLE_TRAP(0x4ee100)
    }
}

#undef public_4ee131
#undef public_4ee22b
#undef public_4ee22d
#undef public_4ee252
