#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_443e80);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

#define public_443e50 _public_443e50

PROC_DECLARE(0x443e40, internal_443e40, public_443e40);
extern "C" NAKED register_t __cdecl internal_443e40()
{
    __asm
    {
        xor ecx, ecx
        mov dword ptr ds : [public_668948], ecx
        mov eax, 0x114
        lea ecx, ds:[ecx]
        public_443e50 : nop
        mov dword ptr ds : [eax+public_668838], ecx
        mov dword ptr ds : [eax+public_668948], ecx
        add eax, 4
        cmp eax, 0x124
        jl public_443e50
/*FIXUP push offset _public_443e80 @0x443e66*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_443e80
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x443e40)
    }
}

#undef public_443e50
