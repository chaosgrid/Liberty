#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63104e0);

#define public_63104fa _public_63104fa

PROC_DECLARE(0x63104e0, internal_63104e0, public_63104e0);
extern "C" NAKED register_t __cdecl internal_63104e0()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x1564]
        test al, al
        je public_63104fa
        mov eax, dword ptr ds : [ecx+0x145C]
        movzx eax, word ptr ds : [eax]
        add eax, dword ptr ds : [ecx+0x1450]
        ret 
        public_63104fa : nop
        lea eax, ds:[ecx+0x428]
        ret 
        UNREACHABLE_TRAP(0x63104e0)
    }
}

#undef public_63104fa
