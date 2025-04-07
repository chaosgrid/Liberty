#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a0030);
CLANG_FORWARD_PROC_SYMBOL(public_62c2350);

#define public_62b180c _public_62b180c

PROC_DECLARE(0x62b17e0, internal_62b17e0, public_62b17e0);
extern "C" NAKED register_t __cdecl internal_62b17e0()
{
    __asm
    {
        push esi
        mov esi, ecx
/*FIXUP push offset public_639f3d4 @0x62b17e3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639f3d4
        lea ecx, ds:[esi+0x2B0]
        call public_62a0030
        test eax, eax
        je public_62b180c
        lea ecx, ds:[eax-0x10]
        test ecx, ecx
        je public_62b180c
        push 1
        mov byte ptr ds : [esi+0x2BC], 0
        call public_62c2350
        public_62b180c : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62b17e0)
    }
}

#undef public_62b180c
