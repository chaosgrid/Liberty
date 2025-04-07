#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b32240);

#define public_6b32250 _public_6b32250

PROC_DECLARE(0x6b32240, internal_6b32240, public_6b32240);
extern "C" NAKED register_t __cdecl internal_6b32240()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6b32250
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        public_6b32250 : nop
        ret 
        UNREACHABLE_TRAP(0x6b32240)
    }
}

#undef public_6b32250
