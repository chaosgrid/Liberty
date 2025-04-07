#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2e2f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f2f270);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f2e359 _public_6f2e359
#define public_6f2e36d _public_6f2e36d
#define public_6f2e373 _public_6f2e373
#define public_6f2e381 _public_6f2e381
#define public_6f2e3c2 _public_6f2e3c2
#define public_6f2e3db _public_6f2e3db
#define public_6f2e3ee _public_6f2e3ee
#define public_6f2e3f9 _public_6f2e3f9
#define public_6f2e3fc _public_6f2e3fc
#define public_6f2e401 _public_6f2e401
#define public_6f2e42a _public_6f2e42a
#define public_6f2e443 _public_6f2e443
#define public_6f2e456 _public_6f2e456
#define public_6f2e460 _public_6f2e460
#define public_6f2e483 _public_6f2e483
#define public_6f2e49b _public_6f2e49b
#define public_6f2e4ae _public_6f2e4ae
#define public_6f2e4bb _public_6f2e4bb
#define public_6f2e4bd _public_6f2e4bd
#define public_6f2e4c3 _public_6f2e4c3
#define public_6f2e4ec _public_6f2e4ec
#define public_6f2e4ff _public_6f2e4ff
#define public_6f2e50a _public_6f2e50a
#define public_6f2e50d _public_6f2e50d
#define public_6f2e50f _public_6f2e50f
#define public_6f2e512 _public_6f2e512
#define public_6f2e51e _public_6f2e51e

PROC_DECLARE(0x6f2e2f0, internal_6f2e2f0, public_6f2e2f0);
extern "C" NAKED register_t __cdecl internal_6f2e2f0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x20
        mov esi, ecx
        call public_6fa912a
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x1C], 0
        mov byte ptr ds : [ebx+0x1D], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6f2f270
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6f2e359
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6f2e359
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_6f2e359
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6f2e373
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f2e373
        public_6f2e359 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6f2e36d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6f2e373
        public_6f2e36d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6f2e373
        mov dword ptr ds : [eax], ebx
        public_6f2e373 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6f2e51e
        public_6f2e381 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x1C]
        test dl, dl
        jne public_6f2e51e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6f2e460
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x1C], 0
        jne public_6f2e3c2
        mov byte ptr ds : [ecx+0x1C], 1
        mov byte ptr ds : [edx+0x1C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6f2e512
        public_6f2e3c2 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6f2e401
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f2e3db
        mov dword ptr ds : [edx+4], eax
        public_6f2e3db : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f2e3ee
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f2e3fc
        public_6f2e3ee : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6f2e3f9
        mov dword ptr ds : [edx], ecx
        jmp public_6f2e3fc
        public_6f2e3f9 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f2e3fc : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f2e401 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x1C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f2e42a
        mov dword ptr ds : [edi+4], ecx
        public_6f2e42a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f2e443
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f2e50f
        public_6f2e443 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f2e456
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f2e50f
        public_6f2e456 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f2e50f
        public_6f2e460 : nop
        cmp byte ptr ds : [edx+0x1C], 0
        jne public_6f2e483
        mov byte ptr ds : [ecx+0x1C], 1
        mov byte ptr ds : [edx+0x1C], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x1C], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6f2e512
        public_6f2e483 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6f2e4c3
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f2e49b
        mov dword ptr ds : [edx+4], eax
        public_6f2e49b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f2e4ae
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f2e4bd
        public_6f2e4ae : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6f2e4bb
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f2e4bd
        public_6f2e4bb : nop
        mov dword ptr ds : [edx], ecx
        public_6f2e4bd : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f2e4c3 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x1C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f2e4ec
        mov dword ptr ds : [edi+4], ecx
        public_6f2e4ec : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f2e4ff
        mov dword ptr ds : [edi+4], edx
        jmp public_6f2e50d
        public_6f2e4ff : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6f2e50a
        mov dword ptr ds : [edi], edx
        jmp public_6f2e50d
        public_6f2e50a : nop
        mov dword ptr ds : [edi+8], edx
        public_6f2e50d : nop
        mov dword ptr ds : [edx], ecx
        public_6f2e50f : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f2e512 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f2e381
        public_6f2e51e : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x1C], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6f2e2f0)
    }
}

#undef public_6f2e359
#undef public_6f2e36d
#undef public_6f2e373
#undef public_6f2e381
#undef public_6f2e3c2
#undef public_6f2e3db
#undef public_6f2e3ee
#undef public_6f2e3f9
#undef public_6f2e3fc
#undef public_6f2e401
#undef public_6f2e42a
#undef public_6f2e443
#undef public_6f2e456
#undef public_6f2e460
#undef public_6f2e483
#undef public_6f2e49b
#undef public_6f2e4ae
#undef public_6f2e4bb
#undef public_6f2e4bd
#undef public_6f2e4c3
#undef public_6f2e4ec
#undef public_6f2e4ff
#undef public_6f2e50a
#undef public_6f2e50d
#undef public_6f2e50f
#undef public_6f2e512
#undef public_6f2e51e
