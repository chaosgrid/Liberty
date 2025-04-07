#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630e1f0);
CLANG_FORWARD_JUMP_SYMBOL(public_6396156);

PROC_DECLARE(0x6308d10, internal_6308d10, public_6308d10);
extern "C" NAKED register_t __cdecl internal_6308d10()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6396156 @0x6308d12*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6396156
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
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], edx
        mov eax, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [esi+0xC], eax
        mov ecx, dword ptr ds : [edi+0x10]
        lea edx, ds:[edi+0x14]
        mov dword ptr ds : [esi+0x10], ecx
        push edx
        lea ecx, ds:[esi+0x14]
        mov dword ptr ss : [esp+0xC], esi
        call public_630e1f0
        lea eax, ds:[edi+0x2C]
        push eax
        lea ecx, ds:[esi+0x2C]
        mov dword ptr ss : [esp+0x18], 0
        call public_630e1f0
        lea ecx, ds:[edi+0x44]
        push ecx
        lea ecx, ds:[esi+0x44]
        mov byte ptr ss : [esp+0x18], 1
        call public_630e1f0
        mov edx, dword ptr ds : [edi+0x5C]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+0x5C], edx
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6308d10)
    }
}
