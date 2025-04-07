#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4fd90);
CLANG_FORWARD_PROC_SYMBOL(public_6f534c0);

PROC_DECLARE(0x6f534c0, internal_6f534c0, public_6f534c0);
extern "C" NAKED register_t __cdecl internal_6f534c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [esi+8]
        push 0xFFFFFF
/*FIXUP push offset public_6f612c8 @0x6f534d2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f612c8
        push 0x10
        push 1
        push ecx
        push edx
        call public_6f4fd90
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ds : [esi+0xC]
        lea ecx, ds:[eax+1]
        add esp, 0x18
        mov dword ptr ds : [esi+0xC], ecx
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f534c0)
    }
}
