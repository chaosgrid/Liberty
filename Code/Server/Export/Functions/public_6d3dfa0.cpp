#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3cd60);
CLANG_FORWARD_PROC_SYMBOL(public_6d3dfa0);
CLANG_FORWARD_PROC_SYMBOL(public_6d3f120);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d3dfc4 _public_6d3dfc4
#define public_6d3dfe2 _public_6d3dfe2
#define public_6d3dfed _public_6d3dfed
#define public_6d3dff6 _public_6d3dff6
#define public_6d3e001 _public_6d3e001
#define public_6d3e01d _public_6d3e01d
#define public_6d3e034 _public_6d3e034
#define public_6d3e041 _public_6d3e041
#define public_6d3e04c _public_6d3e04c
#define public_6d3e04f _public_6d3e04f
#define public_6d3e067 _public_6d3e067
#define public_6d3e072 _public_6d3e072
#define public_6d3e075 _public_6d3e075
#define public_6d3e08a _public_6d3e08a
#define public_6d3e095 _public_6d3e095
#define public_6d3e0a0 _public_6d3e0a0
#define public_6d3e0a3 _public_6d3e0a3
#define public_6d3e0b7 _public_6d3e0b7
#define public_6d3e0c3 _public_6d3e0c3
#define public_6d3e0cf _public_6d3e0cf
#define public_6d3e0d2 _public_6d3e0d2
#define public_6d3e0f0 _public_6d3e0f0
#define public_6d3e12f _public_6d3e12f
#define public_6d3e142 _public_6d3e142
#define public_6d3e14d _public_6d3e14d
#define public_6d3e150 _public_6d3e150
#define public_6d3e15b _public_6d3e15b
#define public_6d3e16e _public_6d3e16e
#define public_6d3e195 _public_6d3e195
#define public_6d3e1af _public_6d3e1af
#define public_6d3e1d5 _public_6d3e1d5
#define public_6d3e1e8 _public_6d3e1e8
#define public_6d3e1f5 _public_6d3e1f5
#define public_6d3e1f7 _public_6d3e1f7
#define public_6d3e202 _public_6d3e202
#define public_6d3e219 _public_6d3e219
#define public_6d3e231 _public_6d3e231
#define public_6d3e23e _public_6d3e23e
#define public_6d3e240 _public_6d3e240
#define public_6d3e24c _public_6d3e24c
#define public_6d3e276 _public_6d3e276
#define public_6d3e28e _public_6d3e28e
#define public_6d3e29e _public_6d3e29e
#define public_6d3e2a8 _public_6d3e2a8
#define public_6d3e2cb _public_6d3e2cb
#define public_6d3e2de _public_6d3e2de
#define public_6d3e2e9 _public_6d3e2e9
#define public_6d3e2ec _public_6d3e2ec
#define public_6d3e2f6 _public_6d3e2f6
#define public_6d3e31f _public_6d3e31f
#define public_6d3e332 _public_6d3e332
#define public_6d3e33f _public_6d3e33f
#define public_6d3e341 _public_6d3e341
#define public_6d3e344 _public_6d3e344
#define public_6d3e347 _public_6d3e347
#define public_6d3e34e _public_6d3e34e

PROC_DECLARE(0x6d3dfa0, internal_6d3dfa0, public_6d3dfa0);
extern "C" NAKED register_t __cdecl internal_6d3dfa0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        push edi
        mov edi, ecx
        lea ecx, ss:[esp+0x1C]
        call public_6d3f120
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6d3dfe2
        mov eax, dword ptr ds : [esi+8]
        public_6d3dfc4 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6d3e067
        mov dword ptr ds : [ecx+4], eax
        jmp public_6d3e075
        public_6d3dfe2 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6d3dfed
        mov eax, edx
        jmp public_6d3dfc4
        public_6d3dfed : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x29]
        test bl, bl
        jne public_6d3e001
        public_6d3dff6 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x29]
        test bl, bl
        je public_6d3dff6
        public_6d3e001 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6d3dfc4
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6d3e01d
        mov dword ptr ds : [eax+4], ecx
        jmp public_6d3e034
        public_6d3e01d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6d3e034 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6d3e041
        mov dword ptr ds : [edx+4], ecx
        jmp public_6d3e04f
        public_6d3e041 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6d3e04c
        mov dword ptr ds : [edx], ecx
        jmp public_6d3e04f
        public_6d3e04c : nop
        mov dword ptr ds : [edx+8], ecx
        public_6d3e04f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x28]
        mov dl, byte ptr ds : [ecx+0x28]
        mov byte ptr ds : [ecx+0x28], bl
        mov byte ptr ds : [esi+0x28], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6d3e0d2
        public_6d3e067 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6d3e072
        mov dword ptr ds : [ecx], eax
        jmp public_6d3e075
        public_6d3e072 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6d3e075 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6d3e0a3
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6d3e08a
        mov edx, dword ptr ds : [esi+4]
        jmp public_6d3e0a0
        public_6d3e08a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x29]
        test bl, bl
        mov edx, eax
        jne public_6d3e0a0
        public_6d3e095 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x29]
        test bl, bl
        je public_6d3e095
        public_6d3e0a0 : nop
        mov dword ptr ss : [ebp], edx
        public_6d3e0a3 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6d3e0d2
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6d3e0b7
        mov edx, dword ptr ds : [esi+4]
        jmp public_6d3e0cf
        public_6d3e0b7 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x29]
        test bl, bl
        mov edx, eax
        jne public_6d3e0cf
        public_6d3e0c3 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x29]
        test bl, bl
        je public_6d3e0c3
        public_6d3e0cf : nop
        mov dword ptr ss : [ebp+8], edx
        public_6d3e0d2 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x28]
        mov bl, 1
        cmp cl, bl
        jne public_6d3e34e
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_6d3e347
        nop 
        public_6d3e0f0 : nop
        cmp byte ptr ds : [eax+0x28], bl
        jne public_6d3e347
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6d3e1af
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x28]
        test dl, dl
        jne public_6d3e15b
        mov byte ptr ds : [ecx+0x28], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x28], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6d3e12f
        mov dword ptr ds : [esi+4], ecx
        public_6d3e12f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6d3e142
        mov dword ptr ds : [esi+4], edx
        jmp public_6d3e150
        public_6d3e142 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6d3e14d
        mov dword ptr ds : [esi], edx
        jmp public_6d3e150
        public_6d3e14d : nop
        mov dword ptr ds : [esi+8], edx
        public_6d3e150 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6d3e15b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x28], bl
        jne public_6d3e16e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x28], bl
        je public_6d3e219
        public_6d3e16e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x28], bl
        jne public_6d3e24c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x28], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x28], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6d3e195
        mov dword ptr ds : [esi+4], ecx
        public_6d3e195 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6d3e231
        mov dword ptr ds : [esi+4], edx
        jmp public_6d3e240
        public_6d3e1af : nop
        mov dl, byte ptr ds : [ecx+0x28]
        test dl, dl
        jne public_6d3e202
        mov byte ptr ds : [ecx+0x28], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x28], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6d3e1d5
        mov dword ptr ds : [esi+4], ecx
        public_6d3e1d5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6d3e1e8
        mov dword ptr ds : [esi+4], edx
        jmp public_6d3e1f7
        public_6d3e1e8 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6d3e1f5
        mov dword ptr ds : [esi+8], edx
        jmp public_6d3e1f7
        public_6d3e1f5 : nop
        mov dword ptr ds : [esi], edx
        public_6d3e1f7 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6d3e202 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x28], bl
        jne public_6d3e2a8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x28], bl
        jne public_6d3e2a8
        public_6d3e219 : nop
        mov byte ptr ds : [ecx+0x28], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6d3e0f0
        jmp public_6d3e347
        public_6d3e231 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6d3e23e
        mov dword ptr ds : [esi+8], edx
        jmp public_6d3e240
        public_6d3e23e : nop
        mov dword ptr ds : [esi], edx
        public_6d3e240 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6d3e24c : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x28]
        mov byte ptr ds : [ecx+0x28], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x28], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x28], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6d3e276
        mov dword ptr ds : [esi+4], ecx
        public_6d3e276 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6d3e28e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6d3e344
        public_6d3e28e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6d3e29e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6d3e344
        public_6d3e29e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6d3e344
        public_6d3e2a8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x28], bl
        jne public_6d3e2f6
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x28], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x28], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6d3e2cb
        mov dword ptr ds : [esi+4], ecx
        public_6d3e2cb : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6d3e2de
        mov dword ptr ds : [esi+4], edx
        jmp public_6d3e2ec
        public_6d3e2de : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6d3e2e9
        mov dword ptr ds : [esi], edx
        jmp public_6d3e2ec
        public_6d3e2e9 : nop
        mov dword ptr ds : [esi+8], edx
        public_6d3e2ec : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6d3e2f6 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x28]
        mov byte ptr ds : [ecx+0x28], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x28], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x28], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6d3e31f
        mov dword ptr ds : [esi+4], ecx
        public_6d3e31f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6d3e332
        mov dword ptr ds : [esi+4], edx
        jmp public_6d3e341
        public_6d3e332 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6d3e33f
        mov dword ptr ds : [esi+8], edx
        jmp public_6d3e341
        public_6d3e33f : nop
        mov dword ptr ds : [esi], edx
        public_6d3e341 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6d3e344 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6d3e347 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x28], bl
        public_6d3e34e : nop
        lea ecx, ds:[esi+0xC]
        call public_6d3cd60
        push esi
        call public_6d5ffb0
        mov eax, dword ptr ds : [edi+0x10]
        mov edx, dword ptr ss : [esp+0x20]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+0x10], eax
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d3dfa0)
    }
}

#undef public_6d3dfc4
#undef public_6d3dfe2
#undef public_6d3dfed
#undef public_6d3dff6
#undef public_6d3e001
#undef public_6d3e01d
#undef public_6d3e034
#undef public_6d3e041
#undef public_6d3e04c
#undef public_6d3e04f
#undef public_6d3e067
#undef public_6d3e072
#undef public_6d3e075
#undef public_6d3e08a
#undef public_6d3e095
#undef public_6d3e0a0
#undef public_6d3e0a3
#undef public_6d3e0b7
#undef public_6d3e0c3
#undef public_6d3e0cf
#undef public_6d3e0d2
#undef public_6d3e0f0
#undef public_6d3e12f
#undef public_6d3e142
#undef public_6d3e14d
#undef public_6d3e150
#undef public_6d3e15b
#undef public_6d3e16e
#undef public_6d3e195
#undef public_6d3e1af
#undef public_6d3e1d5
#undef public_6d3e1e8
#undef public_6d3e1f5
#undef public_6d3e1f7
#undef public_6d3e202
#undef public_6d3e219
#undef public_6d3e231
#undef public_6d3e23e
#undef public_6d3e240
#undef public_6d3e24c
#undef public_6d3e276
#undef public_6d3e28e
#undef public_6d3e29e
#undef public_6d3e2a8
#undef public_6d3e2cb
#undef public_6d3e2de
#undef public_6d3e2e9
#undef public_6d3e2ec
#undef public_6d3e2f6
#undef public_6d3e31f
#undef public_6d3e332
#undef public_6d3e33f
#undef public_6d3e341
#undef public_6d3e344
#undef public_6d3e347
#undef public_6d3e34e
