#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_411d60);
CLANG_FORWARD_PROC_SYMBOL(public_421ad0);
CLANG_FORWARD_PROC_SYMBOL(public_421ca0);
CLANG_FORWARD_PROC_SYMBOL(public_421cc0);
CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_423b30);
CLANG_FORWARD_PROC_SYMBOL(public_423b60);
CLANG_FORWARD_PROC_SYMBOL(public_557d70);

#define public_557dd1 _public_557dd1
#define public_557ff3 _public_557ff3

PROC_DECLARE(0x557d70, internal_557d70, public_557d70);
extern "C" NAKED register_t __cdecl internal_557d70()
{
    __asm
    {
        sub esp, 0x60
        push ebx
        mov ebx, ecx
        fld dword ptr ds : [ebx+0x18]
        push esi
        fcomp qword ptr ds : [public_5c8ba8]
        lea esi, ds:[ebx+0x4C]
        lea eax, ds:[esi+0x24]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x40], eax
        fnstsw ax
        push edi
        test ah, 0x44
        mov dword ptr ss : [esp+0x3C], ecx
        mov ecx, 9
        lea edi, ss:[esp+0x48]
        mov dword ptr ss : [esp+0x40], edx
        rep movsd
        jp public_557dd1
        fld dword ptr ds : [ebx+0x1C]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x44
        jp public_557dd1
        fld dword ptr ds : [ebx+0x20]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x44
        jnp public_557ff3
        public_557dd1 : nop
        mov ecx, dword ptr ds : [ebx+0x20]
        mov edx, dword ptr ds : [ebx+0x1C]
        mov eax, dword ptr ds : [ebx+0x18]
        push ecx
        push edx
        push eax
        call public_421ad0
        mov esi, dword ptr ss : [esp+0x7C]
        mov ecx, dword ptr ds : [esi]
        add esp, 0xC
        push esi
        call dword ptr ds : [ecx+0x10]
        fld dword ptr ds : [eax]
        mov edx, dword ptr ds : [esi]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ds : [eax+0xC]
        push esi
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [eax+0x18]
        fstp dword ptr ss : [esp+0x30]
        call dword ptr ds : [edx+0x10]
        fld dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ds : [eax+0x10]
        push ecx
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ds : [eax+0x1C]
        lea eax, ss:[esp+0x28]
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ds : [ebx+0x38]
        lea ecx, ss:[esp+0x10]
        fstp dword ptr ss : [esp]
        push eax
        push ecx
        call public_411d60
        fld dword ptr ds : [ebx+0x38]
        add esp, 8
        lea edx, ss:[esp+0x34]
        fstp dword ptr ss : [esp]
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        call public_411d60
        push 0
        push 0
        call public_421ca0
        lea ecx, ss:[esp+0x20]
        push ecx
        lea edx, ss:[esp+0x54]
        push edx
        lea eax, ss:[esp+0x40]
        push eax
        call public_423b60
        lea ecx, ss:[esp+0x38]
        push ecx
        lea edx, ss:[esp+0x48]
        push edx
        lea eax, ss:[esp+0x58]
        push eax
        call public_423b30
        mov ecx, dword ptr ss : [esp+0x64]
        mov edx, dword ptr ss : [esp+0x60]
        mov eax, dword ptr ss : [esp+0x5C]
        push ecx
        push edx
        push eax
        call public_421cc0
        push 0
        push 0x3F800000
        call public_421ca0
        fld dword ptr ss : [esp+0x54]
        fadd dword ptr ss : [esp+0x84]
        add esp, 0x40
        sub esp, 0xC
        fstp dword ptr ss : [esp+8]
        lea ecx, ss:[esp+0x3C]
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ss : [esp+0x4C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x18]
        fadd dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x20]
        sub esp, 0xC
        fadd dword ptr ss : [esp+0x44]
        lea ecx, ss:[esp+0x30]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x28]
        fadd dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp]
        call public_422b80
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x24]
        push ecx
        push edx
        push eax
        call public_421cc0
        push 0x3F800000
        push 0x3F800000
        call public_421ca0
        fld dword ptr ss : [esp+0x28]
        fadd dword ptr ss : [esp+0x58]
        add esp, 8
        lea ecx, ss:[esp+0x3C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ss : [esp+0x4C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x18]
        fadd dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x38]
        sub esp, 0xC
        fsub dword ptr ss : [esp+0x2C]
        lea ecx, ss:[esp+0x30]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x40]
        fsub dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x3C]
        fsub dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp]
        call public_422b80
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x24]
        push ecx
        push edx
        push eax
        call public_421cc0
        push 0x3F800000
        push 0
        call public_421ca0
        fld dword ptr ss : [esp+0x50]
        fsub dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x54]
        fsub dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x58]
        fsub dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x4C]
        fxch 
        fsub dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp+0x38]
        fsub dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x4C]
        mov edx, dword ptr ss : [esp+0x3C]
        fsub dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ss : [esp+0x40]
        push ecx
        push edx
        push eax
        call public_421cc0
        add esp, 0x20
        public_557ff3 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x60
        ret 4
        UNREACHABLE_TRAP(0x557d70)
    }
}

#undef public_557dd1
#undef public_557ff3
