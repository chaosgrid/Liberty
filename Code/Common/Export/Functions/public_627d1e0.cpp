#include "Common-PCH.h"


#define public_627d1ed _public_627d1ed
#define public_627d200 _public_627d200
#define public_627d20b _public_627d20b
#define public_627d211 _public_627d211

PROC_DECLARE(0x627d1e0, internal_627d1e0, public_627d1e0);
extern "C" NAKED register_t __cdecl internal_627d1e0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x5C]
        test eax, eax
        jne public_627d1ed
        mov eax, dword ptr ds : [ecx+4]
        ret 4
        public_627d1ed : nop
        mov eax, dword ptr ds : [ecx+0x68]
        mov ecx, dword ptr ds : [ecx+0x6C]
        cmp eax, ecx
        je public_627d20b
        mov edx, dword ptr ss : [esp+4]
        nop 
        lea esp, ss:[esp]
        public_627d200 : nop
        cmp dword ptr ds : [eax], edx
        je public_627d211
        add eax, 0xC
        cmp eax, ecx
        jne public_627d200
        public_627d20b : nop
        or eax, 0xFFFFFFFF
        ret 4
        public_627d211 : nop
        mov eax, dword ptr ds : [eax+4]
        ret 4
        UNREACHABLE_TRAP(0x627d1e0)
    }
}

#undef public_627d1ed
#undef public_627d200
#undef public_627d20b
#undef public_627d211
