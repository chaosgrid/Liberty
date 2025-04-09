#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_579390);

#define public_5793a8 _public_5793a8
#define public_5793b6 _public_5793b6
#define public_5793bf _public_5793bf

PROC_DECLARE(0x579390, internal_579390, public_579390);
extern "C" NAKED register_t __cdecl internal_579390()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_5793bf
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_5793a8
        push eax
        push ecx
        call dword ptr ds : [public_5c6e0c]
        public_5793a8 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_5793b6
        push eax
        call dword ptr ds : [public_5c6e3c]
        public_5793b6 : nop
        mov eax, dword ptr ds : [esi]
        push eax
        call dword ptr ds : [public_5c6e38]
        public_5793bf : nop
        or eax, 0xFFFFFFFF
        mov dword ptr ds : [esi+0x10], eax
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x579390)
    }
}

#undef public_5793a8
#undef public_5793b6
#undef public_5793bf
