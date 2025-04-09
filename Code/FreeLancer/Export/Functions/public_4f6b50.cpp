#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420d10);
CLANG_FORWARD_PROC_SYMBOL(public_4f6b50);
CLANG_FORWARD_JUMP_SYMBOL(public_5bf458);

PROC_DECLARE(0x4f6b50, internal_4f6b50, public_4f6b50);
extern "C" NAKED register_t __cdecl internal_4f6b50()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bf458 @0x4f6b52*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bf458
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push esi
        mov esi, ecx
        lea eax, ds:[esi-4]
        mov dword ptr ss : [esp+8], esi
        mov dword ptr ds : [eax], offset public_5d991c
        mov dword ptr ds : [esi], offset public_5d9914
        push eax
        mov dword ptr ss : [esp+0x18], 0
        call dword ptr ds : [public_5d9938]
        lea ecx, ds:[esi-4]
        neg ecx
        sbb ecx, ecx
        and ecx, esi
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        call public_420d10
        mov ecx, dword ptr ss : [esp+0xC]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x4f6b50)
    }
}
