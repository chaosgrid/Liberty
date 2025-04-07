#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6244360);
CLANG_FORWARD_PROC_SYMBOL(public_6244b20);
CLANG_FORWARD_JUMP_SYMBOL(public_6247378);

PROC_DECLARE(0x6204e30, internal_6204e30, public_6204e30);
extern "C" NAKED register_t __cdecl internal_6204e30()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6247378 @0x6204e32*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6247378
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+8], esi
        call public_6244360
        xor ebx, ebx
        lea ecx, ds:[esi+0xB8]
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ds : [esi+0xB4], ebx
        call public_6244b20
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+0xDC], ebx
        mov byte ptr ds : [esi+0xE0], bl
        mov byte ptr ds : [esi+0xE1], bl
        mov dword ptr ds : [esi+0xE4], ebx
        mov dword ptr ds : [esi+0xE8], ebx
        mov dword ptr ds : [esi+0xEC], ebx
        mov dword ptr ds : [esi+0xF0], ebx
        mov dword ptr ds : [esi], offset public_624b6b0
        mov dword ptr ds : [esi+0xEC], offset public_6257954
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6204e30)
    }
}
