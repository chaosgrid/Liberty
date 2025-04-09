#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_559860);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x559830, internal_559830, public_559830);
extern "C" NAKED register_t __cdecl internal_559830()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        mov byte ptr ds : [public_679a44], al
        xor eax, eax
/*FIXUP push offset _public_559860 @0x55983c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_559860
        mov dword ptr ds : [public_679a48], eax
        mov dword ptr ds : [public_679a4c], eax
        mov dword ptr ds : [public_679a50], eax
        call public_5b7e6c
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x559830)
    }
}
