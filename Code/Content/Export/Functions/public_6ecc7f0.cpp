#include "Content-PCH.h"

CLANG_FORWARD_JUMP_SYMBOL(public_6faafe9);

PROC_DECLARE(0x6ecc7f0, internal_6ecc7f0, public_6ecc7f0);
extern "C" NAKED register_t __cdecl internal_6ecc7f0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faafe9 @0x6ecc7f2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faafe9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x18
        xor eax, eax
        push esi
        mov esi, ecx
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
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ds : [esi+0xC]
        push eax
        lea ecx, ss:[esp+8]
        call dword ptr ds : [public_6fb303c]
        lea ecx, ss:[esp+4]
        call dword ptr ds : [public_6fb3038]
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        push 1
        push ecx
        lea edx, ss:[esp+0xC]
        push edx
        add eax, 0xC
        push eax
        call dword ptr ds : [public_6fb369c]
        add esp, 0x10
        lea ecx, ss:[esp+4]
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        call dword ptr ds : [public_6fb3034]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov al, 1
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x6ecc7f0)
    }
}
