#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_539820);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_539843 _public_539843
#define public_539877 _public_539877
#define public_53990a _public_53990a
#define public_53990c _public_53990c
#define public_539939 _public_539939
#define public_539966 _public_539966

PROC_DECLARE(0x539820, internal_539820, public_539820);
extern "C" NAKED register_t __cdecl internal_539820()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        sub esp, 0x24
        test eax, eax
        push edi
        mov edi, ecx
        je public_539843
        cmp word ptr ds : [eax], 0
        je public_539843
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [eax], ecx
        pop edi
        add esp, 0x24
        ret 0xC
        public_539843 : nop
        mov edx, dword ptr ds : [edi]
        push ebx
        push esi
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+0x178]
        fstp dword ptr ss : [esp+0x3C]
        mov esi, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [ecx+0x40]
        mov ebx, eax
        mov eax, dword ptr ds : [public_6789d0]
        test eax, eax
        jne public_539877
        call public_5b73e0
        mov dword ptr ds : [public_6789d0], eax
        public_539877 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x24]
        push ecx
        push ebx
        lea ecx, ss:[esp+0x20]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0x14], ecx
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        mov dword ptr ss : [esp+0x14], edx
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+0x3C]
        cmp ax, 3
        mov word ptr ss : [esp+0x3C], ax
        mov word ptr ss : [esp+0x3E], 0xFFFF
        jb public_539966
        fld dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [edi+0x10]
        test ecx, ecx
        fmul dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        mov word ptr ss : [esp+0x3E], 0
        fmul dword ptr ss : [esp+0x14]
        faddp 
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        faddp 
        fstp dword ptr ss : [esp+0x38]
        je public_53990a
        mov esi, dword ptr ds : [public_5c6590]
        call esi
        test eax, eax
        je public_53990a
        mov ecx, dword ptr ds : [edi+0x10]
        call esi
        mov ecx, dword ptr ds : [eax+4]
        jmp public_53990c
        public_53990a : nop
        xor ecx, ecx
        public_53990c : nop
        fld dword ptr ds : [ecx+8]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_539939
        fld dword ptr ds : [ecx+8]
        fld st(0)
        fmul st, st(1)
        fld dword ptr ss : [esp+0x38]
        fcompp 
        fnstsw ax
        fstp st(0)
        test ah, 5
        jnp public_539966
        mov word ptr ss : [esp+0x3E], 1
        public_539939 : nop
        fld dword ptr ds : [ecx+0xC]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_539966
        fld dword ptr ds : [ecx+0xC]
        fld st(0)
        fmul st, st(1)
        fld dword ptr ss : [esp+0x38]
        fcompp 
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jne public_539966
        mov word ptr ss : [esp+0x3E], 2
        public_539966 : nop
        mov eax, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x3C]
        pop esi
        pop ebx
        mov dword ptr ds : [eax], edx
        pop edi
        add esp, 0x24
        ret 0xC
        UNREACHABLE_TRAP(0x539820)
    }
}

#undef public_539843
#undef public_539877
#undef public_53990a
#undef public_53990c
#undef public_539939
#undef public_539966
