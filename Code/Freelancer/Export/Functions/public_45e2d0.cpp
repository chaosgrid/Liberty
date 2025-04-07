#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45e300);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x45e2d0, internal_45e2d0, public_45e2d0);
extern "C" NAKED register_t __cdecl internal_45e2d0()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        mov byte ptr ds : [public_66d8e4], al
        xor eax, eax
/*FIXUP push offset _public_45e300 @0x45e2dc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_45e300
        mov dword ptr ds : [public_66d8e8], eax
        mov dword ptr ds : [public_66d8ec], eax
        mov dword ptr ds : [public_66d8f0], eax
        call public_5b7e6c
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x45e2d0)
    }
}
