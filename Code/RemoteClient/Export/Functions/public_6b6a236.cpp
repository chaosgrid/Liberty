#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b6a236);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a448);

#define public_6b6a247 _public_6b6a247

PROC_DECLARE(0x6b6a236, internal_6b6a236, public_6b6a236);
extern "C" NAKED register_t __cdecl internal_6b6a236()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax]
        cmp dword ptr ds : [eax], 0xE06D7363
        je public_6b6a247
        xor eax, eax
        ret 
        public_6b6a247 : nop
        jmp public_6b6a448
        UNREACHABLE_TRAP(0x6b6a236)
    }
}

#undef public_6b6a247
