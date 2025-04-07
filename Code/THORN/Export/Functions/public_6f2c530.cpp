#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2c530);

#define public_6f2c536 _public_6f2c536
#define public_6f2c54b _public_6f2c54b

PROC_DECLARE(0x6f2c530, internal_6f2c530, public_6f2c530);
extern "C" NAKED register_t __cdecl internal_6f2c530()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        xor eax, eax
        public_6f2c536 : nop
        cmp dword ptr ds : [eax*4+public_6f5e248], ecx
        je public_6f2c54b
        inc eax
        cmp eax, 4
        jb public_6f2c536
        mov eax, dword ptr ds : [public_6f5e238]
        ret 
        public_6f2c54b : nop
        mov eax, dword ptr ds : [eax*4+public_6f5e238]
        ret 
        UNREACHABLE_TRAP(0x6f2c530)
    }
}

#undef public_6f2c536
#undef public_6f2c54b
