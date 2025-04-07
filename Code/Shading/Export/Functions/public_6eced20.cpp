#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eced20);
CLANG_FORWARD_PROC_SYMBOL(public_6ecf230);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);

#define public_6eced89 _public_6eced89
#define public_6eced9d _public_6eced9d
#define public_6eceda3 _public_6eceda3
#define public_6ecedb1 _public_6ecedb1
#define public_6ecedf2 _public_6ecedf2
#define public_6ecee0b _public_6ecee0b
#define public_6ecee1e _public_6ecee1e
#define public_6ecee29 _public_6ecee29
#define public_6ecee2c _public_6ecee2c
#define public_6ecee31 _public_6ecee31
#define public_6ecee5a _public_6ecee5a
#define public_6ecee73 _public_6ecee73
#define public_6ecee86 _public_6ecee86
#define public_6ecee90 _public_6ecee90
#define public_6eceeb3 _public_6eceeb3
#define public_6eceecb _public_6eceecb
#define public_6eceede _public_6eceede
#define public_6eceeeb _public_6eceeeb
#define public_6eceeed _public_6eceeed
#define public_6eceef3 _public_6eceef3
#define public_6ecef1c _public_6ecef1c
#define public_6ecef2f _public_6ecef2f
#define public_6ecef3a _public_6ecef3a
#define public_6ecef3d _public_6ecef3d
#define public_6ecef3f _public_6ecef3f
#define public_6ecef42 _public_6ecef42
#define public_6ecef4e _public_6ecef4e

PROC_DECLARE(0x6eced20, internal_6eced20, public_6eced20);
extern "C" NAKED register_t __cdecl internal_6eced20()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x28
        mov esi, ecx
        call public_6ed0c5c
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x24], 0
        mov byte ptr ds : [ebx+0x25], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6ecf230
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6eced89
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6eced89
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_6eced89
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6eceda3
        mov dword ptr ds : [eax+8], ebx
        jmp public_6eceda3
        public_6eced89 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6eced9d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6eceda3
        public_6eced9d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6eceda3
        mov dword ptr ds : [eax], ebx
        public_6eceda3 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6ecef4e
        public_6ecedb1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x24]
        test dl, dl
        jne public_6ecef4e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6ecee90
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x24], 0
        jne public_6ecedf2
        mov byte ptr ds : [ecx+0x24], 1
        mov byte ptr ds : [edx+0x24], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6ecef42
        public_6ecedf2 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6ecee31
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6ecee0b
        mov dword ptr ds : [edx+4], eax
        public_6ecee0b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6ecee1e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6ecee2c
        public_6ecee1e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6ecee29
        mov dword ptr ds : [edx], ecx
        jmp public_6ecee2c
        public_6ecee29 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6ecee2c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6ecee31 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x24], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6ecee5a
        mov dword ptr ds : [edi+4], ecx
        public_6ecee5a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6ecee73
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6ecef3f
        public_6ecee73 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6ecee86
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6ecef3f
        public_6ecee86 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6ecef3f
        public_6ecee90 : nop
        cmp byte ptr ds : [edx+0x24], 0
        jne public_6eceeb3
        mov byte ptr ds : [ecx+0x24], 1
        mov byte ptr ds : [edx+0x24], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x24], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6ecef42
        public_6eceeb3 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6eceef3
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6eceecb
        mov dword ptr ds : [edx+4], eax
        public_6eceecb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6eceede
        mov dword ptr ds : [edx+4], ecx
        jmp public_6eceeed
        public_6eceede : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6eceeeb
        mov dword ptr ds : [edx+8], ecx
        jmp public_6eceeed
        public_6eceeeb : nop
        mov dword ptr ds : [edx], ecx
        public_6eceeed : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6eceef3 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x24], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6ecef1c
        mov dword ptr ds : [edi+4], ecx
        public_6ecef1c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6ecef2f
        mov dword ptr ds : [edi+4], edx
        jmp public_6ecef3d
        public_6ecef2f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6ecef3a
        mov dword ptr ds : [edi], edx
        jmp public_6ecef3d
        public_6ecef3a : nop
        mov dword ptr ds : [edi+8], edx
        public_6ecef3d : nop
        mov dword ptr ds : [edx], ecx
        public_6ecef3f : nop
        mov dword ptr ds : [ecx+4], edx
        public_6ecef42 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6ecedb1
        public_6ecef4e : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x24], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6eced20)
    }
}

#undef public_6eced89
#undef public_6eced9d
#undef public_6eceda3
#undef public_6ecedb1
#undef public_6ecedf2
#undef public_6ecee0b
#undef public_6ecee1e
#undef public_6ecee29
#undef public_6ecee2c
#undef public_6ecee31
#undef public_6ecee5a
#undef public_6ecee73
#undef public_6ecee86
#undef public_6ecee90
#undef public_6eceeb3
#undef public_6eceecb
#undef public_6eceede
#undef public_6eceeeb
#undef public_6eceeed
#undef public_6eceef3
#undef public_6ecef1c
#undef public_6ecef2f
#undef public_6ecef3a
#undef public_6ecef3d
#undef public_6ecef3f
#undef public_6ecef42
#undef public_6ecef4e
