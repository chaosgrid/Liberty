#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec4920);
CLANG_FORWARD_PROC_SYMBOL(public_6ec6710);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);

#define public_6ec4944 _public_6ec4944
#define public_6ec4962 _public_6ec4962
#define public_6ec496d _public_6ec496d
#define public_6ec4976 _public_6ec4976
#define public_6ec4981 _public_6ec4981
#define public_6ec499d _public_6ec499d
#define public_6ec49b4 _public_6ec49b4
#define public_6ec49c1 _public_6ec49c1
#define public_6ec49cc _public_6ec49cc
#define public_6ec49cf _public_6ec49cf
#define public_6ec49e7 _public_6ec49e7
#define public_6ec49f2 _public_6ec49f2
#define public_6ec49f5 _public_6ec49f5
#define public_6ec4a0a _public_6ec4a0a
#define public_6ec4a15 _public_6ec4a15
#define public_6ec4a20 _public_6ec4a20
#define public_6ec4a23 _public_6ec4a23
#define public_6ec4a37 _public_6ec4a37
#define public_6ec4a43 _public_6ec4a43
#define public_6ec4a4f _public_6ec4a4f
#define public_6ec4a52 _public_6ec4a52
#define public_6ec4a70 _public_6ec4a70
#define public_6ec4aaf _public_6ec4aaf
#define public_6ec4ac2 _public_6ec4ac2
#define public_6ec4acd _public_6ec4acd
#define public_6ec4ad0 _public_6ec4ad0
#define public_6ec4adb _public_6ec4adb
#define public_6ec4aee _public_6ec4aee
#define public_6ec4b15 _public_6ec4b15
#define public_6ec4b2f _public_6ec4b2f
#define public_6ec4b55 _public_6ec4b55
#define public_6ec4b68 _public_6ec4b68
#define public_6ec4b75 _public_6ec4b75
#define public_6ec4b77 _public_6ec4b77
#define public_6ec4b82 _public_6ec4b82
#define public_6ec4b99 _public_6ec4b99
#define public_6ec4bb1 _public_6ec4bb1
#define public_6ec4bbe _public_6ec4bbe
#define public_6ec4bc0 _public_6ec4bc0
#define public_6ec4bcc _public_6ec4bcc
#define public_6ec4bf6 _public_6ec4bf6
#define public_6ec4c0e _public_6ec4c0e
#define public_6ec4c1e _public_6ec4c1e
#define public_6ec4c28 _public_6ec4c28
#define public_6ec4c4b _public_6ec4c4b
#define public_6ec4c5e _public_6ec4c5e
#define public_6ec4c69 _public_6ec4c69
#define public_6ec4c6c _public_6ec4c6c
#define public_6ec4c76 _public_6ec4c76
#define public_6ec4c9f _public_6ec4c9f
#define public_6ec4cb2 _public_6ec4cb2
#define public_6ec4cbf _public_6ec4cbf
#define public_6ec4cc1 _public_6ec4cc1
#define public_6ec4cc4 _public_6ec4cc4
#define public_6ec4ccb _public_6ec4ccb
#define public_6ec4cce _public_6ec4cce
#define public_6ec4cf6 _public_6ec4cf6
#define public_6ec4cff _public_6ec4cff

PROC_DECLARE(0x6ec4920, internal_6ec4920, public_6ec4920);
extern "C" NAKED register_t __cdecl internal_6ec4920()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        push edi
        mov edi, ecx
        lea ecx, ss:[esp+0x1C]
        call public_6ec6710
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6ec4962
        mov eax, dword ptr ds : [esi+8]
        public_6ec4944 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6ec49e7
        mov dword ptr ds : [ecx+4], eax
        jmp public_6ec49f5
        public_6ec4962 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6ec496d
        mov eax, edx
        jmp public_6ec4944
        public_6ec496d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x49]
        test bl, bl
        jne public_6ec4981
        public_6ec4976 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x49]
        test bl, bl
        je public_6ec4976
        public_6ec4981 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6ec4944
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6ec499d
        mov dword ptr ds : [eax+4], ecx
        jmp public_6ec49b4
        public_6ec499d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6ec49b4 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6ec49c1
        mov dword ptr ds : [edx+4], ecx
        jmp public_6ec49cf
        public_6ec49c1 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6ec49cc
        mov dword ptr ds : [edx], ecx
        jmp public_6ec49cf
        public_6ec49cc : nop
        mov dword ptr ds : [edx+8], ecx
        public_6ec49cf : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x48]
        mov dl, byte ptr ds : [ecx+0x48]
        mov byte ptr ds : [ecx+0x48], bl
        mov byte ptr ds : [esi+0x48], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6ec4a52
        public_6ec49e7 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6ec49f2
        mov dword ptr ds : [ecx], eax
        jmp public_6ec49f5
        public_6ec49f2 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6ec49f5 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6ec4a23
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6ec4a0a
        mov edx, dword ptr ds : [esi+4]
        jmp public_6ec4a20
        public_6ec4a0a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x49]
        test bl, bl
        mov edx, eax
        jne public_6ec4a20
        public_6ec4a15 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x49]
        test bl, bl
        je public_6ec4a15
        public_6ec4a20 : nop
        mov dword ptr ss : [ebp], edx
        public_6ec4a23 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6ec4a52
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6ec4a37
        mov edx, dword ptr ds : [esi+4]
        jmp public_6ec4a4f
        public_6ec4a37 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x49]
        test bl, bl
        mov edx, eax
        jne public_6ec4a4f
        public_6ec4a43 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x49]
        test bl, bl
        je public_6ec4a43
        public_6ec4a4f : nop
        mov dword ptr ss : [ebp+8], edx
        public_6ec4a52 : nop
        mov ebp, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ss : [ebp+0x48]
        mov bl, 1
        cmp cl, bl
        jne public_6ec4cce
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_6ec4ccb
        nop 
        public_6ec4a70 : nop
        cmp byte ptr ds : [eax+0x48], bl
        jne public_6ec4ccb
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6ec4b2f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x48]
        test dl, dl
        jne public_6ec4adb
        mov byte ptr ds : [ecx+0x48], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x48], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ec4aaf
        mov dword ptr ds : [esi+4], ecx
        public_6ec4aaf : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ec4ac2
        mov dword ptr ds : [esi+4], edx
        jmp public_6ec4ad0
        public_6ec4ac2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6ec4acd
        mov dword ptr ds : [esi], edx
        jmp public_6ec4ad0
        public_6ec4acd : nop
        mov dword ptr ds : [esi+8], edx
        public_6ec4ad0 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6ec4adb : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x48], bl
        jne public_6ec4aee
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x48], bl
        je public_6ec4b99
        public_6ec4aee : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x48], bl
        jne public_6ec4bcc
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x48], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x48], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ec4b15
        mov dword ptr ds : [esi+4], ecx
        public_6ec4b15 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ec4bb1
        mov dword ptr ds : [esi+4], edx
        jmp public_6ec4bc0
        public_6ec4b2f : nop
        mov dl, byte ptr ds : [ecx+0x48]
        test dl, dl
        jne public_6ec4b82
        mov byte ptr ds : [ecx+0x48], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x48], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ec4b55
        mov dword ptr ds : [esi+4], ecx
        public_6ec4b55 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ec4b68
        mov dword ptr ds : [esi+4], edx
        jmp public_6ec4b77
        public_6ec4b68 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6ec4b75
        mov dword ptr ds : [esi+8], edx
        jmp public_6ec4b77
        public_6ec4b75 : nop
        mov dword ptr ds : [esi], edx
        public_6ec4b77 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6ec4b82 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x48], bl
        jne public_6ec4c28
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x48], bl
        jne public_6ec4c28
        public_6ec4b99 : nop
        mov byte ptr ds : [ecx+0x48], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6ec4a70
        jmp public_6ec4ccb
        public_6ec4bb1 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6ec4bbe
        mov dword ptr ds : [esi+8], edx
        jmp public_6ec4bc0
        public_6ec4bbe : nop
        mov dword ptr ds : [esi], edx
        public_6ec4bc0 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6ec4bcc : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x48]
        mov byte ptr ds : [ecx+0x48], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x48], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x48], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ec4bf6
        mov dword ptr ds : [esi+4], ecx
        public_6ec4bf6 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ec4c0e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6ec4cc4
        public_6ec4c0e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6ec4c1e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6ec4cc4
        public_6ec4c1e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6ec4cc4
        public_6ec4c28 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x48], bl
        jne public_6ec4c76
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x48], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x48], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ec4c4b
        mov dword ptr ds : [esi+4], ecx
        public_6ec4c4b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ec4c5e
        mov dword ptr ds : [esi+4], edx
        jmp public_6ec4c6c
        public_6ec4c5e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6ec4c69
        mov dword ptr ds : [esi], edx
        jmp public_6ec4c6c
        public_6ec4c69 : nop
        mov dword ptr ds : [esi+8], edx
        public_6ec4c6c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6ec4c76 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x48]
        mov byte ptr ds : [ecx+0x48], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x48], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x48], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ec4c9f
        mov dword ptr ds : [esi+4], ecx
        public_6ec4c9f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ec4cb2
        mov dword ptr ds : [esi+4], edx
        jmp public_6ec4cc1
        public_6ec4cb2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6ec4cbf
        mov dword ptr ds : [esi+8], edx
        jmp public_6ec4cc1
        public_6ec4cbf : nop
        mov dword ptr ds : [esi], edx
        public_6ec4cc1 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6ec4cc4 : nop
        mov ebp, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+4], edx
        public_6ec4ccb : nop
        mov byte ptr ds : [eax+0x48], bl
        public_6ec4cce : nop
        cmp dword ptr ds : [public_6ed57e0], 0x7FFFFFFF
        jge public_6ec4cf6
        mov edx, dword ptr ds : [public_6ed57d4]
        mov dword ptr ss : [ebp], edx
        mov eax, dword ptr ds : [public_6ed57e0]
        inc eax
        mov dword ptr ds : [public_6ed57d4], ebp
        mov dword ptr ds : [public_6ed57e0], eax
        jmp public_6ec4cff
        public_6ec4cf6 : nop
        push ebp
        call public_6ed0c50
        add esp, 4
        public_6ec4cff : nop
        mov eax, dword ptr ds : [edi+0x10]
        mov ecx, dword ptr ss : [esp+0x1C]
        dec eax
        mov dword ptr ds : [edi+0x10], eax
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6ec4920)
    }
}

#undef public_6ec4944
#undef public_6ec4962
#undef public_6ec496d
#undef public_6ec4976
#undef public_6ec4981
#undef public_6ec499d
#undef public_6ec49b4
#undef public_6ec49c1
#undef public_6ec49cc
#undef public_6ec49cf
#undef public_6ec49e7
#undef public_6ec49f2
#undef public_6ec49f5
#undef public_6ec4a0a
#undef public_6ec4a15
#undef public_6ec4a20
#undef public_6ec4a23
#undef public_6ec4a37
#undef public_6ec4a43
#undef public_6ec4a4f
#undef public_6ec4a52
#undef public_6ec4a70
#undef public_6ec4aaf
#undef public_6ec4ac2
#undef public_6ec4acd
#undef public_6ec4ad0
#undef public_6ec4adb
#undef public_6ec4aee
#undef public_6ec4b15
#undef public_6ec4b2f
#undef public_6ec4b55
#undef public_6ec4b68
#undef public_6ec4b75
#undef public_6ec4b77
#undef public_6ec4b82
#undef public_6ec4b99
#undef public_6ec4bb1
#undef public_6ec4bbe
#undef public_6ec4bc0
#undef public_6ec4bcc
#undef public_6ec4bf6
#undef public_6ec4c0e
#undef public_6ec4c1e
#undef public_6ec4c28
#undef public_6ec4c4b
#undef public_6ec4c5e
#undef public_6ec4c69
#undef public_6ec4c6c
#undef public_6ec4c76
#undef public_6ec4c9f
#undef public_6ec4cb2
#undef public_6ec4cbf
#undef public_6ec4cc1
#undef public_6ec4cc4
#undef public_6ec4ccb
#undef public_6ec4cce
#undef public_6ec4cf6
#undef public_6ec4cff
