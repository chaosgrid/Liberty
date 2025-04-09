#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_415050);

#define public_415064 _public_415064

PROC_DECLARE(0x415050, internal_415050, public_415050);
extern "C" NAKED register_t __cdecl internal_415050()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_415064
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov dword ptr ds : [esi], 0
        public_415064 : nop
        mov dword ptr ds : [esi+4], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x415050)
    }
}

#undef public_415064
