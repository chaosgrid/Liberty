#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_443b10);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9759);

PROC_DECLARE(0x443b10, internal_443b10, public_443b10);
extern "C" NAKED register_t __cdecl internal_443b10()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b9759 @0x443b12*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9759
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ss : [esp+0x10], 0
        call dword ptr ds : [public_5c6194]
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call dword ptr ds : [public_5c6104]
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x443b10)
    }
}
