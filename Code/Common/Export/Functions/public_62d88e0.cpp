#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d88e0);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);

#define public_62d88f3 _public_62d88f3
#define public_62d88f5 _public_62d88f5
#define public_62d88ff _public_62d88ff

PROC_DECLARE(0x62d88e0, internal_62d88e0, public_62d88e0);
extern "C" NAKED register_t __cdecl internal_62d88e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        push esi
        mov esi, ecx
        lea ecx, ds:[esi+0x28]
        je public_62d88f3
        add eax, 8
        jmp public_62d88f5
        public_62d88f3 : nop
        xor eax, eax
        public_62d88f5 : nop
        cmp eax, dword ptr ds : [ecx]
        je public_62d88ff
        push eax
        call public_6341610
        public_62d88ff : nop
        mov byte ptr ds : [esi+0x30], 1
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62d88e0)
    }
}

#undef public_62d88f3
#undef public_62d88f5
#undef public_62d88ff
