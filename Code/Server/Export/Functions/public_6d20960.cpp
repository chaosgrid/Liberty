#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1baa0);
CLANG_FORWARD_PROC_SYMBOL(public_6d20960);
CLANG_FORWARD_JUMP_SYMBOL(public_6d62788);

PROC_DECLARE(0x6d20960, internal_6d20960, public_6d20960);
extern "C" NAKED register_t __cdecl internal_6d20960()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d62788 @0x6d20962*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d62788
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        xor edi, edi
        mov dword ptr ss : [esp+8], esi
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi], offset public_6d68d00
        mov ecx, dword ptr ss : [esp+0x20]
        push 0xC
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ds : [esi+8], ecx
        call public_6d1baa0
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0xC], eax
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+0x10], edi
        mov dword ptr ds : [esi+0x14], edi
        mov dword ptr ds : [esi+0x18], eax
        mov ecx, dword ptr ds : [public_6d68a50]
        mov dword ptr ds : [esi+0x1C], ecx
        mov edx, dword ptr ds : [public_6d68a54]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+0x20], edx
        mov dword ptr ds : [esi+0x28], edi
        mov dword ptr ds : [esi+0x2C], esi
        mov dword ptr ds : [esi+0x24], offset public_6d68cd8
        mov dword ptr ds : [esi], offset public_6d68c58
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x6d20960)
    }
}
