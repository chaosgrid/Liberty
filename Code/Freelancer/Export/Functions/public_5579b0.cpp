#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_411d60);
CLANG_FORWARD_PROC_SYMBOL(public_421ad0);
CLANG_FORWARD_PROC_SYMBOL(public_421ca0);
CLANG_FORWARD_PROC_SYMBOL(public_421cc0);
CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_423b30);
CLANG_FORWARD_PROC_SYMBOL(public_423b60);
CLANG_FORWARD_PROC_SYMBOL(public_4cbf40);
CLANG_FORWARD_PROC_SYMBOL(public_4cbfa0);
CLANG_FORWARD_PROC_SYMBOL(public_5579b0);
CLANG_FORWARD_PROC_SYMBOL(public_557d00);

#define public_557a1a _public_557a1a
#define public_557a8f _public_557a8f
#define public_557aae _public_557aae
#define public_557ab2 _public_557ab2
#define public_557cf1 _public_557cf1

PROC_DECLARE(0x5579b0, internal_5579b0, public_5579b0);
extern "C" NAKED register_t __cdecl internal_5579b0()
{
    __asm
    {
        sub esp, 0x8C
        push ebx
        mov ebx, ecx
        fld dword ptr ds : [ebx+0x24]
        push ebp
        fcomp qword ptr ds : [public_5c8ba8]
        lea ebp, ds:[ebx+0x4C]
        lea eax, ss:[ebp+0x24]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        push esi
        push edi
        mov dword ptr ss : [esp+0x54], ecx
        mov dword ptr ss : [esp+0x5C], eax
        fnstsw ax
        mov ecx, 9
        test ah, 0x44
        mov esi, ebp
        lea edi, ss:[esp+0x60]
        mov dword ptr ss : [esp+0x58], edx
        rep movsd
        lea edi, ds:[ebx+0x24]
        jp public_557a1a
        fld dword ptr ds : [ebx+0x28]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x44
        jp public_557a1a
        fld dword ptr ds : [ebx+0x2C]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x44
        jnp public_557cf1
        public_557a1a : nop
        fld dword ptr ds : [public_5c75dc]
        mov esi, dword ptr ss : [esp+0xA0]
        fst dword ptr ss : [esp+0x44]
        fld dword ptr ds : [ebx+0x44]
        fcomp dword ptr ds : [ebx+0x48]
        fnstsw ax
        test ah, 0x41
        jne public_557ab2
        mov ecx, dword ptr ds : [esi]
        fstp st(0)
        push esi
        call dword ptr ds : [ecx+0xC]
        push eax
        lea edx, ds:[ebx+0x70]
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        call public_423b60
        add esp, 0xC
        lea ecx, ss:[esp+0x1C]
        call public_557d00
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, ebp
        call public_4cbfa0
        lea edx, ss:[esp+0x10]
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        call public_4cbf40
        fst dword ptr ss : [esp+0x30]
        fcomp dword ptr ds : [ebx+0x48]
        add esp, 8
        fnstsw ax
        test ah, 5
        jp public_557a8f
        fld dword ptr ds : [public_5c7474]
        jmp public_557ab2
        public_557a8f : nop
        fld dword ptr ss : [esp+0x28]
        fcomp dword ptr ds : [ebx+0x44]
        fnstsw ax
        test ah, 5
        jp public_557aae
        fld dword ptr ss : [esp+0x28]
        fsub dword ptr ds : [ebx+0x48]
        fld dword ptr ds : [ebx+0x44]
        fsub dword ptr ds : [ebx+0x48]
        fdivp 
        jmp public_557ab2
        public_557aae : nop
        fld dword ptr ss : [esp+0x44]
        public_557ab2 : nop
        push ecx
        fstp dword ptr ss : [esp]
        lea ecx, ss:[esp+0x4C]
        push edi
        push ecx
        call public_411d60
        mov edx, dword ptr ss : [esp+0x5C]
        mov eax, dword ptr ss : [esp+0x58]
        mov ecx, dword ptr ss : [esp+0x54]
        push edx
        push eax
        push ecx
        call public_421ad0
        mov edx, dword ptr ds : [esi]
        add esp, 0x18
        push esi
        call dword ptr ds : [edx+0x10]
        mov ecx, dword ptr ds : [eax+0x18]
        mov edx, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [eax]
        push ecx
        push edx
        push eax
        lea ecx, ss:[esp+0x9C]
        call public_422b80
        mov ecx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [eax+0x1C]
        mov ecx, dword ptr ds : [eax+0x10]
        push edx
        mov edx, dword ptr ds : [eax+4]
        push ecx
        push edx
        lea ecx, ss:[esp+0x90]
        call public_422b80
        fld dword ptr ds : [ebx+0x3C]
        push ecx
        lea eax, ss:[esp+0x94]
        fstp dword ptr ss : [esp]
        push eax
        lea ecx, ss:[esp+0x40]
        push ecx
        call public_411d60
        fld dword ptr ds : [ebx+0x3C]
        add esp, 8
        lea edx, ss:[esp+0x88]
        fstp dword ptr ss : [esp]
        push edx
        lea eax, ss:[esp+0x34]
        push eax
        call public_411d60
        push 0
        push 0
        call public_421ca0
        lea ecx, ss:[esp+0x4C]
        push ecx
        lea edx, ss:[esp+0x6C]
        push edx
        lea eax, ss:[esp+0x38]
        push eax
        call public_423b60
        lea ecx, ss:[esp+0x4C]
        push ecx
        lea edx, ss:[esp+0x40]
        push edx
        lea eax, ss:[esp+0x38]
        push eax
        call public_423b30
        mov ecx, dword ptr ss : [esp+0x44]
        mov edx, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ss : [esp+0x3C]
        push ecx
        push edx
        push eax
        call public_421cc0
        push 0
        push 0x3F800000
        call public_421ca0
        fld dword ptr ss : [esp+0x80]
        fadd dword ptr ss : [esp+0x9C]
        add esp, 0x40
        sub esp, 0xC
        lea ecx, ss:[esp+0x1C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x48]
        fadd dword ptr ss : [esp+0x64]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x44]
        fadd dword ptr ss : [esp+0x60]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x34]
        sub esp, 0xC
        fadd dword ptr ss : [esp+0x24]
        lea ecx, ss:[esp+0x28]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x3C]
        fadd dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x38]
        fadd dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp]
        call public_422b80
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x1C]
        push ecx
        push edx
        push eax
        call public_421cc0
        push 0x3F800000
        push 0x3F800000
        call public_421ca0
        fld dword ptr ss : [esp+0x54]
        fadd dword ptr ss : [esp+0x70]
        add esp, 8
        lea ecx, ss:[esp+0x28]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x48]
        fadd dword ptr ss : [esp+0x64]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x44]
        fadd dword ptr ss : [esp+0x60]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x24]
        sub esp, 0xC
        fsub dword ptr ss : [esp+0x40]
        lea ecx, ss:[esp+0x1C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x2C]
        fsub dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x28]
        fsub dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp]
        call public_422b80
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        push ecx
        push edx
        push eax
        call public_421cc0
        push 0x3F800000
        push 0
        call public_421ca0
        fld dword ptr ss : [esp+0x68]
        fsub dword ptr ss : [esp+0x4C]
        fld dword ptr ss : [esp+0x6C]
        fsub dword ptr ss : [esp+0x50]
        fld dword ptr ss : [esp+0x70]
        fsub dword ptr ss : [esp+0x54]
        fstp dword ptr ss : [esp+0x38]
        fxch 
        fsub dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x24]
        fsub dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x38]
        mov edx, dword ptr ss : [esp+0x28]
        fsub dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x2C]
        push ecx
        push edx
        push eax
        call public_421cc0
        add esp, 0x20
        public_557cf1 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8C
        ret 4
        UNREACHABLE_TRAP(0x5579b0)
    }
}

#undef public_557a1a
#undef public_557a8f
#undef public_557aae
#undef public_557ab2
#undef public_557cf1
