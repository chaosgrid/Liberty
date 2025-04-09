#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_442790);
CLANG_FORWARD_PROC_SYMBOL(public_55e280);
CLANG_FORWARD_PROC_SYMBOL(public_59da10);

#define public_4427a8 _public_4427a8
#define public_4427ca _public_4427ca

PROC_DECLARE(0x442790, internal_442790, public_442790);
extern "C" NAKED register_t __cdecl internal_442790()
{
    __asm
    {
        push esi
/*FIXUP push offset public_5cb548 @0x442791*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb548
        call public_59da10
        mov esi, eax
        add esp, 4
        test esi, esi
        jne public_4427a8
        xor al, al
        pop esi
        ret 
        public_4427a8 : nop
        lea ecx, ds:[esi+0x32C]
        call public_55e280
        test al, al
        jne public_4427ca
        lea ecx, ds:[esi+0x34C]
        call public_55e280
        test al, al
        jne public_4427ca
        xor eax, eax
        pop esi
        ret 
        public_4427ca : nop
        mov eax, 1
        pop esi
        ret 
        UNREACHABLE_TRAP(0x442790)
    }
}

#undef public_4427a8
#undef public_4427ca
