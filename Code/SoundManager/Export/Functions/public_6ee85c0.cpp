#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee85c0);

#define public_6ee85d6 _public_6ee85d6

PROC_DECLARE(0x6ee85c0, internal_6ee85c0, public_6ee85c0);
extern "C" NAKED register_t __cdecl internal_6ee85c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6ee85d6
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], ecx
        public_6ee85d6 : nop
        ret 
        UNREACHABLE_TRAP(0x6ee85c0)
    }
}

#undef public_6ee85d6
