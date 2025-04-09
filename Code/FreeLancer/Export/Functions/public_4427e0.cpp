#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43e570);
CLANG_FORWARD_PROC_SYMBOL(public_4427e0);
CLANG_FORWARD_PROC_SYMBOL(public_59da10);

#define public_442808 _public_442808

PROC_DECLARE(0x4427e0, internal_4427e0, public_4427e0);
extern "C" NAKED register_t __cdecl internal_4427e0()
{
    __asm
    {
/*FIXUP push offset public_5cb548 @0x4427e0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb548
        call public_59da10
        add esp, 4
        test eax, eax
        je public_442808
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+8]
        test eax, eax
        je public_442808
        mov ecx, dword ptr ss : [esp+4]
        push ecx
        mov ecx, eax
        call public_43e570
        public_442808 : nop
        ret 
        UNREACHABLE_TRAP(0x4427e0)
    }
}

#undef public_442808
