#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cffff0);
CLANG_FORWARD_PROC_SYMBOL(public_6d18850);
CLANG_FORWARD_PROC_SYMBOL(public_6d43390);
CLANG_FORWARD_PROC_SYMBOL(public_6d43c00);
CLANG_FORWARD_PROC_SYMBOL(public_6d50e40);
CLANG_FORWARD_PROC_SYMBOL(public_6d54600);

#define public_6d4520d _public_6d4520d

PROC_DECLARE(0x6d451c0, internal_6d451c0, public_6d451c0);
extern "C" NAKED register_t __cdecl internal_6d451c0()
{
    __asm
    {
        mov ecx, offset public_6d90260
        call public_6d54600
        call public_6cffff0
        call dword ptr ds : [public_6d64840]
        call public_6d18850
        call public_6d43c00
        call dword ptr ds : [public_6d6483c]
        mov ecx, dword ptr ds : [public_6d8fb14]
        test ecx, ecx
        je public_6d4520d
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x3C]
        mov ecx, dword ptr ds : [public_6d8fb14]
        push ecx
        call public_6d43390
        add esp, 4
        mov dword ptr ds : [public_6d8fb14], 0
        public_6d4520d : nop
        mov ecx, offset public_6d90260
        jmp public_6d50e40
        UNREACHABLE_TRAP(0x6d451c0)
    }
}

#undef public_6d4520d
