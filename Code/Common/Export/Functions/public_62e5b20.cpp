#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e5b20);

#define public_62e5b2f _public_62e5b2f

PROC_DECLARE(0x62e5b20, internal_62e5b20, public_62e5b20);
extern "C" NAKED register_t __cdecl internal_62e5b20()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        test ecx, ecx
        jne public_62e5b2f
        fld dword ptr ds : [public_6399408]
        ret 
        public_62e5b2f : nop
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [ecx]
        push edx
        mov edx, dword ptr ss : [esp+0xC]
        push edx
        call dword ptr ds : [eax+0xF0]
        ret 
        UNREACHABLE_TRAP(0x62e5b20)
    }
}

#undef public_62e5b2f
