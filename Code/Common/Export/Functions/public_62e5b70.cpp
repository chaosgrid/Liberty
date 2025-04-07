#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e5b70);

#define public_62e5b7f _public_62e5b7f

PROC_DECLARE(0x62e5b70, internal_62e5b70, public_62e5b70);
extern "C" NAKED register_t __cdecl internal_62e5b70()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        test ecx, ecx
        jne public_62e5b7f
        fld dword ptr ds : [public_6399408]
        ret 
        public_62e5b7f : nop
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [ecx]
        push edx
        mov edx, dword ptr ss : [esp+0xC]
        push edx
        call dword ptr ds : [eax+0xD4]
        ret 
        UNREACHABLE_TRAP(0x62e5b70)
    }
}

#undef public_62e5b7f
