#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fd540);

#define public_62fd554 _public_62fd554

PROC_DECLARE(0x62fd540, internal_62fd540, public_62fd540);
extern "C" NAKED register_t __cdecl internal_62fd540()
{
    __asm
    {
        mov dword ptr ds : [ecx], offset public_63a2268
        mov ecx, dword ptr ds : [ecx+8]
        test ecx, ecx
        je public_62fd554
        push ecx
        call dword ptr ds : [public_639913c]
        public_62fd554 : nop
        ret 
        UNREACHABLE_TRAP(0x62fd540)
    }
}

#undef public_62fd554
