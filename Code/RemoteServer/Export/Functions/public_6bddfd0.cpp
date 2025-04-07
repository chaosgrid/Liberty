#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bda220);
CLANG_FORWARD_PROC_SYMBOL(public_6bda4c0);
CLANG_FORWARD_PROC_SYMBOL(public_6bde8f0);
CLANG_FORWARD_PROC_SYMBOL(public_6bebe50);
CLANG_FORWARD_PROC_SYMBOL(public_6bebea0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);

#define public_6bde01f _public_6bde01f
#define public_6bde036 _public_6bde036
#define public_6bde04c _public_6bde04c
#define public_6bde06d _public_6bde06d
#define public_6bde083 _public_6bde083
#define public_6bde0a5 _public_6bde0a5
#define public_6bde0bb _public_6bde0bb
#define public_6bde0e0 _public_6bde0e0
#define public_6bde0f7 _public_6bde0f7
#define public_6bde137 _public_6bde137
#define public_6bde15d _public_6bde15d
#define public_6bde18a _public_6bde18a
#define public_6bde1cc _public_6bde1cc
#define public_6bde1f4 _public_6bde1f4
#define public_6bde222 _public_6bde222
#define public_6bde250 _public_6bde250
#define public_6bde2b4 _public_6bde2b4
#define public_6bde30a _public_6bde30a
#define public_6bde34a _public_6bde34a
#define public_6bde35f _public_6bde35f
#define public_6bde389 _public_6bde389
#define public_6bde3b1 _public_6bde3b1
#define public_6bde3c5 _public_6bde3c5
#define public_6bde3d4 _public_6bde3d4
#define public_6bde3e0 _public_6bde3e0
#define public_6bde413 _public_6bde413

PROC_DECLARE(0x6bddfd0, internal_6bddfd0, public_6bddfd0);
extern "C" NAKED register_t __cdecl internal_6bddfd0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0x28
        push ebx
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0x34]
        push esi
        lea esi, ss:[ebp+0x10]
        push edi
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+0xC], 0
        mov eax, dword ptr ss : [ebp+0x14]
        push esi
        push eax
        lea edi, ss:[ebp+0x18]
        push edi
        mov ecx, ebp
        call public_6bebe50
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6bde01f
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x28
        ret 0xC
        public_6bde01f : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bde036
        mov dword ptr ds : [esi+0xC], 0x16
        public_6bde036 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6bde04c
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x28
        ret 0xC
        public_6bde04c : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ss : [ebp+0x20]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [edi], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bde06d
        mov dword ptr ds : [esi+0xC], 0x16
        public_6bde06d : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6bde083
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x28
        ret 0xC
        public_6bde083 : nop
        mov eax, dword ptr ds : [edi]
        mov dl, byte ptr ss : [ebp+0x24]
        mov byte ptr ds : [eax], dl
        mov cl, byte ptr ss : [ebp+0x30]
        inc eax
        mov dword ptr ds : [edi], eax
        mov ebx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        inc ebx
        mov eax, ebx
        cmp eax, edx
        mov dword ptr ds : [esi], ebx
        jbe public_6bde0a5
        mov dword ptr ds : [esi+0xC], 0x16
        public_6bde0a5 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6bde0bb
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x28
        ret 0xC
        public_6bde0bb : nop
        mov eax, dword ptr ds : [edi]
        mov byte ptr ds : [eax], cl
        inc eax
        test cl, cl
        mov dword ptr ds : [edi], eax
        jbe public_6bde3b1
        mov eax, dword ptr ss : [ebp+0x2C]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        mov dword ptr ss : [esp+0x40], ecx
        je public_6bde3b1
        nop 
        lea esp, ss:[esp]
        public_6bde0e0 : nop
        mov ebx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebx, 4
        mov eax, ebx
        cmp eax, edx
        mov dword ptr ds : [esi], ebx
        jbe public_6bde0f7
        mov dword ptr ds : [esi+0xC], 0x16
        public_6bde0f7 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6bde3c5
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [ecx+8]
        mov ebx, dword ptr ds : [public_6c0b00c]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ss : [esp+0x40]
        add eax, 4
        mov dword ptr ds : [edi], eax
        mov eax, dword ptr ds : [edx+0xC]
        push eax
        call ebx
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ecx, 2
        add esp, 4
        cmp ecx, edx
        mov dword ptr ds : [esi], ecx
        mov edx, 0x16
        jbe public_6bde137
        mov dword ptr ds : [esi+0xC], edx
        public_6bde137 : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        jne public_6bde3d4
        mov ecx, dword ptr ds : [edi]
        mov word ptr ds : [ecx], ax
        add ecx, 2
        mov dword ptr ds : [edi], ecx
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add eax, 4
        cmp eax, ecx
        mov dword ptr ds : [esi], eax
        jbe public_6bde15d
        mov dword ptr ds : [esi+0xC], edx
        public_6bde15d : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6bde3d4
        mov ecx, dword ptr ss : [esp+0x40]
        fld dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ds : [edi]
        add eax, 4
        fstp dword ptr ds : [eax-4]
        mov dword ptr ds : [edi], eax
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add eax, 2
        cmp eax, ecx
        mov dword ptr ds : [esi], eax
        jbe public_6bde18a
        mov dword ptr ds : [esi+0xC], edx
        public_6bde18a : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6bde3d4
        mov edx, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ds : [edi]
        mov cx, word ptr ds : [edx+0x14]
        mov word ptr ds : [eax], cx
        mov edx, dword ptr ss : [esp+0x40]
        add eax, 2
        mov dword ptr ds : [edi], eax
        mov eax, dword ptr ds : [edx+0x18]
        push eax
        call ebx
        mov ebx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebx, 2
        mov ecx, ebx
        add esp, 4
        cmp ecx, edx
        mov dword ptr ds : [esi], ebx
        mov edx, 0x16
        jbe public_6bde1cc
        mov dword ptr ds : [esi+0xC], edx
        public_6bde1cc : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        jne public_6bde3d4
        mov ecx, dword ptr ds : [edi]
        mov word ptr ds : [ecx], ax
        add ecx, 2
        mov dword ptr ds : [edi], ecx
        mov ebx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add ebx, 4
        mov eax, ebx
        cmp eax, ecx
        mov dword ptr ds : [esi], ebx
        jbe public_6bde1f4
        mov dword ptr ds : [esi+0xC], edx
        public_6bde1f4 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6bde3d4
        mov ecx, dword ptr ss : [esp+0x40]
        fld dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [edi]
        fstp dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [edi], eax
        mov ebx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add ebx, 4
        mov eax, ebx
        cmp eax, ecx
        mov dword ptr ds : [esi], ebx
        jbe public_6bde222
        mov dword ptr ds : [esi+0xC], edx
        public_6bde222 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6bde3d4
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ds : [ecx+0x20]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [edi], eax
        mov ebx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add ebx, 0xC
        mov eax, ebx
        cmp eax, ecx
        mov dword ptr ds : [esi], ebx
        jbe public_6bde250
        mov dword ptr ds : [esi+0xC], edx
        public_6bde250 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6bde3d4
        lea ecx, ss:[esp+0x40]
        call public_6bde8f0
        mov edx, dword ptr ds : [eax+0x1C]
        mov ecx, dword ptr ds : [eax+0x20]
        mov ebx, dword ptr ds : [edi]
        add eax, 0x1C
        mov dword ptr ss : [esp+0x10], edx
        mov edx, dword ptr ds : [eax+8]
        lea eax, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x14], ecx
        push eax
        mov ecx, ebx
        mov dword ptr ss : [esp+0x1C], edx
        call public_6bda4c0
        add ebx, 0xC
        mov dword ptr ds : [edi], ebx
        call dword ptr ds : [public_6c0b080]
        test al, al
        je public_6bde34a
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0xC
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bde2b4
        mov dword ptr ds : [esi+0xC], 0x16
        public_6bde2b4 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6bde3c5
        lea ecx, ss:[esp+0x40]
        call public_6bde8f0
        mov ecx, dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [eax+0x2C]
        mov ebx, dword ptr ds : [edi]
        add eax, 0x28
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x1C], ecx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x24], edx
        mov dword ptr ss : [esp+0x28], eax
        call public_6bda4c0
        add ebx, 0xC
        mov dword ptr ds : [edi], ebx
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0x10
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bde30a
        mov dword ptr ds : [esi+0xC], 0x16
        public_6bde30a : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6bde3c5
        mov edx, dword ptr ss : [esp+0x40]
        mov ebx, dword ptr ds : [edi]
        add edx, 0x3C
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x2C], ecx
        mov ecx, dword ptr ds : [edx+0xC]
        lea edx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x34], ecx
        push edx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x34], eax
        call public_6bda220
        add ebx, 0x10
        mov dword ptr ds : [edi], ebx
        public_6bde34a : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bde35f
        mov dword ptr ds : [esi+0xC], 0x16
        public_6bde35f : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6bde3c5
        mov ecx, dword ptr ss : [esp+0x40]
        mov dl, byte ptr ds : [ecx+0x4C]
        mov eax, dword ptr ds : [edi]
        mov byte ptr ds : [eax], dl
        inc eax
        mov dword ptr ds : [edi], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bde389
        mov dword ptr ds : [esi+0xC], 0x16
        public_6bde389 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6bde3c5
        mov ecx, dword ptr ss : [esp+0x40]
        mov dl, byte ptr ds : [ecx+0x4D]
        mov eax, dword ptr ds : [edi]
        mov byte ptr ds : [eax], dl
        inc eax
        mov dword ptr ds : [edi], eax
        mov eax, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, dword ptr ss : [ebp+0x2C]
        mov dword ptr ss : [esp+0x40], ecx
        jne public_6bde0e0
        public_6bde3b1 : nop
        mov ecx, dword ptr ss : [ebp+0x14]
        push esi
        push ecx
        push edi
        mov ecx, ebp
        call public_6bebea0
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6bde3e0
        public_6bde3c5 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x28
        ret 0xC
        public_6bde3d4 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, edx
        pop ebx
        add esp, 0x28
        ret 0xC
        public_6bde3e0 : nop
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ss : [esp+0x44]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ss : [ebp+0xC]
        push ecx
        call public_6bec3b0
        mov ecx, eax
        mov ebp, dword ptr ds : [ecx]
        mov ebx, dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ds : [ecx+0x10]
        add esp, 4
        inc ebp
        mov dword ptr ds : [ecx], ebp
        mov edx, dword ptr ds : [esi]
        add ebx, edx
        mov dword ptr ds : [ecx+0x18], ebx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        mov edi, ebp
        jbe public_6bde413
        mov dword ptr ds : [ecx+0x10], esi
        public_6bde413 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        add esp, 0x28
        ret 0xC
        UNREACHABLE_TRAP(0x6bddfd0)
    }
}

#undef public_6bde01f
#undef public_6bde036
#undef public_6bde04c
#undef public_6bde06d
#undef public_6bde083
#undef public_6bde0a5
#undef public_6bde0bb
#undef public_6bde0e0
#undef public_6bde0f7
#undef public_6bde137
#undef public_6bde15d
#undef public_6bde18a
#undef public_6bde1cc
#undef public_6bde1f4
#undef public_6bde222
#undef public_6bde250
#undef public_6bde2b4
#undef public_6bde30a
#undef public_6bde34a
#undef public_6bde35f
#undef public_6bde389
#undef public_6bde3b1
#undef public_6bde3c5
#undef public_6bde3d4
#undef public_6bde3e0
#undef public_6bde413
