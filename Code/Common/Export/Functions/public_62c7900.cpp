#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62c7900);
CLANG_FORWARD_PROC_SYMBOL(public_62d2080);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);
CLANG_FORWARD_JUMP_SYMBOL(public_6394c7d);

#define public_62c793c _public_62c793c
#define public_62c7958 _public_62c7958
#define public_62c7974 _public_62c7974
#define public_62c7990 _public_62c7990
#define public_62c79a6 _public_62c79a6

PROC_DECLARE(0x62c7900, internal_62c7900, public_62c7900);
extern "C" NAKED register_t __cdecl internal_62c7900()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6394c7d @0x62c7902*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6394c7d
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov eax, dword ptr ds : [esi+0x2A0]
        test eax, eax
        lea ecx, ds:[esi+0x2A0]
        mov dword ptr ss : [esp+0x10], 4
        je public_62c793c
        push 0
        call public_6341610
        public_62c793c : nop
        mov eax, dword ptr ds : [esi+0x1E0]
        test eax, eax
        lea ecx, ds:[esi+0x1E0]
        mov byte ptr ss : [esp+0x10], 3
        je public_62c7958
        push 0
        call public_6341610
        public_62c7958 : nop
        mov eax, dword ptr ds : [esi+0x1C0]
        test eax, eax
        lea ecx, ds:[esi+0x1C0]
        mov byte ptr ss : [esp+0x10], 2
        je public_62c7974
        push 0
        call public_6341610
        public_62c7974 : nop
        mov eax, dword ptr ds : [esi+0x138]
        test eax, eax
        lea ecx, ds:[esi+0x138]
        mov byte ptr ss : [esp+0x10], 1
        je public_62c7990
        push 0
        call public_6341610
        public_62c7990 : nop
        mov eax, dword ptr ds : [esi+0x58]
        test eax, eax
        lea ecx, ds:[esi+0x58]
        mov byte ptr ss : [esp+0x10], 0
        je public_62c79a6
        push 0
        call public_6341610
        public_62c79a6 : nop
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call public_62d2080
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x62c7900)
    }
}

#undef public_62c793c
#undef public_62c7958
#undef public_62c7974
#undef public_62c7990
#undef public_62c79a6
