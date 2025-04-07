#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d46f0);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);
CLANG_FORWARD_JUMP_SYMBOL(public_639518b);

#define public_62d4726 _public_62d4726
#define public_62d4740 _public_62d4740

PROC_DECLARE(0x62d46f0, internal_62d46f0, public_62d46f0);
extern "C" NAKED register_t __cdecl internal_62d46f0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_639518b @0x62d46f2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639518b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        lea ecx, ds:[esi+0xC]
        mov dword ptr ss : [esp+0x10], 0
        je public_62d4726
        push 0
        call public_6341610
        public_62d4726 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        lea ecx, ds:[esi+4]
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        pop esi
        je public_62d4740
        push 0
        call public_6341610
        public_62d4740 : nop
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x62d46f0)
    }
}

#undef public_62d4726
#undef public_62d4740
