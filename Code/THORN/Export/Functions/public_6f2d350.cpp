#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2d350);
CLANG_FORWARD_PROC_SYMBOL(public_6f2d610);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);
CLANG_FORWARD_JUMP_SYMBOL(public_6f58688);

#define public_6f2d3e5 _public_6f2d3e5
#define public_6f2d408 _public_6f2d408

PROC_DECLARE(0x6f2d350, internal_6f2d350, public_6f2d350);
extern "C" NAKED register_t __cdecl internal_6f2d350()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6f58688 @0x6f2d352*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f58688
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        mov eax, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ds : [public_6f5a038]
        push ebx
        push esi
        mov esi, ecx
        mov cl, byte ptr ds : [eax]
        xor ebx, ebx
        mov byte ptr ss : [esp+0x10], cl
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov ecx, dword ptr ds : [edx]
        push ecx
        push ebx
        push eax
        lea ecx, ss:[esp+0x1C]
        call dword ptr ds : [public_6f5a034]
        mov dword ptr ss : [esp+0x20], ebx
        lea edx, ss:[esp+0x10]
        push edx
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x34], ebx
        call public_6f2d610
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, ebx
        je public_6f2d408
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6f2d3e5
        cmp cl, 0xFF
        je public_6f2d3e5
        dec cl
        mov byte ptr ds : [eax], cl
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        lea eax, ds:[ecx+0x1C]
        pop ebx
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 4
        public_6f2d3e5 : nop
        push eax
        call public_6f57e26
        mov edx, dword ptr ss : [esp+0xC]
        add esp, 4
        pop esi
        lea eax, ds:[edx+0x1C]
        pop ebx
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 4
        public_6f2d408 : nop
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+0x24]
        pop esi
        add eax, 0x1C
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 4
        UNREACHABLE_TRAP(0x6f2d350)
    }
}

#undef public_6f2d3e5
#undef public_6f2d408
