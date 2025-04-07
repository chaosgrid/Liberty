#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622a1f0);
CLANG_FORWARD_PROC_SYMBOL(public_622b0e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_622a25d _public_622a25d
#define public_622a271 _public_622a271
#define public_622a277 _public_622a277
#define public_622a285 _public_622a285
#define public_622a2c6 _public_622a2c6
#define public_622a2df _public_622a2df
#define public_622a2f2 _public_622a2f2
#define public_622a2fd _public_622a2fd
#define public_622a300 _public_622a300
#define public_622a305 _public_622a305
#define public_622a32e _public_622a32e
#define public_622a347 _public_622a347
#define public_622a35a _public_622a35a
#define public_622a364 _public_622a364
#define public_622a387 _public_622a387
#define public_622a39f _public_622a39f
#define public_622a3b2 _public_622a3b2
#define public_622a3bf _public_622a3bf
#define public_622a3c1 _public_622a3c1
#define public_622a3c7 _public_622a3c7
#define public_622a3f0 _public_622a3f0
#define public_622a403 _public_622a403
#define public_622a40e _public_622a40e
#define public_622a411 _public_622a411
#define public_622a413 _public_622a413
#define public_622a416 _public_622a416
#define public_622a422 _public_622a422

PROC_DECLARE(0x622a1f0, internal_622a1f0, public_622a1f0);
extern "C" NAKED register_t __cdecl internal_622a1f0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x18
        mov esi, ecx
        call public_624612c
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        push ebp
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x14], 0
        mov byte ptr ds : [ebx+0x15], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        mov dword ptr ds : [ebx+8], ecx
        push edx
        call public_622b0e0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_622a25d
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [esi+8]
        cmp eax, ecx
        jne public_622a25d
        mov ecx, dword ptr ss : [ebp]
        mov eax, dword ptr ds : [edi+0xC]
        cmp ecx, eax
        jb public_622a25d
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_622a277
        mov dword ptr ds : [eax+8], ebx
        jmp public_622a277
        public_622a25d : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_622a271
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_622a277
        public_622a271 : nop
        cmp edi, dword ptr ds : [eax]
        jne public_622a277
        mov dword ptr ds : [eax], ebx
        public_622a277 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov eax, ebx
        cmp ebx, dword ptr ds : [ecx+4]
        je public_622a422
        public_622a285 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_622a422
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_622a364
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x14], 0
        jne public_622a2c6
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_622a416
        public_622a2c6 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_622a305
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_622a2df
        mov dword ptr ds : [edx+4], eax
        public_622a2df : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_622a2f2
        mov dword ptr ds : [edx+4], ecx
        jmp public_622a300
        public_622a2f2 : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_622a2fd
        mov dword ptr ds : [edx], ecx
        jmp public_622a300
        public_622a2fd : nop
        mov dword ptr ds : [edx+8], ecx
        public_622a300 : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_622a305 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_622a32e
        mov dword ptr ds : [edi+4], ecx
        public_622a32e : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_622a347
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_622a413
        public_622a347 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_622a35a
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_622a413
        public_622a35a : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_622a413
        public_622a364 : nop
        cmp byte ptr ds : [edx+0x14], 0
        jne public_622a387
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x14], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_622a416
        public_622a387 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_622a3c7
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_622a39f
        mov dword ptr ds : [edx+4], eax
        public_622a39f : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_622a3b2
        mov dword ptr ds : [edx+4], ecx
        jmp public_622a3c1
        public_622a3b2 : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_622a3bf
        mov dword ptr ds : [edx+8], ecx
        jmp public_622a3c1
        public_622a3bf : nop
        mov dword ptr ds : [edx], ecx
        public_622a3c1 : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_622a3c7 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_622a3f0
        mov dword ptr ds : [edi+4], ecx
        public_622a3f0 : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_622a403
        mov dword ptr ds : [edi+4], edx
        jmp public_622a411
        public_622a403 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_622a40e
        mov dword ptr ds : [edi], edx
        jmp public_622a411
        public_622a40e : nop
        mov dword ptr ds : [edi+8], edx
        public_622a411 : nop
        mov dword ptr ds : [edx], ecx
        public_622a413 : nop
        mov dword ptr ds : [ecx+4], edx
        public_622a416 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_622a285
        public_622a422 : nop
        mov edx, dword ptr ds : [esi+4]
        pop edi
        pop esi
        pop ebp
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x14], 1
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x622a1f0)
    }
}

#undef public_622a25d
#undef public_622a271
#undef public_622a277
#undef public_622a285
#undef public_622a2c6
#undef public_622a2df
#undef public_622a2f2
#undef public_622a2fd
#undef public_622a300
#undef public_622a305
#undef public_622a32e
#undef public_622a347
#undef public_622a35a
#undef public_622a364
#undef public_622a387
#undef public_622a39f
#undef public_622a3b2
#undef public_622a3bf
#undef public_622a3c1
#undef public_622a3c7
#undef public_622a3f0
#undef public_622a403
#undef public_622a40e
#undef public_622a411
#undef public_622a413
#undef public_622a416
#undef public_622a422
