#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d41e65);

#define public_6d41e79 _public_6d41e79

PROC_DECLARE(0x6d41e65, internal_6d41e65, public_6d41e65);
extern "C" NAKED register_t __cdecl internal_6d41e65()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0x44]
        test eax, eax
        je public_6d41e79
        push dword ptr ss : [esp+8]
        push ecx
        call eax
        pop ecx
        pop ecx
        public_6d41e79 : nop
        ret 
        UNREACHABLE_TRAP(0x6d41e65)
    }
}

#undef public_6d41e79
