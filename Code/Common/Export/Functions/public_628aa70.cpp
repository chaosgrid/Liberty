#include "Common-PCH.h"


#define public_628aa8a _public_628aa8a

PROC_DECLARE(0x628aa70, internal_628aa70, public_628aa70);
extern "C" NAKED register_t __cdecl internal_628aa70()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x10]
        test ecx, ecx
        je public_628aa8a
        mov eax, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [eax+0xA4]
        test eax, eax
        je public_628aa8a
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx]
        public_628aa8a : nop
        ret 8
        UNREACHABLE_TRAP(0x628aa70)
    }
}

#undef public_628aa8a
