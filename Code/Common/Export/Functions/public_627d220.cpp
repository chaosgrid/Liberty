#include "Common-PCH.h"


#define public_627d230 _public_627d230
#define public_627d23c _public_627d23c
#define public_627d241 _public_627d241

PROC_DECLARE(0x627d220, internal_627d220, public_627d220);
extern "C" NAKED register_t __cdecl internal_627d220()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x68]
        mov ecx, dword ptr ds : [ecx+0x6C]
        cmp eax, ecx
        je public_627d23c
        mov edx, dword ptr ss : [esp+4]
        mov edi, edi
        public_627d230 : nop
        cmp dword ptr ds : [eax+4], edx
        je public_627d241
        add eax, 0xC
        cmp eax, ecx
        jne public_627d230
        public_627d23c : nop
        xor eax, eax
        ret 4
        public_627d241 : nop
        mov eax, dword ptr ds : [eax]
        ret 4
        UNREACHABLE_TRAP(0x627d220)
    }
}

#undef public_627d230
#undef public_627d23c
#undef public_627d241
