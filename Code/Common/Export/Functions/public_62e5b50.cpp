#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e5b50);

#define public_62e5b5f _public_62e5b5f

PROC_DECLARE(0x62e5b50, internal_62e5b50, public_62e5b50);
extern "C" NAKED register_t __cdecl internal_62e5b50()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        test ecx, ecx
        jne public_62e5b5f
        fld dword ptr ds : [public_6399408]
        ret 
        public_62e5b5f : nop
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0xF4]
        ret 
        UNREACHABLE_TRAP(0x62e5b50)
    }
}

#undef public_62e5b5f
