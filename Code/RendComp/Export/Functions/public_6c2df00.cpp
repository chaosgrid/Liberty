#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2d3b0);
CLANG_FORWARD_PROC_SYMBOL(public_6c2df00);
CLANG_FORWARD_PROC_SYMBOL(public_6c2e8b0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);

#define public_6c2df19 _public_6c2df19
#define public_6c2df2a _public_6c2df2a

PROC_DECLARE(0x6c2df00, internal_6c2df00, public_6c2df00);
extern "C" NAKED register_t __cdecl internal_6c2df00()
{
    __asm
    {
        push esi
        mov esi, ecx
        push esi
        call public_6c2e8b0
        mov ecx, dword ptr ds : [esi+0x28]
        add esp, 4
        test ecx, ecx
        je public_6c2df19
        push esi
        call public_6c2d3b0
        public_6c2df19 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6c2df2a
        push eax
        call dword ptr ds : [public_6c3603c]
        add esp, 4
        public_6c2df2a : nop
        mov eax, dword ptr ds : [esi+0x34]
        push eax
        call public_6c34ea0
        mov ecx, dword ptr ds : [esi+8]
        push ecx
        call public_6c34ea0
        fld dword ptr ds : [esi+0x30]
        add esp, 8
        fchs 
        push 0x610
        push ecx
        fstp dword ptr ss : [esp]
/*FIXUP push offset public_6c375d0 @0x6c2df4d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c375d0
        call dword ptr ds : [public_6c3600c]
        add esp, 0xC
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6c2df00)
    }
}

#undef public_6c2df19
#undef public_6c2df2a
