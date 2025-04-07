#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef8db0);

#define public_6ef8dbd _public_6ef8dbd
#define public_6ef8dcc _public_6ef8dcc
#define public_6ef8dff _public_6ef8dff
#define public_6ef8e04 _public_6ef8e04
#define public_6ef8e09 _public_6ef8e09
#define public_6ef8e0e _public_6ef8e0e
#define public_6ef8e11 _public_6ef8e11
#define public_6ef8e1d _public_6ef8e1d
#define public_6ef8e31 _public_6ef8e31
#define public_6ef8e36 _public_6ef8e36
#define public_6ef8e6a _public_6ef8e6a
#define public_6ef8e72 _public_6ef8e72
#define public_6ef8e7f _public_6ef8e7f
#define public_6ef8e88 _public_6ef8e88

PROC_DECLARE(0x6ef8db0, internal_6ef8db0, public_6ef8db0);
extern "C" NAKED register_t __cdecl internal_6ef8db0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        push edi
        test ecx, 3
        je public_6ef8dcc
        public_6ef8dbd : nop
        mov al, byte ptr ds : [ecx]
        inc ecx
        test al, al
        je public_6ef8dff
        test ecx, 3
        jne public_6ef8dbd
        public_6ef8dcc : nop
        mov eax, dword ptr ds : [ecx]
        mov edx, 0x7EFEFEFF
        add edx, eax
        xor eax, 0xFFFFFFFF
        xor eax, edx
        add ecx, 4
        test eax, 0x81010100
        je public_6ef8dcc
        mov eax, dword ptr ds : [ecx-4]
        test al, al
        je public_6ef8e0e
        test ah, ah
        je public_6ef8e09
        test eax, 0xFF0000
        je public_6ef8e04
        test eax, 0xFF000000
        je public_6ef8dff
        jmp public_6ef8dcc
        public_6ef8dff : nop
        lea edi, ds:[ecx-1]
        jmp public_6ef8e11
        public_6ef8e04 : nop
        lea edi, ds:[ecx-2]
        jmp public_6ef8e11
        public_6ef8e09 : nop
        lea edi, ds:[ecx-3]
        jmp public_6ef8e11
        public_6ef8e0e : nop
        lea edi, ds:[ecx-4]
        public_6ef8e11 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        test ecx, 3
        je public_6ef8e36
        public_6ef8e1d : nop
        mov dl, byte ptr ds : [ecx]
        inc ecx
        test dl, dl
        je public_6ef8e88
        mov byte ptr ds : [edi], dl
        inc edi
        test ecx, 3
        jne public_6ef8e1d
        jmp public_6ef8e36
        public_6ef8e31 : nop
        mov dword ptr ds : [edi], edx
        add edi, 4
        public_6ef8e36 : nop
        mov edx, 0x7EFEFEFF
        mov eax, dword ptr ds : [ecx]
        add edx, eax
        xor eax, 0xFFFFFFFF
        xor eax, edx
        mov edx, dword ptr ds : [ecx]
        add ecx, 4
        test eax, 0x81010100
        je public_6ef8e31
        test dl, dl
        je public_6ef8e88
        test dh, dh
        je public_6ef8e7f
        test edx, 0xFF0000
        je public_6ef8e72
        test edx, 0xFF000000
        je public_6ef8e6a
        jmp public_6ef8e31
        public_6ef8e6a : nop
        mov dword ptr ds : [edi], edx
        mov eax, dword ptr ss : [esp+8]
        pop edi
        ret 
        public_6ef8e72 : nop
        mov word ptr ds : [edi], dx
        mov eax, dword ptr ss : [esp+8]
        mov byte ptr ds : [edi+2], 0
        pop edi
        ret 
        public_6ef8e7f : nop
        mov word ptr ds : [edi], dx
        mov eax, dword ptr ss : [esp+8]
        pop edi
        ret 
        public_6ef8e88 : nop
        mov byte ptr ds : [edi], dl
        mov eax, dword ptr ss : [esp+8]
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6ef8db0)
    }
}

#undef public_6ef8dbd
#undef public_6ef8dcc
#undef public_6ef8dff
#undef public_6ef8e04
#undef public_6ef8e09
#undef public_6ef8e0e
#undef public_6ef8e11
#undef public_6ef8e1d
#undef public_6ef8e31
#undef public_6ef8e36
#undef public_6ef8e6a
#undef public_6ef8e72
#undef public_6ef8e7f
#undef public_6ef8e88
