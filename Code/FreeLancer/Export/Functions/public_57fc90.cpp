#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57fc90);

#define public_57fca2 _public_57fca2

PROC_DECLARE(0x57fc90, internal_57fc90, public_57fc90);
extern "C" NAKED register_t __cdecl internal_57fc90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_57fca2
        mov ecx, dword ptr ss : [esp+8]
        mov dx, word ptr ds : [ecx]
        mov word ptr ds : [eax], dx
        public_57fca2 : nop
        ret 
        UNREACHABLE_TRAP(0x57fc90)
    }
}

#undef public_57fca2
