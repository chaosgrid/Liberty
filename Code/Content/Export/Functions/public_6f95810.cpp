#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f95840);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9162);

PROC_DECLARE(0x6f95810, internal_6f95810, public_6f95810);
extern "C" NAKED register_t __cdecl internal_6f95810()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        mov byte ptr ds : [public_6fd3c10], al
        xor eax, eax
/*FIXUP push offset _public_6f95840 @0x6f9581c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f95840
        mov dword ptr ds : [public_6fd3c14], eax
        mov dword ptr ds : [public_6fd3c18], eax
        mov dword ptr ds : [public_6fd3c1c], eax
        call public_6fa9162
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f95810)
    }
}
