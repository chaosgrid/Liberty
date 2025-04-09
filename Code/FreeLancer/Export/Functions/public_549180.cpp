#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_420d10);
CLANG_FORWARD_PROC_SYMBOL(public_549180);
CLANG_FORWARD_PROC_SYMBOL(public_576010);
CLANG_FORWARD_JUMP_SYMBOL(public_5c1188);

#define public_5491c4 _public_5491c4
#define public_5491c6 _public_5491c6
#define public_5491eb _public_5491eb

PROC_DECLARE(0x549180, internal_549180, public_549180);
extern "C" NAKED register_t __cdecl internal_549180()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c1188 @0x549182*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c1188
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        lea ecx, ds:[esi+0x190]
        mov dword ptr ss : [esp+0x10], 0
        call public_420d10
        test esi, esi
        mov dword ptr ss : [esp+0x10], 1
        je public_5491c4
        lea ecx, ds:[esi+0xF8]
        jmp public_5491c6
        public_5491c4 : nop
        xor ecx, ecx
        public_5491c6 : nop
        call public_576010
        mov eax, dword ptr ds : [esi+0xC0]
        test eax, eax
        lea ecx, ds:[esi+0xC0]
        mov dword ptr ss : [esp+0x10], 2
        je public_5491eb
        push 0
        call dword ptr ds : [public_5c62a8]
        public_5491eb : nop
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        mov dword ptr ds : [esi], offset public_5c8944
        call public_401e90
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x549180)
    }
}

#undef public_5491c4
#undef public_5491c6
#undef public_5491eb
