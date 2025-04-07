#include "Common-PCH.h"

CLANG_FORWARD_JUMP_SYMBOL(public_6392418);

PROC_DECLARE(0x62634f0, internal_62634f0, public_62634f0);
extern "C" NAKED register_t __cdecl internal_62634f0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6392418 @0x62634f2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6392418
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        mov al, byte ptr ss : [ebp]
        mov ebx, ecx
        mov byte ptr ds : [ebx], al
        xor eax, eax
        push esi
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx+0xC], eax
        mov ecx, dword ptr ds : [public_63991c0]
        mov edx, dword ptr ds : [ecx]
        push edi
        push edx
        push eax
        push ebp
        mov ecx, ebx
        mov dword ptr ss : [esp+0x1C], ebx
        call dword ptr ds : [public_63991a8]
        mov eax, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [ebx+0x10], eax
        mov ecx, dword ptr ss : [ebp+0x14]
        mov dword ptr ds : [ebx+0x14], ecx
        mov edx, dword ptr ss : [ebp+0x18]
        mov dword ptr ds : [ebx+0x18], edx
        mov eax, dword ptr ss : [ebp+0x1C]
        mov dword ptr ds : [ebx+0x1C], eax
        mov ecx, dword ptr ss : [ebp+0x20]
        mov dword ptr ds : [ebx+0x20], ecx
        mov edx, dword ptr ss : [ebp+0x24]
        mov dword ptr ds : [ebx+0x24], edx
        lea esi, ss:[ebp+0x28]
        lea edi, ds:[ebx+0x28]
        mov ecx, 0x100
        rep movsd
        lea esi, ss:[ebp+0x428]
        lea edi, ds:[ebx+0x428]
        mov ecx, 0x100
        rep movsd
        lea esi, ss:[ebp+0x828]
        lea edi, ds:[ebx+0x828]
        mov ecx, 0x100
        rep movsd
        lea esi, ss:[ebp+0xC28]
        lea edi, ds:[ebx+0xC28]
        mov ecx, 0x200
        rep movsd
        mov al, byte ptr ss : [ebp+0x1428]
        lea esi, ss:[ebp+0x1428]
        lea edi, ds:[ebx+0x1428]
        push 0
        mov ecx, edi
        mov dword ptr ss : [esp+0x20], 0
        mov byte ptr ds : [edi], al
        call dword ptr ds : [public_63991b8]
        mov ecx, dword ptr ds : [public_63991c0]
        mov edx, dword ptr ds : [ecx]
        push edx
        push 0
        push esi
        mov ecx, edi
        call dword ptr ds : [public_63991a8]
        mov eax, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [edi+0x10], eax
        mov ecx, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [edi+0x14], ecx
        mov edx, dword ptr ds : [esi+0x18]
        mov dword ptr ds : [edi+0x18], edx
        mov eax, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [edi+0x1C], eax
        mov ecx, dword ptr ds : [esi+0x20]
        mov dword ptr ds : [edi+0x20], ecx
        mov edx, dword ptr ds : [esi+0x24]
        mov dword ptr ds : [edi+0x24], edx
        mov eax, dword ptr ds : [esi+0x28]
        mov dword ptr ds : [edi+0x28], eax
        mov ecx, dword ptr ds : [esi+0x2C]
        mov dword ptr ds : [edi+0x2C], ecx
        mov dx, word ptr ds : [esi+0x30]
        mov word ptr ds : [edi+0x30], dx
        mov eax, dword ptr ds : [esi+0x34]
        mov dword ptr ds : [edi+0x34], eax
        mov ecx, dword ptr ds : [esi+0x38]
        mov dword ptr ds : [edi+0x38], ecx
        add esi, 0x3C
        add edi, 0x3C
        mov ecx, 0x40
        rep movsd
        mov dl, byte ptr ss : [ebp+0x1564]
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        mov byte ptr ds : [ebx+0x1564], dl
        pop ebp
        mov eax, ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x62634f0)
    }
}
