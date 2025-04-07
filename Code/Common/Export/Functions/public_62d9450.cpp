#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d9450);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);

#define public_62d9463 _public_62d9463
#define public_62d9465 _public_62d9465
#define public_62d946f _public_62d946f

PROC_DECLARE(0x62d9450, internal_62d9450, public_62d9450);
extern "C" NAKED register_t __cdecl internal_62d9450()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        push esi
        mov esi, ecx
        lea ecx, ds:[esi+0x28]
        je public_62d9463
        add eax, 8
        jmp public_62d9465
        public_62d9463 : nop
        xor eax, eax
        public_62d9465 : nop
        cmp eax, dword ptr ds : [ecx]
        je public_62d946f
        push eax
        call public_6341610
        public_62d946f : nop
        mov byte ptr ds : [esi+0x30], 0
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62d9450)
    }
}

#undef public_62d9463
#undef public_62d9465
#undef public_62d946f
