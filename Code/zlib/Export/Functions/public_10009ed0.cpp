#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10002de0);
CLANG_FORWARD_PROC_SYMBOL(public_100097e0);
CLANG_FORWARD_PROC_SYMBOL(public_10009810);
CLANG_FORWARD_PROC_SYMBOL(public_10009830);
CLANG_FORWARD_PROC_SYMBOL(public_10009cc0);
CLANG_FORWARD_PROC_SYMBOL(public_10009ed0);
CLANG_FORWARD_PROC_SYMBOL(public_1000a46a);

#define public_10009ee6 _public_10009ee6
#define public_10009f01 _public_10009f01
#define public_10009f15 _public_10009f15
#define public_10009f23 _public_10009f23
#define public_10009f31 _public_10009f31
#define public_10009f34 _public_10009f34
#define public_10009f41 _public_10009f41
#define public_10009f48 _public_10009f48
#define public_10009f61 _public_10009f61
#define public_10009f71 _public_10009f71
#define public_10009f77 _public_10009f77
#define public_10009f88 _public_10009f88
#define public_10009f8f _public_10009f8f
#define public_10009f9c _public_10009f9c
#define public_10009fa7 _public_10009fa7
#define public_10009faa _public_10009faa
#define public_1000a0d4 _public_1000a0d4
#define public_1000a0e3 _public_1000a0e3
#define public_1000a110 _public_1000a110
#define public_1000a123 _public_1000a123
#define public_1000a130 _public_1000a130
#define public_1000a141 _public_1000a141
#define public_1000a150 _public_1000a150
#define public_1000a167 _public_1000a167
#define public_1000a17a _public_1000a17a
#define public_1000a2d2 _public_1000a2d2
#define public_1000a2eb _public_1000a2eb
#define public_1000a2ee _public_1000a2ee
#define public_1000a2f0 _public_1000a2f0
#define public_1000a350 _public_1000a350
#define public_1000a357 _public_1000a357
#define public_1000a359 _public_1000a359

PROC_DECLARE(0x10009ed0, internal_10009ed0, public_10009ed0);
extern "C" NAKED register_t __cdecl internal_10009ed0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        xor esi, esi
        cmp edi, esi
        jne public_10009ee6
        pop edi
        mov eax, 0xFFFFFF9A
        pop esi
        ret 0x2C
        public_10009ee6 : nop
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x34]
        cmp ebp, esi
        je public_10009f01
        cmp ebp, 8
        je public_10009f01
        pop ebp
        pop ebx
        pop edi
        mov eax, 0xFFFFFF9A
        pop esi
        ret 0x2C
        public_10009f01 : nop
        cmp dword ptr ds : [edi+0x2C], 1
        jne public_10009f15
        push edi
        call public_10009cc0
        cmp eax, esi
        jne public_1000a359
        public_10009f15 : nop
        cmp dword ptr ss : [esp+0x18], esi
        jne public_10009f23
        mov dword ptr ss : [esp+0x18], offset public_1000c0c0
        public_10009f23 : nop
        mov eax, dword ptr ss : [esp+0x30]
        cmp eax, esi
        jne public_10009f31
        mov dword ptr ss : [esp+0x14], esi
        jmp public_10009f41
        public_10009f31 : nop
        lea edx, ds:[eax+1]
        public_10009f34 : nop
        mov cl, byte ptr ds : [eax]
        inc eax
        test cl, cl
        jne public_10009f34
        sub eax, edx
        mov dword ptr ss : [esp+0x14], eax
        public_10009f41 : nop
        mov ebx, dword ptr ss : [esp+0x18]
        lea ecx, ds:[ebx+1]
        public_10009f48 : nop
        mov al, byte ptr ds : [ebx]
        inc ebx
        test al, al
        jne public_10009f48
        mov edx, dword ptr ss : [esp+0x1C]
        sub ebx, ecx
        cmp edx, esi
        jne public_10009f61
        mov dword ptr ds : [edi+0x4088], esi
        jmp public_10009f77
        public_10009f61 : nop
        mov eax, dword ptr ds : [edx+0x18]
        cmp eax, esi
        jne public_10009f71
        push esi
        call public_10009830
        add esp, 4
        public_10009f71 : nop
        mov dword ptr ds : [edi+0x4088], eax
        public_10009f77 : nop
        mov eax, dword ptr ss : [esp+0x38]
        cmp eax, 8
        mov dword ptr ds : [edi+0x7C], esi
        je public_10009f88
        cmp eax, 9
        jne public_10009f8f
        public_10009f88 : nop
        mov dword ptr ds : [edi+0x7C], 2
        public_10009f8f : nop
        cmp eax, 2
        jne public_10009f9c
        mov eax, dword ptr ds : [edi+0x7C]
        or eax, 4
        jmp public_10009fa7
        public_10009f9c : nop
        cmp eax, 1
        jne public_10009faa
        mov eax, dword ptr ds : [edi+0x7C]
        or eax, 6
        public_10009fa7 : nop
        mov dword ptr ds : [edi+0x7C], eax
        public_10009faa : nop
        mov ecx, dword ptr ds : [edi+0x20]
        mov edx, dword ptr ds : [edi+0x1C]
        mov eax, dword ptr ss : [esp+0x3C]
        push ecx
        push edx
        mov dword ptr ds : [edi+0x408C], esi
        mov dword ptr ds : [edi+0x80], ebp
        mov dword ptr ds : [edi+0x68], esi
        mov dword ptr ds : [edi+0x6C], esi
        mov dword ptr ds : [edi+0x84], eax
        call dword ptr ds : [edi+0xC]
        mov ebp, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [edi+0x70], eax
        mov eax, dword ptr ss : [esp+0x14]
        lea ecx, ds:[ebx+eax]
        lea eax, ds:[ecx+ebp+0x2E]
        push eax
        mov dword ptr ds : [edi+0x78], eax
        call public_1000a46a
        add esp, 4
        mov edx, 4
        mov ecx, 0x2014B50
        mov esi, eax
        mov dword ptr ds : [edi+0x74], eax
        call public_10009810
        mov esi, dword ptr ds : [edi+0x74]
        add esi, edx
        mov edx, 2
        xor ecx, ecx
        call public_10009810
        mov esi, dword ptr ds : [edi+0x74]
        add esi, 6
        mov ecx, 0x14
        call public_10009810
        mov esi, dword ptr ds : [edi+0x74]
        mov ecx, dword ptr ds : [edi+0x7C]
        add esi, 8
        call public_10009810
        mov esi, dword ptr ds : [edi+0x74]
        mov ecx, dword ptr ds : [edi+0x80]
        add esi, 0xA
        call public_10009810
        mov esi, dword ptr ds : [edi+0x74]
        mov ecx, dword ptr ds : [edi+0x4088]
        add esi, 0xC
        mov edx, 4
        call public_10009810
        mov esi, dword ptr ds : [edi+0x74]
        add esi, 0x10
        xor ecx, ecx
        call public_10009810
        mov esi, dword ptr ds : [edi+0x74]
        add esi, 0x14
        xor ecx, ecx
        call public_10009810
        mov esi, dword ptr ds : [edi+0x74]
        add esi, 0x18
        xor ecx, ecx
        call public_10009810
        mov esi, dword ptr ds : [edi+0x74]
        add esi, 0x1C
        mov edx, 2
        mov ecx, ebx
        call public_10009810
        mov esi, dword ptr ds : [edi+0x74]
        add esi, 0x1E
        mov ecx, ebp
        call public_10009810
        mov esi, dword ptr ds : [edi+0x74]
        mov ecx, dword ptr ss : [esp+0x14]
        add esi, 0x20
        call public_10009810
        mov esi, dword ptr ds : [edi+0x74]
        add esi, 0x22
        xor ecx, ecx
        call public_10009810
        mov esi, dword ptr ds : [edi+0x74]
        mov eax, dword ptr ss : [esp+0x1C]
        add esi, 0x24
        test eax, eax
        jne public_1000a0d4
        xor ecx, ecx
        call public_10009810
        xor ecx, ecx
        jmp public_1000a0e3
        public_1000a0d4 : nop
        mov ecx, dword ptr ds : [eax+0x1C]
        call public_10009810
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [eax+0x20]
        public_1000a0e3 : nop
        mov esi, dword ptr ds : [edi+0x74]
        add esi, 0x26
        mov edx, 4
        call public_10009810
        mov esi, dword ptr ds : [edi+0x74]
        mov ecx, dword ptr ds : [edi+0x70]
        add esi, 0x2A
        call public_10009810
        xor eax, eax
        test ebx, ebx
        jbe public_1000a123
        jmp public_1000a110
        lea esp, ss:[esp]
        public_1000a110 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov dl, byte ptr ds : [eax+edx]
        mov ecx, dword ptr ds : [edi+0x74]
        mov byte ptr ds : [ecx+eax+0x2E], dl
        inc eax
        cmp eax, ebx
        jb public_1000a110
        public_1000a123 : nop
        xor eax, eax
        test ebp, ebp
        jbe public_1000a141
        mov esi, dword ptr ss : [esp+0x28]
        lea ecx, ds:[ecx]
        public_1000a130 : nop
        mov ecx, dword ptr ds : [edi+0x74]
        mov dl, byte ptr ds : [eax+esi]
        add ecx, eax
        inc eax
        cmp eax, ebp
        mov byte ptr ds : [ecx+ebx+0x2E], dl
        jb public_1000a130
        public_1000a141 : nop
        mov esi, dword ptr ss : [esp+0x14]
        xor eax, eax
        test esi, esi
        jbe public_1000a167
        jmp public_1000a150
        lea ecx, ds:[ecx]
        public_1000a150 : nop
        mov ecx, dword ptr ds : [edi+0x74]
        mov edx, dword ptr ss : [esp+0x30]
        mov dl, byte ptr ds : [eax+edx]
        add ecx, eax
        add ecx, ebx
        inc eax
        cmp eax, esi
        mov byte ptr ds : [ecx+ebp+0x2E], dl
        jb public_1000a150
        public_1000a167 : nop
        mov eax, dword ptr ds : [edi+0x74]
        test eax, eax
        jne public_1000a17a
        pop ebp
        pop ebx
        pop edi
        mov eax, 0xFFFFFF98
        pop esi
        ret 0x2C
        public_1000a17a : nop
        mov eax, dword ptr ds : [edi+0x20]
        push eax
        mov esi, 4
        mov ecx, 0x4034B50
        mov edx, edi
        call public_100097e0
        mov esi, eax
        xor ebp, ebp
        add esp, 4
        cmp esi, ebp
        jne public_1000a2f0
        mov ecx, dword ptr ds : [edi+0x20]
        push ecx
        mov esi, 2
        mov ecx, 0x14
        mov edx, edi
        call public_100097e0
        mov esi, eax
        add esp, 4
        cmp esi, ebp
        jne public_1000a2f0
        mov edx, dword ptr ds : [edi+0x20]
        mov ecx, dword ptr ds : [edi+0x7C]
        push edx
        mov esi, 2
        mov edx, edi
        call public_100097e0
        mov esi, eax
        add esp, 4
        cmp esi, ebp
        jne public_1000a2f0
        mov eax, dword ptr ds : [edi+0x20]
        mov ecx, dword ptr ds : [edi+0x80]
        push eax
        mov esi, 2
        mov edx, edi
        call public_100097e0
        mov esi, eax
        add esp, 4
        cmp esi, ebp
        jne public_1000a2f0
        mov ecx, dword ptr ds : [edi+0x20]
        push ecx
        mov ecx, dword ptr ds : [edi+0x4088]
        mov esi, 4
        mov edx, edi
        call public_100097e0
        mov esi, eax
        add esp, 4
        cmp esi, ebp
        jne public_1000a2f0
        mov edx, dword ptr ds : [edi+0x20]
        push edx
        mov esi, 4
        xor ecx, ecx
        mov edx, edi
        call public_100097e0
        mov esi, eax
        add esp, 4
        cmp esi, ebp
        jne public_1000a2f0
        mov eax, dword ptr ds : [edi+0x20]
        push eax
        mov esi, 4
        xor ecx, ecx
        mov edx, edi
        call public_100097e0
        mov esi, eax
        add esp, 4
        cmp esi, ebp
        jne public_1000a2f0
        mov ecx, dword ptr ds : [edi+0x20]
        push ecx
        mov esi, 4
        xor ecx, ecx
        mov edx, edi
        call public_100097e0
        mov esi, eax
        add esp, 4
        cmp esi, ebp
        jne public_1000a2f0
        mov edx, dword ptr ds : [edi+0x20]
        push edx
        mov esi, 2
        mov ecx, ebx
        mov edx, edi
        call public_100097e0
        mov esi, eax
        add esp, 4
        cmp esi, ebp
        jne public_1000a2f0
        mov eax, dword ptr ds : [edi+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        push eax
        mov esi, 2
        mov ecx, ebp
        mov edx, edi
        call public_100097e0
        mov esi, eax
        add esp, 4
        test esi, esi
        jne public_1000a2ee
        test ebx, ebx
        jbe public_1000a2d2
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [edi+0x20]
        mov eax, dword ptr ds : [edi+0x1C]
        push ebx
        push ecx
        push edx
        push eax
        call dword ptr ds : [edi+8]
        cmp eax, ebx
        jne public_1000a2eb
        public_1000a2d2 : nop
        test ebp, ebp
        jbe public_1000a2ee
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [edi+0x20]
        mov eax, dword ptr ds : [edi+0x1C]
        push ebp
        push ecx
        push edx
        push eax
        call dword ptr ds : [edi+8]
        cmp eax, ebp
        je public_1000a2ee
        public_1000a2eb : nop
        or esi, 0xFFFFFFFF
        public_1000a2ee : nop
        xor ebp, ebp
        public_1000a2f0 : nop
        cmp esi, ebp
        lea ecx, ds:[edi+0x88]
        mov dword ptr ds : [edi+0x34], ebp
        mov dword ptr ds : [edi+0x40], 0x4000
        mov dword ptr ds : [edi+0x3C], ecx
        mov dword ptr ds : [edi+0x38], ebp
        mov dword ptr ds : [edi+0x44], ebp
        jne public_1000a357
        cmp dword ptr ds : [edi+0x80], 8
        jne public_1000a350
        cmp dword ptr ds : [edi+0x84], ebp
        jne public_1000a350
        mov edx, dword ptr ss : [esp+0x38]
        push 0x38
/*FIXUP push offset public_1000b068 @0x1000a324*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_1000b068
        push ebp
        push 8
        push 0xFFFFFFF1
        push 8
        push edx
        lea eax, ds:[edi+0x30]
        push eax
        mov dword ptr ds : [edi+0x50], ebp
        mov dword ptr ds : [edi+0x54], ebp
        mov dword ptr ds : [edi+0x58], ebp
        call public_10002de0
        mov esi, eax
        cmp esi, ebp
        jne public_1000a357
        mov dword ptr ds : [edi+0x68], 1
        public_1000a350 : nop
        mov dword ptr ds : [edi+0x2C], 1
        public_1000a357 : nop
        mov eax, esi
        public_1000a359 : nop
        pop ebp
        pop ebx
        pop edi
        pop esi
        ret 0x2C
        UNREACHABLE_TRAP(0x10009ed0)
    }
}

#undef public_10009ee6
#undef public_10009f01
#undef public_10009f15
#undef public_10009f23
#undef public_10009f31
#undef public_10009f34
#undef public_10009f41
#undef public_10009f48
#undef public_10009f61
#undef public_10009f71
#undef public_10009f77
#undef public_10009f88
#undef public_10009f8f
#undef public_10009f9c
#undef public_10009fa7
#undef public_10009faa
#undef public_1000a0d4
#undef public_1000a0e3
#undef public_1000a110
#undef public_1000a123
#undef public_1000a130
#undef public_1000a141
#undef public_1000a150
#undef public_1000a167
#undef public_1000a17a
#undef public_1000a2d2
#undef public_1000a2eb
#undef public_1000a2ee
#undef public_1000a2f0
#undef public_1000a350
#undef public_1000a357
#undef public_1000a359
