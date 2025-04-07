#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10001d60);
CLANG_FORWARD_PROC_SYMBOL(public_10001ff0);
CLANG_FORWARD_PROC_SYMBOL(public_10009730);
CLANG_FORWARD_PROC_SYMBOL(public_100097e0);
CLANG_FORWARD_PROC_SYMBOL(public_10009810);
CLANG_FORWARD_PROC_SYMBOL(public_10009aa0);
CLANG_FORWARD_PROC_SYMBOL(public_1000a418);

#define public_10009ab1 _public_10009ab1
#define public_10009abb _public_10009abb
#define public_10009ad4 _public_10009ad4
#define public_10009b02 _public_10009b02
#define public_10009b27 _public_10009b27
#define public_10009b4d _public_10009b4d
#define public_10009b72 _public_10009b72
#define public_10009b8b _public_10009b8b
#define public_10009b8f _public_10009b8f
#define public_10009bd3 _public_10009bd3
#define public_10009c01 _public_10009c01
#define public_10009c40 _public_10009c40
#define public_10009c87 _public_10009c87
#define public_10009ca0 _public_10009ca0

PROC_DECLARE(0x10009aa0, internal_10009aa0, public_10009aa0);
extern "C" NAKED register_t __cdecl internal_10009aa0()
{
    __asm
    {
        push ebx
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        xor ebx, ebx
        cmp edi, ebx
        je public_10009ab1
        cmp dword ptr ds : [edi+0x2C], ebx
        jne public_10009abb
        public_10009ab1 : nop
        pop edi
        mov eax, 0xFFFFFF9A
        pop ebx
        ret 0xC
        public_10009abb : nop
        cmp dword ptr ds : [edi+0x80], 8
        push ebp
        push esi
        mov dword ptr ds : [edi+0x34], ebx
        jne public_10009b27
        cmp dword ptr ds : [edi+0x84], ebx
        jne public_10009b27
        lea ebp, ds:[edi+0x30]
        public_10009ad4 : nop
        mov eax, dword ptr ds : [edi+0x40]
        test eax, eax
        jne public_10009b02
        mov eax, dword ptr ds : [edi+0x6C]
        mov ecx, dword ptr ds : [edi+0x20]
        mov edx, dword ptr ds : [edi+0x1C]
        push eax
        lea esi, ds:[edi+0x88]
        push esi
        push ecx
        push edx
        call dword ptr ds : [edi+8]
        mov dword ptr ds : [edi+0x6C], 0
        mov dword ptr ds : [edi+0x40], 0x4000
        mov dword ptr ds : [edi+0x3C], esi
        public_10009b02 : nop
        mov esi, dword ptr ds : [edi+0x44]
        push 4
        push ebp
        call public_10001d60
        mov ecx, dword ptr ds : [edi+0x6C]
        mov ebx, eax
        mov eax, dword ptr ds : [edi+0x44]
        sub eax, esi
        add ecx, eax
        test ebx, ebx
        mov dword ptr ds : [edi+0x6C], ecx
        je public_10009ad4
        cmp ebx, 1
        jne public_10009b27
        xor ebx, ebx
        public_10009b27 : nop
        mov eax, dword ptr ds : [edi+0x6C]
        test eax, eax
        jbe public_10009b4d
        test ebx, ebx
        jne public_10009b4d
        mov edx, dword ptr ds : [edi+0x20]
        push eax
        mov eax, dword ptr ds : [edi+0x1C]
        lea ecx, ds:[edi+0x88]
        push ecx
        push edx
        push eax
        call dword ptr ds : [edi+8]
        cmp eax, dword ptr ds : [edi+0x6C]
        je public_10009b4d
        or ebx, 0xFFFFFFFF
        public_10009b4d : nop
        cmp dword ptr ds : [edi+0x80], 8
        jne public_10009b72
        mov eax, dword ptr ds : [edi+0x84]
        test eax, eax
        jne public_10009b8b
        lea ecx, ds:[edi+0x30]
        push ecx
        call public_10001ff0
        mov ebx, eax
        mov dword ptr ds : [edi+0x68], 0
        public_10009b72 : nop
        mov eax, dword ptr ds : [edi+0x84]
        test eax, eax
        jne public_10009b8b
        mov edx, dword ptr ds : [edi+0x38]
        mov ebp, dword ptr ds : [edi+0x408C]
        mov dword ptr ss : [esp+0x18], edx
        jmp public_10009b8f
        public_10009b8b : nop
        mov ebp, dword ptr ss : [esp+0x1C]
        public_10009b8f : nop
        mov esi, dword ptr ds : [edi+0x74]
        mov eax, dword ptr ds : [edi+0x44]
        add esi, 0x10
        mov edx, 4
        mov ecx, ebp
        mov dword ptr ss : [esp+0x14], eax
        call public_10009810
        mov esi, dword ptr ds : [edi+0x74]
        mov ecx, dword ptr ss : [esp+0x14]
        add esi, 0x14
        call public_10009810
        mov eax, dword ptr ds : [edi+0x5C]
        mov ecx, 1
        cmp eax, ecx
        jne public_10009bd3
        mov esi, dword ptr ds : [edi+0x74]
        add esi, 0x24
        mov edx, 2
        call public_10009810
        public_10009bd3 : nop
        mov esi, dword ptr ds : [edi+0x74]
        mov ecx, dword ptr ss : [esp+0x18]
        add esi, 0x18
        mov edx, 4
        call public_10009810
        test ebx, ebx
        jne public_10009c01
        mov ecx, dword ptr ds : [edi+0x78]
        mov edx, dword ptr ds : [edi+0x74]
        push ecx
        push edx
        lea eax, ds:[edi+0x24]
        push eax
        call public_10009730
        add esp, 0xC
        mov ebx, eax
        public_10009c01 : nop
        mov ecx, dword ptr ds : [edi+0x74]
        push ecx
        call public_1000a418
        add esp, 4
        test ebx, ebx
        jne public_10009ca0
        mov edx, dword ptr ds : [edi+0x20]
        mov eax, dword ptr ds : [edi+0x1C]
        push edx
        push eax
        call dword ptr ds : [edi+0xC]
        mov ecx, dword ptr ds : [edi+0x70]
        mov edx, dword ptr ds : [edi+0x20]
        push ebx
        add ecx, 0xE
        push ecx
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ds : [edi+0x1C]
        push edx
        push eax
        call dword ptr ds : [edi+0x10]
        test eax, eax
        je public_10009c40
        or ebx, 0xFFFFFFFF
        jmp public_10009c87
        public_10009c40 : nop
        mov ecx, dword ptr ds : [edi+0x20]
        push ecx
        mov esi, 4
        mov ecx, ebp
        mov edx, edi
        call public_100097e0
        mov ebx, eax
        add esp, 4
        test ebx, ebx
        jne public_10009c87
        mov edx, dword ptr ds : [edi+0x20]
        mov ecx, dword ptr ss : [esp+0x14]
        push edx
        mov edx, edi
        call public_100097e0
        mov ebx, eax
        add esp, 4
        test ebx, ebx
        jne public_10009c87
        mov eax, dword ptr ds : [edi+0x20]
        mov ecx, dword ptr ss : [esp+0x18]
        push eax
        mov edx, edi
        call public_100097e0
        add esp, 4
        mov ebx, eax
        public_10009c87 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [edi+0x20]
        mov eax, dword ptr ds : [edi+0x1C]
        push 0
        push ecx
        push edx
        push eax
        call dword ptr ds : [edi+0x10]
        test eax, eax
        je public_10009ca0
        or ebx, 0xFFFFFFFF
        public_10009ca0 : nop
        mov eax, dword ptr ds : [edi+0x4094]
        pop esi
        inc eax
        pop ebp
        mov dword ptr ds : [edi+0x4094], eax
        mov dword ptr ds : [edi+0x2C], 0
        pop edi
        mov eax, ebx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x10009aa0)
    }
}

#undef public_10009ab1
#undef public_10009abb
#undef public_10009ad4
#undef public_10009b02
#undef public_10009b27
#undef public_10009b4d
#undef public_10009b72
#undef public_10009b8b
#undef public_10009b8f
#undef public_10009bd3
#undef public_10009c01
#undef public_10009c40
#undef public_10009c87
#undef public_10009ca0
