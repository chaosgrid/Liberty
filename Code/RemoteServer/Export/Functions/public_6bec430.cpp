#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bec430);
CLANG_FORWARD_PROC_SYMBOL(public_6bec510);
CLANG_FORWARD_JUMP_SYMBOL(public_6c0a890);

PROC_DECLARE(0x6bec430, internal_6bec430, public_6bec430);
extern "C" NAKED register_t __cdecl internal_6bec430()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6c0a890 @0x6bec432*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6c0a890
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x70
        xor eax, eax
        push esi
        push edi
        mov edx, ecx
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x2C], eax
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0x38], eax
        mov dword ptr ss : [esp+0x3C], eax
        mov dword ptr ss : [esp+0x30], eax
        mov dword ptr ss : [esp+0x34], eax
        mov dword ptr ss : [esp+0x80], eax
        mov eax, dword ptr ss : [esp+0x88]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x40], ecx
        mov ecx, 0xC
        lea esi, ss:[esp+0x10]
        lea edi, ss:[esp+0x48]
        rep movsd
        lea eax, ss:[esp+0x40]
        push eax
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, edx
        mov byte ptr ss : [esp+0x88], 1
        call public_6bec510
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+0x78]
        pop edi
        lea eax, ds:[edx+0x18]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x7C
        ret 4
        UNREACHABLE_TRAP(0x6bec430)
    }
}
