#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f46ee0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4a090);
CLANG_FORWARD_PROC_SYMBOL(public_6f4a350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6faee5f);

PROC_DECLARE(0x6f46ee0, internal_6f46ee0, public_6f46ee0);
extern "C" NAKED register_t __cdecl internal_6f46ee0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faee5f @0x6f46ee2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faee5f
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
        mov eax, dword ptr ds : [esi+0x80]
        mov ecx, dword ptr ds : [esi+0x7C]
        lea edi, ds:[esi+0x78]
        push eax
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x2C], 5
        call public_6ea1490
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6fa8fe0
        xor ebx, ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+0xC], ebx
        mov eax, dword ptr ds : [esi+0x6C]
        push eax
        call public_6fa8fe0
        mov dword ptr ds : [esi+0x6C], ebx
        mov dword ptr ds : [esi+0x70], ebx
        mov dword ptr ds : [esi+0x74], ebx
        mov eax, dword ptr ds : [esi+0x5C]
        push eax
        call public_6fa8fe0
        add esp, 0xC
        lea edi, ds:[esi+0x3C]
        lea edx, ss:[esp+0x14]
        mov dword ptr ds : [esi+0x5C], ebx
        mov dword ptr ds : [esi+0x60], ebx
        mov dword ptr ds : [esi+0x64], ebx
        mov ebp, dword ptr ds : [edi+4]
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 2
        call public_6f1df30
        mov eax, dword ptr ds : [eax]
        push ebp
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, edi
        call public_6f4a350
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6fa8fe0
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+0x10], ebx
        call public_6fa8fe0
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+0x2C]
        mov ecx, dword ptr ds : [eax]
        add esp, 8
        lea edi, ds:[esi+0x28]
        push eax
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x30], 1
        call public_6f4a350
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6fa8fe0
        mov eax, dword ptr ds : [edi+8]
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+0x10], ebx
        push eax
        call public_6fa8fe0
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [eax]
        add esp, 8
        lea edi, ds:[esi+0x14]
        push eax
        push ecx
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x30], bl
        call public_6f4a350
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6fa8fe0
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+0x10], ebx
        call public_6fa8fe0
        add esp, 8
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x30], 0xFFFFFFFF
        call public_6f4a090
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x24]
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebx
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x6f46ee0)
    }
}
