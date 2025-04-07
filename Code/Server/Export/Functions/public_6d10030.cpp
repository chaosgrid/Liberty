#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0f230);
CLANG_FORWARD_PROC_SYMBOL(public_6d0f410);
CLANG_FORWARD_PROC_SYMBOL(public_6d10030);
CLANG_FORWARD_PROC_SYMBOL(public_6d17170);
CLANG_FORWARD_PROC_SYMBOL(public_6d171b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c540);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d61a13);

PROC_DECLARE(0x6d10030, internal_6d10030, public_6d10030);
extern "C" NAKED register_t __cdecl internal_6d10030()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d61a13 @0x6d10032*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d61a13
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        lea esi, ds:[ecx+4]
        push edi
        mov dword ptr ss : [esp+0x10], esi
        lea edi, ds:[esi+0xE8]
        mov ecx, edi
        mov dword ptr ss : [esp+0x24], 0xB
        mov dword ptr ds : [edi], offset public_6d67d00
        call public_6d17170
        mov ecx, edi
        call public_6d171b0
        lea edi, ds:[esi+0xD4]
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 0xA
        mov dword ptr ds : [edi], offset public_6d67d00
        call public_6d17170
        mov ecx, edi
        call public_6d171b0
        lea edi, ds:[esi+0xC0]
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 9
        mov dword ptr ds : [edi], offset public_6d67d00
        call public_6d17170
        mov ecx, edi
        call public_6d171b0
        lea edi, ds:[esi+0xAC]
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 8
        mov dword ptr ds : [edi], offset public_6d67d00
        call public_6d17170
        mov ecx, edi
        call public_6d171b0
        lea edi, ds:[esi+0x98]
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 7
        mov dword ptr ds : [edi], offset public_6d67d00
        call public_6d17170
        mov ecx, edi
        call public_6d171b0
        lea edi, ds:[esi+0x84]
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 6
        mov dword ptr ds : [edi], offset public_6d67d00
        call public_6d17170
        mov ecx, edi
        call public_6d171b0
        lea edi, ds:[esi+0x70]
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 5
        mov dword ptr ds : [edi], offset public_6d67d00
        call public_6d17170
        mov ecx, edi
        call public_6d171b0
        lea edi, ds:[esi+0x5C]
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 4
        mov dword ptr ds : [edi], offset public_6d67d00
        call public_6d17170
        mov ecx, edi
        call public_6d171b0
        lea edi, ds:[esi+0x48]
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 3
        mov dword ptr ds : [edi], offset public_6d67d00
        call public_6d17170
        mov ecx, edi
        call public_6d171b0
        lea edi, ds:[esi+0x34]
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 2
        mov dword ptr ds : [edi], offset public_6d67d00
        call public_6d17170
        mov ecx, edi
        call public_6d171b0
        mov eax, dword ptr ds : [esi+0x28]
        push eax
        call public_6d5ffb0
        xor ebx, ebx
        add esp, 4
        lea edi, ds:[esi+0x14]
        lea eax, ss:[esp+0x14]
        mov dword ptr ds : [esi+0x28], ebx
        mov dword ptr ds : [esi+0x2C], ebx
        mov dword ptr ds : [esi+0x30], ebx
        mov ebp, dword ptr ds : [edi+4]
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], bl
        call public_6d5c540
        mov ecx, dword ptr ds : [eax]
        push ebp
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, edi
        call public_6d0f410
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6d5ffb0
        add esp, 4
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        call public_6d0f230
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x6d10030)
    }
}
