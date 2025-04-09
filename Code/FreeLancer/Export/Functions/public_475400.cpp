#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45a460);

#define public_475420 _public_475420

PROC_DECLARE(0x475400, internal_475400, public_475400);
extern "C" NAKED register_t __cdecl internal_475400()
{
    __asm
    {
        cmp dword ptr ss : [esp+4], 0x26
        jne public_475420
        mov eax, dword ptr ss : [esp+8]
        cmp eax, dword ptr ds : [ecx+0x32C]
        jne public_475420
        call public_45a460
        mov eax, 1
        ret 0xC
        public_475420 : nop
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x475400)
    }
}

#undef public_475420
