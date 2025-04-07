#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10009700);
CLANG_FORWARD_PROC_SYMBOL(public_100097e0);
CLANG_FORWARD_PROC_SYMBOL(public_10009cc0);
CLANG_FORWARD_PROC_SYMBOL(public_1000a418);

#define public_10009cfc _public_10009cfc
#define public_10009d0a _public_10009d0a
#define public_10009d1b _public_10009d1b
#define public_10009d20 _public_10009d20
#define public_10009d2f _public_10009d2f
#define public_10009d50 _public_10009d50
#define public_10009d73 _public_10009d73
#define public_10009d7e _public_10009d7e
#define public_10009d82 _public_10009d82
#define public_10009ea3 _public_10009ea3

PROC_DECLARE(0x10009ce0, internal_10009ce0, public_10009ce0);
extern "C" NAKED register_t __cdecl internal_10009ce0()
{
    __asm
    {
        push ecx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        xor esi, esi
        xor ebp, ebp
        test edi, edi
        jne public_10009cfc
        pop edi
        pop esi
        mov eax, 0xFFFFFF9A
        pop ebp
        pop ecx
        ret 8
        public_10009cfc : nop
        cmp dword ptr ds : [edi+0x2C], 1
        jne public_10009d0a
        push edi
        call public_10009cc0
        mov esi, eax
        public_10009d0a : nop
        mov eax, dword ptr ss : [esp+0x18]
        test eax, eax
        push ebx
        jne public_10009d1b
        xor ebx, ebx
        mov dword ptr ss : [esp+0x18], ebx
        jmp public_10009d2f
        public_10009d1b : nop
        lea edx, ds:[eax+1]
        mov edi, edi
        public_10009d20 : nop
        mov cl, byte ptr ds : [eax]
        inc eax
        test cl, cl
        jne public_10009d20
        sub eax, edx
        mov dword ptr ss : [esp+0x18], eax
        mov ebx, eax
        public_10009d2f : nop
        mov eax, dword ptr ds : [edi+0x20]
        mov ecx, dword ptr ds : [edi+0x1C]
        push eax
        push ecx
        call dword ptr ds : [edi+0xC]
        test esi, esi
        mov dword ptr ss : [esp+0x10], eax
        jne public_10009d82
        mov ebx, dword ptr ds : [edi+0x24]
        test ebx, ebx
        je public_10009d7e
        lea esp, ss:[esp]
        public_10009d50 : nop
        test esi, esi
        jne public_10009d73
        mov eax, dword ptr ds : [ebx+8]
        test eax, eax
        jbe public_10009d73
        mov ecx, dword ptr ds : [edi+0x1C]
        push eax
        mov eax, dword ptr ds : [edi+0x20]
        lea edx, ds:[ebx+0x10]
        push edx
        push eax
        push ecx
        call dword ptr ds : [edi+8]
        cmp eax, dword ptr ds : [ebx+8]
        je public_10009d73
        or esi, 0xFFFFFFFF
        public_10009d73 : nop
        mov ecx, dword ptr ds : [ebx+8]
        mov ebx, dword ptr ds : [ebx]
        add ebp, ecx
        test ebx, ebx
        jne public_10009d50
        public_10009d7e : nop
        mov ebx, dword ptr ss : [esp+0x18]
        public_10009d82 : nop
        mov eax, dword ptr ds : [edi+0x24]
        call public_10009700
        test esi, esi
        jne public_10009ea3
        mov edx, dword ptr ds : [edi+0x20]
        push edx
        mov esi, 4
        mov ecx, 0x6054B50
        mov edx, edi
        call public_100097e0
        mov esi, eax
        add esp, 4
        test esi, esi
        jne public_10009ea3
        mov eax, dword ptr ds : [edi+0x20]
        push eax
        mov esi, 2
        xor ecx, ecx
        mov edx, edi
        call public_100097e0
        mov esi, eax
        add esp, 4
        test esi, esi
        jne public_10009ea3
        mov ecx, dword ptr ds : [edi+0x20]
        push ecx
        mov esi, 2
        xor ecx, ecx
        mov edx, edi
        call public_100097e0
        mov esi, eax
        add esp, 4
        test esi, esi
        jne public_10009ea3
        mov edx, dword ptr ds : [edi+0x20]
        mov ecx, dword ptr ds : [edi+0x4094]
        push edx
        mov esi, 2
        mov edx, edi
        call public_100097e0
        mov esi, eax
        add esp, 4
        test esi, esi
        jne public_10009ea3
        mov eax, dword ptr ds : [edi+0x20]
        mov ecx, dword ptr ds : [edi+0x4094]
        push eax
        mov esi, 2
        mov edx, edi
        call public_100097e0
        mov esi, eax
        add esp, 4
        test esi, esi
        jne public_10009ea3
        mov ecx, dword ptr ds : [edi+0x20]
        push ecx
        mov esi, 4
        mov ecx, ebp
        mov edx, edi
        call public_100097e0
        mov esi, eax
        add esp, 4
        test esi, esi
        jne public_10009ea3
        mov edx, dword ptr ds : [edi+0x20]
        mov ecx, dword ptr ss : [esp+0x10]
        push edx
        mov esi, 4
        mov edx, edi
        call public_100097e0
        mov esi, eax
        add esp, 4
        test esi, esi
        jne public_10009ea3
        mov eax, dword ptr ds : [edi+0x20]
        push eax
        mov esi, 2
        mov ecx, ebx
        mov edx, edi
        call public_100097e0
        mov esi, eax
        add esp, 4
        test esi, esi
        jne public_10009ea3
        test ebx, ebx
        jbe public_10009ea3
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [edi+0x20]
        mov eax, dword ptr ds : [edi+0x1C]
        push ebx
        push ecx
        push edx
        push eax
        call dword ptr ds : [edi+8]
        cmp eax, ebx
        je public_10009ea3
        or esi, 0xFFFFFFFF
        public_10009ea3 : nop
        mov ecx, dword ptr ds : [edi+0x20]
        mov edx, dword ptr ds : [edi+0x1C]
        push ecx
        push edx
        call dword ptr ds : [edi+0x14]
        push edi
        call public_1000a418
        add esp, 4
        pop ebx
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x10009ce0)
    }
}

#undef public_10009cfc
#undef public_10009d0a
#undef public_10009d1b
#undef public_10009d20
#undef public_10009d2f
#undef public_10009d50
#undef public_10009d73
#undef public_10009d7e
#undef public_10009d82
#undef public_10009ea3
