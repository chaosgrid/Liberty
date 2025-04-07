#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62cd700);
CLANG_FORWARD_PROC_SYMBOL(public_62d2080);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);
CLANG_FORWARD_JUMP_SYMBOL(public_6394ef1);

#define public_62cd73c _public_62cd73c
#define public_62cd758 _public_62cd758
#define public_62cd76e _public_62cd76e

PROC_DECLARE(0x62cd700, internal_62cd700, public_62cd700);
extern "C" NAKED register_t __cdecl internal_62cd700()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6394ef1 @0x62cd702*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6394ef1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov eax, dword ptr ds : [esi+0x168]
        test eax, eax
        lea ecx, ds:[esi+0x168]
        mov dword ptr ss : [esp+0x10], 2
        je public_62cd73c
        push 0
        call public_6341610
        public_62cd73c : nop
        mov eax, dword ptr ds : [esi+0xB8]
        test eax, eax
        lea ecx, ds:[esi+0xB8]
        mov byte ptr ss : [esp+0x10], 1
        je public_62cd758
        push 0
        call public_6341610
        public_62cd758 : nop
        mov eax, dword ptr ds : [esi+0x40]
        test eax, eax
        lea ecx, ds:[esi+0x40]
        mov byte ptr ss : [esp+0x10], 0
        je public_62cd76e
        push 0
        call public_6341610
        public_62cd76e : nop
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call public_62d2080
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x62cd700)
    }
}

#undef public_62cd73c
#undef public_62cd758
#undef public_62cd76e
