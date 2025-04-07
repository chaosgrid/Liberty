#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad2b65);
CLANG_FORWARD_PROC_SYMBOL(public_6ad2cad);
CLANG_FORWARD_PROC_SYMBOL(public_6ad4091);
CLANG_FORWARD_PROC_SYMBOL(public_6ad4bd8);

#define public_6ad2ce9 _public_6ad2ce9
#define public_6ad2cf3 _public_6ad2cf3
#define public_6ad2d03 _public_6ad2d03
#define public_6ad2d06 _public_6ad2d06

PROC_DECLARE(0x6ad2cad, internal_6ad2cad, public_6ad2cad);
extern "C" NAKED register_t __cdecl internal_6ad2cad()
{
    __asm
    {
        xor eax, eax
        push 0
        cmp dword ptr ss : [esp+8], eax
        push 0x1000
        sete al
        push eax
        call dword ptr ds : [public_6ada0c8]
        test eax, eax
        mov dword ptr ds : [public_6ae2460], eax
        je public_6ad2d03
        call public_6ad2b65
        cmp eax, 3
        mov dword ptr ds : [public_6ae2464], eax
        jne public_6ad2ce9
        push 0x3F8
        call public_6ad4091
        pop ecx
        jmp public_6ad2cf3
        public_6ad2ce9 : nop
        cmp eax, 2
        jne public_6ad2d06
        call public_6ad4bd8
        public_6ad2cf3 : nop
        test eax, eax
        jne public_6ad2d06
        push dword ptr ds : [public_6ae2460]
        call dword ptr ds : [public_6ada0cc]
        public_6ad2d03 : nop
        xor eax, eax
        ret 
        public_6ad2d06 : nop
        push 1
        pop eax
        ret 
        UNREACHABLE_TRAP(0x6ad2cad)
    }
}

#undef public_6ad2ce9
#undef public_6ad2cf3
#undef public_6ad2d03
#undef public_6ad2d06
