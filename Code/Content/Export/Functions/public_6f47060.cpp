#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea8cc0);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f47060);
CLANG_FORWARD_PROC_SYMBOL(public_6f49fd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4a090);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6faeecd);

PROC_DECLARE(0x6f47060, internal_6f47060, public_6f47060);
extern "C" NAKED register_t __cdecl internal_6f47060()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faeecd @0x6f47062*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faeecd
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
        xor ebx, ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov eax, dword ptr ds : [esi+0x100]
        push eax
        call public_6fa8fe0
        mov dword ptr ds : [esi+0x100], ebx
        mov dword ptr ds : [esi+0x104], ebx
        mov dword ptr ds : [esi+0x108], ebx
        mov eax, dword ptr ds : [esi+0xF0]
        push eax
        call public_6fa8fe0
        lea edi, ds:[esi+0x48]
        add esp, 8
        mov dword ptr ds : [esi+0xF0], ebx
        mov dword ptr ds : [esi+0xF4], ebx
        mov dword ptr ds : [esi+0xF8], ebx
        mov dword ptr ss : [esp+0x10], edi
        lea ecx, ds:[edi+0x78]
        mov byte ptr ss : [esp+0x1C], 8
        call public_6eec8d0
        lea ecx, ds:[edi+0x68]
        mov byte ptr ss : [esp+0x1C], 7
        call public_6eec8d0
        lea ecx, ds:[edi+0x58]
        mov byte ptr ss : [esp+0x1C], 6
        call public_6eec8d0
        lea ecx, ds:[edi+0x3C]
        mov byte ptr ss : [esp+0x1C], 5
        call public_6f49fd0
        lea ecx, ds:[edi+0x28]
        mov byte ptr ss : [esp+0x1C], 4
        call public_6f49fd0
        lea ecx, ds:[edi+0x14]
        mov byte ptr ss : [esp+0x1C], 3
        call public_6f49fd0
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 2
        call public_6f4a090
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6fa8fe0
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+0x10], ebx
        call public_6fa8fe0
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+0x3C]
        push eax
        call public_6fa8fe0
        mov dword ptr ds : [esi+0x3C], ebx
        mov dword ptr ds : [esi+0x40], ebx
        mov dword ptr ds : [esi+0x44], ebx
        mov eax, dword ptr ds : [esi+0x28]
        push eax
        call public_6fa8fe0
        add esp, 0x10
        mov dword ptr ds : [esi+0x28], ebx
        mov dword ptr ds : [esi+0x2C], ebx
        mov dword ptr ds : [esi+0x30], ebx
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        mov ecx, esi
        call public_6ea8cc0
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6f47060)
    }
}
