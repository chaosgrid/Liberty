#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66127e0);
CLANG_FORWARD_PROC_SYMBOL(public_661ad90);

#define public_6612861 _public_6612861
#define public_661288c _public_661288c
#define public_66128b0 _public_66128b0
#define public_66128b7 _public_66128b7
#define public_66128be _public_66128be
#define public_66128d1 _public_66128d1
#define public_66128d8 _public_66128d8

PROC_DECLARE(0x66127e0, internal_66127e0, public_66127e0);
extern "C" NAKED register_t __cdecl internal_66127e0()
{
    __asm
    {
        sub esp, 0x28
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        xor edx, edx
        xor ebp, ebp
        mov dword ptr ss : [esp+0x20], edx
        mov eax, dword ptr ds : [edi+0x18]
        mov dword ptr ss : [esp+0x1C], ebp
        mov dword ptr ss : [esp+0x24], 0x3F800000
        mov dword ptr ss : [esp+0x28], ebp
        mov dword ptr ss : [esp+0x2C], 0x3F800000
        mov dword ptr ss : [esp+0x30], 0x3F800000
        mov dword ptr ss : [esp+0x34], edx
        mov ecx, dword ptr ds : [eax+0x20]
        and ecx, 0xFE
        mov ebx, dword ptr ds : [edi+0x10]
        mov dword ptr ss : [esp+0x20], ecx
        mov esi, dword ptr ds : [eax+0x28]
        mov dword ptr ss : [esp+0x24], esi
        mov dword ptr ss : [esp+0x28], ebp
        mov esi, dword ptr ds : [eax+0x2C]
        mov dword ptr ss : [esp+0x2C], esi
        mov eax, dword ptr ds : [eax+0x30]
        mov esi, dword ptr ds : [edi+0xC]
        mov dword ptr ss : [esp+0x30], eax
        test cl, 1
        mov dword ptr ss : [esp+0x34], edx
        mov dword ptr ss : [esp+0x1C], 0xC0000000
        je public_66128b7
        cmp esi, ebx
        mov dword ptr ss : [esp+0x10], 0xBF800000
        jae public_66128b7
        public_6612861 : nop
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_66291e0]
        fnstsw ax
        test ah, 5
        jp public_661288c
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [ecx+0x24]
        lea ecx, ss:[esp+0x14]
        push ecx
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x10], edx
        jmp public_66128b0
        public_661288c : nop
        mov eax, dword ptr ds : [esi]
        lea edx, ss:[esp+0x18]
        push edx
        mov eax, dword ptr ds : [eax+0x24]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x10]
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 0x44
        jnp public_66128b0
        mov ebp, 1
        public_66128b0 : nop
        add esi, 4
        cmp esi, ebx
        jb public_6612861
        public_66128b7 : nop
        mov edi, dword ptr ds : [edi+0xC]
        cmp edi, ebx
        jae public_66128d8
        public_66128be : nop
        mov ecx, dword ptr ds : [edi]
        lea eax, ss:[esp+0x1C]
        push eax
        call public_661ad90
        test al, al
        jne public_66128d1
        or ebp, 0xFFFFFFFF
        public_66128d1 : nop
        add edi, 4
        cmp edi, ebx
        jb public_66128be
        public_66128d8 : nop
        pop edi
        mov eax, ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0x28
        ret 
        UNREACHABLE_TRAP(0x66127e0)
    }
}

#undef public_6612861
#undef public_661288c
#undef public_66128b0
#undef public_66128b7
#undef public_66128be
#undef public_66128d1
#undef public_66128d8
