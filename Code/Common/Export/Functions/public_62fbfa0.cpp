#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6280240);
CLANG_FORWARD_PROC_SYMBOL(public_62fbfa0);
CLANG_FORWARD_PROC_SYMBOL(public_6319b80);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62fbfc4 _public_62fbfc4
#define public_62fbfe2 _public_62fbfe2
#define public_62fbfed _public_62fbfed
#define public_62fbff6 _public_62fbff6
#define public_62fc001 _public_62fc001
#define public_62fc01d _public_62fc01d
#define public_62fc034 _public_62fc034
#define public_62fc041 _public_62fc041
#define public_62fc04c _public_62fc04c
#define public_62fc04f _public_62fc04f
#define public_62fc067 _public_62fc067
#define public_62fc072 _public_62fc072
#define public_62fc075 _public_62fc075
#define public_62fc08a _public_62fc08a
#define public_62fc095 _public_62fc095
#define public_62fc0a0 _public_62fc0a0
#define public_62fc0a3 _public_62fc0a3
#define public_62fc0b7 _public_62fc0b7
#define public_62fc0c3 _public_62fc0c3
#define public_62fc0cf _public_62fc0cf
#define public_62fc0d2 _public_62fc0d2
#define public_62fc0f0 _public_62fc0f0
#define public_62fc12f _public_62fc12f
#define public_62fc142 _public_62fc142
#define public_62fc14d _public_62fc14d
#define public_62fc150 _public_62fc150
#define public_62fc15b _public_62fc15b
#define public_62fc16e _public_62fc16e
#define public_62fc195 _public_62fc195
#define public_62fc1af _public_62fc1af
#define public_62fc1d5 _public_62fc1d5
#define public_62fc1e8 _public_62fc1e8
#define public_62fc1f5 _public_62fc1f5
#define public_62fc1f7 _public_62fc1f7
#define public_62fc202 _public_62fc202
#define public_62fc219 _public_62fc219
#define public_62fc231 _public_62fc231
#define public_62fc23e _public_62fc23e
#define public_62fc240 _public_62fc240
#define public_62fc24c _public_62fc24c
#define public_62fc276 _public_62fc276
#define public_62fc28e _public_62fc28e
#define public_62fc29e _public_62fc29e
#define public_62fc2a8 _public_62fc2a8
#define public_62fc2cb _public_62fc2cb
#define public_62fc2de _public_62fc2de
#define public_62fc2e9 _public_62fc2e9
#define public_62fc2ec _public_62fc2ec
#define public_62fc2f6 _public_62fc2f6
#define public_62fc31f _public_62fc31f
#define public_62fc332 _public_62fc332
#define public_62fc33f _public_62fc33f
#define public_62fc341 _public_62fc341
#define public_62fc344 _public_62fc344
#define public_62fc347 _public_62fc347
#define public_62fc34e _public_62fc34e

PROC_DECLARE(0x62fbfa0, internal_62fbfa0, public_62fbfa0);
extern "C" NAKED register_t __cdecl internal_62fbfa0()
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
        call public_6319b80
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_62fbfe2
        mov eax, dword ptr ds : [esi+8]
        public_62fbfc4 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_62fc067
        mov dword ptr ds : [ecx+4], eax
        jmp public_62fc075
        public_62fbfe2 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_62fbfed
        mov eax, edx
        jmp public_62fbfc4
        public_62fbfed : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x41]
        test bl, bl
        jne public_62fc001
        public_62fbff6 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x41]
        test bl, bl
        je public_62fbff6
        public_62fc001 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_62fbfc4
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_62fc01d
        mov dword ptr ds : [eax+4], ecx
        jmp public_62fc034
        public_62fc01d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_62fc034 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_62fc041
        mov dword ptr ds : [edx+4], ecx
        jmp public_62fc04f
        public_62fc041 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_62fc04c
        mov dword ptr ds : [edx], ecx
        jmp public_62fc04f
        public_62fc04c : nop
        mov dword ptr ds : [edx+8], ecx
        public_62fc04f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x40]
        mov dl, byte ptr ds : [ecx+0x40]
        mov byte ptr ds : [ecx+0x40], bl
        mov byte ptr ds : [esi+0x40], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_62fc0d2
        public_62fc067 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_62fc072
        mov dword ptr ds : [ecx], eax
        jmp public_62fc075
        public_62fc072 : nop
        mov dword ptr ds : [ecx+8], eax
        public_62fc075 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_62fc0a3
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_62fc08a
        mov edx, dword ptr ds : [esi+4]
        jmp public_62fc0a0
        public_62fc08a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x41]
        test bl, bl
        mov edx, eax
        jne public_62fc0a0
        public_62fc095 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x41]
        test bl, bl
        je public_62fc095
        public_62fc0a0 : nop
        mov dword ptr ss : [ebp], edx
        public_62fc0a3 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_62fc0d2
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_62fc0b7
        mov edx, dword ptr ds : [esi+4]
        jmp public_62fc0cf
        public_62fc0b7 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x41]
        test bl, bl
        mov edx, eax
        jne public_62fc0cf
        public_62fc0c3 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x41]
        test bl, bl
        je public_62fc0c3
        public_62fc0cf : nop
        mov dword ptr ss : [ebp+8], edx
        public_62fc0d2 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x40]
        mov bl, 1
        cmp cl, bl
        jne public_62fc34e
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_62fc347
        nop 
        public_62fc0f0 : nop
        cmp byte ptr ds : [eax+0x40], bl
        jne public_62fc347
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_62fc1af
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x40]
        test dl, dl
        jne public_62fc15b
        mov byte ptr ds : [ecx+0x40], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x40], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_62fc12f
        mov dword ptr ds : [esi+4], ecx
        public_62fc12f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_62fc142
        mov dword ptr ds : [esi+4], edx
        jmp public_62fc150
        public_62fc142 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_62fc14d
        mov dword ptr ds : [esi], edx
        jmp public_62fc150
        public_62fc14d : nop
        mov dword ptr ds : [esi+8], edx
        public_62fc150 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_62fc15b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x40], bl
        jne public_62fc16e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x40], bl
        je public_62fc219
        public_62fc16e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x40], bl
        jne public_62fc24c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x40], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x40], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_62fc195
        mov dword ptr ds : [esi+4], ecx
        public_62fc195 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_62fc231
        mov dword ptr ds : [esi+4], edx
        jmp public_62fc240
        public_62fc1af : nop
        mov dl, byte ptr ds : [ecx+0x40]
        test dl, dl
        jne public_62fc202
        mov byte ptr ds : [ecx+0x40], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x40], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_62fc1d5
        mov dword ptr ds : [esi+4], ecx
        public_62fc1d5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_62fc1e8
        mov dword ptr ds : [esi+4], edx
        jmp public_62fc1f7
        public_62fc1e8 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_62fc1f5
        mov dword ptr ds : [esi+8], edx
        jmp public_62fc1f7
        public_62fc1f5 : nop
        mov dword ptr ds : [esi], edx
        public_62fc1f7 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_62fc202 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x40], bl
        jne public_62fc2a8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x40], bl
        jne public_62fc2a8
        public_62fc219 : nop
        mov byte ptr ds : [ecx+0x40], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_62fc0f0
        jmp public_62fc347
        public_62fc231 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_62fc23e
        mov dword ptr ds : [esi+8], edx
        jmp public_62fc240
        public_62fc23e : nop
        mov dword ptr ds : [esi], edx
        public_62fc240 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_62fc24c : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x40]
        mov byte ptr ds : [ecx+0x40], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x40], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x40], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_62fc276
        mov dword ptr ds : [esi+4], ecx
        public_62fc276 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_62fc28e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_62fc344
        public_62fc28e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_62fc29e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_62fc344
        public_62fc29e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_62fc344
        public_62fc2a8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x40], bl
        jne public_62fc2f6
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x40], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x40], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_62fc2cb
        mov dword ptr ds : [esi+4], ecx
        public_62fc2cb : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_62fc2de
        mov dword ptr ds : [esi+4], edx
        jmp public_62fc2ec
        public_62fc2de : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_62fc2e9
        mov dword ptr ds : [esi], edx
        jmp public_62fc2ec
        public_62fc2e9 : nop
        mov dword ptr ds : [esi+8], edx
        public_62fc2ec : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_62fc2f6 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x40]
        mov byte ptr ds : [ecx+0x40], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x40], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x40], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_62fc31f
        mov dword ptr ds : [esi+4], ecx
        public_62fc31f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_62fc332
        mov dword ptr ds : [esi+4], edx
        jmp public_62fc341
        public_62fc332 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_62fc33f
        mov dword ptr ds : [esi+8], edx
        jmp public_62fc341
        public_62fc33f : nop
        mov dword ptr ds : [esi], edx
        public_62fc341 : nop
        mov dword ptr ds : [edx+8], ecx
        public_62fc344 : nop
        mov dword ptr ds : [ecx+4], edx
        public_62fc347 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x40], bl
        public_62fc34e : nop
        lea ecx, ds:[esi+0xC]
        call public_6280240
        push esi
        call public_6391d5a
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
        UNREACHABLE_TRAP(0x62fbfa0)
    }
}

#undef public_62fbfc4
#undef public_62fbfe2
#undef public_62fbfed
#undef public_62fbff6
#undef public_62fc001
#undef public_62fc01d
#undef public_62fc034
#undef public_62fc041
#undef public_62fc04c
#undef public_62fc04f
#undef public_62fc067
#undef public_62fc072
#undef public_62fc075
#undef public_62fc08a
#undef public_62fc095
#undef public_62fc0a0
#undef public_62fc0a3
#undef public_62fc0b7
#undef public_62fc0c3
#undef public_62fc0cf
#undef public_62fc0d2
#undef public_62fc0f0
#undef public_62fc12f
#undef public_62fc142
#undef public_62fc14d
#undef public_62fc150
#undef public_62fc15b
#undef public_62fc16e
#undef public_62fc195
#undef public_62fc1af
#undef public_62fc1d5
#undef public_62fc1e8
#undef public_62fc1f5
#undef public_62fc1f7
#undef public_62fc202
#undef public_62fc219
#undef public_62fc231
#undef public_62fc23e
#undef public_62fc240
#undef public_62fc24c
#undef public_62fc276
#undef public_62fc28e
#undef public_62fc29e
#undef public_62fc2a8
#undef public_62fc2cb
#undef public_62fc2de
#undef public_62fc2e9
#undef public_62fc2ec
#undef public_62fc2f6
#undef public_62fc31f
#undef public_62fc332
#undef public_62fc33f
#undef public_62fc341
#undef public_62fc344
#undef public_62fc347
#undef public_62fc34e
