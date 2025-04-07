#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00d50);
CLANG_FORWARD_JUMP_SYMBOL(public_6d60ea9);

#define public_6d00d90 _public_6d00d90

PROC_DECLARE(0x6d00d50, internal_6d00d50, public_6d00d50);
extern "C" NAKED register_t __cdecl internal_6d00d50()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d60ea9 @0x6d00d52*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d60ea9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        xor ecx, ecx
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi], ecx
        mov dword ptr ds : [esi+4], ecx
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], ecx
        je public_6d00d90
        add eax, 8
        cmp eax, ecx
        je public_6d00d90
        push eax
        mov ecx, esi
        call dword ptr ds : [public_6d6447c]
        public_6d00d90 : nop
        mov ecx, dword ptr ss : [esp+8]
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6d00d50)
    }
}

#undef public_6d00d90
