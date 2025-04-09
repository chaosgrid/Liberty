#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45a740);
CLANG_FORWARD_PROC_SYMBOL(public_489e80);
CLANG_FORWARD_PROC_SYMBOL(public_489ea0);
CLANG_FORWARD_PROC_SYMBOL(public_4d8e20);
CLANG_FORWARD_PROC_SYMBOL(public_4d9470);
CLANG_FORWARD_PROC_SYMBOL(public_4d9750);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_4d94d3 _public_4d94d3
#define public_4d94f2 _public_4d94f2
#define public_4d94f4 _public_4d94f4
#define public_4d952c _public_4d952c
#define public_4d957b _public_4d957b
#define public_4d959f _public_4d959f

PROC_DECLARE(0x4d9470, internal_4d9470, public_4d9470);
extern "C" NAKED register_t __cdecl internal_4d9470()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        call public_54baf0
        mov esi, eax
        test esi, esi
        je public_4d959f
        call public_45a740
        test al, al
        jne public_4d959f
        mov ebx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi+0x3A4], 0xFFFFFFFF
        mov dword ptr ds : [edi+0x3A8], 0xFFFFFFFF
        cmp dword ptr ds : [ebx+0x138], 0xFFFFFFFF
        jne public_4d94d3
        push 0
        push 0xFFFFFFFF
        mov ecx, edi
        call public_4d8e20
        mov eax, dword ptr ds : [public_674a18]
        push 0
        push eax
        call public_489e80
        add esp, 8
        pop edi
        pop esi
        pop ebx
        ret 4
        public_4d94d3 : nop
        lea eax, ds:[esi+0xC]
        test eax, eax
        je public_4d94f2
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        je public_4d94f2
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x503
        cmp edx, 0x503
        je public_4d94f4
        public_4d94f2 : nop
        xor ecx, ecx
        public_4d94f4 : nop
        call dword ptr ds : [public_5c62e8]
        mov esi, dword ptr ds : [eax+0xC0]
        mov edx, dword ptr ds : [ebx+0x138]
        cmp esi, edx
        jne public_4d952c
        cmp esi, 0xFFFFFFFF
        je public_4d959f
        cmp esi, 0x13
        je public_4d959f
        push 0
        push edx
        mov ecx, edi
        call public_4d8e20
        pop edi
        pop esi
        pop ebx
        ret 4
        public_4d952c : nop
        push edx
        mov ecx, eax
        call dword ptr ds : [public_5c6514]
        cmp eax, 2
        je public_4d957b
        lea eax, ds:[ebx+4]
        push eax
        call public_489ea0
        mov ecx, dword ptr ds : [ebx+0x138]
        add esp, 4
        push 0
        push ecx
        mov ecx, edi
        call public_4d8e20
        cmp dword ptr ds : [ebx+0x138], 3
        jne public_4d959f
        mov edx, dword ptr ds : [public_5d828c]
        mov dword ptr ds : [edi+0x3AC], edx
        mov dword ptr ds : [edi+0x3B0], 0
        pop edi
        pop esi
        pop ebx
        ret 4
        public_4d957b : nop
        cmp dword ptr ds : [ebx+0x138], 7
        jne public_4d959f
        mov ecx, edi
        call public_4d9750
        test al, al
        je public_4d959f
        mov eax, dword ptr ds : [public_674a14]
        push 0
        push eax
        call public_489e80
        add esp, 8
        public_4d959f : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x4d9470)
    }
}

#undef public_4d94d3
#undef public_4d94f2
#undef public_4d94f4
#undef public_4d952c
#undef public_4d957b
#undef public_4d959f
