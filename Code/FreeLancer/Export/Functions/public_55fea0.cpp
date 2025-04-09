#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42a7e0);
CLANG_FORWARD_PROC_SYMBOL(public_46ba60);
CLANG_FORWARD_PROC_SYMBOL(public_55fea0);
CLANG_FORWARD_PROC_SYMBOL(public_591ae0);
CLANG_FORWARD_PROC_SYMBOL(public_591e30);
CLANG_FORWARD_PROC_SYMBOL(public_594580);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c19dd);

PROC_DECLARE(0x55fea0, internal_55fea0, public_55fea0);
extern "C" NAKED register_t __cdecl internal_55fea0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c19dd @0x55fea2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c19dd
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        lea ebx, ds:[esi+0x8C]
        push edi
        mov ecx, ebx
        mov dword ptr ss : [esp+0xC], esi
        call public_594580
        push eax
        mov ecx, esi
        call public_591ae0
        xor edi, edi
        mov ecx, ebx
        mov dword ptr ss : [esp+0x18], edi
        call public_591e30
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [esi+0xB8], eax
        add eax, 0x40
        mov dword ptr ds : [esi+0xBC], eax
        lea eax, ss:[esp+0x20]
        lea ecx, ds:[esi+0xC0]
        push eax
        mov byte ptr ss : [esp+0x1C], 1
        call public_46ba60
        mov cl, byte ptr ss : [esp+0x20]
        lea ebx, ds:[esi+0xCC]
        push edi
        mov byte ptr ds : [ebx], cl
        push edi
        mov ecx, ebx
        mov byte ptr ss : [esp+0x20], 2
        call public_42a7e0
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], edi
        mov dword ptr ds : [esi+0x100], edi
        mov dword ptr ds : [esi+0x104], edi
        mov dword ptr ds : [esi+0x108], edi
        mov dword ptr ds : [esi+0x10C], edi
        mov dword ptr ds : [esi+0x110], edi
        mov dword ptr ds : [esi+0x114], edi
        mov dword ptr ds : [esi+0x118], edi
        mov dword ptr ds : [esi+0x11C], edi
        mov dl, byte ptr ss : [esp+0x20]
        lea ebx, ds:[esi+0x120]
        push edi
        push edi
        mov ecx, ebx
        mov byte ptr ss : [esp+0x20], 0xB
        mov byte ptr ds : [ebx], dl
        call public_42a7e0
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], edi
        mov al, byte ptr ss : [esp+0x20]
        lea ebx, ds:[esi+0x12C]
        push edi
        push edi
        mov ecx, ebx
        mov byte ptr ss : [esp+0x20], 0xC
        mov byte ptr ds : [ebx], al
        call public_42a7e0
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], edi
        mov cl, byte ptr ss : [esp+0x20]
        lea ebx, ds:[esi+0x138]
        mov byte ptr ss : [esp+0x18], 0xD
        mov byte ptr ds : [ebx], cl
        push edi
        push edi
        mov ecx, ebx
        call public_42a7e0
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], edi
        mov dl, byte ptr ss : [esp+0x20]
        push 0xC
        mov byte ptr ss : [esp+0x1C], 0xE
        mov byte ptr ds : [esi+0x144], dl
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ds : [esi+0x148], eax
        mov dword ptr ds : [esi+0x14C], edi
        mov al, byte ptr ss : [esp+0x20]
        lea ebx, ds:[esi+0x150]
        push edi
        push edi
        mov ecx, ebx
        mov byte ptr ss : [esp+0x20], 0xF
        mov byte ptr ds : [ebx], al
        call public_42a7e0
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], edi
        mov cl, byte ptr ss : [esp+0x20]
        lea ebx, ds:[esi+0x15C]
        push edi
        mov byte ptr ds : [ebx], cl
        push edi
        mov ecx, ebx
        mov byte ptr ss : [esp+0x20], 0x10
        call public_42a7e0
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], edi
        mov dl, byte ptr ss : [esp+0x20]
        push 0xC
        mov byte ptr ss : [esp+0x1C], 0x11
        mov byte ptr ds : [esi+0x168], dl
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ds : [esi+0x16C], eax
        mov dword ptr ds : [esi+0x170], edi
        mov al, byte ptr ss : [esp+0x20]
        lea ebx, ds:[esi+0x174]
        push edi
        push edi
        mov ecx, ebx
        mov byte ptr ss : [esp+0x20], 0x12
        mov byte ptr ds : [ebx], al
        call public_42a7e0
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], edi
        mov dword ptr ds : [esi+0xB4], edi
        pop edi
        mov dword ptr ds : [esi], offset public_5e1a4c
        mov dword ptr ds : [esi+0x7C], offset public_5e1a34
        mov dword ptr ds : [esi+0x80], offset public_5e1a2c
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x55fea0)
    }
}
