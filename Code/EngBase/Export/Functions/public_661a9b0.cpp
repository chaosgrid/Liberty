#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661a9b0);

#define public_661a9c0 _public_661a9c0

PROC_DECLARE(0x661a9b0, internal_661a9b0, public_661a9b0);
extern "C" NAKED register_t __cdecl internal_661a9b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_661a9c0
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        public_661a9c0 : nop
        ret 
        UNREACHABLE_TRAP(0x661a9b0)
    }
}

#undef public_661a9c0
