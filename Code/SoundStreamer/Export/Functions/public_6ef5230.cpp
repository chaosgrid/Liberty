#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef5230);

#define public_6ef523c _public_6ef523c
#define public_6ef5250 _public_6ef5250
#define public_6ef5283 _public_6ef5283
#define public_6ef528d _public_6ef528d
#define public_6ef5297 _public_6ef5297
#define public_6ef52a1 _public_6ef52a1

PROC_DECLARE(0x6ef5230, internal_6ef5230, public_6ef5230);
extern "C" NAKED register_t __cdecl internal_6ef5230()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        test ecx, 3
        je public_6ef5250
        public_6ef523c : nop
        mov al, byte ptr ds : [ecx]
        inc ecx
        test al, al
        je public_6ef5283
        test ecx, 3
        jne public_6ef523c
        add eax, 0
        public_6ef5250 : nop
        mov eax, dword ptr ds : [ecx]
        mov edx, 0x7EFEFEFF
        add edx, eax
        xor eax, 0xFFFFFFFF
        xor eax, edx
        add ecx, 4
        test eax, 0x81010100
        je public_6ef5250
        mov eax, dword ptr ds : [ecx-4]
        test al, al
        je public_6ef52a1
        test ah, ah
        je public_6ef5297
        test eax, 0xFF0000
        je public_6ef528d
        test eax, 0xFF000000
        je public_6ef5283
        jmp public_6ef5250
        public_6ef5283 : nop
        lea eax, ds:[ecx-1]
        mov ecx, dword ptr ss : [esp+4]
        sub eax, ecx
        ret 
        public_6ef528d : nop
        lea eax, ds:[ecx-2]
        mov ecx, dword ptr ss : [esp+4]
        sub eax, ecx
        ret 
        public_6ef5297 : nop
        lea eax, ds:[ecx-3]
        mov ecx, dword ptr ss : [esp+4]
        sub eax, ecx
        ret 
        public_6ef52a1 : nop
        lea eax, ds:[ecx-4]
        mov ecx, dword ptr ss : [esp+4]
        sub eax, ecx
        ret 
        UNREACHABLE_TRAP(0x6ef5230)
    }
}

#undef public_6ef523c
#undef public_6ef5250
#undef public_6ef5283
#undef public_6ef528d
#undef public_6ef5297
#undef public_6ef52a1
