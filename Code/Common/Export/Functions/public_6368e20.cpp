#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6368e20);

#define public_6368e32 _public_6368e32
#define public_6368e3b _public_6368e3b
#define public_6368e44 _public_6368e44

PROC_DECLARE(0x6368e20, internal_6368e20, public_6368e20);
extern "C" NAKED register_t __cdecl internal_6368e20()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ss : [esp+4]
        cmp edx, eax
        mov edx, dword ptr ss : [esp+8]
        jne public_6368e32
        mov dword ptr ds : [ecx+0x20], edx
        public_6368e32 : nop
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        je public_6368e3b
        mov dword ptr ds : [ecx], edx
        public_6368e3b : nop
        mov ecx, dword ptr ds : [edx]
        test ecx, ecx
        je public_6368e44
        mov dword ptr ds : [ecx+4], eax
        public_6368e44 : nop
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [edx], eax
        ret 8
        UNREACHABLE_TRAP(0x6368e20)
    }
}

#undef public_6368e32
#undef public_6368e3b
#undef public_6368e44
