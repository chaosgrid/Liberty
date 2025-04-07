#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6378a40);

#define public_6378a55 _public_6378a55
#define public_6378a62 _public_6378a62
#define public_6378a64 _public_6378a64

PROC_DECLARE(0x6378a40, internal_6378a40, public_6378a40);
extern "C" NAKED register_t __cdecl internal_6378a40()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [eax+0xC]
        test eax, eax
        push esi
        je public_6378a62
        mov ecx, dword ptr ds : [ecx]
        add eax, 0x1C
        mov edx, 2
        public_6378a55 : nop
        mov esi, dword ptr ds : [eax+8]
        cmp dword ptr ds : [esi], ecx
        je public_6378a64
        add eax, 0x24
        dec edx
        jns public_6378a55
        public_6378a62 : nop
        xor eax, eax
        public_6378a64 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6378a40)
    }
}

#undef public_6378a55
#undef public_6378a62
#undef public_6378a64
