#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ce4c0);
CLANG_FORWARD_PROC_SYMBOL(public_62d2080);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);
CLANG_FORWARD_JUMP_SYMBOL(public_6394ef1);

#define public_62ce4fc _public_62ce4fc
#define public_62ce518 _public_62ce518
#define public_62ce52e _public_62ce52e

PROC_DECLARE(0x62ce4c0, internal_62ce4c0, public_62ce4c0);
extern "C" NAKED register_t __cdecl internal_62ce4c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6394ef1 @0x62ce4c2*/
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
        mov eax, dword ptr ds : [esi+0x174]
        test eax, eax
        lea ecx, ds:[esi+0x174]
        mov dword ptr ss : [esp+0x10], 2
        je public_62ce4fc
        push 0
        call public_6341610
        public_62ce4fc : nop
        mov eax, dword ptr ds : [esi+0xB8]
        test eax, eax
        lea ecx, ds:[esi+0xB8]
        mov byte ptr ss : [esp+0x10], 1
        je public_62ce518
        push 0
        call public_6341610
        public_62ce518 : nop
        mov eax, dword ptr ds : [esi+0x40]
        test eax, eax
        lea ecx, ds:[esi+0x40]
        mov byte ptr ss : [esp+0x10], 0
        je public_62ce52e
        push 0
        call public_6341610
        public_62ce52e : nop
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call public_62d2080
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x62ce4c0)
    }
}

#undef public_62ce4fc
#undef public_62ce518
#undef public_62ce52e
