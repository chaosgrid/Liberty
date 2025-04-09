#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_476c20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x476bf0, internal_476bf0, public_476bf0);
extern "C" NAKED register_t __cdecl internal_476bf0()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        mov byte ptr ds : [public_66dc08], al
        xor eax, eax
/*FIXUP push offset _public_476c20 @0x476bfc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_476c20
        mov dword ptr ds : [public_66dc0c], eax
        mov dword ptr ds : [public_66dc10], eax
        mov dword ptr ds : [public_66dc14], eax
        call public_5b7e6c
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x476bf0)
    }
}
