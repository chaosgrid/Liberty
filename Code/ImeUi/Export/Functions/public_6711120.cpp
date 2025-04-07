#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6711120);

#define public_6711148 _public_6711148

PROC_DECLARE(0x6711120, internal_6711120, public_6711120);
extern "C" NAKED register_t __cdecl internal_6711120()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_67193e0]
        test ecx, ecx
        je public_6711148
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx]
        push edx
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        call dword ptr ds : [eax+4]
        public_6711148 : nop
        ret 
        UNREACHABLE_TRAP(0x6711120)
    }
}

#undef public_6711148
