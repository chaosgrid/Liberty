#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62c8a30);
CLANG_FORWARD_PROC_SYMBOL(public_62d2080);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);
CLANG_FORWARD_JUMP_SYMBOL(public_6394cee);

#define public_62c8a6c _public_62c8a6c
#define public_62c8a82 _public_62c8a82
#define public_62c8a98 _public_62c8a98

PROC_DECLARE(0x62c8a30, internal_62c8a30, public_62c8a30);
extern "C" NAKED register_t __cdecl internal_62c8a30()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6394cee @0x62c8a32*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6394cee
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov eax, dword ptr ds : [esi+0xF4]
        test eax, eax
        lea ecx, ds:[esi+0xF4]
        mov dword ptr ss : [esp+0x10], 2
        je public_62c8a6c
        push 0
        call public_6341610
        public_62c8a6c : nop
        mov eax, dword ptr ds : [esi+0x7C]
        test eax, eax
        lea ecx, ds:[esi+0x7C]
        mov byte ptr ss : [esp+0x10], 1
        je public_62c8a82
        push 0
        call public_6341610
        public_62c8a82 : nop
        mov eax, dword ptr ds : [esi+0x30]
        test eax, eax
        lea ecx, ds:[esi+0x30]
        mov byte ptr ss : [esp+0x10], 0
        je public_62c8a98
        push 0
        call public_6341610
        public_62c8a98 : nop
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call public_62d2080
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x62c8a30)
    }
}

#undef public_62c8a6c
#undef public_62c8a82
#undef public_62c8a98
