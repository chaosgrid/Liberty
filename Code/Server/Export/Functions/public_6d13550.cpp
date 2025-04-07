#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d13550);
CLANG_FORWARD_PROC_SYMBOL(public_6d15ef0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d61c62);

PROC_DECLARE(0x6d13550, internal_6d13550, public_6d13550);
extern "C" NAKED register_t __cdecl internal_6d13550()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d61c62 @0x6d13552*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d61c62
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        mov al, byte ptr ss : [esp+3]
        mov dl, byte ptr ss : [esp+3]
        push ebx
        push esi
        mov esi, ecx
        lea ecx, ds:[esi+8]
        xor ebx, ebx
        mov dword ptr ss : [esp+0xC], esi
        mov byte ptr ds : [ecx], al
        mov byte ptr ds : [ecx+1], dl
        mov byte ptr ds : [ecx+0xC], bl
        call public_6d15ef0
        mov al, byte ptr ss : [esp+0xB]
        mov dl, byte ptr ss : [esp+0xB]
        lea ecx, ds:[esi+0x1C]
        mov dword ptr ss : [esp+0x18], ebx
        mov byte ptr ds : [ecx], al
        mov byte ptr ds : [ecx+1], dl
        mov byte ptr ds : [ecx+0xC], bl
        call public_6d15ef0
        mov al, byte ptr ss : [esp+0xB]
        mov dl, byte ptr ss : [esp+0xB]
        lea ecx, ds:[esi+0x30]
        mov byte ptr ss : [esp+0x18], 1
        mov byte ptr ds : [ecx], al
        mov byte ptr ds : [ecx+1], dl
        mov byte ptr ds : [ecx+0xC], bl
        call public_6d15ef0
        mov al, byte ptr ss : [esp+0xB]
        mov dl, byte ptr ss : [esp+0xB]
        lea ecx, ds:[esi+0x44]
        mov byte ptr ss : [esp+0x18], 2
        mov byte ptr ds : [ecx], al
        mov byte ptr ds : [ecx+1], dl
        mov byte ptr ds : [ecx+0xC], bl
        call public_6d15ef0
        mov al, byte ptr ss : [esp+0xB]
        mov dl, byte ptr ss : [esp+0xB]
        lea ecx, ds:[esi+0x58]
        mov byte ptr ss : [esp+0x18], 3
        mov byte ptr ds : [ecx], al
        mov byte ptr ds : [ecx+1], dl
        mov byte ptr ds : [ecx+0xC], bl
        call public_6d15ef0
        mov al, byte ptr ss : [esp+0xB]
        mov dl, byte ptr ss : [esp+0xB]
        lea ecx, ds:[esi+0x6C]
        mov byte ptr ss : [esp+0x18], 4
        mov byte ptr ds : [ecx], al
        mov byte ptr ds : [ecx+1], dl
        mov byte ptr ds : [ecx+0xC], bl
        call public_6d15ef0
        mov al, byte ptr ss : [esp+0xB]
        mov dl, byte ptr ss : [esp+0xB]
        lea ecx, ds:[esi+0x80]
        mov byte ptr ss : [esp+0x18], 5
        mov byte ptr ds : [ecx], al
        mov byte ptr ds : [ecx+1], dl
        mov byte ptr ds : [ecx+0xC], bl
        call public_6d15ef0
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi], ebx
        mov dword ptr ds : [esi+4], ebx
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6d13550)
    }
}
