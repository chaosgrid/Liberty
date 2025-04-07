#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eac680);
CLANG_FORWARD_PROC_SYMBOL(public_6f9efb0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa25f0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb1c41);

PROC_DECLARE(0x6f9efb0, internal_6f9efb0, public_6f9efb0);
extern "C" NAKED register_t __cdecl internal_6f9efb0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb1c41 @0x6f9efb2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb1c41
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        mov al, byte ptr ss : [esp+3]
        push ebx
        xor ebx, ebx
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ss : [esp+0xC], esi
        mov byte ptr ds : [esi+8], al
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+0x14], ebx
        mov dl, byte ptr ss : [esp+0xB]
        mov al, byte ptr ss : [esp+0xB]
        lea ecx, ds:[esi+0x1C]
        mov dword ptr ss : [esp+0x18], ebx
        mov byte ptr ds : [ecx], dl
        mov byte ptr ds : [ecx+1], al
        mov byte ptr ds : [ecx+0xC], bl
        call public_6fa25f0
        mov dword ptr ds : [esi+0x18], offset public_6fbd510
        lea ecx, ds:[esi+0x34]
        mov byte ptr ss : [esp+0x18], 1
        call public_6eac680
        mov cl, byte ptr ss : [esp+0xB]
        mov dword ptr ds : [esi+0x4C], ebx
        mov byte ptr ds : [esi+0x50], cl
        mov dword ptr ds : [esi+0x54], ebx
        mov dword ptr ds : [esi+0x58], ebx
        mov dword ptr ds : [esi+0x5C], ebx
        mov dword ptr ds : [esi+0x30], offset public_6fbc700
        lea ecx, ds:[esi+0x64]
        mov byte ptr ss : [esp+0x18], 2
        call public_6eac680
        mov dl, byte ptr ss : [esp+0xB]
        mov dword ptr ds : [esi+0x7C], ebx
        mov byte ptr ds : [esi+0x80], dl
        mov dl, byte ptr ss : [esp+0xB]
        mov dword ptr ds : [esi+0x84], ebx
        mov dword ptr ds : [esi+0x88], ebx
        mov dword ptr ds : [esi+0x8C], ebx
        mov dword ptr ds : [esi+0x60], offset public_6fbc700
        mov eax, dword ptr ds : [public_6fbcbc0]
        mov dword ptr ds : [esi+0x94], eax
        mov ecx, dword ptr ds : [public_6fbcbc0]
        mov al, byte ptr ss : [esp+0xB]
        mov dword ptr ds : [esi+0x98], ecx
        mov cl, byte ptr ss : [esp+0xB]
        mov dword ptr ds : [esi+0x90], offset public_6fbd3f0
        mov dword ptr ds : [esi+0xA0], ebx
        mov dword ptr ds : [esi+0xA4], ebx
        mov dword ptr ds : [esi+0xA8], ebx
        mov byte ptr ds : [esi+0x9C], dl
        mov byte ptr ds : [esi+0xAC], al
        mov dword ptr ds : [esi+0xB0], ebx
        mov dword ptr ds : [esi+0xB4], ebx
        mov dword ptr ds : [esi+0xB8], ebx
        mov byte ptr ds : [esi+0xBC], cl
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+0xC0], ebx
        mov dword ptr ds : [esi+0xC4], ebx
        mov dword ptr ds : [esi+0xC8], ebx
        mov dword ptr ds : [esi+0xCC], 7
        mov dword ptr ds : [esi], offset public_6fbd554
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6f9efb0)
    }
}
