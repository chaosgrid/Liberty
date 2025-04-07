#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb9760);
CLANG_FORWARD_JUMP_SYMBOL(public_6fa9839);

PROC_DECLARE(0x6ea5b50, internal_6ea5b50, public_6ea5b50);
extern "C" NAKED register_t __cdecl internal_6ea5b50()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fa9839 @0x6ea5b52*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fa9839
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        mov eax, dword ptr ds : [ecx+0xC]
        mov dword ptr ss : [esp], eax
        call public_6eb9760
        xor eax, eax
        mov dword ptr ss : [esp+4], eax
        mov dword ptr ss : [esp+8], eax
        mov byte ptr ss : [esp+0xC], al
        mov byte ptr ss : [esp+0xD], al
        mov byte ptr ss : [esp+0xE], al
        mov byte ptr ss : [esp+0xF], al
        mov byte ptr ss : [esp+0x10], al
        mov byte ptr ss : [esp+0x11], al
        mov byte ptr ss : [esp+0x12], al
        mov byte ptr ss : [esp+0x13], al
        mov byte ptr ss : [esp+0x14], al
        mov byte ptr ss : [esp+0x15], al
        mov byte ptr ss : [esp+0x16], al
        mov byte ptr ss : [esp+0x17], al
        mov byte ptr ss : [esp+0x18], al
        mov byte ptr ss : [esp+0x19], al
        push 0x5FAA
        lea ecx, ss:[esp+8]
        mov dword ptr ss : [esp+0x28], eax
        call dword ptr ds : [public_6fb303c]
        lea ecx, ss:[esp+4]
        call dword ptr ds : [public_6fb3038]
        push 1
        push 9
        lea ecx, ss:[esp+0xC]
        push ecx
        lea edx, ss:[esp+0xC]
        push edx
        call dword ptr ds : [public_6fb369c]
        add esp, 0x10
        lea ecx, ss:[esp+4]
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        call dword ptr ds : [public_6fb3034]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 
        UNREACHABLE_TRAP(0x6ea5b50)
    }
}
