#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d060f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d06740);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6d06159 _public_6d06159
#define public_6d0616d _public_6d0616d
#define public_6d06173 _public_6d06173
#define public_6d06181 _public_6d06181
#define public_6d061c2 _public_6d061c2
#define public_6d061db _public_6d061db
#define public_6d061ee _public_6d061ee
#define public_6d061f9 _public_6d061f9
#define public_6d061fc _public_6d061fc
#define public_6d06201 _public_6d06201
#define public_6d0622a _public_6d0622a
#define public_6d06243 _public_6d06243
#define public_6d06256 _public_6d06256
#define public_6d06260 _public_6d06260
#define public_6d06283 _public_6d06283
#define public_6d0629b _public_6d0629b
#define public_6d062ae _public_6d062ae
#define public_6d062bb _public_6d062bb
#define public_6d062bd _public_6d062bd
#define public_6d062c3 _public_6d062c3
#define public_6d062ec _public_6d062ec
#define public_6d062ff _public_6d062ff
#define public_6d0630a _public_6d0630a
#define public_6d0630d _public_6d0630d
#define public_6d0630f _public_6d0630f
#define public_6d06312 _public_6d06312
#define public_6d0631e _public_6d0631e

PROC_DECLARE(0x6d060f0, internal_6d060f0, public_6d060f0);
extern "C" NAKED register_t __cdecl internal_6d060f0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x38
        mov esi, ecx
        call public_6d60012
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x34], 0
        mov byte ptr ds : [ebx+0x35], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6d06740
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6d06159
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6d06159
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_6d06159
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6d06173
        mov dword ptr ds : [eax+8], ebx
        jmp public_6d06173
        public_6d06159 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6d0616d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6d06173
        public_6d0616d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6d06173
        mov dword ptr ds : [eax], ebx
        public_6d06173 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6d0631e
        public_6d06181 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x34]
        test dl, dl
        jne public_6d0631e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6d06260
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x34], 0
        jne public_6d061c2
        mov byte ptr ds : [ecx+0x34], 1
        mov byte ptr ds : [edx+0x34], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x34], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6d06312
        public_6d061c2 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6d06201
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6d061db
        mov dword ptr ds : [edx+4], eax
        public_6d061db : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6d061ee
        mov dword ptr ds : [edx+4], ecx
        jmp public_6d061fc
        public_6d061ee : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6d061f9
        mov dword ptr ds : [edx], ecx
        jmp public_6d061fc
        public_6d061f9 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6d061fc : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6d06201 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x34], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x34], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6d0622a
        mov dword ptr ds : [edi+4], ecx
        public_6d0622a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6d06243
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6d0630f
        public_6d06243 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6d06256
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6d0630f
        public_6d06256 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6d0630f
        public_6d06260 : nop
        cmp byte ptr ds : [edx+0x34], 0
        jne public_6d06283
        mov byte ptr ds : [ecx+0x34], 1
        mov byte ptr ds : [edx+0x34], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x34], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6d06312
        public_6d06283 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6d062c3
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6d0629b
        mov dword ptr ds : [edx+4], eax
        public_6d0629b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6d062ae
        mov dword ptr ds : [edx+4], ecx
        jmp public_6d062bd
        public_6d062ae : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6d062bb
        mov dword ptr ds : [edx+8], ecx
        jmp public_6d062bd
        public_6d062bb : nop
        mov dword ptr ds : [edx], ecx
        public_6d062bd : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6d062c3 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x34], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x34], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6d062ec
        mov dword ptr ds : [edi+4], ecx
        public_6d062ec : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6d062ff
        mov dword ptr ds : [edi+4], edx
        jmp public_6d0630d
        public_6d062ff : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6d0630a
        mov dword ptr ds : [edi], edx
        jmp public_6d0630d
        public_6d0630a : nop
        mov dword ptr ds : [edi+8], edx
        public_6d0630d : nop
        mov dword ptr ds : [edx], ecx
        public_6d0630f : nop
        mov dword ptr ds : [ecx+4], edx
        public_6d06312 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6d06181
        public_6d0631e : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x34], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6d060f0)
    }
}

#undef public_6d06159
#undef public_6d0616d
#undef public_6d06173
#undef public_6d06181
#undef public_6d061c2
#undef public_6d061db
#undef public_6d061ee
#undef public_6d061f9
#undef public_6d061fc
#undef public_6d06201
#undef public_6d0622a
#undef public_6d06243
#undef public_6d06256
#undef public_6d06260
#undef public_6d06283
#undef public_6d0629b
#undef public_6d062ae
#undef public_6d062bb
#undef public_6d062bd
#undef public_6d062c3
#undef public_6d062ec
#undef public_6d062ff
#undef public_6d0630a
#undef public_6d0630d
#undef public_6d0630f
#undef public_6d06312
#undef public_6d0631e
