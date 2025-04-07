#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3b8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6b3bf40);
CLANG_FORWARD_PROC_SYMBOL(public_6b3c1c0);
CLANG_FORWARD_PROC_SYMBOL(public_6b3c210);
CLANG_FORWARD_PROC_SYMBOL(public_6b3c270);
CLANG_FORWARD_PROC_SYMBOL(public_6b3c290);
CLANG_FORWARD_PROC_SYMBOL(public_6b3c2f0);

#define public_6b3b8f0 _public_6b3b8f0
#define public_6b3b903 _public_6b3b903
#define public_6b3b906 _public_6b3b906
#define public_6b3b90a _public_6b3b90a
#define public_6b3b969 _public_6b3b969
#define public_6b3b981 _public_6b3b981
#define public_6b3b98b _public_6b3b98b
#define public_6b3b98f _public_6b3b98f
#define public_6b3b9a0 _public_6b3b9a0
#define public_6b3b9db _public_6b3b9db
#define public_6b3b9ea _public_6b3b9ea
#define public_6b3ba0b _public_6b3ba0b
#define public_6b3ba2c _public_6b3ba2c
#define public_6b3ba3a _public_6b3ba3a
#define public_6b3ba59 _public_6b3ba59
#define public_6b3ba65 _public_6b3ba65
#define public_6b3ba81 _public_6b3ba81
#define public_6b3ba9c _public_6b3ba9c
#define public_6b3baa3 _public_6b3baa3
#define public_6b3bac6 _public_6b3bac6

PROC_DECLARE(0x6b3b8d0, internal_6b3b8d0, public_6b3b8d0);
extern "C" NAKED register_t __cdecl internal_6b3b8d0()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+4]
        mov ebp, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi+8]
        cmp ebp, edx
        mov esi, ecx
        mov al, 1
        je public_6b3b90a
        lea esp, ss:[esp]
        public_6b3b8f0 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_6b3b903
        mov ebp, dword ptr ss : [ebp]
        jmp public_6b3b906
        public_6b3b903 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6b3b906 : nop
        cmp ebp, edx
        jne public_6b3b8f0
        public_6b3b90a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6b3ba81
        push 0
        push esi
        mov ecx, edi
        call public_6b3c270
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6b3c2f0
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6b3b969
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6b3b969
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_6b3b969
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6b3b98f
        mov dword ptr ds : [eax+8], ebx
        jmp public_6b3b98f
        public_6b3b969 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6b3b981
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6b3b98b
        public_6b3b981 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6b3b98b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6b3b98b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6b3b98f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6b3ba65
        lea ecx, ds:[ecx]
        public_6b3b9a0 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x14]
        test cl, cl
        jne public_6b3ba65
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6b3ba0b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6b3b9db
        mov byte ptr ds : [eax+0x14], 1
        mov byte ptr ds : [ecx+0x14], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6b3ba59
        public_6b3b9db : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6b3b9ea
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6b3c1c0
        public_6b3b9ea : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x14], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x14], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6b3c210
        jmp public_6b3ba59
        public_6b3ba0b : nop
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6b3ba2c
        mov byte ptr ds : [eax+0x14], 1
        mov byte ptr ds : [ecx+0x14], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x14], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6b3ba59
        public_6b3ba2c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6b3ba3a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6b3c210
        public_6b3ba3a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x14], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6b3c1c0
        public_6b3ba59 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6b3b9a0
        public_6b3ba65 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x14], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6b3ba81 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6b3ba9c
        cmp esi, dword ptr ds : [ecx]
        je public_6b3baa3
        lea ecx, ss:[esp+0x10]
        call public_6b3c290
        mov edx, dword ptr ss : [esp+0x10]
        public_6b3ba9c : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_6b3bac6
        public_6b3baa3 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6b3bf40
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 1
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        public_6b3bac6 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6b3b8d0)
    }
}

#undef public_6b3b8f0
#undef public_6b3b903
#undef public_6b3b906
#undef public_6b3b90a
#undef public_6b3b969
#undef public_6b3b981
#undef public_6b3b98b
#undef public_6b3b98f
#undef public_6b3b9a0
#undef public_6b3b9db
#undef public_6b3b9ea
#undef public_6b3ba0b
#undef public_6b3ba2c
#undef public_6b3ba3a
#undef public_6b3ba59
#undef public_6b3ba65
#undef public_6b3ba81
#undef public_6b3ba9c
#undef public_6b3baa3
#undef public_6b3bac6
