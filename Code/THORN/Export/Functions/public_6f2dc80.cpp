#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2dc80);
CLANG_FORWARD_PROC_SYMBOL(public_6f2e2c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e9c);

#define public_6f2dcf3 _public_6f2dcf3
#define public_6f2dd07 _public_6f2dd07
#define public_6f2dd0d _public_6f2dd0d
#define public_6f2dd20 _public_6f2dd20
#define public_6f2dd61 _public_6f2dd61
#define public_6f2dd7a _public_6f2dd7a
#define public_6f2dd8d _public_6f2dd8d
#define public_6f2dd98 _public_6f2dd98
#define public_6f2dd9b _public_6f2dd9b
#define public_6f2dda0 _public_6f2dda0
#define public_6f2ddc9 _public_6f2ddc9
#define public_6f2dde2 _public_6f2dde2
#define public_6f2ddf5 _public_6f2ddf5
#define public_6f2ddff _public_6f2ddff
#define public_6f2de22 _public_6f2de22
#define public_6f2de3a _public_6f2de3a
#define public_6f2de4d _public_6f2de4d
#define public_6f2de5a _public_6f2de5a
#define public_6f2de5c _public_6f2de5c
#define public_6f2de62 _public_6f2de62
#define public_6f2de8b _public_6f2de8b
#define public_6f2de9e _public_6f2de9e
#define public_6f2dea9 _public_6f2dea9
#define public_6f2deac _public_6f2deac
#define public_6f2deae _public_6f2deae
#define public_6f2deb1 _public_6f2deb1
#define public_6f2debd _public_6f2debd

PROC_DECLARE(0x6f2dc80, internal_6f2dc80, public_6f2dc80);
extern "C" NAKED register_t __cdecl internal_6f2dc80()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x24
        mov esi, ecx
        call public_6f57e9c
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x20], 0
        mov byte ptr ds : [ebx+0x21], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6f2e2c0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6f2dcf3
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6f2dcf3
        lea ecx, ds:[edi+0xC]
        push ecx
        push ebp
        call dword ptr ds : [public_6f5a03c]
        add esp, 8
        test al, al
        jne public_6f2dcf3
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6f2dd0d
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f2dd0d
        public_6f2dcf3 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6f2dd07
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6f2dd0d
        public_6f2dd07 : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6f2dd0d
        mov dword ptr ds : [eax], ebx
        public_6f2dd0d : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6f2debd
        nop 
        lea esp, ss:[esp]
        public_6f2dd20 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_6f2debd
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6f2ddff
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x20], 0
        jne public_6f2dd61
        mov byte ptr ds : [ecx+0x20], 1
        mov byte ptr ds : [edx+0x20], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6f2deb1
        public_6f2dd61 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6f2dda0
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f2dd7a
        mov dword ptr ds : [edx+4], eax
        public_6f2dd7a : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f2dd8d
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f2dd9b
        public_6f2dd8d : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6f2dd98
        mov dword ptr ds : [edx], ecx
        jmp public_6f2dd9b
        public_6f2dd98 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f2dd9b : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f2dda0 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f2ddc9
        mov dword ptr ds : [edi+4], ecx
        public_6f2ddc9 : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f2dde2
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f2deae
        public_6f2dde2 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f2ddf5
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f2deae
        public_6f2ddf5 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f2deae
        public_6f2ddff : nop
        cmp byte ptr ds : [edx+0x20], 0
        jne public_6f2de22
        mov byte ptr ds : [ecx+0x20], 1
        mov byte ptr ds : [edx+0x20], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x20], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6f2deb1
        public_6f2de22 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6f2de62
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f2de3a
        mov dword ptr ds : [edx+4], eax
        public_6f2de3a : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f2de4d
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f2de5c
        public_6f2de4d : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6f2de5a
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f2de5c
        public_6f2de5a : nop
        mov dword ptr ds : [edx], ecx
        public_6f2de5c : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f2de62 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f2de8b
        mov dword ptr ds : [edi+4], ecx
        public_6f2de8b : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f2de9e
        mov dword ptr ds : [edi+4], edx
        jmp public_6f2deac
        public_6f2de9e : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6f2dea9
        mov dword ptr ds : [edi], edx
        jmp public_6f2deac
        public_6f2dea9 : nop
        mov dword ptr ds : [edi+8], edx
        public_6f2deac : nop
        mov dword ptr ds : [edx], ecx
        public_6f2deae : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f2deb1 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f2dd20
        public_6f2debd : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x20], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6f2dc80)
    }
}

#undef public_6f2dcf3
#undef public_6f2dd07
#undef public_6f2dd0d
#undef public_6f2dd20
#undef public_6f2dd61
#undef public_6f2dd7a
#undef public_6f2dd8d
#undef public_6f2dd98
#undef public_6f2dd9b
#undef public_6f2dda0
#undef public_6f2ddc9
#undef public_6f2dde2
#undef public_6f2ddf5
#undef public_6f2ddff
#undef public_6f2de22
#undef public_6f2de3a
#undef public_6f2de4d
#undef public_6f2de5a
#undef public_6f2de5c
#undef public_6f2de62
#undef public_6f2de8b
#undef public_6f2de9e
#undef public_6f2dea9
#undef public_6f2deac
#undef public_6f2deae
#undef public_6f2deb1
#undef public_6f2debd
