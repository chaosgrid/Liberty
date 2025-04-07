#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b9990);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

PROC_DECLARE(0x4b9950, internal_4b9950, public_4b9950);
extern "C" NAKED register_t __cdecl internal_4b9950()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        push 0x20
        mov byte ptr ds : [public_672330], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
/*FIXUP push offset _public_4b9990 @0x4b9966*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4b9990
        mov dword ptr ds : [public_672334], eax
        mov dword ptr ds : [public_672338], 0
        call public_5b7e6c
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x4b9950)
    }
}
