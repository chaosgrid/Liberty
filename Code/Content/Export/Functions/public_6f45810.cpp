#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f45810);
CLANG_FORWARD_PROC_SYMBOL(public_6f46880);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f45879 _public_6f45879
#define public_6f4588d _public_6f4588d
#define public_6f45893 _public_6f45893
#define public_6f458a1 _public_6f458a1
#define public_6f458e2 _public_6f458e2
#define public_6f458fb _public_6f458fb
#define public_6f4590e _public_6f4590e
#define public_6f45919 _public_6f45919
#define public_6f4591c _public_6f4591c
#define public_6f45921 _public_6f45921
#define public_6f4594a _public_6f4594a
#define public_6f45963 _public_6f45963
#define public_6f45976 _public_6f45976
#define public_6f45980 _public_6f45980
#define public_6f459a3 _public_6f459a3
#define public_6f459bb _public_6f459bb
#define public_6f459ce _public_6f459ce
#define public_6f459db _public_6f459db
#define public_6f459dd _public_6f459dd
#define public_6f459e3 _public_6f459e3
#define public_6f45a0c _public_6f45a0c
#define public_6f45a1f _public_6f45a1f
#define public_6f45a2a _public_6f45a2a
#define public_6f45a2d _public_6f45a2d
#define public_6f45a2f _public_6f45a2f
#define public_6f45a32 _public_6f45a32
#define public_6f45a3e _public_6f45a3e

PROC_DECLARE(0x6f45810, internal_6f45810, public_6f45810);
extern "C" NAKED register_t __cdecl internal_6f45810()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x6C
        mov esi, ecx
        call public_6fa912a
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x68], 0
        mov byte ptr ds : [ebx+0x69], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6f46880
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6f45879
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6f45879
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_6f45879
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6f45893
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f45893
        public_6f45879 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6f4588d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6f45893
        public_6f4588d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6f45893
        mov dword ptr ds : [eax], ebx
        public_6f45893 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6f45a3e
        public_6f458a1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x68]
        test dl, dl
        jne public_6f45a3e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6f45980
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x68], 0
        jne public_6f458e2
        mov byte ptr ds : [ecx+0x68], 1
        mov byte ptr ds : [edx+0x68], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x68], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6f45a32
        public_6f458e2 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6f45921
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f458fb
        mov dword ptr ds : [edx+4], eax
        public_6f458fb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f4590e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f4591c
        public_6f4590e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6f45919
        mov dword ptr ds : [edx], ecx
        jmp public_6f4591c
        public_6f45919 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f4591c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f45921 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x68], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x68], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f4594a
        mov dword ptr ds : [edi+4], ecx
        public_6f4594a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f45963
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f45a2f
        public_6f45963 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f45976
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f45a2f
        public_6f45976 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f45a2f
        public_6f45980 : nop
        cmp byte ptr ds : [edx+0x68], 0
        jne public_6f459a3
        mov byte ptr ds : [ecx+0x68], 1
        mov byte ptr ds : [edx+0x68], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x68], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6f45a32
        public_6f459a3 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6f459e3
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f459bb
        mov dword ptr ds : [edx+4], eax
        public_6f459bb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f459ce
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f459dd
        public_6f459ce : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6f459db
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f459dd
        public_6f459db : nop
        mov dword ptr ds : [edx], ecx
        public_6f459dd : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f459e3 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x68], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x68], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f45a0c
        mov dword ptr ds : [edi+4], ecx
        public_6f45a0c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f45a1f
        mov dword ptr ds : [edi+4], edx
        jmp public_6f45a2d
        public_6f45a1f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6f45a2a
        mov dword ptr ds : [edi], edx
        jmp public_6f45a2d
        public_6f45a2a : nop
        mov dword ptr ds : [edi+8], edx
        public_6f45a2d : nop
        mov dword ptr ds : [edx], ecx
        public_6f45a2f : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f45a32 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f458a1
        public_6f45a3e : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x68], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6f45810)
    }
}

#undef public_6f45879
#undef public_6f4588d
#undef public_6f45893
#undef public_6f458a1
#undef public_6f458e2
#undef public_6f458fb
#undef public_6f4590e
#undef public_6f45919
#undef public_6f4591c
#undef public_6f45921
#undef public_6f4594a
#undef public_6f45963
#undef public_6f45976
#undef public_6f45980
#undef public_6f459a3
#undef public_6f459bb
#undef public_6f459ce
#undef public_6f459db
#undef public_6f459dd
#undef public_6f459e3
#undef public_6f45a0c
#undef public_6f45a1f
#undef public_6f45a2a
#undef public_6f45a2d
#undef public_6f45a2f
#undef public_6f45a32
#undef public_6f45a3e
