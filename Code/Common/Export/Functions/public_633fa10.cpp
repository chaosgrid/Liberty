#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_633fa10);
CLANG_FORWARD_PROC_SYMBOL(public_6341050);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_633fa82 _public_633fa82
#define public_633fa96 _public_633fa96
#define public_633fa9c _public_633fa9c
#define public_633fab0 _public_633fab0
#define public_633fb00 _public_633fb00
#define public_633fb19 _public_633fb19
#define public_633fb2c _public_633fb2c
#define public_633fb37 _public_633fb37
#define public_633fb3a _public_633fb3a
#define public_633fb3f _public_633fb3f
#define public_633fb6e _public_633fb6e
#define public_633fb87 _public_633fb87
#define public_633fb9a _public_633fb9a
#define public_633fba4 _public_633fba4
#define public_633fbd3 _public_633fbd3
#define public_633fbeb _public_633fbeb
#define public_633fbfe _public_633fbfe
#define public_633fc0b _public_633fc0b
#define public_633fc0d _public_633fc0d
#define public_633fc13 _public_633fc13
#define public_633fc42 _public_633fc42
#define public_633fc55 _public_633fc55
#define public_633fc60 _public_633fc60
#define public_633fc63 _public_633fc63
#define public_633fc65 _public_633fc65
#define public_633fc68 _public_633fc68
#define public_633fc74 _public_633fc74

PROC_DECLARE(0x633fa10, internal_633fa10, public_633fa10);
extern "C" NAKED register_t __cdecl internal_633fa10()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0xAC
        mov esi, ecx
        call public_6391d9c
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0xA8], 0
        mov byte ptr ds : [ebx+0xA9], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6341050
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_633fa82
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_633fa82
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_633fa82
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_633fa9c
        mov dword ptr ds : [eax+8], ebx
        jmp public_633fa9c
        public_633fa82 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_633fa96
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_633fa9c
        public_633fa96 : nop
        cmp edi, dword ptr ds : [eax]
        jne public_633fa9c
        mov dword ptr ds : [eax], ebx
        public_633fa9c : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_633fc74
        lea ebx, ds:[ebx]
        public_633fab0 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0xA8]
        test dl, dl
        jne public_633fc74
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_633fba4
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0xA8], 0
        jne public_633fb00
        mov byte ptr ds : [ecx+0xA8], 1
        mov byte ptr ds : [edx+0xA8], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0xA8], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_633fc68
        public_633fb00 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_633fb3f
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_633fb19
        mov dword ptr ds : [edx+4], eax
        public_633fb19 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_633fb2c
        mov dword ptr ds : [edx+4], ecx
        jmp public_633fb3a
        public_633fb2c : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_633fb37
        mov dword ptr ds : [edx], ecx
        jmp public_633fb3a
        public_633fb37 : nop
        mov dword ptr ds : [edx+8], ecx
        public_633fb3a : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_633fb3f : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0xA8], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0xA8], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_633fb6e
        mov dword ptr ds : [edi+4], ecx
        public_633fb6e : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_633fb87
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_633fc65
        public_633fb87 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_633fb9a
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_633fc65
        public_633fb9a : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_633fc65
        public_633fba4 : nop
        cmp byte ptr ds : [edx+0xA8], 0
        jne public_633fbd3
        mov byte ptr ds : [ecx+0xA8], 1
        mov byte ptr ds : [edx+0xA8], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0xA8], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_633fc68
        public_633fbd3 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_633fc13
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_633fbeb
        mov dword ptr ds : [edx+4], eax
        public_633fbeb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_633fbfe
        mov dword ptr ds : [edx+4], ecx
        jmp public_633fc0d
        public_633fbfe : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_633fc0b
        mov dword ptr ds : [edx+8], ecx
        jmp public_633fc0d
        public_633fc0b : nop
        mov dword ptr ds : [edx], ecx
        public_633fc0d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_633fc13 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0xA8], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0xA8], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_633fc42
        mov dword ptr ds : [edi+4], ecx
        public_633fc42 : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_633fc55
        mov dword ptr ds : [edi+4], edx
        jmp public_633fc63
        public_633fc55 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_633fc60
        mov dword ptr ds : [edi], edx
        jmp public_633fc63
        public_633fc60 : nop
        mov dword ptr ds : [edi+8], edx
        public_633fc63 : nop
        mov dword ptr ds : [edx], ecx
        public_633fc65 : nop
        mov dword ptr ds : [ecx+4], edx
        public_633fc68 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_633fab0
        public_633fc74 : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0xA8], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x633fa10)
    }
}

#undef public_633fa82
#undef public_633fa96
#undef public_633fa9c
#undef public_633fab0
#undef public_633fb00
#undef public_633fb19
#undef public_633fb2c
#undef public_633fb37
#undef public_633fb3a
#undef public_633fb3f
#undef public_633fb6e
#undef public_633fb87
#undef public_633fb9a
#undef public_633fba4
#undef public_633fbd3
#undef public_633fbeb
#undef public_633fbfe
#undef public_633fc0b
#undef public_633fc0d
#undef public_633fc13
#undef public_633fc42
#undef public_633fc55
#undef public_633fc60
#undef public_633fc63
#undef public_633fc65
#undef public_633fc68
#undef public_633fc74
