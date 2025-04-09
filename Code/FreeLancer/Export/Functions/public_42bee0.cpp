#include "FreeLancer-PCH.h"


#define public_42bef1 _public_42bef1
#define public_42befd _public_42befd

PROC_DECLARE(0x42bee0, internal_42bee0, public_42bee0);
extern "C" NAKED register_t __cdecl internal_42bee0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+0x30]
        cmp eax, esi
        jne public_42bef1
        mov eax, dword ptr ds : [esi+0xC]
        pop esi
        ret 
        public_42bef1 : nop
        mov ecx, dword ptr ds : [esi+0x24]
        test ecx, ecx
        je public_42befd
        mov edx, dword ptr ds : [ecx]
        pop esi
        jmp dword ptr ds : [edx]
        public_42befd : nop
        or eax, 0xFFFFFFFF
        pop esi
        ret 
        UNREACHABLE_TRAP(0x42bee0)
    }
}

#undef public_42bef1
#undef public_42befd
