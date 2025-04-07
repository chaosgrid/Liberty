#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_67006b0);

#define public_67006bf _public_67006bf

PROC_DECLARE(0x67006b0, internal_67006b0, public_67006b0);
extern "C" NAKED register_t __cdecl internal_67006b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0xE
        jle public_67006bf
        mov eax, offset public_67040f0
        ret 
        public_67006bf : nop
        lea ecx, ds:[eax+eax*8]
        lea edx, ds:[eax+ecx*2]
        lea eax, ds : [edx*4+public_67040f0]
        ret 
        UNREACHABLE_TRAP(0x67006b0)
    }
}

#undef public_67006bf
