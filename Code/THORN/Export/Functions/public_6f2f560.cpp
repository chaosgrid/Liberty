#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2edc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f31650);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e9c);

#define public_6f2f5e1 _public_6f2f5e1
#define public_6f2f62a _public_6f2f62a
#define public_6f2f659 _public_6f2f659
#define public_6f2f65b _public_6f2f65b
#define public_6f2f676 _public_6f2f676
#define public_6f2f693 _public_6f2f693
#define public_6f2f6c7 _public_6f2f6c7
#define public_6f2f6ec _public_6f2f6ec

PROC_DECLARE(0x6f2f560, internal_6f2f560, public_6f2f560);
extern "C" NAKED register_t __cdecl internal_6f2f560()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        sub esp, 0x14
        fcomp dword ptr ds : [public_6f5a1d4]
        push ebx
        mov ebx, ecx
        fnstsw ax
        test ah, 5
        jnp public_6f2f6ec
        fld dword ptr ss : [esp+0x1C]
        fcomp dword ptr ds : [public_6f5a1b8]
        fnstsw ax
        test ah, 0x41
        je public_6f2f6ec
        fld dword ptr ss : [esp+0x1C]
        push esi
        fcomp dword ptr ds : [public_6f5a1d4]
        mov esi, dword ptr ds : [ebx+0x24]
        mov dword ptr ss : [esp+8], esi
        fnstsw ax
        test ah, 0x44
        jp public_6f2f5e1
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [ebx]
        push ecx
        mov ecx, dword ptr ss : [esp+0x28]
        push edx
        mov edx, dword ptr ss : [esp+0x28]
        push ecx
        push edx
        push 0
        mov ecx, ebx
        mov dword ptr ss : [esp+0x1C], 0
        call dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [eax+0x34]
        mov eax, dword ptr ss : [esp+8]
        pop esi
        pop ebx
        add esp, 0x14
        ret 0x10
        public_6f2f5e1 : nop
        fld dword ptr ss : [esp+0x20]
        fcomp dword ptr ds : [public_6f5a1b8]
        fnstsw ax
        test ah, 0x44
        jp public_6f2f62a
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [ebx]
        push ecx
        mov ecx, dword ptr ss : [esp+0x28]
        push edx
        mov edx, dword ptr ss : [esp+0x28]
        push ecx
        push edx
        push 1
        mov ecx, ebx
        mov dword ptr ss : [esp+0x1C], 1
        call dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [eax+0x34]
        mov eax, dword ptr ss : [esp+8]
        pop esi
        pop ebx
        add esp, 0x14
        ret 0x10
        public_6f2f62a : nop
        push ebp
        push edi
        push 0x14
        call public_6f57e9c
        add esp, 4
        test eax, eax
        je public_6f2f659
        mov ecx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x30]
        push ecx
        mov ecx, dword ptr ss : [esp+0x30]
        push edx
        mov edx, dword ptr ss : [esp+0x30]
        push ecx
        push edx
        mov ecx, eax
        call public_6f2edc0
        mov ebp, eax
        jmp public_6f2f65b
        public_6f2f659 : nop
        xor ebp, ebp
        public_6f2f65b : nop
        mov dword ptr ss : [ebp+0x10], esi
        mov esi, dword ptr ds : [ebx+8]
        mov edi, dword ptr ds : [esi+4]
        push 0x1C
        call public_6f57e9c
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6f2f676
        mov edi, eax
        public_6f2f676 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6f2f693
        mov ecx, 5
        mov esi, ebp
        mov edi, eax
        rep movsd
        public_6f2f693 : nop
        mov edx, dword ptr ds : [ebx+0xC]
        inc edx
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x20]
        mov dword ptr ds : [ebx+0xC], edx
        mov edx, dword ptr ss : [ebp+0x10]
        push ecx
        lea ecx, ds:[ebx+0x10]
        mov dword ptr ss : [esp+0x1C], edx
        mov dword ptr ss : [esp+0x20], 0
        call public_6f31650
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx+0x10], ebp
        mov eax, dword ptr ds : [ebx+0x24]
        pop edi
        pop ebp
        public_6f2f6c7 : nop
        inc eax
        cmp eax, 0xFFFFFFFF
        je public_6f2f6c7
        test eax, eax
        je public_6f2f6c7
        cmp eax, 1
        je public_6f2f6c7
        mov dword ptr ds : [ebx+0x24], eax
        mov eax, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [eax+0x34]
        mov eax, dword ptr ss : [esp+8]
        pop esi
        pop ebx
        add esp, 0x14
        ret 0x10
        public_6f2f6ec : nop
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0x14
        ret 0x10
        UNREACHABLE_TRAP(0x6f2f560)
    }
}

#undef public_6f2f5e1
#undef public_6f2f62a
#undef public_6f2f659
#undef public_6f2f65b
#undef public_6f2f676
#undef public_6f2f693
#undef public_6f2f6c7
#undef public_6f2f6ec
