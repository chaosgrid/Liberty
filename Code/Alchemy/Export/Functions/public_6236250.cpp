#include "Alchemy-PCH.h"


#define public_6236272 _public_6236272

PROC_DECLARE(0x6236250, internal_6236250, public_6236250);
extern "C" NAKED register_t __cdecl internal_6236250()
{
    __asm
    {
        cmp dword ptr ss : [esp+8], 0x1A433168
        jne public_6236272
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax+0x58]
        mov dword ptr ds : [ecx], eax
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+4]
        xor eax, eax
        ret 0xC
        public_6236272 : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x6236250)
    }
}

#undef public_6236272
