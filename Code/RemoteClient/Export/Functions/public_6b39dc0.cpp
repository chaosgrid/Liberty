#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b69d5c);

#define public_6b39ddf _public_6b39ddf

PROC_DECLARE(0x6b39dc0, internal_6b39dc0, public_6b39dc0);
extern "C" NAKED register_t __cdecl internal_6b39dc0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        jbe public_6b39ddf
        cmp eax, 0x80
        ja public_6b39ddf
        mov ecx, dword ptr ds : [ecx+eax*4+0xC]
        test ecx, ecx
        je public_6b39ddf
        call public_6b69d5c
        ret 4
        public_6b39ddf : nop
        fld qword ptr ds : [public_6b6bef8]
        ret 4
        UNREACHABLE_TRAP(0x6b39dc0)
    }
}

#undef public_6b39ddf
