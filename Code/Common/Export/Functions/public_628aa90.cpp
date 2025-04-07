#include "Common-PCH.h"


#define public_628aaab _public_628aaab

PROC_DECLARE(0x628aa90, internal_628aa90, public_628aa90);
extern "C" NAKED register_t __cdecl internal_628aa90()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x10]
        test ecx, ecx
        je public_628aaab
        mov eax, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [eax+0xA4]
        test eax, eax
        je public_628aaab
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+4]
        public_628aaab : nop
        ret 8
        UNREACHABLE_TRAP(0x628aa90)
    }
}

#undef public_628aaab
