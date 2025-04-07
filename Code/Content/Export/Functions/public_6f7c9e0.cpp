#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f305b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7c9e0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f7ca49 _public_6f7ca49
#define public_6f7ca5d _public_6f7ca5d
#define public_6f7ca63 _public_6f7ca63
#define public_6f7ca71 _public_6f7ca71
#define public_6f7cab2 _public_6f7cab2
#define public_6f7cacb _public_6f7cacb
#define public_6f7cade _public_6f7cade
#define public_6f7cae9 _public_6f7cae9
#define public_6f7caec _public_6f7caec
#define public_6f7caf1 _public_6f7caf1
#define public_6f7cb1a _public_6f7cb1a
#define public_6f7cb33 _public_6f7cb33
#define public_6f7cb46 _public_6f7cb46
#define public_6f7cb50 _public_6f7cb50
#define public_6f7cb73 _public_6f7cb73
#define public_6f7cb8b _public_6f7cb8b
#define public_6f7cb9e _public_6f7cb9e
#define public_6f7cbab _public_6f7cbab
#define public_6f7cbad _public_6f7cbad
#define public_6f7cbb3 _public_6f7cbb3
#define public_6f7cbdc _public_6f7cbdc
#define public_6f7cbef _public_6f7cbef
#define public_6f7cbfa _public_6f7cbfa
#define public_6f7cbfd _public_6f7cbfd
#define public_6f7cbff _public_6f7cbff
#define public_6f7cc02 _public_6f7cc02
#define public_6f7cc0e _public_6f7cc0e

PROC_DECLARE(0x6f7c9e0, internal_6f7c9e0, public_6f7c9e0);
extern "C" NAKED register_t __cdecl internal_6f7c9e0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x18
        mov esi, ecx
        call public_6fa912a
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
        call public_6f305b0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6f7ca49
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6f7ca49
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_6f7ca49
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6f7ca63
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f7ca63
        public_6f7ca49 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6f7ca5d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6f7ca63
        public_6f7ca5d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6f7ca63
        mov dword ptr ds : [eax], ebx
        public_6f7ca63 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6f7cc0e
        public_6f7ca71 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6f7cc0e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6f7cb50
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x14], 0
        jne public_6f7cab2
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6f7cc02
        public_6f7cab2 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6f7caf1
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f7cacb
        mov dword ptr ds : [edx+4], eax
        public_6f7cacb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f7cade
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f7caec
        public_6f7cade : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6f7cae9
        mov dword ptr ds : [edx], ecx
        jmp public_6f7caec
        public_6f7cae9 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f7caec : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f7caf1 : nop
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
        je public_6f7cb1a
        mov dword ptr ds : [edi+4], ecx
        public_6f7cb1a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f7cb33
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f7cbff
        public_6f7cb33 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f7cb46
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f7cbff
        public_6f7cb46 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f7cbff
        public_6f7cb50 : nop
        cmp byte ptr ds : [edx+0x14], 0
        jne public_6f7cb73
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x14], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6f7cc02
        public_6f7cb73 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6f7cbb3
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f7cb8b
        mov dword ptr ds : [edx+4], eax
        public_6f7cb8b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f7cb9e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f7cbad
        public_6f7cb9e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6f7cbab
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f7cbad
        public_6f7cbab : nop
        mov dword ptr ds : [edx], ecx
        public_6f7cbad : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f7cbb3 : nop
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
        je public_6f7cbdc
        mov dword ptr ds : [edi+4], ecx
        public_6f7cbdc : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f7cbef
        mov dword ptr ds : [edi+4], edx
        jmp public_6f7cbfd
        public_6f7cbef : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6f7cbfa
        mov dword ptr ds : [edi], edx
        jmp public_6f7cbfd
        public_6f7cbfa : nop
        mov dword ptr ds : [edi+8], edx
        public_6f7cbfd : nop
        mov dword ptr ds : [edx], ecx
        public_6f7cbff : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f7cc02 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f7ca71
        public_6f7cc0e : nop
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
        UNREACHABLE_TRAP(0x6f7c9e0)
    }
}

#undef public_6f7ca49
#undef public_6f7ca5d
#undef public_6f7ca63
#undef public_6f7ca71
#undef public_6f7cab2
#undef public_6f7cacb
#undef public_6f7cade
#undef public_6f7cae9
#undef public_6f7caec
#undef public_6f7caf1
#undef public_6f7cb1a
#undef public_6f7cb33
#undef public_6f7cb46
#undef public_6f7cb50
#undef public_6f7cb73
#undef public_6f7cb8b
#undef public_6f7cb9e
#undef public_6f7cbab
#undef public_6f7cbad
#undef public_6f7cbb3
#undef public_6f7cbdc
#undef public_6f7cbef
#undef public_6f7cbfa
#undef public_6f7cbfd
#undef public_6f7cbff
#undef public_6f7cc02
#undef public_6f7cc0e
