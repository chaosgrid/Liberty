#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f43890);
CLANG_FORWARD_PROC_SYMBOL(public_6f43940);
CLANG_FORWARD_PROC_SYMBOL(public_6f46430);
CLANG_FORWARD_PROC_SYMBOL(public_6f465f0);
CLANG_FORWARD_JUMP_SYMBOL(public_6f59417);

PROC_DECLARE(0x6f46430, internal_6f46430, public_6f46430);
extern "C" NAKED register_t __cdecl internal_6f46430()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6f59417 @0x6f46432*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f59417
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+8], esi
        call public_6f43940
        mov dl, byte ptr ss : [esp+0x1C]
        xor ecx, ecx
        lea eax, ds:[esi+0x28]
        mov dword ptr ds : [eax+0x4C], ecx
        mov dword ptr ds : [eax+0x48], ecx
        mov dword ptr ds : [eax+0x44], ecx
        mov dword ptr ds : [eax+0x3C], ecx
        mov dword ptr ds : [eax+0x38], ecx
        mov dword ptr ds : [eax+0x34], ecx
        mov edi, 0x3F800000
        mov dword ptr ds : [eax+0x50], edi
        mov dword ptr ds : [eax+0x40], edi
        mov dword ptr ds : [eax+0x30], edi
        mov dword ptr ds : [eax+0x5C], ecx
        mov dword ptr ds : [eax+0x58], ecx
        mov dword ptr ds : [eax+0x54], ecx
        mov dword ptr ss : [esp+0x14], ecx
        mov byte ptr ds : [esi+0xA8], dl
        mov dword ptr ds : [esi+0xAC], ecx
        mov dword ptr ds : [esi+0xB0], ecx
        mov dword ptr ds : [esi+0xB4], ecx
        mov dword ptr ds : [esi+0xD8], edi
        mov dword ptr ds : [esi+0xC8], edi
        mov dword ptr ds : [esi+0xB8], edi
        mov dword ptr ds : [esi+0xD4], ecx
        mov dword ptr ds : [esi+0xD0], ecx
        mov dword ptr ds : [esi+0xCC], ecx
        mov dword ptr ds : [esi+0xC4], ecx
        mov dword ptr ds : [esi+0xC0], ecx
        mov dword ptr ds : [esi+0xBC], ecx
        mov dword ptr ds : [esi+0xE4], ecx
        mov dword ptr ds : [esi+0xE0], ecx
        mov dword ptr ds : [esi+0xDC], ecx
        push eax
        mov byte ptr ss : [esp+0x18], 1
        mov dword ptr ds : [esi], offset public_6f5b2cc
        call public_6f43890
        mov eax, dword ptr ss : [esp+0x20]
        add esp, 4
        push eax
        mov ecx, esi
        call public_6f465f0
        mov ecx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [esi+0x3C], ecx
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6f46430)
    }
}
