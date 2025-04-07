#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_411960);

#define public_411977 _public_411977
#define public_411992 _public_411992
#define public_4119a7 _public_4119a7

PROC_DECLARE(0x411960, internal_411960, public_411960);
extern "C" NAKED register_t __cdecl internal_411960()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [edx]
        push esi
        mov esi, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [eax+8]
        cmp esi, dword ptr ds : [ecx+8]
        je public_411977
        mov dword ptr ds : [esi+4], edx
        public_411977 : nop
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], esi
        mov ecx, dword ptr ds : [ecx+4]
        cmp edx, dword ptr ds : [ecx+4]
        jne public_411992
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        public_411992 : nop
        mov ecx, dword ptr ds : [edx+4]
        cmp edx, dword ptr ds : [ecx+8]
        jne public_4119a7
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        public_4119a7 : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x411960)
    }
}

#undef public_411977
#undef public_411992
#undef public_4119a7
