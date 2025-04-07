#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6363280);

#define public_63632c4 _public_63632c4
#define public_63632e5 _public_63632e5
#define public_63632ec _public_63632ec
#define public_6363314 _public_6363314
#define public_6363321 _public_6363321
#define public_636332b _public_636332b

PROC_DECLARE(0x6363280, internal_6363280, public_6363280);
extern "C" NAKED register_t __cdecl internal_6363280()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push ebp
        push esi
        mov edx, ebx
        push edi
        mov edi, dword ptr ds : [ecx+4]
        shl edx, 4
        add edx, edi
        xor esi, esi
        mov si, word ptr ds : [edx+6]
        xor eax, eax
        mov ax, word ptr ds : [edx+4]
        cmp esi, 0xFFFF
        je public_63632c4
        mov ebp, esi
        shl ebp, 4
        cmp eax, 0xFFFF
        mov word ptr ds : [edi+ebp+4], ax
        je public_63632ec
        mov edi, dword ptr ds : [ecx+4]
        shl eax, 4
        mov word ptr ds : [eax+edi+6], si
        jmp public_63632ec
        public_63632c4 : nop
        cmp eax, 0xFFFF
        mov word ptr ds : [ecx+0xE], ax
        je public_63632e5
        shl eax, 4
        mov word ptr ds : [eax+edi+6], 0xFFFF
        mov esi, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [esi+eax+8]
        mov dword ptr ds : [ecx+8], eax
        jmp public_63632ec
        public_63632e5 : nop
        mov dword ptr ds : [ecx+8], 0x501502F9
        public_63632ec : nop
        xor esi, esi
        mov si, word ptr ds : [edx]
        cmp esi, 0xFFFE
        je public_636332b
        xor eax, eax
        cmp esi, 0xFFFF
        mov ax, word ptr ds : [edx+2]
        je public_6363314
        mov ebp, dword ptr ds : [ecx+4]
        mov edi, esi
        shl edi, 4
        mov word ptr ds : [edi+ebp+2], ax
        public_6363314 : nop
        cmp eax, 0xFFFF
        jne public_6363321
        mov word ptr ds : [ecx+0xC], si
        jmp public_636332b
        public_6363321 : nop
        mov edi, dword ptr ds : [ecx+4]
        shl eax, 4
        mov word ptr ds : [eax+edi], si
        public_636332b : nop
        mov ax, word ptr ds : [ecx+2]
        dec word ptr ds : [ecx+0x10]
        pop edi
        pop esi
        mov word ptr ds : [edx+4], ax
        pop ebp
        mov word ptr ds : [ecx+2], bx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6363280)
    }
}

#undef public_63632c4
#undef public_63632e5
#undef public_63632ec
#undef public_6363314
#undef public_6363321
#undef public_636332b
