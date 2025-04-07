#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626b7b0);
CLANG_FORWARD_PROC_SYMBOL(public_6341030);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_626b819 _public_626b819
#define public_626b82d _public_626b82d
#define public_626b833 _public_626b833
#define public_626b841 _public_626b841
#define public_626b882 _public_626b882
#define public_626b89b _public_626b89b
#define public_626b8ae _public_626b8ae
#define public_626b8b9 _public_626b8b9
#define public_626b8bc _public_626b8bc
#define public_626b8c1 _public_626b8c1
#define public_626b8ea _public_626b8ea
#define public_626b903 _public_626b903
#define public_626b916 _public_626b916
#define public_626b920 _public_626b920
#define public_626b943 _public_626b943
#define public_626b95b _public_626b95b
#define public_626b96e _public_626b96e
#define public_626b97b _public_626b97b
#define public_626b97d _public_626b97d
#define public_626b983 _public_626b983
#define public_626b9ac _public_626b9ac
#define public_626b9bf _public_626b9bf
#define public_626b9ca _public_626b9ca
#define public_626b9cd _public_626b9cd
#define public_626b9cf _public_626b9cf
#define public_626b9d2 _public_626b9d2
#define public_626b9de _public_626b9de

PROC_DECLARE(0x626b7b0, internal_626b7b0, public_626b7b0);
extern "C" NAKED register_t __cdecl internal_626b7b0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x30
        mov esi, ecx
        call public_6391d9c
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x2C], 0
        mov byte ptr ds : [ebx+0x2D], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6341030
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_626b819
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_626b819
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_626b819
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_626b833
        mov dword ptr ds : [eax+8], ebx
        jmp public_626b833
        public_626b819 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_626b82d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_626b833
        public_626b82d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_626b833
        mov dword ptr ds : [eax], ebx
        public_626b833 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_626b9de
        public_626b841 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x2C]
        test dl, dl
        jne public_626b9de
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_626b920
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x2C], 0
        jne public_626b882
        mov byte ptr ds : [ecx+0x2C], 1
        mov byte ptr ds : [edx+0x2C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x2C], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_626b9d2
        public_626b882 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_626b8c1
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_626b89b
        mov dword ptr ds : [edx+4], eax
        public_626b89b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_626b8ae
        mov dword ptr ds : [edx+4], ecx
        jmp public_626b8bc
        public_626b8ae : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_626b8b9
        mov dword ptr ds : [edx], ecx
        jmp public_626b8bc
        public_626b8b9 : nop
        mov dword ptr ds : [edx+8], ecx
        public_626b8bc : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_626b8c1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x2C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x2C], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_626b8ea
        mov dword ptr ds : [edi+4], ecx
        public_626b8ea : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_626b903
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_626b9cf
        public_626b903 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_626b916
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_626b9cf
        public_626b916 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_626b9cf
        public_626b920 : nop
        cmp byte ptr ds : [edx+0x2C], 0
        jne public_626b943
        mov byte ptr ds : [ecx+0x2C], 1
        mov byte ptr ds : [edx+0x2C], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x2C], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_626b9d2
        public_626b943 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_626b983
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_626b95b
        mov dword ptr ds : [edx+4], eax
        public_626b95b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_626b96e
        mov dword ptr ds : [edx+4], ecx
        jmp public_626b97d
        public_626b96e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_626b97b
        mov dword ptr ds : [edx+8], ecx
        jmp public_626b97d
        public_626b97b : nop
        mov dword ptr ds : [edx], ecx
        public_626b97d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_626b983 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x2C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x2C], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_626b9ac
        mov dword ptr ds : [edi+4], ecx
        public_626b9ac : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_626b9bf
        mov dword ptr ds : [edi+4], edx
        jmp public_626b9cd
        public_626b9bf : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_626b9ca
        mov dword ptr ds : [edi], edx
        jmp public_626b9cd
        public_626b9ca : nop
        mov dword ptr ds : [edi+8], edx
        public_626b9cd : nop
        mov dword ptr ds : [edx], ecx
        public_626b9cf : nop
        mov dword ptr ds : [ecx+4], edx
        public_626b9d2 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_626b841
        public_626b9de : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x2C], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x626b7b0)
    }
}

#undef public_626b819
#undef public_626b82d
#undef public_626b833
#undef public_626b841
#undef public_626b882
#undef public_626b89b
#undef public_626b8ae
#undef public_626b8b9
#undef public_626b8bc
#undef public_626b8c1
#undef public_626b8ea
#undef public_626b903
#undef public_626b916
#undef public_626b920
#undef public_626b943
#undef public_626b95b
#undef public_626b96e
#undef public_626b97b
#undef public_626b97d
#undef public_626b983
#undef public_626b9ac
#undef public_626b9bf
#undef public_626b9ca
#undef public_626b9cd
#undef public_626b9cf
#undef public_626b9d2
#undef public_626b9de
