#include "Common-PCH.h"


#define public_62bf90b _public_62bf90b

PROC_DECLARE(0x62bf8d0, internal_62bf8d0, public_62bf8d0);
extern "C" NAKED register_t __cdecl internal_62bf8d0()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x10]
        test ecx, ecx
        mov eax, 0xFFFFFFFD
        je public_62bf90b
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x503
        cmp edx, 0x503
        jne public_62bf90b
        mov edx, dword ptr ss : [esp+4]
        push esi
        xor eax, eax
        add ecx, 0x24C
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        pop esi
        public_62bf90b : nop
        ret 4
        UNREACHABLE_TRAP(0x62bf8d0)
    }
}

#undef public_62bf90b
