#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_459db0);
CLANG_FORWARD_PROC_SYMBOL(public_45a080);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_459e19 _public_459e19
#define public_459e2d _public_459e2d
#define public_459e33 _public_459e33
#define public_459e41 _public_459e41
#define public_459e82 _public_459e82
#define public_459e9b _public_459e9b
#define public_459eae _public_459eae
#define public_459eb9 _public_459eb9
#define public_459ebc _public_459ebc
#define public_459ec1 _public_459ec1
#define public_459eea _public_459eea
#define public_459f03 _public_459f03
#define public_459f16 _public_459f16
#define public_459f20 _public_459f20
#define public_459f43 _public_459f43
#define public_459f5b _public_459f5b
#define public_459f6e _public_459f6e
#define public_459f7b _public_459f7b
#define public_459f7d _public_459f7d
#define public_459f83 _public_459f83
#define public_459fac _public_459fac
#define public_459fbf _public_459fbf
#define public_459fca _public_459fca
#define public_459fcd _public_459fcd
#define public_459fcf _public_459fcf
#define public_459fd2 _public_459fd2
#define public_459fde _public_459fde

PROC_DECLARE(0x459db0, internal_459db0, public_459db0);
extern "C" NAKED register_t __cdecl internal_459db0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x20
        mov esi, ecx
        call public_5b7e84
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
        call public_45a080
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_459e19
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_459e19
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_459e19
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_459e33
        mov dword ptr ds : [eax+8], ebx
        jmp public_459e33
        public_459e19 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_459e2d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_459e33
        public_459e2d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_459e33
        mov dword ptr ds : [eax], ebx
        public_459e33 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_459fde
        public_459e41 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x1C]
        test dl, dl
        jne public_459fde
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_459f20
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x1C], 0
        jne public_459e82
        mov byte ptr ds : [ecx+0x1C], 1
        mov byte ptr ds : [edx+0x1C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_459fd2
        public_459e82 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_459ec1
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_459e9b
        mov dword ptr ds : [edx+4], eax
        public_459e9b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_459eae
        mov dword ptr ds : [edx+4], ecx
        jmp public_459ebc
        public_459eae : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_459eb9
        mov dword ptr ds : [edx], ecx
        jmp public_459ebc
        public_459eb9 : nop
        mov dword ptr ds : [edx+8], ecx
        public_459ebc : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_459ec1 : nop
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
        je public_459eea
        mov dword ptr ds : [edi+4], ecx
        public_459eea : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_459f03
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_459fcf
        public_459f03 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_459f16
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_459fcf
        public_459f16 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_459fcf
        public_459f20 : nop
        cmp byte ptr ds : [edx+0x1C], 0
        jne public_459f43
        mov byte ptr ds : [ecx+0x1C], 1
        mov byte ptr ds : [edx+0x1C], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x1C], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_459fd2
        public_459f43 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_459f83
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_459f5b
        mov dword ptr ds : [edx+4], eax
        public_459f5b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_459f6e
        mov dword ptr ds : [edx+4], ecx
        jmp public_459f7d
        public_459f6e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_459f7b
        mov dword ptr ds : [edx+8], ecx
        jmp public_459f7d
        public_459f7b : nop
        mov dword ptr ds : [edx], ecx
        public_459f7d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_459f83 : nop
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
        je public_459fac
        mov dword ptr ds : [edi+4], ecx
        public_459fac : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_459fbf
        mov dword ptr ds : [edi+4], edx
        jmp public_459fcd
        public_459fbf : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_459fca
        mov dword ptr ds : [edi], edx
        jmp public_459fcd
        public_459fca : nop
        mov dword ptr ds : [edi+8], edx
        public_459fcd : nop
        mov dword ptr ds : [edx], ecx
        public_459fcf : nop
        mov dword ptr ds : [ecx+4], edx
        public_459fd2 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_459e41
        public_459fde : nop
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
        UNREACHABLE_TRAP(0x459db0)
    }
}

#undef public_459e19
#undef public_459e2d
#undef public_459e33
#undef public_459e41
#undef public_459e82
#undef public_459e9b
#undef public_459eae
#undef public_459eb9
#undef public_459ebc
#undef public_459ec1
#undef public_459eea
#undef public_459f03
#undef public_459f16
#undef public_459f20
#undef public_459f43
#undef public_459f5b
#undef public_459f6e
#undef public_459f7b
#undef public_459f7d
#undef public_459f83
#undef public_459fac
#undef public_459fbf
#undef public_459fca
#undef public_459fcd
#undef public_459fcf
#undef public_459fd2
#undef public_459fde
