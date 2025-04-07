#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f53fd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f55330);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f54042 _public_6f54042
#define public_6f54056 _public_6f54056
#define public_6f5405c _public_6f5405c
#define public_6f54070 _public_6f54070
#define public_6f540c0 _public_6f540c0
#define public_6f540d9 _public_6f540d9
#define public_6f540ec _public_6f540ec
#define public_6f540f7 _public_6f540f7
#define public_6f540fa _public_6f540fa
#define public_6f540ff _public_6f540ff
#define public_6f5412e _public_6f5412e
#define public_6f54147 _public_6f54147
#define public_6f5415a _public_6f5415a
#define public_6f54164 _public_6f54164
#define public_6f54193 _public_6f54193
#define public_6f541ab _public_6f541ab
#define public_6f541be _public_6f541be
#define public_6f541cb _public_6f541cb
#define public_6f541cd _public_6f541cd
#define public_6f541d3 _public_6f541d3
#define public_6f54202 _public_6f54202
#define public_6f54215 _public_6f54215
#define public_6f54220 _public_6f54220
#define public_6f54223 _public_6f54223
#define public_6f54225 _public_6f54225
#define public_6f54228 _public_6f54228
#define public_6f54234 _public_6f54234

PROC_DECLARE(0x6f53fd0, internal_6f53fd0, public_6f53fd0);
extern "C" NAKED register_t __cdecl internal_6f53fd0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0xE8
        mov esi, ecx
        call public_6fa912a
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0xE4], 0
        mov byte ptr ds : [ebx+0xE5], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6f55330
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6f54042
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6f54042
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_6f54042
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6f5405c
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f5405c
        public_6f54042 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6f54056
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6f5405c
        public_6f54056 : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6f5405c
        mov dword ptr ds : [eax], ebx
        public_6f5405c : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6f54234
        lea ebx, ds:[ebx]
        public_6f54070 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0xE4]
        test dl, dl
        jne public_6f54234
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6f54164
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0xE4], 0
        jne public_6f540c0
        mov byte ptr ds : [ecx+0xE4], 1
        mov byte ptr ds : [edx+0xE4], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0xE4], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6f54228
        public_6f540c0 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6f540ff
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f540d9
        mov dword ptr ds : [edx+4], eax
        public_6f540d9 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f540ec
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f540fa
        public_6f540ec : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6f540f7
        mov dword ptr ds : [edx], ecx
        jmp public_6f540fa
        public_6f540f7 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f540fa : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f540ff : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0xE4], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0xE4], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f5412e
        mov dword ptr ds : [edi+4], ecx
        public_6f5412e : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f54147
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f54225
        public_6f54147 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f5415a
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f54225
        public_6f5415a : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f54225
        public_6f54164 : nop
        cmp byte ptr ds : [edx+0xE4], 0
        jne public_6f54193
        mov byte ptr ds : [ecx+0xE4], 1
        mov byte ptr ds : [edx+0xE4], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0xE4], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6f54228
        public_6f54193 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6f541d3
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f541ab
        mov dword ptr ds : [edx+4], eax
        public_6f541ab : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f541be
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f541cd
        public_6f541be : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6f541cb
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f541cd
        public_6f541cb : nop
        mov dword ptr ds : [edx], ecx
        public_6f541cd : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f541d3 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0xE4], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0xE4], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f54202
        mov dword ptr ds : [edi+4], ecx
        public_6f54202 : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f54215
        mov dword ptr ds : [edi+4], edx
        jmp public_6f54223
        public_6f54215 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6f54220
        mov dword ptr ds : [edi], edx
        jmp public_6f54223
        public_6f54220 : nop
        mov dword ptr ds : [edi+8], edx
        public_6f54223 : nop
        mov dword ptr ds : [edx], ecx
        public_6f54225 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f54228 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f54070
        public_6f54234 : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0xE4], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6f53fd0)
    }
}

#undef public_6f54042
#undef public_6f54056
#undef public_6f5405c
#undef public_6f54070
#undef public_6f540c0
#undef public_6f540d9
#undef public_6f540ec
#undef public_6f540f7
#undef public_6f540fa
#undef public_6f540ff
#undef public_6f5412e
#undef public_6f54147
#undef public_6f5415a
#undef public_6f54164
#undef public_6f54193
#undef public_6f541ab
#undef public_6f541be
#undef public_6f541cb
#undef public_6f541cd
#undef public_6f541d3
#undef public_6f54202
#undef public_6f54215
#undef public_6f54220
#undef public_6f54223
#undef public_6f54225
#undef public_6f54228
#undef public_6f54234
