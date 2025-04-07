#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ec5b0);

#define public_62ec5c6 _public_62ec5c6

PROC_DECLARE(0x62ec5b0, internal_62ec5b0, public_62ec5b0);
extern "C" NAKED register_t __cdecl internal_62ec5b0()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0xBF]
        test al, al
        je public_62ec5c6
        mov eax, dword ptr ds : [ecx+0xB4]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx], eax
        public_62ec5c6 : nop
        mov al, byte ptr ds : [ecx+0xBF]
        ret 4
        UNREACHABLE_TRAP(0x62ec5b0)
    }
}

#undef public_62ec5c6
