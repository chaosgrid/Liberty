#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_502f00);
CLANG_FORWARD_PROC_SYMBOL(public_534010);

#define public_5478b3 _public_5478b3
#define public_5478b5 _public_5478b5
#define public_5478c3 _public_5478c3
#define public_5478db _public_5478db
#define public_5478eb _public_5478eb

PROC_DECLARE(0x547880, internal_547880, public_547880);
extern "C" NAKED register_t __cdecl internal_547880()
{
    __asm
    {
        push esi
        push edi
        mov esi, ecx
        call dword ptr ds : [public_5c60d0]
        test al, al
        mov edi, dword ptr ss : [esp+0xC]
        jne public_5478c3
        test esi, esi
        je public_5478b3
        lea eax, ds:[esi+0xC]
        test eax, eax
        je public_5478b3
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        je public_5478b3
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 0x303
        cmp eax, 0x303
        je public_5478b5
        public_5478b3 : nop
        xor ecx, ecx
        public_5478b5 : nop
        mov eax, dword ptr ds : [public_5c6914]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx]
        push eax
        push edi
        call dword ptr ds : [edx+0x50]
        public_5478c3 : nop
        push edi
        mov ecx, esi
        call public_534010
        mov ecx, dword ptr ds : [esi+0x204]
        test ecx, ecx
        je public_5478db
        push edi
        call public_502f00
        public_5478db : nop
        mov ecx, dword ptr ds : [esi+0xE4]
        test ecx, ecx
        je public_5478eb
        mov edx, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [edx+8]
        public_5478eb : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x547880)
    }
}

#undef public_5478b3
#undef public_5478b5
#undef public_5478c3
#undef public_5478db
#undef public_5478eb
