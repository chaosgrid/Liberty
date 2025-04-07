#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3c2f0);

#define public_6b3c306 _public_6b3c306

PROC_DECLARE(0x6b3c2f0, internal_6b3c2f0, public_6b3c2f0);
extern "C" NAKED register_t __cdecl internal_6b3c2f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6b3c306
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], ecx
        public_6b3c306 : nop
        ret 
        UNREACHABLE_TRAP(0x6b3c2f0)
    }
}

#undef public_6b3c306
