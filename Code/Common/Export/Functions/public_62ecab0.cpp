#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ecab0);

#define public_62ecac5 _public_62ecac5

PROC_DECLARE(0x62ecab0, internal_62ecab0, public_62ecab0);
extern "C" NAKED register_t __cdecl internal_62ecab0()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0xC5]
        test al, al
        jne public_62ecac5
        mov eax, dword ptr ds : [ecx+0xC]
        test eax, eax
        je public_62ecac5
        add eax, 0xFFFFFFF8
        ret 
        public_62ecac5 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x62ecab0)
    }
}

#undef public_62ecac5
