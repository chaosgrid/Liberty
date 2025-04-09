#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46ba90);
CLANG_FORWARD_PROC_SYMBOL(public_489160);
CLANG_FORWARD_PROC_SYMBOL(public_56d360);
CLANG_FORWARD_PROC_SYMBOL(public_591ba0);
CLANG_FORWARD_PROC_SYMBOL(public_591ef0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c2bd3);

PROC_DECLARE(0x56d360, internal_56d360, public_56d360);
extern "C" NAKED register_t __cdecl internal_56d360()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c2bd3 @0x56d362*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c2bd3
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ds : [esi], offset public_5e2a84
        mov dword ptr ds : [esi+0x7C], offset public_5e2a6c
        mov dword ptr ds : [esi+0x80], offset public_5e2a64
        mov eax, dword ptr ds : [esi+0x360]
        mov ecx, dword ptr ds : [esi+0x35C]
        lea edi, ds:[esi+0x358]
        push eax
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x20], 0x15
        call public_489160
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        xor ebx, ebx
        add esp, 4
        lea ecx, ds:[esi+0x34C]
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+0xC], ebx
        mov byte ptr ss : [esp+0x18], 0x14
        call public_46ba90
        lea ecx, ds:[esi+0x340]
        mov byte ptr ss : [esp+0x18], 0x13
        call public_46ba90
        lea ecx, ds:[esi+0x334]
        mov byte ptr ss : [esp+0x18], 0x12
        call public_46ba90
        lea ecx, ds:[esi+0x328]
        mov byte ptr ss : [esp+0x18], 0x11
        call public_46ba90
        lea ecx, ds:[esi+0x31C]
        mov byte ptr ss : [esp+0x18], 0x10
        call public_46ba90
        lea ecx, ds:[esi+0x8C]
        mov dword ptr ds : [esi+0xF0], ebx
        mov dword ptr ds : [esi+0xEC], ebx
        mov dword ptr ds : [esi+0xE8], ebx
        mov dword ptr ds : [esi+0xE4], ebx
        mov dword ptr ds : [esi+0xE0], ebx
        mov dword ptr ds : [esi+0xDC], ebx
        mov dword ptr ds : [esi+0xD8], ebx
        mov dword ptr ds : [esi+0xD4], ebx
        mov dword ptr ds : [esi+0xD0], ebx
        mov dword ptr ds : [esi+0xCC], ebx
        mov dword ptr ds : [esi+0xC8], ebx
        mov dword ptr ds : [esi+0xC4], ebx
        mov dword ptr ds : [esi+0xC0], ebx
        mov dword ptr ds : [esi+0xBC], ebx
        mov dword ptr ds : [esi+0xB8], ebx
        mov byte ptr ss : [esp+0x18], bl
        call public_591ef0
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        mov ecx, esi
        call public_591ba0
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x56d360)
    }
}
