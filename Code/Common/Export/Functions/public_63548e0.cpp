#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63461a0);
CLANG_FORWARD_PROC_SYMBOL(public_6346be0);
CLANG_FORWARD_PROC_SYMBOL(public_6346cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6353e80);
CLANG_FORWARD_PROC_SYMBOL(public_63548e0);
CLANG_FORWARD_PROC_SYMBOL(public_6366010);

#define public_635492f _public_635492f
#define public_635494d _public_635494d
#define public_6354959 _public_6354959
#define public_63549ae _public_63549ae
#define public_6354afb _public_6354afb
#define public_6354b5f _public_6354b5f
#define public_6354b65 _public_6354b65
#define public_6354bea _public_6354bea
#define public_6354bfb _public_6354bfb

PROC_DECLARE(0x63548e0, internal_63548e0, public_63548e0);
extern "C" NAKED register_t __cdecl internal_63548e0()
{
    __asm
    {
        sub esp, 0xF4
        push ebx
        push ebp
        push esi
        push edi
        lea eax, ss:[esp+0x44]
        mov ebp, ecx
        push eax
        call public_6353e80
        fstp dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ss : [ebp+0x10]
        fld dword ptr ss : [ebp+0x54]
        mov edx, dword ptr ds : [ecx+0x9C]
        fmul dword ptr ss : [ebp+0x44]
        mov eax, dword ptr ss : [ebp+0x24]
        mov ecx, dword ptr ds : [eax+0x9C]
        mov dword ptr ss : [esp+0x30], edx
        mov edx, dword ptr ss : [esp+0x108]
        fmul dword ptr ds : [edx]
        xor ebx, ebx
        mov dword ptr ss : [esp+0x34], ecx
        xor esi, esi
        fstp dword ptr ss : [esp+0x1C]
        lea edi, ss:[esp+0x30]
        public_635492f : nop
        mov ecx, dword ptr ds : [edi]
        test byte ptr ds : [ecx], 0xC
        jne public_635494d
        mov edx, dword ptr ss : [ebp+0x40]
        lea eax, ss:[esp+esi+0x64]
        push eax
        lea eax, ds:[edx+esi+0x98]
        push eax
        call public_6346be0
        jmp public_6354959
        public_635494d : nop
        mov dword ptr ss : [esp+esi+0x64], ebx
        mov dword ptr ss : [esp+esi+0x68], ebx
        mov dword ptr ss : [esp+esi+0x6C], ebx
        public_6354959 : nop
        add esi, 0x10
        add edi, 4
        cmp esi, 0x20
        jl public_635492f
        fld dword ptr ss : [esp+0x64]
        lea ecx, ss:[esp+0x30]
        fsub dword ptr ss : [esp+0x74]
        mov dword ptr ss : [esp+0x14], 0
        fld dword ptr ss : [esp+0x68]
        mov dword ptr ss : [esp+0x10], 0x3F800000
        fsub dword ptr ss : [esp+0x78]
        mov dword ptr ss : [esp+0x18], ecx
        fld dword ptr ss : [esp+0x6C]
        xor esi, esi
        fsub dword ptr ss : [esp+0x7C]
        fmul dword ptr ss : [esp+0x4C]
        fxch 
        fmul dword ptr ss : [esp+0x48]
        faddp 
        fxch 
        fmul dword ptr ss : [esp+0x44]
        faddp 
        fstp dword ptr ss : [esp+0x40]
        public_63549ae : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov edi, dword ptr ds : [edx]
        test byte ptr ds : [edi], 0xC
        mov dword ptr ss : [esp+esi+0x94], ebx
        mov dword ptr ss : [esp+esi+0x98], ebx
        mov dword ptr ss : [esp+esi+0x9C], ebx
        mov dword ptr ss : [esp+esi+0xB4], ebx
        mov dword ptr ss : [esp+esi+0xB8], ebx
        mov dword ptr ss : [esp+esi+0xBC], ebx
        jne public_6354afb
        fld dword ptr ss : [esp+0x44]
        lea ebx, ss:[esp+esi+0xE4]
        fld dword ptr ss : [esp+0x48]
        push ebx
        fld dword ptr ss : [esp+0x50]
        lea ecx, ss:[esp+0x24]
        fstp dword ptr ss : [esp+0x2C]
        push ecx
        fmul dword ptr ss : [esp+0x18]
        lea ecx, ds:[edi+0xF4]
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x44]
        mov eax, dword ptr ss : [esp+0x44]
        fxch 
        fmul dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x30], eax
        fstp dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x2C]
        call public_6366010
        lea edx, ss:[esp+0x54]
        push edx
        mov edx, dword ptr ss : [ebp+0x40]
        lea eax, ss:[esp+0x88]
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
        push ebx
        lea eax, ds:[edx+esi+0x98]
        push eax
        mov ecx, edi
        call public_6346cf0
        fld dword ptr ss : [esp+0x84]
        fstp dword ptr ss : [esp+esi+0x94]
        fld dword ptr ss : [esp+0x88]
        lea ecx, ss:[esp+0xD4]
        fstp dword ptr ss : [esp+esi+0x98]
        fld dword ptr ss : [esp+0x8C]
        push ecx
        mov ecx, dword ptr ss : [ebp+0x40]
        fstp dword ptr ss : [esp+esi+0xA0]
        fld dword ptr ss : [esp+0x58]
        lea edx, ss:[esp+0x58]
        fstp dword ptr ss : [esp+esi+0xB8]
        fld dword ptr ss : [esp+0x5C]
        push edx
        lea eax, ss:[esp+0x8C]
        fstp dword ptr ss : [esp+esi+0xC0]
        fld dword ptr ss : [esp+0x64]
        lea edx, ds:[ecx+esi+0x98]
        push eax
        fstp dword ptr ss : [esp+esi+0xC8]
        push edx
        mov ecx, edi
        call public_63461a0
        fld dword ptr ss : [esp+0xDC]
        fmul dword ptr ss : [esp+0x28]
        xor ebx, ebx
        fld dword ptr ss : [esp+0xD8]
        fmul dword ptr ss : [esp+0x24]
        faddp 
        fld dword ptr ss : [esp+0xD4]
        fmul dword ptr ss : [esp+0x20]
        faddp 
        fadd dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x14]
        public_6354afb : nop
        fld dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_63a5498]
        add edx, 4
        add esi, 0x10
        cmp esi, 0x20
        fstp dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x18], edx
        jl public_63549ae
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_63a53d8]
        fnstsw ax
        test ah, 0x41
        jne public_6354bfb
        mov eax, dword ptr ss : [esp+0x108]
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ds : [eax]
        fsub dword ptr ss : [esp+0x40]
        fdiv dword ptr ss : [esp+0x14]
        fld st(0)
        fabs 
        fcomp dword ptr ss : [esp+0x1C]
        fnstsw ax
        test ah, 0x41
        jne public_6354b5f
        fstp st(0)
        fld dword ptr ss : [esp+0x1C]
        public_6354b5f : nop
        lea edx, ss:[esp+0x30]
        xor ecx, ecx
        public_6354b65 : nop
        mov eax, dword ptr ds : [edx]
        test byte ptr ds : [eax], 0xC
        jne public_6354bea
        fld st(0)
        fmul dword ptr ss : [esp+ecx+0x94]
        fadd dword ptr ds : [eax+0xA4]
        fstp dword ptr ds : [eax+0xA4]
        fld st(0)
        fmul dword ptr ss : [esp+ecx+0x98]
        fadd dword ptr ds : [eax+0xA8]
        fstp dword ptr ds : [eax+0xA8]
        fld st(0)
        fmul dword ptr ss : [esp+ecx+0x9C]
        fadd dword ptr ds : [eax+0xAC]
        fstp dword ptr ds : [eax+0xAC]
        fld st(0)
        fmul dword ptr ss : [esp+ecx+0xB4]
        fadd dword ptr ds : [eax+0x94]
        fstp dword ptr ds : [eax+0x94]
        fld st(0)
        fmul dword ptr ss : [esp+ecx+0xB8]
        fadd dword ptr ds : [eax+0x98]
        fstp dword ptr ds : [eax+0x98]
        fld st(0)
        fmul dword ptr ss : [esp+ecx+0xBC]
        fadd dword ptr ds : [eax+0x9C]
        fstp dword ptr ds : [eax+0x9C]
        public_6354bea : nop
        add ecx, 0x10
        add edx, 4
        cmp ecx, 0x20
        jl public_6354b65
        fstp st(0)
        public_6354bfb : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xF4
        ret 4
        UNREACHABLE_TRAP(0x63548e0)
    }
}

#undef public_635492f
#undef public_635494d
#undef public_6354959
#undef public_63549ae
#undef public_6354afb
#undef public_6354b5f
#undef public_6354b65
#undef public_6354bea
#undef public_6354bfb
