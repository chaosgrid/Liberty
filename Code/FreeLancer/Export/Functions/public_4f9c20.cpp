#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42d740);
CLANG_FORWARD_PROC_SYMBOL(public_4f7bd0);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_4f9c3f _public_4f9c3f
#define public_4f9c6a _public_4f9c6a
#define public_4f9c6d _public_4f9c6d
#define public_4f9cd1 _public_4f9cd1
#define public_4f9cd4 _public_4f9cd4
#define public_4f9cd9 _public_4f9cd9
#define public_4f9cdc _public_4f9cdc
#define public_4f9cf6 _public_4f9cf6
#define public_4f9d0b _public_4f9d0b
#define public_4f9d41 _public_4f9d41
#define public_4f9d4a _public_4f9d4a
#define public_4f9d89 _public_4f9d89
#define public_4f9d9f _public_4f9d9f
#define public_4f9da4 _public_4f9da4
#define public_4f9dc5 _public_4f9dc5
#define public_4f9dd3 _public_4f9dd3

PROC_DECLARE(0x4f9c20, internal_4f9c20, public_4f9c20);
extern "C" NAKED register_t __cdecl internal_4f9c20()
{
    __asm
    {
        sub esp, 0x6C
        push ebp
        push edi
        push 0x26
        mov ebp, ecx
        call public_5792b0
        add esp, 4
        test eax, eax
        jne public_4f9c3f
        pop edi
        xor al, al
        pop ebp
        add esp, 0x6C
        ret 8
        public_4f9c3f : nop
        call public_42d740
        test al, al
        jne public_4f9dd3
        fld dword ptr ss : [ebp+0x78]
        xor edi, edi
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 1
        jne public_4f9c6a
        fld dword ptr ss : [esp+0x78]
        fadd dword ptr ss : [ebp+0x78]
        fstp dword ptr ss : [ebp+0x78]
        jmp public_4f9c6d
        public_4f9c6a : nop
        mov dword ptr ss : [ebp+0x78], edi
        public_4f9c6d : nop
        fld dword ptr ss : [ebp+0x7C]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_4f9dd3
        fld dword ptr ss : [ebp+0x7C]
        fsub dword ptr ss : [esp+0x78]
        fst dword ptr ss : [ebp+0x7C]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jp public_4f9dd3
        cmp dword ptr ss : [ebp+0x68], edi
        jne public_4f9cdc
        test byte ptr ss : [ebp+8], 2
        jne public_4f9cdc
        mov ecx, dword ptr ss : [ebp+0x5C]
        lea eax, ss:[ebp+0x60]
        cmp eax, edi
        lea ecx, ds:[ecx+ecx*2]
        mov dword ptr ss : [ebp+0x68], ebp
        lea ecx, ds : [ecx*4+public_674ce0]
        je public_4f9cd9
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax], edi
        mov edx, dword ptr ds : [ecx+4]
        cmp edx, edi
        je public_4f9cd1
        mov dword ptr ds : [edx], eax
        jmp public_4f9cd4
        public_4f9cd1 : nop
        mov dword ptr ds : [ecx+8], eax
        public_4f9cd4 : nop
        mov dword ptr ds : [ecx+4], eax
        inc dword ptr ds : [ecx]
        public_4f9cd9 : nop
        inc dword ptr ss : [ebp+0x58]
        public_4f9cdc : nop
        mov ecx, dword ptr ss : [ebp+0x40]
        cmp ecx, 0xFFFFFFFF
        je public_4f9dc5
        mov eax, dword ptr ss : [ebp+0x44]
        cmp eax, edi
        je public_4f9cf6
        add eax, 0xFFFFFFF8
        cmp eax, edi
        jne public_4f9d0b
        public_4f9cf6 : nop
        mov ecx, ebp
        call public_4f7bd0
        or byte ptr ss : [ebp+8], 2
        pop edi
        xor al, al
        pop ebp
        add esp, 0x6C
        ret 8
        public_4f9d0b : nop
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x80]
        cmp eax, edi
        je public_4f9d41
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+8]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x54]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[ebp+0x4C]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+8], eax
        jmp public_4f9d4a
        public_4f9d41 : nop
        mov dword ptr ss : [ebp+0x54], edi
        mov dword ptr ss : [ebp+0x50], edi
        mov dword ptr ss : [ebp+0x4C], edi
        public_4f9d4a : nop
        mov eax, dword ptr ss : [ebp+0x44]
        cmp eax, edi
        push ebx
        push esi
        je public_4f9d9f
        add eax, 0xFFFFFFF8
        cmp eax, edi
        je public_4f9d9f
        mov ecx, dword ptr ss : [ebp+0x40]
        cmp ecx, 0xFFFFFFFF
        je public_4f9d9f
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0xA0]
        mov esi, eax
        mov eax, dword ptr ds : [public_674f50]
        cmp eax, edi
        jne public_4f9d89
        call public_5b73e0
        mov dword ptr ds : [public_674f50], eax
        public_4f9d89 : nop
        mov ecx, dword ptr ds : [eax]
        lea ebx, ss:[ebp+0x10]
        push ebx
        push esi
        lea edx, ss:[esp+0x54]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        lea esi, ss:[esp+0x4C]
        jmp public_4f9da4
        public_4f9d9f : nop
        lea ebx, ss:[ebp+0x10]
        mov esi, ebx
        public_4f9da4 : nop
        lea edi, ss:[esp+0x1C]
        mov ecx, 0xC
        rep movsd
        mov edi, ebx
        mov ecx, 0xC
        lea esi, ss:[esp+0x1C]
        rep movsd
        pop esi
        mov dword ptr ss : [ebp+0x40], 0xFFFFFFFF
        pop ebx
        public_4f9dc5 : nop
        or byte ptr ss : [ebp+8], 2
        pop edi
        xor al, al
        pop ebp
        add esp, 0x6C
        ret 8
        public_4f9dd3 : nop
        pop edi
        mov al, 1
        pop ebp
        add esp, 0x6C
        ret 8
        UNREACHABLE_TRAP(0x4f9c20)
    }
}

#undef public_4f9c3f
#undef public_4f9c6a
#undef public_4f9c6d
#undef public_4f9cd1
#undef public_4f9cd4
#undef public_4f9cd9
#undef public_4f9cdc
#undef public_4f9cf6
#undef public_4f9d0b
#undef public_4f9d41
#undef public_4f9d4a
#undef public_4f9d89
#undef public_4f9d9f
#undef public_4f9da4
#undef public_4f9dc5
#undef public_4f9dd3
