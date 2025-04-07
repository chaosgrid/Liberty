#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eea860);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6efccd0);
CLANG_FORWARD_PROC_SYMBOL(public_6efd1a0);
CLANG_FORWARD_PROC_SYMBOL(public_6efeb00);
CLANG_FORWARD_PROC_SYMBOL(public_6f48190);
CLANG_FORWARD_PROC_SYMBOL(public_6f49bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57640);
CLANG_FORWARD_PROC_SYMBOL(public_6f576c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f66220);
CLANG_FORWARD_PROC_SYMBOL(public_6f66690);
CLANG_FORWARD_PROC_SYMBOL(public_6f671a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f6ce90);
CLANG_FORWARD_PROC_SYMBOL(public_6f6eca0);
CLANG_FORWARD_PROC_SYMBOL(public_6f6ee40);
CLANG_FORWARD_PROC_SYMBOL(public_6f73930);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fafc68);

#define public_6f666dc _public_6f666dc
#define public_6f6670a _public_6f6670a
#define public_6f66759 _public_6f66759
#define public_6f66760 _public_6f66760
#define public_6f66765 _public_6f66765
#define public_6f667f0 _public_6f667f0
#define public_6f6680b _public_6f6680b
#define public_6f6685c _public_6f6685c
#define public_6f66874 _public_6f66874
#define public_6f668e8 _public_6f668e8
#define public_6f6690d _public_6f6690d
#define public_6f66932 _public_6f66932
#define public_6f66940 _public_6f66940
#define public_6f66948 _public_6f66948
#define public_6f66959 _public_6f66959
#define public_6f66976 _public_6f66976
#define public_6f6697d _public_6f6697d
#define public_6f66981 _public_6f66981
#define public_6f669b9 _public_6f669b9
#define public_6f669c2 _public_6f669c2
#define public_6f669c6 _public_6f669c6
#define public_6f669d4 _public_6f669d4
#define public_6f66a23 _public_6f66a23
#define public_6f66a40 _public_6f66a40
#define public_6f66a64 _public_6f66a64
#define public_6f66aaf _public_6f66aaf
#define public_6f66ab1 _public_6f66ab1
#define public_6f66af6 _public_6f66af6
#define public_6f66b2e _public_6f66b2e
#define public_6f66b3b _public_6f66b3b
#define public_6f66b4c _public_6f66b4c
#define public_6f66b82 _public_6f66b82
#define public_6f66b9a _public_6f66b9a
#define public_6f66ba4 _public_6f66ba4
#define public_6f66bb6 _public_6f66bb6
#define public_6f66bc0 _public_6f66bc0
#define public_6f66bd3 _public_6f66bd3
#define public_6f66bfb _public_6f66bfb
#define public_6f66c33 _public_6f66c33
#define public_6f66c3f _public_6f66c3f

PROC_DECLARE(0x6f66690, internal_6f66690, public_6f66690);
extern "C" NAKED register_t __cdecl internal_6f66690()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fafc68 @0x6f66698*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fafc68
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x44
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x64]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x68]
        mov eax, dword ptr ds : [edi]
        push eax
        mov ecx, ebp
        call public_6f73930
        mov esi, eax
        test esi, esi
        jne public_6f666dc
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFC
        pop ebx
        mov ecx, dword ptr ss : [esp+0x44]
        mov dword ptr fs : [0], ecx
        add esp, 0x50
        ret 
        public_6f666dc : nop
        mov ebx, dword ptr ss : [esp+0x64]
        mov ecx, dword ptr ds : [ebx]
        push ecx
        mov ecx, ebp
        call public_6f73930
        test eax, eax
        mov dword ptr ss : [esp+0x10], eax
        jne public_6f6670a
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFD
        pop ebx
        mov ecx, dword ptr ss : [esp+0x44]
        mov dword ptr fs : [0], ecx
        add esp, 0x50
        ret 
        public_6f6670a : nop
        mov ecx, dword ptr ds : [esi+0x154]
        mov edx, dword ptr ds : [eax+0x154]
        mov dword ptr ss : [esp+0x6C], ecx
        mov ecx, eax
        mov dword ptr ss : [esp+0x14], edx
        call public_6f57640
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], eax
        call public_6f57640
        push ebx
        mov dword ptr ss : [esp+0x24], eax
        call public_6f49bc0
        push edi
        mov ebp, eax
        call public_6f49bc0
        add esp, 8
        mov ebx, eax
        call dword ptr ds : [public_6fb36a0]
        test al, al
        jne public_6f66760
        test ebp, ebp
        jne public_6f66759
        test ebx, ebx
        je public_6f66760
        public_6f66759 : nop
        mov byte ptr ss : [esp+0x68], 1
        jmp public_6f66765
        public_6f66760 : nop
        mov byte ptr ss : [esp+0x68], 0
/*FIXUP public_6f66765 : nop
        push offset public_6fbbcac @0x6f66765*/
  FIXUP public_6f66765 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbcac
        call dword ptr ds : [public_6fb3000]
        lea edx, ss:[esp+0x1C]
        push edx
        mov dword ptr ss : [esp+0x20], eax
        call public_6efd1a0
/*FIXUP push offset public_6fbbc9c @0x6f6677e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbc9c
        mov edi, eax
        call dword ptr ds : [public_6fb3000]
        mov dword ptr ss : [esp+0x24], eax
        lea eax, ss:[esp+0x24]
        push eax
        call public_6efd1a0
        xor ecx, ecx
        add esp, 0x10
        cmp edi, ecx
        mov dword ptr ss : [esp+0x18], eax
        je public_6f6685c
        cmp eax, ecx
        je public_6f6685c
        mov al, byte ptr ss : [esp+0x68]
        test al, al
        jne public_6f66a23
        mov eax, dword ptr ss : [esp+0x6C]
        or ebp, 0xFFFFFFFF
        cmp eax, ebp
        jne public_6f667f0
        call public_6efeb00
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        push 0
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x78], eax
        call public_6f576c0
        push esi
        call public_6f671a0
        mov eax, dword ptr ss : [esp+0x70]
        add esp, 4
        xor ecx, ecx
        public_6f667f0 : nop
        cmp dword ptr ss : [esp+0x14], eax
        jne public_6f6680b
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        mov ecx, dword ptr ss : [esp+0x44]
        mov dword ptr fs : [0], ecx
        add esp, 0x50
        ret 
        public_6f6680b : nop
        mov dl, byte ptr ss : [esp+0x64]
        mov byte ptr ss : [esp+0x24], dl
        mov dword ptr ss : [esp+0x28], ecx
        mov dword ptr ss : [esp+0x2C], ecx
        mov dword ptr ss : [esp+0x30], ecx
        push eax
        lea eax, ss:[esp+0x28]
        push eax
        mov dword ptr ss : [esp+0x64], ecx
        call public_6f66220
        mov ecx, dword ptr ss : [esp+0x30]
        mov edi, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [edi+0x14C]
        xor ebx, ebx
        add esp, 8
        cmp eax, ebx
        mov dword ptr ss : [esp+0x14], edi
        je public_6f66874
        cmp dword ptr ds : [edi+0x154], ebp
        je public_6f66874
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x5C], ebp
        call public_6eec8d0
        public_6f6685c : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFF8
        pop ebx
        mov ecx, dword ptr ss : [esp+0x44]
        mov dword ptr fs : [0], ecx
        add esp, 0x50
        ret 
        public_6f66874 : nop
        mov edx, dword ptr ss : [esp+0x64]
        push edx
        call public_6f49bc0
        mov esi, eax
        mov dword ptr ss : [esp+0x6C], ebx
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x70], eax
        push ebx
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x74]
        push ecx
        lea edx, ss:[esp+0x7C]
        push edx
        call public_6f6eca0
        mov eax, dword ptr ss : [esp+0x7C]
        add esp, 0x14
        test eax, 0x3FFFFFFF
        je public_6f6690d
        lea ecx, ss:[esp+0x18]
        push ecx
        push eax
        call dword ptr ds : [public_6fb33a0]
        add esp, 8
        cmp esi, ebx
        je public_6f6690d
        mov esi, dword ptr ds : [esi+0xC]
        lea edx, ss:[esp+0x68]
        push edx
        lea eax, ss:[esp+0x70]
        push eax
        mov dword ptr ss : [esp+0x74], esi
        call public_6f6ce90
        add esp, 8
        test al, al
        jne public_6f668e8
        test dword ptr ss : [esp+0x18], 0x120
        je public_6f6690d
        public_6f668e8 : nop
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x5C], ebp
        call public_6eec8d0
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFF7
        pop ebx
        mov ecx, dword ptr ss : [esp+0x44]
        mov dword ptr fs : [0], ecx
        add esp, 0x50
        ret 
        public_6f6690d : nop
        mov edi, dword ptr ds : [edi+0x150]
        mov eax, dword ptr ds : [edi+0x38]
        cmp eax, ebx
        je public_6f66932
        mov ecx, dword ptr ds : [edi+0x3C]
        sub ecx, eax
        mov eax, 0x4EC4EC4F
        imul ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov ebx, edx
        public_6f66932 : nop
        xor esi, esi
        test ebx, ebx
        jle public_6f6697d
        mov ecx, dword ptr ss : [esp+0x2C]
        lea esp, ss:[esp]
        public_6f66940 : nop
        mov eax, dword ptr ss : [esp+0x28]
        cmp eax, ecx
        je public_6f66959
        public_6f66948 : nop
        mov edx, dword ptr ds : [eax]
        cmp dword ptr ds : [edx+0x14C], esi
        je public_6f669c6
        add eax, 4
        cmp eax, ecx
        jne public_6f66948
        public_6f66959 : nop
        mov eax, dword ptr ss : [esp+0x64]
        push eax
        call public_6f49bc0
        add esp, 4
        test eax, eax
        mov ecx, edi
        push esi
        jne public_6f669b9
        call public_6efccd0
        test al, al
        jne public_6f669c2
        public_6f66976 : nop
        or ebp, 0xFFFFFFFF
        cmp esi, ebp
        jne public_6f669d4
        public_6f6697d : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        public_6f66981 : nop
        push ecx
        mov ecx, dword ptr ss : [esp+0x2C]
        push ecx
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x64], ebp
        call public_6ea1490
        mov edx, dword ptr ss : [esp+0x28]
        push edx
        call public_6fa8fe0
        add esp, 4
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFB
        pop ebx
        mov ecx, dword ptr ss : [esp+0x44]
        mov dword ptr fs : [0], ecx
        add esp, 0x50
        ret 
        public_6f669b9 : nop
        call public_6efccd0
        test al, al
        jne public_6f66976
        public_6f669c2 : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        public_6f669c6 : nop
        inc esi
        cmp esi, ebx
        jl public_6f66940
        or ebp, 0xFFFFFFFF
        jmp public_6f66981
        public_6f669d4 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [eax+0x154]
        mov ecx, dword ptr ss : [esp+0x10]
        push edi
        push esi
        push eax
        call public_6f576c0
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x28]
        push ecx
        push edx
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x64], ebp
        call public_6ea1490
        mov eax, dword ptr ss : [esp+0x28]
        push eax
        call public_6fa8fe0
        add esp, 4
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        mov ecx, dword ptr ss : [esp+0x44]
        mov dword ptr fs : [0], ecx
        add esp, 0x50
        ret 
        public_6f66a23 : nop
        cmp ebp, ecx
        je public_6f66a40
        cmp ebx, ecx
        je public_6f66a40
        mov ebx, dword ptr ds : [ebx+0xC]
        push ebx
        mov ecx, ebp
        call public_6f48190
        test al, al
        je public_6f6685c
        xor ecx, ecx
        public_6f66a40 : nop
        mov edi, dword ptr ss : [esp+0x1C]
        cmp edi, ecx
        je public_6f66a64
        cmp edi, dword ptr ss : [esp+0x20]
        jne public_6f66a64
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        mov ecx, dword ptr ss : [esp+0x44]
        mov dword ptr fs : [0], ecx
        add esp, 0x50
        ret 
/*FIXUP public_6f66a64 : nop
        push offset public_6fbbcac @0x6f66a64*/
  FIXUP public_6f66a64 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbcac
        call dword ptr ds : [public_6fb3000]
        lea ecx, ss:[esp+0x68]
        push ecx
        mov dword ptr ss : [esp+0x6C], eax
        call public_6efd1a0
        mov ebx, eax
        mov eax, dword ptr ss : [esp+0x74]
        add esp, 8
        cmp eax, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x68], ebx
        jne public_6f66aaf
        call public_6efeb00
        push ebx
        xor ebp, ebp
        push ebp
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x78], eax
        call public_6f576c0
        push esi
        call public_6f671a0
        add esp, 4
        jmp public_6f66ab1
        public_6f66aaf : nop
        xor ebp, ebp
        public_6f66ab1 : nop
        mov dl, byte ptr ss : [esp+0x64]
        mov byte ptr ss : [esp+0x44], dl
        mov dword ptr ss : [esp+0x48], ebp
        mov dword ptr ss : [esp+0x4C], ebp
        mov dword ptr ss : [esp+0x50], ebp
        cmp edi, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x5C], 1
        jne public_6f66b3b
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, 0xFFFFFFFF
        je public_6f66b3b
        push eax
        lea eax, ss:[esp+0x48]
        push eax
        call public_6f66220
        mov edi, dword ptr ss : [esp+0x50]
        mov eax, dword ptr ss : [esp+0x54]
        add esp, 8
        cmp edi, eax
        je public_6f66b4c
        public_6f66af6 : nop
        mov ecx, dword ptr ds : [edi]
        mov esi, dword ptr ds : [ecx+4]
        call public_6eea860
        push esi
        mov ecx, eax
        call public_6f73930
        mov esi, eax
        cmp esi, ebp
        je public_6f66b2e
        mov eax, dword ptr ds : [esi+0x154]
        cmp eax, 0xFFFFFFFF
        je public_6f66b2e
        push eax
        push esi
        call public_6f6ee40
        add esp, 8
        push ebp
        push ebp
        push 0xFFFFFFFF
        mov ecx, esi
        call public_6f576c0
        public_6f66b2e : nop
        mov eax, dword ptr ss : [esp+0x4C]
        add edi, 4
        cmp edi, eax
        jne public_6f66af6
        jmp public_6f66b4c
        public_6f66b3b : nop
        lea ecx, ss:[esp+0x10]
        push ecx
        push 1
        push ebp
        lea ecx, ss:[esp+0x50]
        call public_6f937c0
        public_6f66b4c : nop
        mov dl, byte ptr ss : [esp+0x64]
        mov byte ptr ss : [esp+0x34], dl
        mov dword ptr ss : [esp+0x38], ebp
        mov dword ptr ss : [esp+0x3C], ebp
        mov dword ptr ss : [esp+0x40], ebp
        mov eax, dword ptr ss : [esp+0x6C]
        push eax
        lea ecx, ss:[esp+0x38]
        push ecx
        mov byte ptr ss : [esp+0x64], 2
        call public_6f66220
        mov eax, dword ptr ds : [ebx+0x38]
        add esp, 8
        cmp eax, ebp
        jne public_6f66b82
        xor ebx, ebx
        jmp public_6f66b9a
        public_6f66b82 : nop
        mov ecx, dword ptr ds : [ebx+0x3C]
        sub ecx, eax
        mov eax, 0x4EC4EC4F
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov ebx, edx
        public_6f66b9a : nop
        mov esi, dword ptr ss : [esp+0x48]
        cmp esi, dword ptr ss : [esp+0x4C]
        je public_6f66bfb
        public_6f66ba4 : nop
        mov edi, dword ptr ss : [esp+0x38]
        xor ecx, ecx
        cmp ebx, ebp
        jle public_6f66c3f
        mov edx, dword ptr ss : [esp+0x3C]
        public_6f66bb6 : nop
        cmp edi, edx
        mov eax, edi
        je public_6f66bd3
        lea esp, ss:[esp]
        public_6f66bc0 : nop
        mov ebp, dword ptr ds : [eax]
        cmp dword ptr ss : [ebp+0x14C], ecx
        je public_6f66c33
        add eax, 4
        cmp eax, edx
        jne public_6f66bc0
        xor ebp, ebp
        public_6f66bd3 : nop
        mov edx, dword ptr ss : [esp+0x68]
        mov eax, dword ptr ss : [esp+0x6C]
        push edx
        push ecx
        mov ecx, dword ptr ds : [esi]
        push eax
        call public_6f576c0
        mov ecx, dword ptr ds : [esi]
        push ecx
        call public_6f671a0
        mov eax, dword ptr ss : [esp+0x50]
        add esi, 4
        add esp, 4
        cmp esi, eax
        jne public_6f66ba4
        public_6f66bfb : nop
        mov eax, dword ptr ss : [esp+0x38]
        push eax
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x4C]
        push ecx
        mov dword ptr ss : [esp+0x40], ebp
        mov dword ptr ss : [esp+0x44], ebp
        mov dword ptr ss : [esp+0x48], ebp
        call public_6fa8fe0
        add esp, 8
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        mov ecx, dword ptr ss : [esp+0x44]
        mov dword ptr fs : [0], ecx
        add esp, 0x50
        ret 
        public_6f66c33 : nop
        inc ecx
        xor ebp, ebp
        cmp ecx, ebx
        jge public_6f66c3f
        jmp public_6f66bb6
        public_6f66c3f : nop
        push edi
        call public_6fa8fe0
        mov edx, dword ptr ss : [esp+0x4C]
        push edx
        mov dword ptr ss : [esp+0x40], ebp
        mov dword ptr ss : [esp+0x44], ebp
        mov dword ptr ss : [esp+0x48], ebp
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x5C]
        add esp, 8
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFB
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x50
        ret 
        UNREACHABLE_TRAP(0x6f66690)
    }
}

#undef public_6f666dc
#undef public_6f6670a
#undef public_6f66759
#undef public_6f66760
#undef public_6f66765
#undef public_6f667f0
#undef public_6f6680b
#undef public_6f6685c
#undef public_6f66874
#undef public_6f668e8
#undef public_6f6690d
#undef public_6f66932
#undef public_6f66940
#undef public_6f66948
#undef public_6f66959
#undef public_6f66976
#undef public_6f6697d
#undef public_6f66981
#undef public_6f669b9
#undef public_6f669c2
#undef public_6f669c6
#undef public_6f669d4
#undef public_6f66a23
#undef public_6f66a40
#undef public_6f66a64
#undef public_6f66aaf
#undef public_6f66ab1
#undef public_6f66af6
#undef public_6f66b2e
#undef public_6f66b3b
#undef public_6f66b4c
#undef public_6f66b82
#undef public_6f66b9a
#undef public_6f66ba4
#undef public_6f66bb6
#undef public_6f66bc0
#undef public_6f66bd3
#undef public_6f66bfb
#undef public_6f66c33
#undef public_6f66c3f
