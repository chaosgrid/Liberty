#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626c1c0);

#define public_626c1d2 _public_626c1d2

PROC_DECLARE(0x626c1c0, internal_626c1c0, public_626c1c0);
extern "C" NAKED register_t __cdecl internal_626c1c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_626c1d2
        mov ecx, dword ptr ss : [esp+8]
        mov dx, word ptr ds : [ecx]
        mov word ptr ds : [eax], dx
        public_626c1d2 : nop
        ret 
        UNREACHABLE_TRAP(0x626c1c0)
    }
}

#undef public_626c1d2
