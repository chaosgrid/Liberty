#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_471e80);
CLANG_FORWARD_PROC_SYMBOL(public_4b9c60);
CLANG_FORWARD_JUMP_SYMBOL(public_5bba49);

PROC_DECLARE(0x471e80, internal_471e80, public_471e80);
extern "C" NAKED register_t __cdecl internal_471e80()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bba49 @0x471e82*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bba49
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x18
        xor eax, eax
        mov dword ptr ss : [esp], eax
        mov dword ptr ss : [esp+4], eax
        mov byte ptr ss : [esp+8], al
        mov byte ptr ss : [esp+9], al
        mov byte ptr ss : [esp+0xA], al
        mov byte ptr ss : [esp+0xB], al
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
        push 0x723
        lea ecx, ss:[esp+4]
        mov dword ptr ss : [esp+0x24], eax
        call dword ptr ds : [public_5c633c]
        lea ecx, ss:[esp]
        call dword ptr ds : [public_5c6338]
        lea eax, ss:[esp]
        push 5
        push eax
        call public_4b9c60
        add esp, 8
        lea ecx, ss:[esp]
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        call dword ptr ds : [public_5c6098]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x471e80)
    }
}
