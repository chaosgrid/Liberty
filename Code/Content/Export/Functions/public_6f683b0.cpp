#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f683b0);

#define public_6f683d7 _public_6f683d7

PROC_DECLARE(0x6f683b0, internal_6f683b0, public_6f683b0);
extern "C" NAKED register_t __cdecl internal_6f683b0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        lea eax, ss:[esp+4]
        push eax
        push ecx
        call dword ptr ds : [public_6fb33a0]
        add esp, 8
        test eax, eax
        jne public_6f683d7
        test dword ptr ss : [esp+4], 0xFDFF
        je public_6f683d7
        mov eax, 1
        ret 
        public_6f683d7 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6f683b0)
    }
}

#undef public_6f683d7
