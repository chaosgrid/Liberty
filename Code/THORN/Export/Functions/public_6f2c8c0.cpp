#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2c8c0);

#define public_6f2c8c6 _public_6f2c8c6
#define public_6f2c8db _public_6f2c8db

PROC_DECLARE(0x6f2c8c0, internal_6f2c8c0, public_6f2c8c0);
extern "C" NAKED register_t __cdecl internal_6f2c8c0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        xor eax, eax
        public_6f2c8c6 : nop
        cmp dword ptr ds : [eax*4+public_6f5e264], ecx
        je public_6f2c8db
        inc eax
        cmp eax, 3
        jb public_6f2c8c6
        mov eax, dword ptr ds : [public_6f5e258]
        ret 
        public_6f2c8db : nop
        mov eax, dword ptr ds : [eax*4+public_6f5e258]
        ret 
        UNREACHABLE_TRAP(0x6f2c8c0)
    }
}

#undef public_6f2c8c6
#undef public_6f2c8db
