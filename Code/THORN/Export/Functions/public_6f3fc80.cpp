#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3fc80);

#define public_6f3fc90 _public_6f3fc90

PROC_DECLARE(0x6f3fc80, internal_6f3fc80, public_6f3fc80);
extern "C" NAKED register_t __cdecl internal_6f3fc80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6f3fc90
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        public_6f3fc90 : nop
        ret 
        UNREACHABLE_TRAP(0x6f3fc80)
    }
}

#undef public_6f3fc90
