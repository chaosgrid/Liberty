#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46e3c0);
CLANG_FORWARD_PROC_SYMBOL(public_4e5fc0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_46e429 _public_46e429
#define public_46e43d _public_46e43d
#define public_46e443 _public_46e443
#define public_46e451 _public_46e451
#define public_46e492 _public_46e492
#define public_46e4ab _public_46e4ab
#define public_46e4be _public_46e4be
#define public_46e4c9 _public_46e4c9
#define public_46e4cc _public_46e4cc
#define public_46e4d1 _public_46e4d1
#define public_46e4fa _public_46e4fa
#define public_46e513 _public_46e513
#define public_46e526 _public_46e526
#define public_46e530 _public_46e530
#define public_46e553 _public_46e553
#define public_46e56b _public_46e56b
#define public_46e57e _public_46e57e
#define public_46e58b _public_46e58b
#define public_46e58d _public_46e58d
#define public_46e593 _public_46e593
#define public_46e5bc _public_46e5bc
#define public_46e5cf _public_46e5cf
#define public_46e5da _public_46e5da
#define public_46e5dd _public_46e5dd
#define public_46e5df _public_46e5df
#define public_46e5e2 _public_46e5e2
#define public_46e5ee _public_46e5ee

PROC_DECLARE(0x46e3c0, internal_46e3c0, public_46e3c0);
extern "C" NAKED register_t __cdecl internal_46e3c0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x18
        mov esi, ecx
        call public_5b7e84
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
        call public_4e5fc0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_46e429
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_46e429
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        ja public_46e429
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_46e443
        mov dword ptr ds : [eax+8], ebx
        jmp public_46e443
        public_46e429 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_46e43d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_46e443
        public_46e43d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_46e443
        mov dword ptr ds : [eax], ebx
        public_46e443 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_46e5ee
        public_46e451 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_46e5ee
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_46e530
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x14], 0
        jne public_46e492
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_46e5e2
        public_46e492 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_46e4d1
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_46e4ab
        mov dword ptr ds : [edx+4], eax
        public_46e4ab : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_46e4be
        mov dword ptr ds : [edx+4], ecx
        jmp public_46e4cc
        public_46e4be : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_46e4c9
        mov dword ptr ds : [edx], ecx
        jmp public_46e4cc
        public_46e4c9 : nop
        mov dword ptr ds : [edx+8], ecx
        public_46e4cc : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_46e4d1 : nop
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
        je public_46e4fa
        mov dword ptr ds : [edi+4], ecx
        public_46e4fa : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_46e513
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_46e5df
        public_46e513 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_46e526
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_46e5df
        public_46e526 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_46e5df
        public_46e530 : nop
        cmp byte ptr ds : [edx+0x14], 0
        jne public_46e553
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x14], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_46e5e2
        public_46e553 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_46e593
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_46e56b
        mov dword ptr ds : [edx+4], eax
        public_46e56b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_46e57e
        mov dword ptr ds : [edx+4], ecx
        jmp public_46e58d
        public_46e57e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_46e58b
        mov dword ptr ds : [edx+8], ecx
        jmp public_46e58d
        public_46e58b : nop
        mov dword ptr ds : [edx], ecx
        public_46e58d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_46e593 : nop
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
        je public_46e5bc
        mov dword ptr ds : [edi+4], ecx
        public_46e5bc : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_46e5cf
        mov dword ptr ds : [edi+4], edx
        jmp public_46e5dd
        public_46e5cf : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_46e5da
        mov dword ptr ds : [edi], edx
        jmp public_46e5dd
        public_46e5da : nop
        mov dword ptr ds : [edi+8], edx
        public_46e5dd : nop
        mov dword ptr ds : [edx], ecx
        public_46e5df : nop
        mov dword ptr ds : [ecx+4], edx
        public_46e5e2 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_46e451
        public_46e5ee : nop
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
        UNREACHABLE_TRAP(0x46e3c0)
    }
}

#undef public_46e429
#undef public_46e43d
#undef public_46e443
#undef public_46e451
#undef public_46e492
#undef public_46e4ab
#undef public_46e4be
#undef public_46e4c9
#undef public_46e4cc
#undef public_46e4d1
#undef public_46e4fa
#undef public_46e513
#undef public_46e526
#undef public_46e530
#undef public_46e553
#undef public_46e56b
#undef public_46e57e
#undef public_46e58b
#undef public_46e58d
#undef public_46e593
#undef public_46e5bc
#undef public_46e5cf
#undef public_46e5da
#undef public_46e5dd
#undef public_46e5df
#undef public_46e5e2
#undef public_46e5ee
