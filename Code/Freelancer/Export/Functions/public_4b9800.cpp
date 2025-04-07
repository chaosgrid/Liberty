#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b9800);
CLANG_FORWARD_PROC_SYMBOL(public_576010);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_JUMP_SYMBOL(public_5bd368);

#define public_4b982d _public_4b982d

PROC_DECLARE(0x4b9800, internal_4b9800, public_4b9800);
extern "C" NAKED register_t __cdecl internal_4b9800()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bd368 @0x4b9802*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bd368
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        xor ecx, ecx
        cmp esi, ecx
        mov dword ptr ss : [esp+0x10], ecx
        je public_4b982d
        lea ecx, ds:[esi+0x32C]
        public_4b982d : nop
        call public_576010
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call public_59fa50
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x4b9800)
    }
}

#undef public_4b982d
