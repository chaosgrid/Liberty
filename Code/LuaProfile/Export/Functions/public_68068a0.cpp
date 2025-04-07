#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6806550);
CLANG_FORWARD_PROC_SYMBOL(public_68068a0);

PROC_DECLARE(0x68068a0, internal_68068a0, public_68068a0);
extern "C" NAKED register_t __cdecl internal_68068a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi]
        push 0x7FFFFFFD
/*FIXUP push offset public_680db2c @0x68068b3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680db2c
        push 1
        push eax
        mov eax, dword ptr ds : [edx+0x10]
        push ecx
        push eax
        call public_6806550
        mov ecx, dword ptr ds : [esi]
        add esp, 0x18
        mov dword ptr ds : [ecx+0x10], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x68068a0)
    }
}
