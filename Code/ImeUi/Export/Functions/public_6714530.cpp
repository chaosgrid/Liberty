#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6714530);
CLANG_FORWARD_PROC_SYMBOL(public_67154c0);

#define public_671453c _public_671453c

PROC_DECLARE(0x6714530, internal_6714530, public_6714530);
extern "C" NAKED register_t __cdecl internal_6714530()
{
    __asm
    {
        mov al, byte ptr ds : [public_671cfba]
        test al, al
        jne public_671453c
        xor eax, eax
        ret 
        public_671453c : nop
        call public_67154c0
        mov eax, dword ptr ds : [public_671cfbc]
        ret 
        UNREACHABLE_TRAP(0x6714530)
    }
}

#undef public_671453c
