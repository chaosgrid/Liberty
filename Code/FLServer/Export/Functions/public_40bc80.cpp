#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40bc80);
CLANG_FORWARD_PROC_SYMBOL(public_4188b8);

#define public_40bca6 _public_40bca6
#define public_40bcaf _public_40bcaf
#define public_40bcb5 _public_40bcb5

PROC_DECLARE(0x40bc80, internal_40bc80, public_40bc80);
extern "C" NAKED register_t __cdecl internal_40bc80()
{
    __asm
    {
        push esi
        push edi
        xor edi, edi
        push edi
        call dword ptr ds : [public_41bc2c]
        mov ecx, dword ptr ds : [public_41bb70]
/*FIXUP push offset public_42742c @0x40bc91*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_42742c
        mov esi, eax
        call public_4188b8
        test al, al
        je public_40bca6
        mov edi, 1
        public_40bca6 : nop
        test esi, esi
        je public_40bcaf
        cmp esi, 1
        jne public_40bcb5
        public_40bcaf : nop
        call dword ptr ds : [public_41bc28]
        public_40bcb5 : nop
        mov eax, edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x40bc80)
    }
}

#undef public_40bca6
#undef public_40bcaf
#undef public_40bcb5
