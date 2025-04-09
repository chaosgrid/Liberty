#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45a740);
CLANG_FORWARD_PROC_SYMBOL(public_4cffa0);
CLANG_FORWARD_PROC_SYMBOL(public_4d4120);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_4d3e4c _public_4d3e4c
#define public_4d3e7c _public_4d3e7c
#define public_4d3e87 _public_4d3e87
#define public_4d3ea0 _public_4d3ea0
#define public_4d3ec3 _public_4d3ec3
#define public_4d3ee7 _public_4d3ee7
#define public_4d3eff _public_4d3eff
#define public_4d3f16 _public_4d3f16
#define public_4d3f20 _public_4d3f20
#define public_4d3f34 _public_4d3f34
#define public_4d3f3f _public_4d3f3f
#define public_4d3f41 _public_4d3f41
#define public_4d3f59 _public_4d3f59
#define public_4d3f6c _public_4d3f6c
#define public_4d3f71 _public_4d3f71
#define public_4d3f7d _public_4d3f7d
#define public_4d3f91 _public_4d3f91
#define public_4d3f9c _public_4d3f9c
#define public_4d3f9e _public_4d3f9e
#define public_4d3fb3 _public_4d3fb3
#define public_4d3fc7 _public_4d3fc7

PROC_DECLARE(0x4d3e30, internal_4d3e30, public_4d3e30);
extern "C" NAKED register_t __cdecl internal_4d3e30()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push esi
        push edi
        mov ebx, ecx
        call public_45a740
        test al, al
        je public_4d3e4c
        pop edi
        pop esi
        xor al, al
        pop ebx
        add esp, 0xC
        ret 4
        public_4d3e4c : nop
        call public_54baf0
        test eax, eax
        mov dword ptr ss : [esp+0x10], eax
        je public_4d3e7c
        cmp dword ptr ds : [eax+0x1C], 1
        jne public_4d3e7c
        add eax, 0xC
        test eax, eax
        je public_4d3e7c
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        je public_4d3e7c
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 0x503
        cmp eax, 0x503
        je public_4d3e87
        public_4d3e7c : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        add esp, 0xC
        ret 4
        public_4d3e87 : nop
        mov eax, dword ptr ds : [ebx+0xB4]
        test eax, eax
        mov dword ptr ss : [esp+0xC], eax
        jne public_4d3ea0
        pop edi
        pop esi
        xor al, al
        pop ebx
        add esp, 0xC
        ret 4
        public_4d3ea0 : nop
        call dword ptr ds : [public_5c6348]
        test eax, eax
        je public_4d3ee7
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x20]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [ebx+0xB0]
        mov esi, dword ptr ds : [eax]
        xor edi, edi
        cmp esi, eax
        je public_4d3ee7
        public_4d3ec3 : nop
        mov eax, dword ptr ss : [esp+0x14]
        push 1
        push eax
        lea ecx, ds:[esi+8]
        push ecx
        call public_4d4120
        add esp, 0xC
        test al, al
        jne public_4d3eff
        mov esi, dword ptr ds : [esi]
        mov eax, dword ptr ds : [ebx+0xB0]
        inc edi
        cmp esi, eax
        jne public_4d3ec3
        public_4d3ee7 : nop
        lea ecx, ds:[ebx-0x364]
        push 0
        call public_4cffa0
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0xC
        ret 4
        public_4d3eff : nop
        mov eax, dword ptr ss : [esp+0x1C]
        sub eax, 0x1D
        je public_4d3f71
        dec eax
        je public_4d3f16
        pop edi
        pop esi
        xor al, al
        pop ebx
        add esp, 0xC
        ret 4
        public_4d3f16 : nop
        dec edi
        jns public_4d3f20
        mov edx, dword ptr ss : [esp+0xC]
        lea edi, ds:[edx-1]
        public_4d3f20 : nop
        mov ecx, dword ptr ds : [ebx+0xB0]
        mov eax, dword ptr ds : [ecx]
        add ebx, 0xFFFFFC9C
        cmp eax, ecx
        mov edx, edi
        je public_4d3f3f
        public_4d3f34 : nop
        test edx, edx
        je public_4d3f6c
        mov eax, dword ptr ds : [eax]
        dec edx
        cmp eax, ecx
        jne public_4d3f34
        public_4d3f3f : nop
        xor esi, esi
        public_4d3f41 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x20]
        cmp dword ptr ds : [esi+0x10], eax
        jne public_4d3f59
        dec edi
        jns public_4d3f59
        mov ecx, dword ptr ss : [esp+0xC]
        lea edi, ds:[ecx-1]
        public_4d3f59 : nop
        push edi
        mov ecx, ebx
        call public_4cffa0
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0xC
        ret 4
        public_4d3f6c : nop
        lea esi, ds:[eax+8]
        jmp public_4d3f41
        public_4d3f71 : nop
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        inc edi
        cmp edi, ebp
        jl public_4d3f7d
        xor edi, edi
        public_4d3f7d : nop
        mov ecx, dword ptr ds : [ebx+0xB0]
        mov eax, dword ptr ds : [ecx]
        add ebx, 0xFFFFFC9C
        cmp eax, ecx
        mov edx, edi
        je public_4d3f9c
        public_4d3f91 : nop
        test edx, edx
        je public_4d3fc7
        mov eax, dword ptr ds : [eax]
        dec edx
        cmp eax, ecx
        jne public_4d3f91
        public_4d3f9c : nop
        xor esi, esi
        public_4d3f9e : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        cmp dword ptr ds : [esi+0x10], eax
        jne public_4d3fb3
        inc edi
        cmp edi, ebp
        jl public_4d3fb3
        xor edi, edi
        public_4d3fb3 : nop
        push edi
        mov ecx, ebx
        call public_4cffa0
        pop ebp
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0xC
        ret 4
        public_4d3fc7 : nop
        lea esi, ds:[eax+8]
        jmp public_4d3f9e
        UNREACHABLE_TRAP(0x4d3e30)
    }
}

#undef public_4d3e4c
#undef public_4d3e7c
#undef public_4d3e87
#undef public_4d3ea0
#undef public_4d3ec3
#undef public_4d3ee7
#undef public_4d3eff
#undef public_4d3f16
#undef public_4d3f20
#undef public_4d3f34
#undef public_4d3f3f
#undef public_4d3f41
#undef public_4d3f59
#undef public_4d3f6c
#undef public_4d3f71
#undef public_4d3f7d
#undef public_4d3f91
#undef public_4d3f9c
#undef public_4d3f9e
#undef public_4d3fb3
#undef public_4d3fc7
