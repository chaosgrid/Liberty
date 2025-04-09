#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4fc920);

#define public_4fc945 _public_4fc945
#define public_4fc94d _public_4fc94d

PROC_DECLARE(0x4fc920, internal_4fc920, public_4fc920);
extern "C" NAKED register_t __cdecl internal_4fc920()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_4fc94d
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax], 0
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        je public_4fc945
        mov dword ptr ds : [edx], eax
        mov dword ptr ds : [ecx+4], eax
        inc dword ptr ds : [ecx]
        ret 4
        public_4fc945 : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [ecx+4], eax
        inc dword ptr ds : [ecx]
        public_4fc94d : nop
        ret 4
        UNREACHABLE_TRAP(0x4fc920)
    }
}

#undef public_4fc945
#undef public_4fc94d
