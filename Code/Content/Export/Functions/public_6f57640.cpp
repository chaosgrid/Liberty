#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f57640);
CLANG_FORWARD_PROC_SYMBOL(public_6f66220);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6faf778);

#define public_6f576a7 _public_6f576a7

PROC_DECLARE(0x6f57640, internal_6f57640, public_6f57640);
extern "C" NAKED register_t __cdecl internal_6f57640()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6faf778 @0x6f57648*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faf778
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, ecx
        mov dword ptr fs : [0], esp
        mov edx, dword ptr ds : [eax+0x14C]
        xor ecx, ecx
        sub esp, 0x14
        cmp edx, ecx
        je public_6f576a7
        mov edx, dword ptr ds : [eax+0x154]
        cmp edx, 0xFFFFFFFF
        je public_6f576a7
        mov al, byte ptr ss : [esp+3]
        push esi
        mov byte ptr ss : [esp+8], al
        mov dword ptr ss : [esp+0xC], ecx
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x20], ecx
        push edx
        lea ecx, ss:[esp+0xC]
        push ecx
        call public_6f66220
        mov eax, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [eax]
        push eax
        call public_6fa8fe0
        add esp, 0xC
        mov eax, esi
        pop esi
        public_6f576a7 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x6f57640)
    }
}

#undef public_6f576a7
