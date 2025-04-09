#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4147a0);
CLANG_FORWARD_JUMP_SYMBOL(public_5b884b);

PROC_DECLARE(0x4147a0, internal_4147a0, public_4147a0);
extern "C" NAKED register_t __cdecl internal_4147a0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b884b @0x4147a2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b884b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push esi
        mov esi, ecx
        xor eax, eax
        mov dword ptr ss : [esp+8], esi
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ds : [esi+0x14], eax
        mov dword ptr ds : [esi+0x10], 1
        mov dword ptr ds : [esi+0x18], eax
        mov dword ptr ds : [esi+0x1C], eax
        mov dword ptr ds : [esi+0x20], eax
        mov byte ptr ds : [esi+0x27], al
        mov byte ptr ds : [esi+0x26], al
        mov byte ptr ds : [esi+0x25], al
        mov byte ptr ds : [esi+0x24], al
        mov dword ptr ss : [esp+0x14], eax
        mov al, 8
        mov byte ptr ss : [esp+4], al
        mov byte ptr ss : [esp+5], al
        mov byte ptr ss : [esp+6], al
        mov byte ptr ss : [esp+7], 0xFF
        mov eax, dword ptr ss : [esp+4]
        push 1
        mov dword ptr ds : [esi], offset public_5c8cb8
        mov dword ptr ds : [esi+0x24], eax
        call dword ptr ds : [public_5c8cd8]
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x4147a0)
    }
}
