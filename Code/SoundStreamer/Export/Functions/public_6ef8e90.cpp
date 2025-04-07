#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef8e90);

#define public_6ef8ea0 _public_6ef8ea0
#define public_6ef8ed0 _public_6ef8ed0
#define public_6ef8ed4 _public_6ef8ed4
#define public_6ef8edc _public_6ef8edc
#define public_6ef8ef8 _public_6ef8ef8

PROC_DECLARE(0x6ef8e90, internal_6ef8e90, public_6ef8e90);
extern "C" NAKED register_t __cdecl internal_6ef8e90()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        test edx, 3
        jne public_6ef8edc
        public_6ef8ea0 : nop
        mov eax, dword ptr ds : [edx]
        cmp al, byte ptr ds : [ecx]
        jne public_6ef8ed4
        or al, al
        je public_6ef8ed0
        cmp ah, byte ptr ds : [ecx+1]
        jne public_6ef8ed4
        or ah, ah
        je public_6ef8ed0
        shr eax, 0x10
        cmp al, byte ptr ds : [ecx+2]
        jne public_6ef8ed4
        or al, al
        je public_6ef8ed0
        cmp ah, byte ptr ds : [ecx+3]
        jne public_6ef8ed4
        add ecx, 4
        add edx, 4
        or ah, ah
        jne public_6ef8ea0
        mov edi, edi
        public_6ef8ed0 : nop
        xor eax, eax
        ret 
        nop 
        public_6ef8ed4 : nop
        sbb eax, eax
        shl eax, 1
        inc eax
        ret 
        mov edi, edi
        public_6ef8edc : nop
        test edx, 1
        je public_6ef8ef8
        mov al, byte ptr ds : [edx]
        inc edx
        cmp al, byte ptr ds : [ecx]
        jne public_6ef8ed4
        inc ecx
        or al, al
        je public_6ef8ed0
        test edx, 2
        je public_6ef8ea0
        public_6ef8ef8 : nop
        mov ax, word ptr ds : [edx]
        add edx, 2
        cmp al, byte ptr ds : [ecx]
        jne public_6ef8ed4
        or al, al
        je public_6ef8ed0
        cmp ah, byte ptr ds : [ecx+1]
        jne public_6ef8ed4
        or ah, ah
        je public_6ef8ed0
        add ecx, 2
        jmp public_6ef8ea0
        UNREACHABLE_TRAP(0x6ef8e90)
    }
}

#undef public_6ef8ea0
#undef public_6ef8ed0
#undef public_6ef8ed4
#undef public_6ef8edc
#undef public_6ef8ef8
