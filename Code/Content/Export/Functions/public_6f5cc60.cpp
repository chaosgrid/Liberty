#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f5cca0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9162);

PROC_DECLARE(0x6f5cc60, internal_6f5cc60, public_6f5cc60);
extern "C" NAKED register_t __cdecl internal_6f5cc60()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        push 0xC
        mov byte ptr ds : [public_6fd1b9c], al
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
/*FIXUP push offset _public_6f5cca0 @0x6f5cc76*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f5cca0
        mov dword ptr ds : [public_6fd1ba0], eax
        mov dword ptr ds : [public_6fd1ba4], 0
        call public_6fa9162
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6f5cc60)
    }
}
