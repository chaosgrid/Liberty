#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0e20);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f501c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6faf2ef);

PROC_DECLARE(0x6f501c0, internal_6f501c0, public_6f501c0);
extern "C" NAKED register_t __cdecl internal_6f501c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faf2ef @0x6f501c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faf2ef
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x10], esi
        mov eax, dword ptr ds : [esi+0xC4]
        push eax
        mov dword ptr ss : [esp+0x28], 3
        call public_6fa8fe0
        xor edi, edi
        mov dword ptr ds : [esi+0xC4], edi
        mov dword ptr ds : [esi+0xC8], edi
        mov dword ptr ds : [esi+0xCC], edi
        mov ecx, dword ptr ds : [esi+0xB4]
        push ecx
        call public_6fa8fe0
        add esp, 8
        lea ebx, ds:[esi+0x9C]
        lea edx, ss:[esp+0x14]
        mov dword ptr ds : [esi+0xB4], edi
        mov dword ptr ds : [esi+0xB8], edi
        mov dword ptr ds : [esi+0xBC], edi
        mov ebp, dword ptr ds : [ebx+4]
        push edx
        mov ecx, ebx
        call public_6f1df30
        mov eax, dword ptr ds : [eax]
        push ebp
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, ebx
        call public_6ed0e20
        mov edx, dword ptr ds : [ebx+4]
        push edx
        call public_6fa8fe0
        mov eax, dword ptr ds : [ebx+8]
        push eax
        mov dword ptr ds : [ebx+4], edi
        mov dword ptr ds : [ebx+0x10], edi
        call public_6fa8fe0
        mov dword ptr ds : [ebx+8], edi
        mov ecx, dword ptr ds : [esi+0x88]
        push ecx
        call public_6fa8fe0
        mov dword ptr ds : [esi+0x88], edi
        mov dword ptr ds : [esi+0x8C], edi
        mov dword ptr ds : [esi+0x90], edi
        mov edx, dword ptr ds : [esi+0x78]
        push edx
        call public_6fa8fe0
        mov dword ptr ds : [esi+0x78], edi
        mov dword ptr ds : [esi+0x7C], edi
        mov dword ptr ds : [esi+0x80], edi
        mov eax, dword ptr ds : [esi+0x60]
        push eax
        call public_6fa8fe0
        mov dword ptr ds : [esi+0x60], edi
        mov dword ptr ds : [esi+0x64], edi
        mov dword ptr ds : [esi+0x68], edi
        mov ecx, dword ptr ds : [esi+0x4C]
        push ecx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x34]
        add esp, 0x18
        mov dword ptr ds : [esi+0x4C], edi
        mov dword ptr ds : [esi+0x50], edi
        mov dword ptr ds : [esi+0x54], edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x6f501c0)
    }
}
