#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630e350);
CLANG_FORWARD_JUMP_SYMBOL(public_6392c1b);

PROC_DECLARE(0x627bf70, internal_627bf70, public_627bf70);
extern "C" NAKED register_t __cdecl internal_627bf70()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6392c1b @0x627bf72*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6392c1b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi+4], ecx
        mov dl, byte ptr ds : [edi+8]
        lea eax, ds:[edi+0xC]
        push eax
        lea ecx, ds:[esi+0xC]
        mov dword ptr ss : [esp+0xC], esi
        mov byte ptr ds : [esi+8], dl
        call public_630e350
        add edi, 0x20
        push edi
        lea ecx, ds:[esi+0x20]
        mov dword ptr ss : [esp+0x18], 0
        call public_630e350
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x627bf70)
    }
}
