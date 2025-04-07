#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b69d56);

#define public_6b39daf _public_6b39daf

PROC_DECLARE(0x6b39d90, internal_6b39d90, public_6b39d90);
extern "C" NAKED register_t __cdecl internal_6b39d90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        jbe public_6b39daf
        cmp eax, 0x80
        ja public_6b39daf
        mov ecx, dword ptr ds : [ecx+eax*4+0xC]
        test ecx, ecx
        je public_6b39daf
        call public_6b69d56
        ret 4
        public_6b39daf : nop
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x6b39d90)
    }
}

#undef public_6b39daf
