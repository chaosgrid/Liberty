#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f51160);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8370);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6faf49d);

PROC_DECLARE(0x6f51160, internal_6f51160, public_6f51160);
extern "C" NAKED register_t __cdecl internal_6f51160()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faf49d @0x6f51162*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faf49d
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        mov eax, dword ptr ds : [esi+0xF0]
        mov ecx, dword ptr ds : [eax]
        lea edi, ds:[esi+0xEC]
        push eax
        push ecx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x28], 9
        call public_6fa8370
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6fa8fe0
        xor ebx, ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+0xE4]
        mov ecx, dword ptr ds : [eax]
        add esp, 4
        lea edi, ds:[esi+0xE0]
        push eax
        push ecx
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 8
        call public_6fa8370
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6fa8fe0
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+0xD8]
        mov ecx, dword ptr ds : [eax]
        add esp, 4
        lea edi, ds:[esi+0xD4]
        push eax
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 7
        call public_6fa8370
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6fa8fe0
        add esp, 4
        lea ecx, ds:[esi+0xC4]
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov byte ptr ss : [esp+0x1C], 6
        call public_6eec8d0
        lea ecx, ds:[esi+0xB4]
        mov byte ptr ss : [esp+0x1C], 5
        call public_6eec8d0
        mov eax, dword ptr ds : [esi+0xAC]
        mov ecx, dword ptr ds : [esi+0xA8]
        lea edi, ds:[esi+0xA4]
        push eax
        push ecx
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 4
        call public_6ea1490
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6fa8fe0
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+0xC], ebx
        mov edx, dword ptr ds : [esi+0x60]
        mov eax, dword ptr ds : [esi+0x5C]
        lea edi, ds:[esi+0x58]
        add esp, 4
        push edx
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 3
        call public_6ea1490
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6fa8fe0
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+0xC], ebx
        mov ecx, dword ptr ds : [esi+0x4C]
        mov edx, dword ptr ds : [esi+0x48]
        lea edi, ds:[esi+0x44]
        add esp, 4
        push ecx
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 2
        call public_6ea1490
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6fa8fe0
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+0xC], ebx
        mov eax, dword ptr ds : [esi+0x38]
        mov ecx, dword ptr ds : [esi+0x34]
        lea edi, ds:[esi+0x30]
        add esp, 4
        push eax
        push ecx
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 1
        call public_6ea1490
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6fa8fe0
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+0xC], ebx
        mov edx, dword ptr ds : [esi+0x24]
        mov eax, dword ptr ds : [esi+0x20]
        lea edi, ds:[esi+0x1C]
        add esp, 4
        push edx
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], bl
        call public_6ea1490
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6fa8fe0
        add esi, 8
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+0xC], ebx
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        add esp, 4
        push ecx
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        call public_6ea1490
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6fa8fe0
        add esp, 4
        pop edi
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        pop esi
        mov ecx, dword ptr ss : [esp+0xC]
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6f51160)
    }
}
