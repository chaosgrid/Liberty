#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10006d90);

#define public_10006dc4 _public_10006dc4
#define public_10006de0 _public_10006de0
#define public_10006e00 _public_10006e00
#define public_10006e10 _public_10006e10
#define public_10006e85 _public_10006e85
#define public_10006e99 _public_10006e99
#define public_10006eaf _public_10006eaf
#define public_10006f34 _public_10006f34
#define public_10006f48 _public_10006f48
#define public_10006f53 _public_10006f53
#define public_10006fc6 _public_10006fc6
#define public_10006fd9 _public_10006fd9
#define public_1000703f _public_1000703f
#define public_10007050 _public_10007050
#define public_100070cc _public_100070cc
#define public_100070df _public_100070df
#define public_10007145 _public_10007145
#define public_10007156 _public_10007156
#define public_100071be _public_100071be
#define public_100071d1 _public_100071d1
#define public_10007234 _public_10007234
#define public_10007240 _public_10007240
#define public_10007246 _public_10007246
#define public_1000725e _public_1000725e
#define public_1000726e _public_1000726e
#define public_10007278 _public_10007278
#define public_10007292 _public_10007292

PROC_DECLARE(0x10006d90, internal_10006d90, public_10006d90);
extern "C" NAKED register_t __cdecl internal_10006d90()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        push esi
        push edi
        mov edi, ecx
        movzx ecx, word ptr ds : [edi+2]
        mov dword ptr ss : [esp+0x10], ecx
        xor esi, esi
        or ebx, 0xFFFFFFFF
        cmp dword ptr ss : [esp+0x10], esi
        mov ecx, 7
        mov edx, 4
        jne public_10006dc4
        mov ecx, 0x8A
        mov edx, 3
        public_10006dc4 : nop
        test ebp, ebp
        jl public_10007292
        add edi, 6
        inc ebp
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x18], ebp
        jmp public_10006de0
        lea ebx, ds:[ebx]
        public_10006de0 : nop
        mov edi, dword ptr ss : [esp+0x14]
        movzx edi, word ptr ds : [edi]
        mov ebp, dword ptr ss : [esp+0x10]
        inc esi
        cmp esi, ecx
        mov dword ptr ss : [esp+0x10], edi
        mov dword ptr ss : [esp+0x20], esi
        jge public_10006e00
        cmp ebp, edi
        je public_10007278
        public_10006e00 : nop
        cmp esi, edx
        jge public_10006eaf
        jmp public_10006e10
        lea ebx, ds:[ebx]
        public_10006e10 : nop
        movzx edi, word ptr ds : [eax+ebp*4+0xA76]
        mov ecx, dword ptr ds : [eax+0x16B4]
        mov edx, 0x10
        sub edx, edi
        cmp ecx, edx
        jle public_10006e85
        movzx esi, word ptr ds : [eax+ebp*4+0xA74]
        mov edx, esi
        shl edx, cl
        mov ecx, dword ptr ds : [eax+8]
        or word ptr ds : [eax+0x16B0], dx
        mov edx, dword ptr ds : [eax+0x14]
        mov bl, byte ptr ds : [eax+0x16B0]
        mov byte ptr ds : [ecx+edx], bl
        mov edx, dword ptr ds : [eax+0x14]
        mov bl, byte ptr ds : [eax+0x16B1]
        inc edx
        mov dword ptr ds : [eax+0x14], edx
        mov ecx, edx
        mov edx, dword ptr ds : [eax+8]
        mov byte ptr ds : [ecx+edx], bl
        mov ecx, dword ptr ds : [eax+0x14]
        mov edx, dword ptr ds : [eax+0x16B4]
        inc ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov cl, 0x10
        sub cl, dl
        shr si, cl
        lea ecx, ds:[edx+edi-0x10]
        mov word ptr ds : [eax+0x16B0], si
        mov esi, dword ptr ss : [esp+0x20]
        jmp public_10006e99
        public_10006e85 : nop
        mov dx, word ptr ds : [eax+ebp*4+0xA74]
        shl dx, cl
        or word ptr ds : [eax+0x16B0], dx
        add ecx, edi
        public_10006e99 : nop
        dec esi
        mov dword ptr ds : [eax+0x16B4], ecx
        mov dword ptr ss : [esp+0x20], esi
        jne public_10006e10
        jmp public_10007246
        public_10006eaf : nop
        test ebp, ebp
        je public_10007050
        cmp ebp, ebx
        je public_10006f53
        movzx edi, word ptr ds : [eax+ebp*4+0xA76]
        mov ecx, dword ptr ds : [eax+0x16B4]
        mov edx, 0x10
        sub edx, edi
        cmp ecx, edx
        jle public_10006f34
        movzx esi, word ptr ds : [eax+ebp*4+0xA74]
        mov edx, esi
        shl edx, cl
        mov ecx, dword ptr ds : [eax+8]
        or word ptr ds : [eax+0x16B0], dx
        mov edx, dword ptr ds : [eax+0x14]
        mov bl, byte ptr ds : [eax+0x16B0]
        mov byte ptr ds : [ecx+edx], bl
        mov edx, dword ptr ds : [eax+0x14]
        mov bl, byte ptr ds : [eax+0x16B1]
        inc edx
        mov dword ptr ds : [eax+0x14], edx
        mov ecx, edx
        mov edx, dword ptr ds : [eax+8]
        mov byte ptr ds : [ecx+edx], bl
        mov ecx, dword ptr ds : [eax+0x14]
        mov edx, dword ptr ds : [eax+0x16B4]
        inc ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov cl, 0x10
        sub cl, dl
        shr si, cl
        lea ecx, ds:[edx+edi-0x10]
        mov word ptr ds : [eax+0x16B0], si
        mov esi, dword ptr ss : [esp+0x20]
        jmp public_10006f48
        public_10006f34 : nop
        mov dx, word ptr ds : [eax+ebp*4+0xA74]
        shl dx, cl
        or word ptr ds : [eax+0x16B0], dx
        add ecx, edi
        public_10006f48 : nop
        dec esi
        mov dword ptr ds : [eax+0x16B4], ecx
        mov dword ptr ss : [esp+0x20], esi
        public_10006f53 : nop
        movzx edi, word ptr ds : [eax+0xAB6]
        mov ecx, dword ptr ds : [eax+0x16B4]
        mov edx, 0x10
        sub edx, edi
        cmp ecx, edx
        jle public_10006fc6
        movzx esi, word ptr ds : [eax+0xAB4]
        mov edx, esi
        shl edx, cl
        mov ecx, dword ptr ds : [eax+8]
        or word ptr ds : [eax+0x16B0], dx
        mov edx, dword ptr ds : [eax+0x14]
        mov bl, byte ptr ds : [eax+0x16B0]
        mov byte ptr ds : [ecx+edx], bl
        mov edx, dword ptr ds : [eax+0x14]
        mov bl, byte ptr ds : [eax+0x16B1]
        inc edx
        mov dword ptr ds : [eax+0x14], edx
        mov ecx, edx
        mov edx, dword ptr ds : [eax+8]
        mov byte ptr ds : [ecx+edx], bl
        mov ecx, dword ptr ds : [eax+0x14]
        mov edx, dword ptr ds : [eax+0x16B4]
        inc ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov cl, 0x10
        sub cl, dl
        shr si, cl
        lea ecx, ds:[edx+edi-0x10]
        mov word ptr ds : [eax+0x16B0], si
        mov esi, dword ptr ss : [esp+0x20]
        jmp public_10006fd9
        public_10006fc6 : nop
        mov dx, word ptr ds : [eax+0xAB4]
        shl dx, cl
        or word ptr ds : [eax+0x16B0], dx
        add ecx, edi
        public_10006fd9 : nop
        add esi, 0xFFFFFFFD
        cmp ecx, 0xE
        mov dword ptr ds : [eax+0x16B4], ecx
        jle public_1000703f
        mov edx, esi
        shl edx, cl
        mov ecx, dword ptr ds : [eax+8]
        or word ptr ds : [eax+0x16B0], dx
        mov edx, dword ptr ds : [eax+0x14]
        mov bl, byte ptr ds : [eax+0x16B0]
        mov byte ptr ds : [ecx+edx], bl
        mov edx, dword ptr ds : [eax+0x14]
        mov bl, byte ptr ds : [eax+0x16B1]
        inc edx
        mov dword ptr ds : [eax+0x14], edx
        mov ecx, edx
        mov edx, dword ptr ds : [eax+8]
        mov byte ptr ds : [ecx+edx], bl
        mov ecx, dword ptr ds : [eax+0x14]
        mov edx, dword ptr ds : [eax+0x16B4]
        inc ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov cl, 0x10
        sub cl, dl
        shr si, cl
        add edx, 0xFFFFFFF2
        mov dword ptr ds : [eax+0x16B4], edx
        mov word ptr ds : [eax+0x16B0], si
        jmp public_10007246
        public_1000703f : nop
        shl esi, cl
        or word ptr ds : [eax+0x16B0], si
        add ecx, 2
        jmp public_10007240
        public_10007050 : nop
        cmp esi, 0xA
        mov ecx, dword ptr ds : [eax+0x16B4]
        mov edx, 0x10
        jg public_10007156
        movzx edi, word ptr ds : [eax+0xABA]
        sub edx, edi
        cmp ecx, edx
        jle public_100070cc
        movzx esi, word ptr ds : [eax+0xAB8]
        mov edx, esi
        shl edx, cl
        mov ecx, dword ptr ds : [eax+8]
        or word ptr ds : [eax+0x16B0], dx
        mov edx, dword ptr ds : [eax+0x14]
        mov bl, byte ptr ds : [eax+0x16B0]
        mov byte ptr ds : [ecx+edx], bl
        mov edx, dword ptr ds : [eax+0x14]
        mov bl, byte ptr ds : [eax+0x16B1]
        inc edx
        mov dword ptr ds : [eax+0x14], edx
        mov ecx, edx
        mov edx, dword ptr ds : [eax+8]
        mov byte ptr ds : [ecx+edx], bl
        mov ecx, dword ptr ds : [eax+0x14]
        mov edx, dword ptr ds : [eax+0x16B4]
        inc ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov cl, 0x10
        sub cl, dl
        shr si, cl
        lea ecx, ds:[edx+edi-0x10]
        mov word ptr ds : [eax+0x16B0], si
        mov esi, dword ptr ss : [esp+0x20]
        jmp public_100070df
        public_100070cc : nop
        mov dx, word ptr ds : [eax+0xAB8]
        shl dx, cl
        or word ptr ds : [eax+0x16B0], dx
        add ecx, edi
        public_100070df : nop
        add esi, 0xFFFFFFFD
        cmp ecx, 0xD
        mov dword ptr ds : [eax+0x16B4], ecx
        jle public_10007145
        mov edx, esi
        shl edx, cl
        mov ecx, dword ptr ds : [eax+8]
        or word ptr ds : [eax+0x16B0], dx
        mov edx, dword ptr ds : [eax+0x14]
        mov bl, byte ptr ds : [eax+0x16B0]
        mov byte ptr ds : [ecx+edx], bl
        mov edx, dword ptr ds : [eax+0x14]
        mov bl, byte ptr ds : [eax+0x16B1]
        inc edx
        mov dword ptr ds : [eax+0x14], edx
        mov ecx, edx
        mov edx, dword ptr ds : [eax+8]
        mov byte ptr ds : [ecx+edx], bl
        mov ecx, dword ptr ds : [eax+0x14]
        mov edx, dword ptr ds : [eax+0x16B4]
        inc ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov cl, 0x10
        sub cl, dl
        shr si, cl
        add edx, 0xFFFFFFF3
        mov dword ptr ds : [eax+0x16B4], edx
        mov word ptr ds : [eax+0x16B0], si
        jmp public_10007246
        public_10007145 : nop
        shl esi, cl
        or word ptr ds : [eax+0x16B0], si
        add ecx, 3
        jmp public_10007240
        public_10007156 : nop
        movzx edi, word ptr ds : [eax+0xABE]
        sub edx, edi
        cmp ecx, edx
        jle public_100071be
        movzx esi, word ptr ds : [eax+0xABC]
        mov edx, esi
        shl edx, cl
        mov ecx, dword ptr ds : [eax+8]
        or word ptr ds : [eax+0x16B0], dx
        mov edx, dword ptr ds : [eax+0x14]
        mov bl, byte ptr ds : [eax+0x16B0]
        mov byte ptr ds : [ecx+edx], bl
        mov edx, dword ptr ds : [eax+0x14]
        mov bl, byte ptr ds : [eax+0x16B1]
        inc edx
        mov dword ptr ds : [eax+0x14], edx
        mov ecx, edx
        mov edx, dword ptr ds : [eax+8]
        mov byte ptr ds : [ecx+edx], bl
        mov ecx, dword ptr ds : [eax+0x14]
        mov edx, dword ptr ds : [eax+0x16B4]
        inc ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov cl, 0x10
        sub cl, dl
        shr si, cl
        lea ecx, ds:[edx+edi-0x10]
        mov word ptr ds : [eax+0x16B0], si
        mov esi, dword ptr ss : [esp+0x20]
        jmp public_100071d1
        public_100071be : nop
        mov dx, word ptr ds : [eax+0xABC]
        shl dx, cl
        or word ptr ds : [eax+0x16B0], dx
        add ecx, edi
        public_100071d1 : nop
        add esi, 0xFFFFFFF5
        cmp ecx, 9
        mov dword ptr ds : [eax+0x16B4], ecx
        jle public_10007234
        mov edx, esi
        shl edx, cl
        mov ecx, dword ptr ds : [eax+8]
        or word ptr ds : [eax+0x16B0], dx
        mov edx, dword ptr ds : [eax+0x14]
        mov bl, byte ptr ds : [eax+0x16B0]
        mov byte ptr ds : [ecx+edx], bl
        mov edx, dword ptr ds : [eax+0x14]
        mov bl, byte ptr ds : [eax+0x16B1]
        inc edx
        mov dword ptr ds : [eax+0x14], edx
        mov ecx, edx
        mov edx, dword ptr ds : [eax+8]
        mov byte ptr ds : [ecx+edx], bl
        mov ecx, dword ptr ds : [eax+0x14]
        mov edx, dword ptr ds : [eax+0x16B4]
        inc ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov cl, 0x10
        sub cl, dl
        shr si, cl
        add edx, 0xFFFFFFF7
        mov dword ptr ds : [eax+0x16B4], edx
        mov word ptr ds : [eax+0x16B0], si
        jmp public_10007246
        public_10007234 : nop
        shl esi, cl
        or word ptr ds : [eax+0x16B0], si
        add ecx, 7
        public_10007240 : nop
        mov dword ptr ds : [eax+0x16B4], ecx
        public_10007246 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        xor esi, esi
        test ecx, ecx
        mov ebx, ebp
        jne public_1000725e
        mov ecx, 0x8A
        mov edx, 3
        jmp public_10007278
        public_1000725e : nop
        cmp ebp, ecx
        jne public_1000726e
        mov ecx, 6
        mov edx, 3
        jmp public_10007278
        public_1000726e : nop
        mov ecx, 7
        mov edx, 4
        public_10007278 : nop
        mov ebp, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x18]
        add ebp, 4
        dec edi
        mov dword ptr ss : [esp+0x14], ebp
        mov dword ptr ss : [esp+0x18], edi
        jne public_10006de0
        public_10007292 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x10006d90)
    }
}

#undef public_10006dc4
#undef public_10006de0
#undef public_10006e00
#undef public_10006e10
#undef public_10006e85
#undef public_10006e99
#undef public_10006eaf
#undef public_10006f34
#undef public_10006f48
#undef public_10006f53
#undef public_10006fc6
#undef public_10006fd9
#undef public_1000703f
#undef public_10007050
#undef public_100070cc
#undef public_100070df
#undef public_10007145
#undef public_10007156
#undef public_100071be
#undef public_100071d1
#undef public_10007234
#undef public_10007240
#undef public_10007246
#undef public_1000725e
#undef public_1000726e
#undef public_10007278
#undef public_10007292
