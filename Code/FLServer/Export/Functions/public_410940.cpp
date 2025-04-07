#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_410940);
CLANG_FORWARD_PROC_SYMBOL(public_411a70);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_410964 _public_410964
#define public_410982 _public_410982
#define public_41098d _public_41098d
#define public_410996 _public_410996
#define public_4109a1 _public_4109a1
#define public_4109bd _public_4109bd
#define public_4109d4 _public_4109d4
#define public_4109e1 _public_4109e1
#define public_4109ec _public_4109ec
#define public_4109ef _public_4109ef
#define public_410a07 _public_410a07
#define public_410a12 _public_410a12
#define public_410a15 _public_410a15
#define public_410a2a _public_410a2a
#define public_410a35 _public_410a35
#define public_410a40 _public_410a40
#define public_410a43 _public_410a43
#define public_410a57 _public_410a57
#define public_410a63 _public_410a63
#define public_410a6f _public_410a6f
#define public_410a72 _public_410a72
#define public_410a90 _public_410a90
#define public_410acf _public_410acf
#define public_410ae2 _public_410ae2
#define public_410aed _public_410aed
#define public_410af0 _public_410af0
#define public_410afb _public_410afb
#define public_410b0e _public_410b0e
#define public_410b35 _public_410b35
#define public_410b4f _public_410b4f
#define public_410b75 _public_410b75
#define public_410b88 _public_410b88
#define public_410b95 _public_410b95
#define public_410b97 _public_410b97
#define public_410ba2 _public_410ba2
#define public_410bb9 _public_410bb9
#define public_410bd1 _public_410bd1
#define public_410bde _public_410bde
#define public_410be0 _public_410be0
#define public_410bec _public_410bec
#define public_410c16 _public_410c16
#define public_410c2e _public_410c2e
#define public_410c3e _public_410c3e
#define public_410c48 _public_410c48
#define public_410c6b _public_410c6b
#define public_410c7e _public_410c7e
#define public_410c89 _public_410c89
#define public_410c8c _public_410c8c
#define public_410c96 _public_410c96
#define public_410cbf _public_410cbf
#define public_410cd2 _public_410cd2
#define public_410cdf _public_410cdf
#define public_410ce1 _public_410ce1
#define public_410ce4 _public_410ce4
#define public_410ce7 _public_410ce7
#define public_410cea _public_410cea

PROC_DECLARE(0x410940, internal_410940, public_410940);
extern "C" NAKED register_t __cdecl internal_410940()
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
        call public_411a70
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_410982
        mov eax, dword ptr ds : [esi+8]
        public_410964 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_410a07
        mov dword ptr ds : [ecx+4], eax
        jmp public_410a15
        public_410982 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_41098d
        mov eax, edx
        jmp public_410964
        public_41098d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_4109a1
        public_410996 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_410996
        public_4109a1 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_410964
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_4109bd
        mov dword ptr ds : [eax+4], ecx
        jmp public_4109d4
        public_4109bd : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_4109d4 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_4109e1
        mov dword ptr ds : [edx+4], ecx
        jmp public_4109ef
        public_4109e1 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_4109ec
        mov dword ptr ds : [edx], ecx
        jmp public_4109ef
        public_4109ec : nop
        mov dword ptr ds : [edx+8], ecx
        public_4109ef : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x14]
        mov dl, byte ptr ds : [ecx+0x14]
        mov byte ptr ds : [ecx+0x14], bl
        mov byte ptr ds : [esi+0x14], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_410a72
        public_410a07 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_410a12
        mov dword ptr ds : [ecx], eax
        jmp public_410a15
        public_410a12 : nop
        mov dword ptr ds : [ecx+8], eax
        public_410a15 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_410a43
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_410a2a
        mov edx, dword ptr ds : [esi+4]
        jmp public_410a40
        public_410a2a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        mov edx, eax
        jne public_410a40
        public_410a35 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        je public_410a35
        public_410a40 : nop
        mov dword ptr ss : [ebp], edx
        public_410a43 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_410a72
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_410a57
        mov edx, dword ptr ds : [esi+4]
        jmp public_410a6f
        public_410a57 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        mov edx, eax
        jne public_410a6f
        public_410a63 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        je public_410a63
        public_410a6f : nop
        mov dword ptr ss : [ebp+8], edx
        public_410a72 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dl, byte ptr ds : [ecx+0x14]
        mov bl, 1
        cmp dl, bl
        jne public_410cea
        mov edx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [edx+4]
        je public_410ce7
        nop 
        public_410a90 : nop
        cmp byte ptr ds : [eax+0x14], bl
        jne public_410ce7
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_410b4f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_410afb
        mov byte ptr ds : [ecx+0x14], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_410acf
        mov dword ptr ds : [esi+4], ecx
        public_410acf : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_410ae2
        mov dword ptr ds : [esi+4], edx
        jmp public_410af0
        public_410ae2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_410aed
        mov dword ptr ds : [esi], edx
        jmp public_410af0
        public_410aed : nop
        mov dword ptr ds : [esi+8], edx
        public_410af0 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+8]
        public_410afb : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_410b0e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        je public_410bb9
        public_410b0e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_410bec
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x14], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x14], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_410b35
        mov dword ptr ds : [esi+4], ecx
        public_410b35 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_410bd1
        mov dword ptr ds : [esi+4], edx
        jmp public_410be0
        public_410b4f : nop
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_410ba2
        mov byte ptr ds : [ecx+0x14], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_410b75
        mov dword ptr ds : [esi+4], ecx
        public_410b75 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_410b88
        mov dword ptr ds : [esi+4], edx
        jmp public_410b97
        public_410b88 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_410b95
        mov dword ptr ds : [esi+8], edx
        jmp public_410b97
        public_410b95 : nop
        mov dword ptr ds : [esi], edx
        public_410b97 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_410ba2 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_410c48
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_410c48
        public_410bb9 : nop
        mov byte ptr ds : [ecx+0x14], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_410a90
        jmp public_410ce7
        public_410bd1 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_410bde
        mov dword ptr ds : [esi+8], edx
        jmp public_410be0
        public_410bde : nop
        mov dword ptr ds : [esi], edx
        public_410be0 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_410bec : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x14]
        mov byte ptr ds : [ecx+0x14], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x14], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x14], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_410c16
        mov dword ptr ds : [esi+4], ecx
        public_410c16 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_410c2e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_410ce4
        public_410c2e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_410c3e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_410ce4
        public_410c3e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_410ce4
        public_410c48 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_410c96
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x14], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x14], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_410c6b
        mov dword ptr ds : [esi+4], ecx
        public_410c6b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_410c7e
        mov dword ptr ds : [esi+4], edx
        jmp public_410c8c
        public_410c7e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_410c89
        mov dword ptr ds : [esi], edx
        jmp public_410c8c
        public_410c89 : nop
        mov dword ptr ds : [esi+8], edx
        public_410c8c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_410c96 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x14]
        mov byte ptr ds : [ecx+0x14], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x14], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x14], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_410cbf
        mov dword ptr ds : [esi+4], ecx
        public_410cbf : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_410cd2
        mov dword ptr ds : [esi+4], edx
        jmp public_410ce1
        public_410cd2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_410cdf
        mov dword ptr ds : [esi+8], edx
        jmp public_410ce1
        public_410cdf : nop
        mov dword ptr ds : [esi], edx
        public_410ce1 : nop
        mov dword ptr ds : [edx+8], ecx
        public_410ce4 : nop
        mov dword ptr ds : [ecx+4], edx
        public_410ce7 : nop
        mov byte ptr ds : [eax+0x14], bl
        public_410cea : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        call public_418978
        mov eax, dword ptr ds : [edi+0x10]
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 4
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
        UNREACHABLE_TRAP(0x410940)
    }
}

#undef public_410964
#undef public_410982
#undef public_41098d
#undef public_410996
#undef public_4109a1
#undef public_4109bd
#undef public_4109d4
#undef public_4109e1
#undef public_4109ec
#undef public_4109ef
#undef public_410a07
#undef public_410a12
#undef public_410a15
#undef public_410a2a
#undef public_410a35
#undef public_410a40
#undef public_410a43
#undef public_410a57
#undef public_410a63
#undef public_410a6f
#undef public_410a72
#undef public_410a90
#undef public_410acf
#undef public_410ae2
#undef public_410aed
#undef public_410af0
#undef public_410afb
#undef public_410b0e
#undef public_410b35
#undef public_410b4f
#undef public_410b75
#undef public_410b88
#undef public_410b95
#undef public_410b97
#undef public_410ba2
#undef public_410bb9
#undef public_410bd1
#undef public_410bde
#undef public_410be0
#undef public_410bec
#undef public_410c16
#undef public_410c2e
#undef public_410c3e
#undef public_410c48
#undef public_410c6b
#undef public_410c7e
#undef public_410c89
#undef public_410c8c
#undef public_410c96
#undef public_410cbf
#undef public_410cd2
#undef public_410cdf
#undef public_410ce1
#undef public_410ce4
#undef public_410ce7
#undef public_410cea
