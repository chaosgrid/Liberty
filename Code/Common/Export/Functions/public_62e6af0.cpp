#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e6af0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_63953e1);

PROC_DECLARE(0x62e6af0, internal_62e6af0, public_62e6af0);
extern "C" NAKED register_t __cdecl internal_62e6af0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63953e1 @0x62e6af2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63953e1
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
        mov dword ptr ss : [esp+0xC], esi
        mov byte ptr ds : [esi+0xC], al
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov byte ptr ds : [esi+0x1D], bl
        mov byte ptr ds : [esi+0x28], bl
        mov dword ptr ds : [esi+0x34], ebx
        mov ecx, 0x42C80000
        mov dword ptr ds : [esi+0x2C], ecx
        mov eax, 0x3F800000
        mov dword ptr ds : [esi+0x30], eax
        mov dword ptr ds : [esi+0x3C], ecx
        mov byte ptr ds : [esi+0x38], bl
        mov dword ptr ds : [esi+0x40], eax
        mov dword ptr ds : [esi+0x44], ebx
        mov dword ptr ds : [esi+0x4C], ecx
        mov byte ptr ds : [esi+0x48], bl
        mov dword ptr ds : [esi+0x50], eax
        mov dword ptr ds : [esi+0x54], ebx
        mov dword ptr ds : [esi+0x5C], ecx
        mov byte ptr ds : [esi+0x58], bl
        mov dword ptr ds : [esi+0x60], eax
        mov dword ptr ds : [esi+0x64], ebx
        mov dword ptr ds : [esi+0x6C], ecx
        mov byte ptr ds : [esi+0x68], bl
        mov dword ptr ds : [esi+0x70], eax
        mov dword ptr ds : [esi+0x74], ebx
        mov dword ptr ds : [esi+0x7C], ecx
        mov byte ptr ds : [esi+0x78], bl
        mov dword ptr ds : [esi+0x80], eax
        mov dword ptr ds : [esi+0x84], ebx
        mov dword ptr ds : [esi+0x8C], ecx
        mov byte ptr ds : [esi+0x88], bl
        mov dword ptr ds : [esi+0x90], eax
        mov dword ptr ds : [esi+0x94], ebx
        mov dword ptr ds : [esi+0x9C], ecx
        mov byte ptr ds : [esi+0x98], bl
        mov dword ptr ds : [esi+0xA0], eax
        mov dword ptr ds : [esi+0xA4], ebx
        mov dword ptr ds : [esi+0xAC], ecx
        mov byte ptr ds : [esi+0xA8], bl
        mov dword ptr ds : [esi+0xB0], eax
        mov dword ptr ds : [esi+0xB4], ebx
        mov dword ptr ds : [esi+0xBC], ecx
        mov byte ptr ds : [esi+0xB8], bl
        mov dword ptr ds : [esi+0xC0], eax
        mov dword ptr ds : [esi+0xC4], ebx
        mov dword ptr ds : [esi+0xCC], ecx
        mov cl, byte ptr ss : [esp+0xB]
        mov byte ptr ds : [esi+0xC8], bl
        mov dword ptr ds : [esi+0xD0], eax
        mov dword ptr ds : [esi+0xD4], ebx
        push 0x10
        mov dword ptr ss : [esp+0x1C], ebx
        mov byte ptr ds : [esi+0xDC], cl
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ds : [esi+0xE0], eax
        mov dword ptr ds : [esi+0xE4], ebx
        mov dword ptr ds : [esi+0xE8], ebx
        mov dword ptr ds : [esi+0xEC], ebx
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi], ebx
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi+0x20], ebx
        mov dword ptr ds : [esi+0xD8], 0x3F000000
        mov dword ptr ds : [esi+0xF4], 0x7F7FFFFF
        mov eax, esi
        pop esi
        pop ebx
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x62e6af0)
    }
}
