#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630e010);
CLANG_FORWARD_PROC_SYMBOL(public_630e1f0);
CLANG_FORWARD_PROC_SYMBOL(public_630e210);
CLANG_FORWARD_PROC_SYMBOL(public_6312dd0);
CLANG_FORWARD_JUMP_SYMBOL(public_639646f);

PROC_DECLARE(0x6312dd0, internal_6312dd0, public_6312dd0);
extern "C" NAKED register_t __cdecl internal_6312dd0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_639646f @0x6312dd2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639646f
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        push ebx
        xor ebx, ebx
        mov dword ptr ss : [esp+4], ebx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+0xC], ebx
        mov dword ptr ss : [esp+0x10], ebx
        mov byte ptr ss : [esp+0x14], bl
        mov byte ptr ss : [esp+0x15], bl
        mov byte ptr ss : [esp+0x16], bl
        mov byte ptr ss : [esp+0x17], bl
        mov byte ptr ss : [esp+0x18], bl
        mov byte ptr ss : [esp+0x19], bl
        mov byte ptr ss : [esp+0x1A], bl
        mov byte ptr ss : [esp+0x1B], bl
        mov byte ptr ss : [esp+0x1C], bl
        mov byte ptr ss : [esp+0x1D], bl
        mov byte ptr ss : [esp+0x1E], bl
        mov byte ptr ss : [esp+0x1F], bl
        mov byte ptr ss : [esp+0x20], bl
        mov byte ptr ss : [esp+0x21], bl
        mov eax, dword ptr ds : [esi+8]
        push ebx
        push eax
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x34], 1
        call public_630e010
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [esi+8]
        sub ecx, eax
        mov dword ptr ds : [esi+0xC], ecx
        add edx, eax
        mov dword ptr ds : [esi+8], edx
        mov esi, dword ptr ss : [esp+0x34]
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, esi
        call public_630e1f0
        mov dword ptr ss : [esp+8], 1
        lea ecx, ss:[esp+0xC]
        mov byte ptr ss : [esp+0x2C], bl
        call public_630e210
        mov ecx, dword ptr ss : [esp+0x24]
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 4
        UNREACHABLE_TRAP(0x6312dd0)
    }
}
