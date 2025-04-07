#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4fd90);
CLANG_FORWARD_PROC_SYMBOL(public_6f527a0);

PROC_DECLARE(0x6f527a0, internal_6f527a0, public_6f527a0);
extern "C" NAKED register_t __cdecl internal_6f527a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi]
        push 0x7FFFFFFD
/*FIXUP push offset public_6f611fc @0x6f527b3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f611fc
        push 1
        push eax
        mov eax, dword ptr ds : [edx+0x10]
        push ecx
        push eax
        call public_6f4fd90
        mov ecx, dword ptr ds : [esi]
        add esp, 0x18
        mov dword ptr ds : [ecx+0x10], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f527a0)
    }
}
