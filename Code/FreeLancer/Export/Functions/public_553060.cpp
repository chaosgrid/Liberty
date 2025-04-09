#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5530a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

PROC_DECLARE(0x553060, internal_553060, public_553060);
extern "C" NAKED register_t __cdecl internal_553060()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        push 0xC
        mov byte ptr ds : [public_6798a0], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
/*FIXUP push offset _public_5530a0 @0x553076*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_5530a0
        mov dword ptr ds : [public_6798a4], eax
        mov dword ptr ds : [public_6798a8], 0
        call public_5b7e6c
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x553060)
    }
}
