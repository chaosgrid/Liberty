#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65dd100);

#define public_65dd110 _public_65dd110
#define public_65dd140 _public_65dd140
#define public_65dd144 _public_65dd144
#define public_65dd14c _public_65dd14c
#define public_65dd168 _public_65dd168

PROC_DECLARE(0x65dd100, internal_65dd100, public_65dd100);
extern "C" NAKED register_t __cdecl internal_65dd100()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        test edx, 3
        jne public_65dd14c
        public_65dd110 : nop
        mov eax, dword ptr ds : [edx]
        cmp al, byte ptr ds : [ecx]
        jne public_65dd144
        or al, al
        je public_65dd140
        cmp ah, byte ptr ds : [ecx+1]
        jne public_65dd144
        or ah, ah
        je public_65dd140
        shr eax, 0x10
        cmp al, byte ptr ds : [ecx+2]
        jne public_65dd144
        or al, al
        je public_65dd140
        cmp ah, byte ptr ds : [ecx+3]
        jne public_65dd144
        add ecx, 4
        add edx, 4
        or ah, ah
        jne public_65dd110
        mov edi, edi
        public_65dd140 : nop
        xor eax, eax
        ret 
        nop 
        public_65dd144 : nop
        sbb eax, eax
        shl eax, 1
        inc eax
        ret 
        mov edi, edi
        public_65dd14c : nop
        test edx, 1
        je public_65dd168
        mov al, byte ptr ds : [edx]
        inc edx
        cmp al, byte ptr ds : [ecx]
        jne public_65dd144
        inc ecx
        or al, al
        je public_65dd140
        test edx, 2
        je public_65dd110
        public_65dd168 : nop
        mov ax, word ptr ds : [edx]
        add edx, 2
        cmp al, byte ptr ds : [ecx]
        jne public_65dd144
        or al, al
        je public_65dd140
        cmp ah, byte ptr ds : [ecx+1]
        jne public_65dd144
        or ah, ah
        je public_65dd140
        add ecx, 2
        jmp public_65dd110
        UNREACHABLE_TRAP(0x65dd100)
    }
}

#undef public_65dd110
#undef public_65dd140
#undef public_65dd144
#undef public_65dd14c
#undef public_65dd168
