#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65fdc60);

#define public_65fdc7e _public_65fdc7e
#define public_65fdc92 _public_65fdc92

PROC_DECLARE(0x65fdc60, internal_65fdc60, public_65fdc60);
extern "C" NAKED register_t __cdecl internal_65fdc60()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xC]
        cmp eax, 0xFFFFFFFF
        mov dword ptr ds : [esi], offset public_66013dc
        je public_65fdc7e
        mov ecx, dword ptr ds : [public_6603134]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0x3C]
        public_65fdc7e : nop
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_65fdc92
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x10], 0
        public_65fdc92 : nop
        mov dword ptr ds : [esi], offset public_6601378
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65fdc60)
    }
}

#undef public_65fdc7e
#undef public_65fdc92
