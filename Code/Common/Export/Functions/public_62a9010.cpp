#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a1440);
CLANG_FORWARD_PROC_SYMBOL(public_62a9010);
CLANG_FORWARD_PROC_SYMBOL(public_62b5850);
CLANG_FORWARD_PROC_SYMBOL(public_62b9490);
CLANG_FORWARD_PROC_SYMBOL(public_6342820);
CLANG_FORWARD_JUMP_SYMBOL(public_6393f3d);

PROC_DECLARE(0x62a9010, internal_62a9010, public_62a9010);
extern "C" NAKED register_t __cdecl internal_62a9010()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6393f3d @0x62a9012*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393f3d
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ss : [esp+0x14]
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        push eax
        mov dword ptr ss : [esp+0x14], esi
        call public_62b5850
        lea edi, ds:[esi+0xE4]
        xor ebx, ebx
        mov dword ptr ss : [esp+0x24], edi
        mov cl, byte ptr ss : [esp+0x24]
        lea ebp, ds:[edi+4]
        mov dword ptr ds : [edi], ebx
        push ebx
        mov byte ptr ss : [ebp], cl
        push ebx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x24], ebx
        call public_62b9490
        mov dword ptr ss : [ebp+4], eax
        mov dword ptr ss : [ebp+8], ebx
        mov dl, byte ptr ss : [esp+0x24]
        lea ebp, ds:[edi+0x10]
        push ebx
        push ebx
        mov ecx, ebp
        mov byte ptr ss : [esp+0x24], 1
        mov byte ptr ss : [ebp], dl
        call public_62b9490
        mov dword ptr ss : [ebp+4], eax
        mov dword ptr ss : [ebp+8], ebx
        mov dword ptr ds : [edi+0x1C], ebx
        mov al, byte ptr ss : [esp+0x24]
        mov dl, byte ptr ss : [esp+0x24]
        or ebp, 0xFFFFFFFF
        mov dword ptr ds : [esi+0x104], ebp
        mov dword ptr ds : [esi+0x108], ebx
        mov dword ptr ds : [esi+0x10C], ebx
        mov dword ptr ds : [esi+0x110], ebx
        mov dword ptr ds : [esi+0x114], ebx
        mov dword ptr ds : [esi+0x138], ebx
        mov dword ptr ds : [esi+0x13C], ebx
        mov dword ptr ds : [esi+0x140], ebx
        lea edi, ds:[esi+0x144]
        lea ecx, ds:[edi+4]
        mov dword ptr ds : [edi], ebx
        mov byte ptr ss : [esp+0x1C], 2
        mov byte ptr ds : [ecx], al
        mov byte ptr ds : [ecx+1], dl
        mov byte ptr ds : [ecx+0xC], bl
        call public_6342820
        mov al, byte ptr ss : [esp+0x24]
        mov byte ptr ds : [esi+0x15C], bl
        mov dword ptr ds : [esi+0x160], ebx
        mov dword ptr ds : [esi+0x164], ebx
        mov dword ptr ds : [esi+0x168], ebx
        mov byte ptr ds : [esi+0x16C], bl
        mov dword ptr ds : [esi+0x170], ebx
        mov dword ptr ds : [esi+0x174], ebx
        mov dword ptr ds : [esi+0x178], ebx
        mov dword ptr ds : [esi+0x17C], ebx
        mov byte ptr ds : [esi+0x180], al
        mov dword ptr ds : [esi+0x184], ebx
        mov dword ptr ds : [esi+0x188], ebx
        mov dword ptr ds : [esi+0x18C], ebx
        mov dword ptr ds : [esi+0x190], ebx
        mov dword ptr ds : [esi+0x194], ebx
        mov dword ptr ds : [esi+0x198], ebx
        mov dword ptr ds : [esi+0x19C], ebx
        mov dword ptr ds : [esi+0x1A0], ebp
        mov byte ptr ss : [esp+0x1C], 4
        mov dword ptr ds : [esi], offset public_639be5c
        push esi
        lea ecx, ds:[esi+0xE4]
        call public_62a1440
        push esi
        mov ecx, edi
        call public_62a1440
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x62a9010)
    }
}
