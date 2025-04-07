#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4fd90);
CLANG_FORWARD_PROC_SYMBOL(public_6f55410);

PROC_DECLARE(0x6f55410, internal_6f55410, public_6f55410);
extern "C" NAKED register_t __cdecl internal_6f55410()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [esi+0x28]
        push 0x7FFFFFFD
/*FIXUP push offset public_6f6078c @0x6f55423*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f6078c
        add eax, 0x20
        push 1
        push eax
        lea edx, ds:[ecx+eax]
        mov eax, dword ptr ds : [esi+0x1C]
        push ecx
        push eax
        mov dword ptr ds : [esi+0x24], edx
        call public_6f4fd90
        add esp, 0x18
        mov dword ptr ds : [esi+0x1C], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f55410)
    }
}
