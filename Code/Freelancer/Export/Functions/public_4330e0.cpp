#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4330e0);
CLANG_FORWARD_PROC_SYMBOL(public_433bc0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_433149 _public_433149
#define public_43315d _public_43315d
#define public_433163 _public_433163
#define public_433171 _public_433171
#define public_4331b2 _public_4331b2
#define public_4331cb _public_4331cb
#define public_4331de _public_4331de
#define public_4331e9 _public_4331e9
#define public_4331ec _public_4331ec
#define public_4331f1 _public_4331f1
#define public_43321a _public_43321a
#define public_433233 _public_433233
#define public_433246 _public_433246
#define public_433250 _public_433250
#define public_433273 _public_433273
#define public_43328b _public_43328b
#define public_43329e _public_43329e
#define public_4332ab _public_4332ab
#define public_4332ad _public_4332ad
#define public_4332b3 _public_4332b3
#define public_4332dc _public_4332dc
#define public_4332ef _public_4332ef
#define public_4332fa _public_4332fa
#define public_4332fd _public_4332fd
#define public_4332ff _public_4332ff
#define public_433302 _public_433302
#define public_43330e _public_43330e

PROC_DECLARE(0x4330e0, internal_4330e0, public_4330e0);
extern "C" NAKED register_t __cdecl internal_4330e0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x64
        mov esi, ecx
        call public_5b7e84
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x60], 0
        mov byte ptr ds : [ebx+0x61], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_433bc0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_433149
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_433149
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_433149
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_433163
        mov dword ptr ds : [eax+8], ebx
        jmp public_433163
        public_433149 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_43315d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_433163
        public_43315d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_433163
        mov dword ptr ds : [eax], ebx
        public_433163 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_43330e
        public_433171 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x60]
        test dl, dl
        jne public_43330e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_433250
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x60], 0
        jne public_4331b2
        mov byte ptr ds : [ecx+0x60], 1
        mov byte ptr ds : [edx+0x60], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x60], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_433302
        public_4331b2 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_4331f1
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_4331cb
        mov dword ptr ds : [edx+4], eax
        public_4331cb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_4331de
        mov dword ptr ds : [edx+4], ecx
        jmp public_4331ec
        public_4331de : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_4331e9
        mov dword ptr ds : [edx], ecx
        jmp public_4331ec
        public_4331e9 : nop
        mov dword ptr ds : [edx+8], ecx
        public_4331ec : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_4331f1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x60], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x60], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_43321a
        mov dword ptr ds : [edi+4], ecx
        public_43321a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_433233
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_4332ff
        public_433233 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_433246
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_4332ff
        public_433246 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_4332ff
        public_433250 : nop
        cmp byte ptr ds : [edx+0x60], 0
        jne public_433273
        mov byte ptr ds : [ecx+0x60], 1
        mov byte ptr ds : [edx+0x60], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x60], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_433302
        public_433273 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_4332b3
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_43328b
        mov dword ptr ds : [edx+4], eax
        public_43328b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_43329e
        mov dword ptr ds : [edx+4], ecx
        jmp public_4332ad
        public_43329e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_4332ab
        mov dword ptr ds : [edx+8], ecx
        jmp public_4332ad
        public_4332ab : nop
        mov dword ptr ds : [edx], ecx
        public_4332ad : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_4332b3 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x60], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x60], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_4332dc
        mov dword ptr ds : [edi+4], ecx
        public_4332dc : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_4332ef
        mov dword ptr ds : [edi+4], edx
        jmp public_4332fd
        public_4332ef : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_4332fa
        mov dword ptr ds : [edi], edx
        jmp public_4332fd
        public_4332fa : nop
        mov dword ptr ds : [edi+8], edx
        public_4332fd : nop
        mov dword ptr ds : [edx], ecx
        public_4332ff : nop
        mov dword ptr ds : [ecx+4], edx
        public_433302 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_433171
        public_43330e : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x60], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x4330e0)
    }
}

#undef public_433149
#undef public_43315d
#undef public_433163
#undef public_433171
#undef public_4331b2
#undef public_4331cb
#undef public_4331de
#undef public_4331e9
#undef public_4331ec
#undef public_4331f1
#undef public_43321a
#undef public_433233
#undef public_433246
#undef public_433250
#undef public_433273
#undef public_43328b
#undef public_43329e
#undef public_4332ab
#undef public_4332ad
#undef public_4332b3
#undef public_4332dc
#undef public_4332ef
#undef public_4332fa
#undef public_4332fd
#undef public_4332ff
#undef public_433302
#undef public_43330e
