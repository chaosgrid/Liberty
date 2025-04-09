#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_404670);

#define public_4046d6 _public_4046d6
#define public_4046d8 _public_4046d8
#define public_404708 _public_404708
#define public_404710 _public_404710

PROC_DECLARE(0x404670, internal_404670, public_404670);
extern "C" NAKED register_t __cdecl internal_404670()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        fld dword ptr ds : [ebx]
        push esi
        fcomp dword ptr ss : [esp+0x1C]
        xor ecx, ecx
        push edi
        fnstsw ax
        test ah, 5
        jnp public_404710
        mov esi, dword ptr ss : [esp+0x10]
        fld dword ptr ds : [esi]
        fcomp dword ptr ss : [esp+0x24]
        fnstsw ax
        test ah, 1
        je public_404710
        fld dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x1C]
        fsub dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x18]
        mov edi, 1
        fcom dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_4046d6
        fld st(0)
        or edi, 0xFFFFFFFF
        fadd dword ptr ds : [esi]
        fstp dword ptr ds : [esi]
        fld dword ptr ds : [ecx]
        fsub dword ptr ds : [edx]
        fxch 
        fdiv dword ptr ss : [esp+0x28]
        fmulp 
        fadd dword ptr ds : [edx]
        fstp dword ptr ds : [edx]
        jmp public_4046d8
        public_4046d6 : nop
        fstp st(0)
        public_4046d8 : nop
        fld dword ptr ss : [esp+0x24]
        fsub dword ptr ds : [ebx]
        fcom dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_404708
        fld st(0)
        pop edi
        fadd dword ptr ds : [ebx]
        pop esi
        or eax, 0xFFFFFFFF
        fstp dword ptr ds : [ebx]
        pop ebx
        fld dword ptr ds : [ecx]
        fsub dword ptr ds : [edx]
        fxch 
        fdiv dword ptr ss : [esp+0x1C]
        fmulp 
        fadd dword ptr ds : [ecx]
        fstp dword ptr ds : [ecx]
        ret 
        public_404708 : nop
        mov eax, edi
        fstp st(0)
        pop edi
        pop esi
        pop ebx
        ret 
        public_404710 : nop
        pop edi
        pop esi
        mov eax, ecx
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x404670)
    }
}

#undef public_4046d6
#undef public_4046d8
#undef public_404708
#undef public_404710
