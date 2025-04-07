#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_587f60);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_JUMP_SYMBOL(public_5c4478);

PROC_DECLARE(0x587f60, internal_587f60, public_587f60);
extern "C" NAKED register_t __cdecl internal_587f60()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c4478 @0x587f62*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c4478
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        lea ecx, ds:[esi+0x350]
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ds : [ecx], offset public_5c8944
        call public_401e90
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call public_59fa50
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x587f60)
    }
}
