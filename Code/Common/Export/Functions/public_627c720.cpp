#include "Common-PCH.h"


#define public_627c740 _public_627c740
#define public_627c743 _public_627c743
#define public_627c758 _public_627c758

PROC_DECLARE(0x627c720, internal_627c720, public_627c720);
extern "C" NAKED register_t __cdecl internal_627c720()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax+4]
        test edx, edx
        je public_627c758
        push esi
        mov esi, dword ptr ds : [ecx+8]
        test esi, esi
        je public_627c740
        mov dword ptr ds : [esi], edx
        mov edx, dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+4], esi
        jmp public_627c743
        public_627c740 : nop
        mov dword ptr ds : [ecx+4], edx
        public_627c743 : nop
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], edx
        mov dword ptr ds : [eax+8], 0
        mov dword ptr ds : [eax+4], 0
        pop esi
        public_627c758 : nop
        ret 4
        UNREACHABLE_TRAP(0x627c720)
    }
}

#undef public_627c740
#undef public_627c743
#undef public_627c758
