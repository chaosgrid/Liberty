#include "DebugLib-PCH.h"


#define public_65d1750 _public_65d1750
#define public_65d1755 _public_65d1755
#define public_65d1766 _public_65d1766

PROC_DECLARE(0x65d1730, internal_65d1730, public_65d1730);
extern "C" NAKED register_t __cdecl internal_65d1730()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp dword ptr ds : [eax+4], 0xFFFFFFFF
        je public_65d1766
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        jl public_65d1766
        cmp ecx, dword ptr ds : [eax+0x10]
        jae public_65d1766
        mov eax, dword ptr ds : [eax+0xC]
        test ecx, ecx
        mov eax, dword ptr ds : [eax]
        je public_65d1755
        public_65d1750 : nop
        mov eax, dword ptr ds : [eax]
        dec ecx
        jne public_65d1750
        public_65d1755 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [ecx+0x14]
        mov dword ptr ds : [eax], edx
        xor eax, eax
        ret 0xC
        public_65d1766 : nop
        or eax, 0xFFFFFFFF
        ret 0xC
        UNREACHABLE_TRAP(0x65d1730)
    }
}

#undef public_65d1750
#undef public_65d1755
#undef public_65d1766
