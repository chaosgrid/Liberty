#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_576290);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

PROC_DECLARE(0x576250, internal_576250, public_576250);
extern "C" NAKED register_t __cdecl internal_576250()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        push 0xC
        mov byte ptr ds : [public_67c26c], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
/*FIXUP push offset _public_576290 @0x576266*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_576290
        mov dword ptr ds : [public_67c270], eax
        mov dword ptr ds : [public_67c274], 0
        call public_5b7e6c
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x576250)
    }
}
