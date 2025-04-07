#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_48d760);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x48d730, internal_48d730, public_48d730);
extern "C" NAKED register_t __cdecl internal_48d730()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        mov byte ptr ds : [public_672048], al
        xor eax, eax
/*FIXUP push offset _public_48d760 @0x48d73c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_48d760
        mov dword ptr ds : [public_67204c], eax
        mov dword ptr ds : [public_672050], eax
        mov dword ptr ds : [public_672054], eax
        call public_5b7e6c
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x48d730)
    }
}
