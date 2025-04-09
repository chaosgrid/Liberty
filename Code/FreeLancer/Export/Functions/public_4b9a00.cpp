#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b9a40);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

PROC_DECLARE(0x4b9a00, internal_4b9a00, public_4b9a00);
extern "C" NAKED register_t __cdecl internal_4b9a00()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        push 0x20
        mov byte ptr ds : [public_672324], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
/*FIXUP push offset _public_4b9a40 @0x4b9a16*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4b9a40
        mov dword ptr ds : [public_672328], eax
        mov dword ptr ds : [public_67232c], 0
        call public_5b7e6c
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x4b9a00)
    }
}
