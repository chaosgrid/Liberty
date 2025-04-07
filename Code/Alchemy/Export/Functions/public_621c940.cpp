#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621c940);
CLANG_FORWARD_JUMP_SYMBOL(public_6248838);

#define public_621c960 _public_621c960
#define public_621c962 _public_621c962
#define public_621c988 _public_621c988
#define public_621c9a4 _public_621c9a4

PROC_DECLARE(0x621c940, internal_621c940, public_621c940);
extern "C" NAKED register_t __cdecl internal_621c940()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6248838 @0x621c942*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6248838
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        test ecx, ecx
        push esi
        je public_621c960
        lea esi, ds:[ecx+4]
        jmp public_621c962
        public_621c960 : nop
        xor esi, esi
        public_621c962 : nop
        mov dword ptr ss : [esp+4], esi
        mov eax, dword ptr ds : [esi+0x98]
        mov dword ptr ss : [esp+0x10], 0
        test eax, eax
        je public_621c988
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x98], 0
        public_621c988 : nop
        mov eax, dword ptr ds : [esi+0x7C]
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        test eax, eax
        je public_621c9a4
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x7C], 0
        public_621c9a4 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x621c940)
    }
}

#undef public_621c960
#undef public_621c962
#undef public_621c988
#undef public_621c9a4
