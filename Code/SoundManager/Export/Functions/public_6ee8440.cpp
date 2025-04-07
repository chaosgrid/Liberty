#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee8440);

#define public_6ee8450 _public_6ee8450

PROC_DECLARE(0x6ee8440, internal_6ee8440, public_6ee8440);
extern "C" NAKED register_t __cdecl internal_6ee8440()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6ee8450
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        public_6ee8450 : nop
        ret 
        UNREACHABLE_TRAP(0x6ee8440)
    }
}

#undef public_6ee8450
