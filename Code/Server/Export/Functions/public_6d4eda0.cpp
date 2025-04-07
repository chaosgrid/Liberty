#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4eda0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d63572);

#define public_6d4ee77 _public_6d4ee77

PROC_DECLARE(0x6d4eda0, internal_6d4eda0, public_6d4eda0);
extern "C" NAKED register_t __cdecl internal_6d4eda0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d63572 @0x6d4eda2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d63572
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x34
        push ebx
        xor ebx, ebx
        push esi
        push edi
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
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
        mov byte ptr ss : [esp+0x3A], bl
        mov byte ptr ss : [esp+0x3B], bl
        mov byte ptr ss : [esp+0x3C], bl
        mov byte ptr ss : [esp+0x3D], bl
        mov dword ptr ss : [esp+0x48], ebx
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0x14], ebx
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
        mov byte ptr ss : [esp+0x22], bl
        mov byte ptr ss : [esp+0x23], bl
        mov byte ptr ss : [esp+0x24], bl
        mov byte ptr ss : [esp+0x25], bl
        lea eax, ss:[esp+0xC]
        push eax
        lea edx, ss:[esp+0x14]
        push edx
        lea eax, ss:[esp+0x30]
        push eax
        add ecx, 0x318
        mov esi, offset public_6d8d40c
        push ecx
        mov byte ptr ss : [esp+0x58], 1
        mov dword ptr ss : [esp+0x1C], esi
        call dword ptr ds : [public_6d64904]
        add esp, 0x10
        cmp eax, 0xFFFFFFFE
        jne public_6d4ee77
        mov dword ptr ss : [esp+0xC], esi
        public_6d4ee77 : nop
        mov edi, dword ptr ds : [public_6d64694]
        mov esi, dword ptr ss : [esp+0xC]
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x48], bl
        call edi
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x48], 0xFFFFFFFF
        call edi
        mov ecx, dword ptr ss : [esp+0x40]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x40
        ret 
        UNREACHABLE_TRAP(0x6d4eda0)
    }
}

#undef public_6d4ee77
