#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4113f0);
CLANG_FORWARD_PROC_SYMBOL(public_411ba0);
CLANG_FORWARD_PROC_SYMBOL(public_418a9e);

#define public_411459 _public_411459
#define public_41146d _public_41146d
#define public_411473 _public_411473
#define public_411481 _public_411481
#define public_4114c2 _public_4114c2
#define public_4114db _public_4114db
#define public_4114ee _public_4114ee
#define public_4114f9 _public_4114f9
#define public_4114fc _public_4114fc
#define public_411501 _public_411501
#define public_41152a _public_41152a
#define public_411543 _public_411543
#define public_411556 _public_411556
#define public_411560 _public_411560
#define public_411583 _public_411583
#define public_41159b _public_41159b
#define public_4115ae _public_4115ae
#define public_4115bb _public_4115bb
#define public_4115bd _public_4115bd
#define public_4115c3 _public_4115c3
#define public_4115ec _public_4115ec
#define public_4115ff _public_4115ff
#define public_41160a _public_41160a
#define public_41160d _public_41160d
#define public_41160f _public_41160f
#define public_411612 _public_411612
#define public_41161e _public_41161e

PROC_DECLARE(0x4113f0, internal_4113f0, public_4113f0);
extern "C" NAKED register_t __cdecl internal_4113f0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x18
        mov esi, ecx
        call public_418a9e
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x14], 0
        mov byte ptr ds : [ebx+0x15], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_411ba0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_411459
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_411459
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_411459
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_411473
        mov dword ptr ds : [eax+8], ebx
        jmp public_411473
        public_411459 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_41146d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_411473
        public_41146d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_411473
        mov dword ptr ds : [eax], ebx
        public_411473 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_41161e
        public_411481 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_41161e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_411560
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x14], 0
        jne public_4114c2
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_411612
        public_4114c2 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_411501
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_4114db
        mov dword ptr ds : [edx+4], eax
        public_4114db : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_4114ee
        mov dword ptr ds : [edx+4], ecx
        jmp public_4114fc
        public_4114ee : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_4114f9
        mov dword ptr ds : [edx], ecx
        jmp public_4114fc
        public_4114f9 : nop
        mov dword ptr ds : [edx+8], ecx
        public_4114fc : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_411501 : nop
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
        je public_41152a
        mov dword ptr ds : [edi+4], ecx
        public_41152a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_411543
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_41160f
        public_411543 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_411556
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_41160f
        public_411556 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_41160f
        public_411560 : nop
        cmp byte ptr ds : [edx+0x14], 0
        jne public_411583
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x14], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_411612
        public_411583 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_4115c3
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_41159b
        mov dword ptr ds : [edx+4], eax
        public_41159b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_4115ae
        mov dword ptr ds : [edx+4], ecx
        jmp public_4115bd
        public_4115ae : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_4115bb
        mov dword ptr ds : [edx+8], ecx
        jmp public_4115bd
        public_4115bb : nop
        mov dword ptr ds : [edx], ecx
        public_4115bd : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_4115c3 : nop
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
        je public_4115ec
        mov dword ptr ds : [edi+4], ecx
        public_4115ec : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_4115ff
        mov dword ptr ds : [edi+4], edx
        jmp public_41160d
        public_4115ff : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_41160a
        mov dword ptr ds : [edi], edx
        jmp public_41160d
        public_41160a : nop
        mov dword ptr ds : [edi+8], edx
        public_41160d : nop
        mov dword ptr ds : [edx], ecx
        public_41160f : nop
        mov dword ptr ds : [ecx+4], edx
        public_411612 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_411481
        public_41161e : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x14], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x4113f0)
    }
}

#undef public_411459
#undef public_41146d
#undef public_411473
#undef public_411481
#undef public_4114c2
#undef public_4114db
#undef public_4114ee
#undef public_4114f9
#undef public_4114fc
#undef public_411501
#undef public_41152a
#undef public_411543
#undef public_411556
#undef public_411560
#undef public_411583
#undef public_41159b
#undef public_4115ae
#undef public_4115bb
#undef public_4115bd
#undef public_4115c3
#undef public_4115ec
#undef public_4115ff
#undef public_41160a
#undef public_41160d
#undef public_41160f
#undef public_411612
#undef public_41161e
