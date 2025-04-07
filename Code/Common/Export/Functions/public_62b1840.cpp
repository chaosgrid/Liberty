#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a0030);
CLANG_FORWARD_PROC_SYMBOL(public_62c2330);

#define public_62b1860 _public_62b1860

PROC_DECLARE(0x62b1840, internal_62b1840, public_62b1840);
extern "C" NAKED register_t __cdecl internal_62b1840()
{
    __asm
    {
/*FIXUP push offset public_639f3d4 @0x62b1840*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639f3d4
        add ecx, 0x2B0
        call public_62a0030
        test eax, eax
        je public_62b1860
        lea ecx, ds:[eax-0x10]
        test ecx, ecx
        je public_62b1860
        jmp public_62c2330
        public_62b1860 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x62b1840)
    }
}

#undef public_62b1860
