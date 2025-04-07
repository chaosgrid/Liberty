#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0d4a0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d61698);

#define public_6d0d4da _public_6d0d4da
#define public_6d0d4ed _public_6d0d4ed

PROC_DECLARE(0x6d0d4a0, internal_6d0d4a0, public_6d0d4a0);
extern "C" NAKED register_t __cdecl internal_6d0d4a0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d61698 @0x6d0d4a2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d61698
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+8], esi
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        mov edi, dword ptr ds : [public_6d6447c]
        lea ecx, ds:[esi+8]
        mov dword ptr ss : [esp+0x14], 0
        je public_6d0d4da
        push 0
        call edi
        public_6d0d4da : nop
        cmp dword ptr ds : [esi], 0
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        je public_6d0d4ed
        push 0
        mov ecx, esi
        call edi
        public_6d0d4ed : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6d0d4a0)
    }
}

#undef public_6d0d4da
#undef public_6d0d4ed
