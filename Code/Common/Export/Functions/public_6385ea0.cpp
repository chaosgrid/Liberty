#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6385ea0);

#define public_6385eb8 _public_6385eb8
#define public_6385ec4 _public_6385ec4

PROC_DECLARE(0x6385ea0, internal_6385ea0, public_6385ea0);
extern "C" NAKED register_t __cdecl internal_6385ea0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [ecx+0x48]
        test eax, eax
        mov edx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [edx]
        jne public_6385eb8
        mov eax, dword ptr ds : [ecx+0x4C]
        neg eax
        public_6385eb8 : nop
        mov ecx, dword ptr ds : [edx+0x48]
        test ecx, ecx
        jne public_6385ec4
        mov ecx, dword ptr ds : [edx+0x4C]
        neg ecx
        public_6385ec4 : nop
        sub eax, ecx
        ret 
        UNREACHABLE_TRAP(0x6385ea0)
    }
}

#undef public_6385eb8
#undef public_6385ec4
