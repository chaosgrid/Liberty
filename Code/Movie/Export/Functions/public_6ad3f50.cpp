#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad3f50);

#define public_6ad3f5d _public_6ad3f5d
#define public_6ad3f6c _public_6ad3f6c
#define public_6ad3f9f _public_6ad3f9f
#define public_6ad3fa4 _public_6ad3fa4
#define public_6ad3fa9 _public_6ad3fa9
#define public_6ad3fae _public_6ad3fae
#define public_6ad3fb1 _public_6ad3fb1
#define public_6ad3fbd _public_6ad3fbd
#define public_6ad3fd1 _public_6ad3fd1
#define public_6ad3fd6 _public_6ad3fd6
#define public_6ad400a _public_6ad400a
#define public_6ad4012 _public_6ad4012
#define public_6ad401f _public_6ad401f
#define public_6ad4028 _public_6ad4028

PROC_DECLARE(0x6ad3f50, internal_6ad3f50, public_6ad3f50);
extern "C" NAKED register_t __cdecl internal_6ad3f50()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        push edi
        test ecx, 3
        je public_6ad3f6c
        public_6ad3f5d : nop
        mov al, byte ptr ds : [ecx]
        inc ecx
        test al, al
        je public_6ad3f9f
        test ecx, 3
        jne public_6ad3f5d
        public_6ad3f6c : nop
        mov eax, dword ptr ds : [ecx]
        mov edx, 0x7EFEFEFF
        add edx, eax
        xor eax, 0xFFFFFFFF
        xor eax, edx
        add ecx, 4
        test eax, 0x81010100
        je public_6ad3f6c
        mov eax, dword ptr ds : [ecx-4]
        test al, al
        je public_6ad3fae
        test ah, ah
        je public_6ad3fa9
        test eax, 0xFF0000
        je public_6ad3fa4
        test eax, 0xFF000000
        je public_6ad3f9f
        jmp public_6ad3f6c
        public_6ad3f9f : nop
        lea edi, ds:[ecx-1]
        jmp public_6ad3fb1
        public_6ad3fa4 : nop
        lea edi, ds:[ecx-2]
        jmp public_6ad3fb1
        public_6ad3fa9 : nop
        lea edi, ds:[ecx-3]
        jmp public_6ad3fb1
        public_6ad3fae : nop
        lea edi, ds:[ecx-4]
        public_6ad3fb1 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        test ecx, 3
        je public_6ad3fd6
        public_6ad3fbd : nop
        mov dl, byte ptr ds : [ecx]
        inc ecx
        test dl, dl
        je public_6ad4028
        mov byte ptr ds : [edi], dl
        inc edi
        test ecx, 3
        jne public_6ad3fbd
        jmp public_6ad3fd6
        public_6ad3fd1 : nop
        mov dword ptr ds : [edi], edx
        add edi, 4
        public_6ad3fd6 : nop
        mov edx, 0x7EFEFEFF
        mov eax, dword ptr ds : [ecx]
        add edx, eax
        xor eax, 0xFFFFFFFF
        xor eax, edx
        mov edx, dword ptr ds : [ecx]
        add ecx, 4
        test eax, 0x81010100
        je public_6ad3fd1
        test dl, dl
        je public_6ad4028
        test dh, dh
        je public_6ad401f
        test edx, 0xFF0000
        je public_6ad4012
        test edx, 0xFF000000
        je public_6ad400a
        jmp public_6ad3fd1
        public_6ad400a : nop
        mov dword ptr ds : [edi], edx
        mov eax, dword ptr ss : [esp+8]
        pop edi
        ret 
        public_6ad4012 : nop
        mov word ptr ds : [edi], dx
        mov eax, dword ptr ss : [esp+8]
        mov byte ptr ds : [edi+2], 0
        pop edi
        ret 
        public_6ad401f : nop
        mov word ptr ds : [edi], dx
        mov eax, dword ptr ss : [esp+8]
        pop edi
        ret 
        public_6ad4028 : nop
        mov byte ptr ds : [edi], dl
        mov eax, dword ptr ss : [esp+8]
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6ad3f50)
    }
}

#undef public_6ad3f5d
#undef public_6ad3f6c
#undef public_6ad3f9f
#undef public_6ad3fa4
#undef public_6ad3fa9
#undef public_6ad3fae
#undef public_6ad3fb1
#undef public_6ad3fbd
#undef public_6ad3fd1
#undef public_6ad3fd6
#undef public_6ad400a
#undef public_6ad4012
#undef public_6ad401f
#undef public_6ad4028
