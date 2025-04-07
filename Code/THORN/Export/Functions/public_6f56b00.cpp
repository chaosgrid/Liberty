#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f56b00);

#define public_6f56b10 _public_6f56b10

PROC_DECLARE(0x6f56b00, internal_6f56b00, public_6f56b00);
extern "C" NAKED register_t __cdecl internal_6f56b00()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        jge public_6f56b10
        mov ecx, dword ptr ss : [esp+8]
        lea eax, ds:[eax+ecx+1]
        public_6f56b10 : nop
        ret 
        UNREACHABLE_TRAP(0x6f56b00)
    }
}

#undef public_6f56b10
