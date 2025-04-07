#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2a150);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b250);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b440);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b790);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b900);

#define public_6f2a17b _public_6f2a17b

PROC_DECLARE(0x6f2a150, internal_6f2a150, public_6f2a150);
extern "C" NAKED register_t __cdecl internal_6f2a150()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push esi
        call public_6f4b440
        add esp, 4
        test eax, eax
        je public_6f2a17b
        push esi
        call public_6f4b900
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        call public_6f4b790
        add esp, 8
        pop esi
        jmp public_6f4b250
        public_6f2a17b : nop
        mov eax, dword ptr ds : [public_6f61de8]
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f2a150)
    }
}

#undef public_6f2a17b
