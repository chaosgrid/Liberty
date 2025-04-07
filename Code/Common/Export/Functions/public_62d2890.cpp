#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d28b0);

#define public_62d28a1 _public_62d28a1

PROC_DECLARE(0x62d2890, internal_62d2890, public_62d2890);
extern "C" NAKED register_t __cdecl internal_62d2890()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        je public_62d28a1
        mov eax, dword ptr ds : [eax]
        push 1
        push eax
        call public_62d28b0
        public_62d28a1 : nop
        ret 
        UNREACHABLE_TRAP(0x62d2890)
    }
}

#undef public_62d28a1
