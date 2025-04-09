#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44fd80);
CLANG_FORWARD_PROC_SYMBOL(public_451240);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9e28);

PROC_DECLARE(0x451240, internal_451240, public_451240);
extern "C" NAKED register_t __cdecl internal_451240()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b9e28 @0x451242*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9e28
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        lea ecx, ds:[esi+0x170]
        mov dword ptr ss : [esp+0x10], 0
        call dword ptr ds : [public_5c61b4]
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call public_44fd80
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x451240)
    }
}
