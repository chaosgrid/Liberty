#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e5ba0);

#define public_62e5baf _public_62e5baf

PROC_DECLARE(0x62e5ba0, internal_62e5ba0, public_62e5ba0);
extern "C" NAKED register_t __cdecl internal_62e5ba0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        test ecx, ecx
        jne public_62e5baf
        fld dword ptr ds : [public_6399408]
        ret 
        public_62e5baf : nop
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0xF8]
        ret 
        UNREACHABLE_TRAP(0x62e5ba0)
    }
}

#undef public_62e5baf
