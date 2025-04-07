#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_410dd0);

#define public_5376c7 _public_5376c7
#define public_5376cd _public_5376cd
#define public_5376e9 _public_5376e9

PROC_DECLARE(0x537690, internal_537690, public_537690);
extern "C" NAKED register_t __cdecl internal_537690()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0xB4]
        shr al, 3
        and al, 1
        jne public_5376e9
        call public_410dd0
        test al, al
        je public_5376e9
        mov ecx, dword ptr ds : [public_675574]
        mov dword ptr ds : [esi+0xCC], ecx
        mov ecx, dword ptr ds : [public_675574]
        test ecx, ecx
        je public_5376c7
        mov dword ptr ds : [ecx+0xC8], esi
        jmp public_5376cd
        public_5376c7 : nop
        mov dword ptr ds : [public_675570], esi
        public_5376cd : nop
        mov dword ptr ds : [public_675574], esi
        mov dword ptr ds : [esi+0xC8], 0
        inc dword ptr ds : [public_67556c]
        inc dword ptr ds : [esi+0xD0]
        public_5376e9 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x537690)
    }
}

#undef public_5376c7
#undef public_5376cd
#undef public_5376e9
