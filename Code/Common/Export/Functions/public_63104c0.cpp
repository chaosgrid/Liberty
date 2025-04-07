#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63104c0);

#define public_63104da _public_63104da

PROC_DECLARE(0x63104c0, internal_63104c0, public_63104c0);
extern "C" NAKED register_t __cdecl internal_63104c0()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x1564]
        test al, al
        je public_63104da
        mov eax, dword ptr ds : [ecx+0x1454]
        movzx eax, word ptr ds : [eax]
        add eax, dword ptr ds : [ecx+0x1450]
        ret 
        public_63104da : nop
        lea eax, ds:[ecx+0x28]
        ret 
        UNREACHABLE_TRAP(0x63104c0)
    }
}

#undef public_63104da
