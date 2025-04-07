#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62c5c40);
CLANG_FORWARD_PROC_SYMBOL(public_62d2080);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);
CLANG_FORWARD_JUMP_SYMBOL(public_6394b4f);

#define public_62c5c7c _public_62c5c7c
#define public_62c5c98 _public_62c5c98
#define public_62c5cb4 _public_62c5cb4
#define public_62c5cca _public_62c5cca

PROC_DECLARE(0x62c5c40, internal_62c5c40, public_62c5c40);
extern "C" NAKED register_t __cdecl internal_62c5c40()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6394b4f @0x62c5c42*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6394b4f
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov eax, dword ptr ds : [esi+0x280]
        test eax, eax
        lea ecx, ds:[esi+0x280]
        mov dword ptr ss : [esp+0x10], 3
        je public_62c5c7c
        push 0
        call public_6341610
        public_62c5c7c : nop
        mov eax, dword ptr ds : [esi+0x1A0]
        test eax, eax
        lea ecx, ds:[esi+0x1A0]
        mov byte ptr ss : [esp+0x10], 2
        je public_62c5c98
        push 0
        call public_6341610
        public_62c5c98 : nop
        mov eax, dword ptr ds : [esi+0xB8]
        test eax, eax
        lea ecx, ds:[esi+0xB8]
        mov byte ptr ss : [esp+0x10], 1
        je public_62c5cb4
        push 0
        call public_6341610
        public_62c5cb4 : nop
        mov eax, dword ptr ds : [esi+0x40]
        test eax, eax
        lea ecx, ds:[esi+0x40]
        mov byte ptr ss : [esp+0x10], 0
        je public_62c5cca
        push 0
        call public_6341610
        public_62c5cca : nop
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call public_62d2080
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x62c5c40)
    }
}

#undef public_62c5c7c
#undef public_62c5c98
#undef public_62c5cb4
#undef public_62c5cca
