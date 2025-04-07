#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b8e20);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_6336ea0);
CLANG_FORWARD_PROC_SYMBOL(public_633e970);
CLANG_FORWARD_PROC_SYMBOL(public_633ea30);
CLANG_FORWARD_PROC_SYMBOL(public_633ed10);
CLANG_FORWARD_PROC_SYMBOL(public_633ee70);
CLANG_FORWARD_PROC_SYMBOL(public_633efd0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_63976f9);

PROC_DECLARE(0x6336ea0, internal_6336ea0, public_6336ea0);
extern "C" NAKED register_t __cdecl internal_6336ea0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63976f9 @0x6336ea2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63976f9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ss : [esp+0x28], 3
        call public_633ea30
        mov ebx, dword ptr ds : [esi+0x18]
        lea edi, ds:[esi+0x14]
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, edi
        call public_632c410
        mov ecx, dword ptr ds : [eax]
        push ebx
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, edi
        call public_633ed10
        mov ebx, dword ptr ds : [esi+0x2C]
        lea ebp, ds:[esi+0x28]
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, ebp
        call public_632c410
        mov ecx, dword ptr ds : [eax]
        push ebx
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, ebp
        call public_633ee70
        mov eax, dword ptr ds : [esi+0x40]
        lea ebx, ds:[esi+0x3C]
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x14], eax
        call public_632c410
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [eax]
        push edx
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, ebx
        call public_633efd0
        call public_62b8e20
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, ebx
        mov byte ptr ss : [esp+0x34], 2
        call public_633efd0
        mov eax, dword ptr ds : [ebx+4]
        push eax
        call public_6391d5a
        xor eax, eax
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+0x10], eax
        mov eax, dword ptr ds : [ebx+8]
        push eax
        call public_6391d5a
        add esp, 8
        mov dword ptr ds : [ebx+8], 0
        mov eax, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea eax, ss:[esp+0x24]
        mov byte ptr ss : [esp+0x30], 1
        push eax
        mov ecx, ebp
        call public_633ee70
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6391d5a
        mov eax, dword ptr ss : [ebp+8]
        xor ebx, ebx
        push eax
        mov dword ptr ss : [ebp+4], ebx
        mov dword ptr ss : [ebp+0x10], ebx
        call public_6391d5a
        add esp, 8
        mov dword ptr ss : [ebp+8], ebx
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, edi
        mov byte ptr ss : [esp+0x34], bl
        call public_633ed10
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6391d5a
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+0x10], ebx
        call public_6391d5a
        add esp, 8
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x34], 0xFFFFFFFF
        call public_633e970
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6391d5a
        mov ecx, dword ptr ds : [esi+8]
        push ecx
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_6391d5a
        mov ecx, dword ptr ss : [esp+0x28]
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebx
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6336ea0)
    }
}
