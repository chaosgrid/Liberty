#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46ba90);
CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_5723b0);
CLANG_FORWARD_PROC_SYMBOL(public_591ba0);
CLANG_FORWARD_PROC_SYMBOL(public_591ef0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec6);
CLANG_FORWARD_JUMP_SYMBOL(public_5c37f2);

PROC_DECLARE(0x5723b0, internal_5723b0, public_5723b0);
extern "C" NAKED register_t __cdecl internal_5723b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c37f2 @0x5723b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c37f2
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
        mov dword ptr ds : [esi], offset public_5e2bdc
        mov dword ptr ds : [esi+0x7C], offset public_5e2bc4
        mov dword ptr ds : [esi+0x80], offset public_5e2bbc
        lea edi, ds:[esi+0x2D0]
        lea ecx, ds:[edi+0x10]
        mov dword ptr ss : [esp+0x14], 0x23
        call public_4de730
        mov ecx, edi
        call public_4de730
        lea ecx, ds:[esi+0x260]
        mov byte ptr ss : [esp+0x14], 0x22
        call public_46ba90
        lea ecx, ds:[esi+0x254]
        mov byte ptr ss : [esp+0x14], 0x21
        call public_46ba90
        lea ecx, ds:[esi+0x248]
        mov byte ptr ss : [esp+0x14], 0x20
        call public_46ba90
        lea ecx, ds:[esi+0x23C]
        mov byte ptr ss : [esp+0x14], 0x1F
        call public_46ba90
        lea ecx, ds:[esi+0x230]
        mov byte ptr ss : [esp+0x14], 0x1E
        call public_46ba90
        lea ecx, ds:[esi+0x224]
        mov byte ptr ss : [esp+0x14], 0x1D
        call public_46ba90
        lea ecx, ds:[esi+0x218]
        mov byte ptr ss : [esp+0x14], 0x1C
        call public_46ba90
        lea ecx, ds:[esi+0x20C]
        mov byte ptr ss : [esp+0x14], 0x1B
        call public_46ba90
        lea ecx, ds:[esi+0x200]
        mov byte ptr ss : [esp+0x14], 0x1A
        call public_46ba90
        lea ecx, ds:[esi+0x1F4]
        mov byte ptr ss : [esp+0x14], 0x19
        call public_46ba90
        mov byte ptr ss : [esp+0x14], 0x18
        lea ecx, ds:[esi+0x1E8]
        call public_46ba90
        lea ecx, ds:[esi+0x1DC]
        mov byte ptr ss : [esp+0x14], 0x17
        call public_46ba90
        lea ecx, ds:[esi+0x1D0]
        mov byte ptr ss : [esp+0x14], 0x16
        call public_46ba90
        lea ecx, ds:[esi+0x1C4]
        mov byte ptr ss : [esp+0x14], 0x15
        call public_46ba90
        lea ecx, ds:[esi+0x1B8]
        mov byte ptr ss : [esp+0x14], 0x14
        call public_46ba90
        lea ecx, ds:[esi+0x1AC]
        mov byte ptr ss : [esp+0x14], 0x13
        call public_46ba90
        lea ecx, ds:[esi+0x1A0]
        mov byte ptr ss : [esp+0x14], 0x12
        call public_46ba90
        lea ecx, ds:[esi+0x194]
        mov byte ptr ss : [esp+0x14], 0x11
        call public_46ba90
        lea ecx, ds:[esi+0x188]
        mov byte ptr ss : [esp+0x14], 0x10
        call public_46ba90
        lea ecx, ds:[esi+0x17C]
        mov byte ptr ss : [esp+0x14], 0xF
        call public_46ba90
        mov eax, dword ptr ds : [public_5c62c4]
        push eax
        push 8
        push 0xC
        lea ecx, ds:[esi+0x11C]
        push ecx
        mov byte ptr ss : [esp+0x24], 0xE
        call public_5b7ec6
        xor eax, eax
        lea ecx, ds:[esi+0x8C]
        mov dword ptr ds : [esi+0xE8], eax
        mov dword ptr ds : [esi+0xE4], eax
        mov dword ptr ds : [esi+0xE0], eax
        mov dword ptr ds : [esi+0xDC], eax
        mov dword ptr ds : [esi+0xD8], eax
        mov dword ptr ds : [esi+0xD4], eax
        mov dword ptr ds : [esi+0xD0], eax
        mov dword ptr ds : [esi+0xCC], eax
        mov dword ptr ds : [esi+0xC8], eax
        mov dword ptr ds : [esi+0xC4], eax
        mov dword ptr ds : [esi+0xC0], eax
        mov dword ptr ds : [esi+0xBC], eax
        mov dword ptr ds : [esi+0xB8], eax
        mov byte ptr ss : [esp+0x14], al
        call public_591ef0
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        call public_591ba0
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x5723b0)
    }
}
