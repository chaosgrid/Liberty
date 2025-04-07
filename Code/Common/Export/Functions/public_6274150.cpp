#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62732a0);
CLANG_FORWARD_PROC_SYMBOL(public_6274150);
CLANG_FORWARD_PROC_SYMBOL(public_6274540);
CLANG_FORWARD_PROC_SYMBOL(public_6279df0);
CLANG_FORWARD_PROC_SYMBOL(public_6279fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6315b10);
CLANG_FORWARD_PROC_SYMBOL(public_6333e40);
CLANG_FORWARD_JUMP_SYMBOL(public_63929e4);

PROC_DECLARE(0x6274150, internal_6274150, public_6274150);
extern "C" NAKED register_t __cdecl internal_6274150()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63929e4 @0x6274152*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63929e4
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push esi
        mov esi, ecx
        push edi
        lea ecx, ds:[esi+0xCC]
        mov dword ptr ss : [esp+0xC], esi
        call public_6333e40
        lea ecx, ds:[esi+0xD0]
        call public_6333e40
        mov al, byte ptr ss : [esp+0xA]
        lea ecx, ds:[esi+0x134]
        xor edi, edi
        mov dword ptr ss : [esp+0x10], ecx
        mov byte ptr ds : [ecx], al
        mov dword ptr ds : [ecx+4], edi
        mov dword ptr ds : [ecx+8], edi
        mov dword ptr ds : [ecx+0xC], edi
        push edi
        push edi
        mov dword ptr ss : [esp+0x24], edi
        call public_6279fb0
        mov dl, byte ptr ss : [esp+0xA]
        lea ecx, ds:[esi+0x144]
        mov dword ptr ss : [esp+0x1C], 1
        mov dword ptr ss : [esp+0x10], ecx
        mov byte ptr ds : [ecx], dl
        mov dword ptr ds : [ecx+4], edi
        mov dword ptr ds : [ecx+8], edi
        mov dword ptr ds : [ecx+0xC], edi
        mov byte ptr ss : [esp+0x1C], 2
        call public_6279df0
        mov al, byte ptr ss : [esp+0xA]
        lea ecx, ds:[esi+0x154]
        mov dword ptr ss : [esp+0x10], ecx
        mov byte ptr ds : [ecx], al
        mov dword ptr ds : [ecx+4], edi
        mov dword ptr ds : [ecx+8], edi
        mov dword ptr ds : [ecx+0xC], edi
        mov byte ptr ss : [esp+0x1C], 4
        call public_6279df0
        mov dl, byte ptr ss : [esp+0xA]
        lea ecx, ds:[esi+0x164]
        mov dword ptr ss : [esp+0x10], ecx
        mov byte ptr ds : [ecx], dl
        mov dword ptr ds : [ecx+4], edi
        mov dword ptr ds : [ecx+8], edi
        mov dword ptr ds : [ecx+0xC], edi
        mov byte ptr ss : [esp+0x1C], 6
        call public_6279df0
        mov al, byte ptr ss : [esp+0xA]
        lea ecx, ds:[esi+0x174]
        mov dword ptr ss : [esp+0x10], ecx
        mov byte ptr ds : [ecx], al
        mov dword ptr ds : [ecx+4], edi
        mov dword ptr ds : [ecx+8], edi
        mov dword ptr ds : [ecx+0xC], edi
        mov byte ptr ss : [esp+0x1C], 8
        call public_6279df0
        mov dl, byte ptr ss : [esp+0xA]
        lea ecx, ds:[esi+0x184]
        mov dword ptr ss : [esp+0x10], ecx
        mov byte ptr ds : [ecx], dl
        mov dword ptr ds : [ecx+4], edi
        mov dword ptr ds : [ecx+8], edi
        mov dword ptr ds : [ecx+0xC], edi
        mov byte ptr ss : [esp+0x1C], 0xA
        call public_6279df0
        mov al, byte ptr ss : [esp+0xA]
        lea ecx, ds:[esi+0x194]
        mov dword ptr ss : [esp+0x10], ecx
        mov byte ptr ds : [ecx], al
        mov dword ptr ds : [ecx+4], edi
        mov dword ptr ds : [ecx+8], edi
        mov dword ptr ds : [ecx+0xC], edi
        mov byte ptr ss : [esp+0x1C], 0xC
        call public_6279df0
        lea ecx, ss:[esp+0xA]
        lea edi, ds:[esi+0x1A4]
        push ecx
        mov ecx, edi
        mov byte ptr ss : [esp+0x20], 0xD
        mov dword ptr ss : [esp+0x14], edi
        call public_6315b10
        mov ecx, edi
        mov byte ptr ss : [esp+0x1C], 0xE
        call public_6279df0
        lea edi, ds:[esi+0x1B4]
        lea edx, ss:[esp+0xB]
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x20], 0xF
        mov dword ptr ss : [esp+0x14], edi
        call public_6315b10
        mov ecx, edi
        mov byte ptr ss : [esp+0x1C], 0x10
        call public_6279df0
        lea ecx, ds:[esi+0x1C8]
        call public_62732a0
        mov ecx, esi
        mov byte ptr ss : [esp+0x1C], 0x12
        call public_6274540
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x6274150)
    }
}
