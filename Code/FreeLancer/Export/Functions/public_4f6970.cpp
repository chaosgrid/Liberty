#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421120);
CLANG_FORWARD_JUMP_SYMBOL(public_5bf420);

PROC_DECLARE(0x4f6970, internal_4f6970, public_4f6970);
extern "C" NAKED register_t __cdecl internal_4f6970()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bf420 @0x4f6972*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bf420
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x18
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        lea edx, ss:[esp+0x14]
        push edx
        push 0xE
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x18], 0xE
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xF4]
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax]
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        lea edx, ss:[esp+8]
        push edx
        push 0x17
        mov dword ptr ss : [esp+8], eax
        mov dword ptr ss : [esp+0xC], 0x17
        mov ecx, dword ptr ds : [eax]
        push eax
        mov dword ptr ss : [esp+0x2C], 0
        call dword ptr ds : [ecx+0xF4]
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp]
        mov ecx, dword ptr ds : [eax]
        push 4
        push edx
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x28]
        push 0x100
        push eax
        add ecx, 4
        mov byte ptr ss : [esp+0x28], 1
        call public_421120
        mov ecx, dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, dword ptr ss : [esp+8]
        push ecx
        push eax
        mov byte ptr ss : [esp+0x2C], 0
        call dword ptr ds : [edx+0xF0]
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        push eax
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        call dword ptr ds : [edx+0xF0]
        mov ecx, dword ptr ss : [esp+0x18]
        xor eax, eax
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 8
        UNREACHABLE_TRAP(0x4f6970)
    }
}
