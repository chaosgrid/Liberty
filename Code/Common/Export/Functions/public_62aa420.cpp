#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630e210);
CLANG_FORWARD_PROC_SYMBOL(public_6321160);
CLANG_FORWARD_JUMP_SYMBOL(public_63940a0);

PROC_DECLARE(0x62aa420, internal_62aa420, public_62aa420);
extern "C" NAKED register_t __cdecl internal_62aa420()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63940a0 @0x62aa422*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63940a0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x34
        push ebx
        xor ebx, ebx
        push esi
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
        mov dword ptr ss : [esp+0x44], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        mov byte ptr ss : [esp+0x2C], bl
        mov byte ptr ss : [esp+0x2D], bl
        mov byte ptr ss : [esp+0x2E], bl
        mov byte ptr ss : [esp+0x2F], bl
        mov byte ptr ss : [esp+0x30], bl
        mov byte ptr ss : [esp+0x31], bl
        mov byte ptr ss : [esp+0x32], bl
        mov byte ptr ss : [esp+0x33], bl
        mov byte ptr ss : [esp+0x34], bl
        mov byte ptr ss : [esp+0x35], bl
        mov byte ptr ss : [esp+0x36], bl
        mov byte ptr ss : [esp+0x37], bl
        mov byte ptr ss : [esp+0x38], bl
        mov byte ptr ss : [esp+0x39], bl
        lea eax, ss:[esp+8]
        push eax
        lea edx, ss:[esp+0x28]
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        add ecx, 0x104
        push ecx
        mov byte ptr ss : [esp+0x54], 1
        mov dword ptr ss : [esp+0x18], ebx
        call public_6321160
        mov esi, dword ptr ss : [esp+0x20]
        add esp, 0x10
        lea ecx, ss:[esp+0x24]
        mov byte ptr ss : [esp+0x44], bl
        call public_630e210
        lea ecx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0x44], 0xFFFFFFFF
        call public_630e210
        mov ecx, dword ptr ss : [esp+0x3C]
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x40
        ret 
        UNREACHABLE_TRAP(0x62aa420)
    }
}
