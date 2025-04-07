#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e6200);

#define public_62e621e _public_62e621e

PROC_DECLARE(0x62e6200, internal_62e6200, public_62e6200);
extern "C" NAKED register_t __cdecl internal_62e6200()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        test ecx, ecx
        je public_62e621e
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+4]
        push edx
        call dword ptr ds : [eax+0x88]
        test eax, eax
        jne public_62e621e
        mov eax, dword ptr ss : [esp+4]
        ret 
        public_62e621e : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x62e6200)
    }
}

#undef public_62e621e
