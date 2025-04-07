#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad5390);

#define public_6ad53a0 _public_6ad53a0
#define public_6ad53d0 _public_6ad53d0
#define public_6ad53d4 _public_6ad53d4
#define public_6ad53dc _public_6ad53dc
#define public_6ad53f8 _public_6ad53f8

PROC_DECLARE(0x6ad5390, internal_6ad5390, public_6ad5390);
extern "C" NAKED register_t __cdecl internal_6ad5390()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        test edx, 3
        jne public_6ad53dc
        public_6ad53a0 : nop
        mov eax, dword ptr ds : [edx]
        cmp al, byte ptr ds : [ecx]
        jne public_6ad53d4
        or al, al
        je public_6ad53d0
        cmp ah, byte ptr ds : [ecx+1]
        jne public_6ad53d4
        or ah, ah
        je public_6ad53d0
        shr eax, 0x10
        cmp al, byte ptr ds : [ecx+2]
        jne public_6ad53d4
        or al, al
        je public_6ad53d0
        cmp ah, byte ptr ds : [ecx+3]
        jne public_6ad53d4
        add ecx, 4
        add edx, 4
        or ah, ah
        jne public_6ad53a0
        mov edi, edi
        public_6ad53d0 : nop
        xor eax, eax
        ret 
        nop 
        public_6ad53d4 : nop
        sbb eax, eax
        shl eax, 1
        inc eax
        ret 
        mov edi, edi
        public_6ad53dc : nop
        test edx, 1
        je public_6ad53f8
        mov al, byte ptr ds : [edx]
        inc edx
        cmp al, byte ptr ds : [ecx]
        jne public_6ad53d4
        inc ecx
        or al, al
        je public_6ad53d0
        test edx, 2
        je public_6ad53a0
        public_6ad53f8 : nop
        mov ax, word ptr ds : [edx]
        add edx, 2
        cmp al, byte ptr ds : [ecx]
        jne public_6ad53d4
        or al, al
        je public_6ad53d0
        cmp ah, byte ptr ds : [ecx+1]
        jne public_6ad53d4
        or ah, ah
        je public_6ad53d0
        add ecx, 2
        jmp public_6ad53a0
        UNREACHABLE_TRAP(0x6ad5390)
    }
}

#undef public_6ad53a0
#undef public_6ad53d0
#undef public_6ad53d4
#undef public_6ad53dc
#undef public_6ad53f8
