#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef91a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef91b0);

#define public_6ef91c8 _public_6ef91c8
#define public_6ef91db _public_6ef91db
#define public_6ef91e6 _public_6ef91e6
#define public_6ef9222 _public_6ef9222
#define public_6ef9224 _public_6ef9224
#define public_6ef9228 _public_6ef9228
#define public_6ef9250 _public_6ef9250
#define public_6ef9257 _public_6ef9257
#define public_6ef925e _public_6ef925e
#define public_6ef9265 _public_6ef9265

PROC_DECLARE(0x6ef91b0, internal_6ef91b0, public_6ef91b0);
extern "C" NAKED register_t __cdecl internal_6ef91b0()
{
    __asm
    {
        xor eax, eax
        mov al, byte ptr ss : [esp+8]
        push ebx
        mov ebx, eax
        shl eax, 8
        mov edx, dword ptr ss : [esp+8]
        test edx, 3
        je public_6ef91db
        public_6ef91c8 : nop
        mov cl, byte ptr ds : [edx]
        inc edx
        cmp cl, bl
        je public_6ef91a0
        test cl, cl
        je public_6ef9224
        test edx, 3
        jne public_6ef91c8
        public_6ef91db : nop
        or ebx, eax
        push edi
        mov eax, ebx
        shl ebx, 0x10
        push esi
        or ebx, eax
        public_6ef91e6 : nop
        mov ecx, dword ptr ds : [edx]
        mov edi, 0x7EFEFEFF
        mov eax, ecx
        mov esi, edi
        xor ecx, ebx
        add esi, eax
        add edi, ecx
        xor ecx, 0xFFFFFFFF
        xor eax, 0xFFFFFFFF
        xor ecx, edi
        xor eax, esi
        add edx, 4
        and ecx, 0x81010100
        jne public_6ef9228
        and eax, 0x81010100
        je public_6ef91e6
        and eax, 0x1010100
        jne public_6ef9222
        and esi, 0x80000000
        jne public_6ef91e6
        public_6ef9222 : nop
        pop esi
        pop edi
        public_6ef9224 : nop
        pop ebx
        xor eax, eax
        ret 
        public_6ef9228 : nop
        mov eax, dword ptr ds : [edx-4]
        cmp al, bl
        je public_6ef9265
        test al, al
        je public_6ef9222
        cmp ah, bl
        je public_6ef925e
        test ah, ah
        je public_6ef9222
        shr eax, 0x10
        cmp al, bl
        je public_6ef9257
        test al, al
        je public_6ef9222
        cmp ah, bl
        je public_6ef9250
        test ah, ah
        je public_6ef9222
        jmp public_6ef91e6
        public_6ef9250 : nop
        pop esi
        pop edi
        lea eax, ds:[edx-1]
        pop ebx
        ret 
        public_6ef9257 : nop
        lea eax, ds:[edx-2]
        pop esi
        pop edi
        pop ebx
        ret 
        public_6ef925e : nop
        lea eax, ds:[edx-3]
        pop esi
        pop edi
        pop ebx
        ret 
        public_6ef9265 : nop
        lea eax, ds:[edx-4]
        pop esi
        pop edi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ef91b0)
    }
}

#undef public_6ef91c8
#undef public_6ef91db
#undef public_6ef91e6
#undef public_6ef9222
#undef public_6ef9224
#undef public_6ef9228
#undef public_6ef9250
#undef public_6ef9257
#undef public_6ef925e
#undef public_6ef9265
