#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_503330);

#define public_503344 _public_503344
#define public_503359 _public_503359
#define public_50336e _public_50336e

PROC_DECLARE(0x503330, internal_503330, public_503330);
extern "C" NAKED register_t __cdecl internal_503330()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_503344
        test byte ptr ds : [eax+8], 2
        jne public_503344
        mov al, 1
        pop esi
        ret 
        public_503344 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_503359
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x14]
        test al, al
        je public_503359
        mov al, 1
        pop esi
        ret 
        public_503359 : nop
        mov esi, dword ptr ds : [esi+0xC]
        test esi, esi
        je public_50336e
        mov eax, dword ptr ds : [esi+0xD4]
        test eax, eax
        jne public_50336e
        mov al, 1
        pop esi
        ret 
        public_50336e : nop
        xor al, al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x503330)
    }
}

#undef public_503344
#undef public_503359
#undef public_50336e
