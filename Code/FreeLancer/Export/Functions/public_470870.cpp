#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_470870);
CLANG_FORWARD_PROC_SYMBOL(public_576010);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_JUMP_SYMBOL(public_5bb9e8);

#define public_47089d _public_47089d

PROC_DECLARE(0x470870, internal_470870, public_470870);
extern "C" NAKED register_t __cdecl internal_470870()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bb9e8 @0x470872*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bb9e8
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
        je public_47089d
        lea ecx, ds:[esi+0x32C]
        public_47089d : nop
        call public_576010
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call public_59fa50
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x470870)
    }
}

#undef public_47089d
