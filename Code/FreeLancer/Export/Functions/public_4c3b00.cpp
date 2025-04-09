#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c3b40);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

PROC_DECLARE(0x4c3b00, internal_4c3b00, public_4c3b00);
extern "C" NAKED register_t __cdecl internal_4c3b00()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        push 0x10
        mov byte ptr ds : [public_67296c], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
/*FIXUP push offset _public_4c3b40 @0x4c3b16*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4c3b40
        mov dword ptr ds : [public_672970], eax
        mov dword ptr ds : [public_672974], 0
        call public_5b7e6c
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x4c3b00)
    }
}
