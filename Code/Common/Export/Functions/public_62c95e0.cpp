#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62c95e0);
CLANG_FORWARD_PROC_SYMBOL(public_62d2080);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);
CLANG_FORWARD_JUMP_SYMBOL(public_6394d43);

#define public_62c961c _public_62c961c
#define public_62c9638 _public_62c9638

PROC_DECLARE(0x62c95e0, internal_62c95e0, public_62c95e0);
extern "C" NAKED register_t __cdecl internal_62c95e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6394d43 @0x62c95e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6394d43
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov eax, dword ptr ds : [esi+0xFC]
        test eax, eax
        lea ecx, ds:[esi+0xFC]
        mov dword ptr ss : [esp+0x10], 1
        je public_62c961c
        push 0
        call public_6341610
        public_62c961c : nop
        mov eax, dword ptr ds : [esi+0x84]
        test eax, eax
        lea ecx, ds:[esi+0x84]
        mov byte ptr ss : [esp+0x10], 0
        je public_62c9638
        push 0
        call public_6341610
        public_62c9638 : nop
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call public_62d2080
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x62c95e0)
    }
}

#undef public_62c961c
#undef public_62c9638
