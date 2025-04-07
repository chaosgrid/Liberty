#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3a430);

#define public_6b3a446 _public_6b3a446

PROC_DECLARE(0x6b3a430, internal_6b3a430, public_6b3a430);
extern "C" NAKED register_t __cdecl internal_6b3a430()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6b3a446
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], ecx
        public_6b3a446 : nop
        ret 
        UNREACHABLE_TRAP(0x6b3a430)
    }
}

#undef public_6b3a446
