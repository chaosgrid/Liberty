#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6806550);
CLANG_FORWARD_PROC_SYMBOL(public_680bba0);

PROC_DECLARE(0x680bba0, internal_680bba0, public_680bba0);
extern "C" NAKED register_t __cdecl internal_680bba0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [esi+0x28]
        push 0x7FFFFFFD
/*FIXUP push offset public_680d708 @0x680bbb3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680d708
        add eax, 0x20
        push 1
        push eax
        lea edx, ds:[ecx+eax]
        mov eax, dword ptr ds : [esi+0x1C]
        push ecx
        push eax
        mov dword ptr ds : [esi+0x24], edx
        call public_6806550
        add esp, 0x18
        mov dword ptr ds : [esi+0x1C], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x680bba0)
    }
}
