#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_402670);

#define public_402680 _public_402680

PROC_DECLARE(0x402670, internal_402670, public_402670);
extern "C" NAKED register_t __cdecl internal_402670()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_402680
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        public_402680 : nop
        ret 
        UNREACHABLE_TRAP(0x402670)
    }
}

#undef public_402680
