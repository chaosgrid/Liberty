#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ca4c0);
CLANG_FORWARD_PROC_SYMBOL(public_62d2080);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);
CLANG_FORWARD_JUMP_SYMBOL(public_6394dcf);

#define public_62ca4fc _public_62ca4fc
#define public_62ca518 _public_62ca518
#define public_62ca534 _public_62ca534
#define public_62ca54a _public_62ca54a

PROC_DECLARE(0x62ca4c0, internal_62ca4c0, public_62ca4c0);
extern "C" NAKED register_t __cdecl internal_62ca4c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6394dcf @0x62ca4c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6394dcf
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov eax, dword ptr ds : [esi+0x1D4]
        test eax, eax
        lea ecx, ds:[esi+0x1D4]
        mov dword ptr ss : [esp+0x10], 3
        je public_62ca4fc
        push 0
        call public_6341610
        public_62ca4fc : nop
        mov eax, dword ptr ds : [esi+0x15C]
        test eax, eax
        lea ecx, ds:[esi+0x15C]
        mov byte ptr ss : [esp+0x10], 2
        je public_62ca518
        push 0
        call public_6341610
        public_62ca518 : nop
        mov eax, dword ptr ds : [esi+0x9C]
        test eax, eax
        lea ecx, ds:[esi+0x9C]
        mov byte ptr ss : [esp+0x10], 1
        je public_62ca534
        push 0
        call public_6341610
        public_62ca534 : nop
        mov eax, dword ptr ds : [esi+0x40]
        test eax, eax
        lea ecx, ds:[esi+0x40]
        mov byte ptr ss : [esp+0x10], 0
        je public_62ca54a
        push 0
        call public_6341610
        public_62ca54a : nop
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call public_62d2080
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x62ca4c0)
    }
}

#undef public_62ca4fc
#undef public_62ca518
#undef public_62ca534
#undef public_62ca54a
