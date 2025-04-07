#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6715390);
CLANG_FORWARD_PROC_SYMBOL(public_6715440);

#define public_671545b _public_671545b

PROC_DECLARE(0x6715440, internal_6715440, public_6715440);
extern "C" NAKED register_t __cdecl internal_6715440()
{
    __asm
    {
        mov al, byte ptr ds : [public_671cfba]
        test al, al
        je public_671545b
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [public_671b7b4], eax
        mov dword ptr ss : [esp+4], eax
        jmp public_6715390
        public_671545b : nop
        ret 
        UNREACHABLE_TRAP(0x6715440)
    }
}

#undef public_671545b
