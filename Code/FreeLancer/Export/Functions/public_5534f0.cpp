#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_553530);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

PROC_DECLARE(0x5534f0, internal_5534f0, public_5534f0);
extern "C" NAKED register_t __cdecl internal_5534f0()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        push 0x10
        mov byte ptr ds : [public_67987c], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
/*FIXUP push offset _public_553530 @0x553506*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_553530
        mov dword ptr ds : [public_679880], eax
        mov dword ptr ds : [public_679884], 0
        call public_5b7e6c
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x5534f0)
    }
}
