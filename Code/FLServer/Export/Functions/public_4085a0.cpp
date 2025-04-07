#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4085a0);

#define public_4085b0 _public_4085b0

PROC_DECLARE(0x4085a0, internal_4085a0, public_4085a0);
extern "C" NAKED register_t __cdecl internal_4085a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_4085b0
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        public_4085b0 : nop
        ret 
        UNREACHABLE_TRAP(0x4085a0)
    }
}

#undef public_4085b0
