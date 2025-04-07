#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad24de);
CLANG_FORWARD_PROC_SYMBOL(public_6ad24e7);
CLANG_FORWARD_PROC_SYMBOL(public_6ad873e);

#define public_6ad8769 _public_6ad8769

PROC_DECLARE(0x6ad873e, internal_6ad873e, public_6ad873e);
extern "C" NAKED register_t __cdecl internal_6ad873e()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, dword ptr ds : [public_6ae2580]
        jae public_6ad8769
        mov ecx, eax
        and eax, 0x1F
        sar ecx, 5
        lea eax, ds:[eax+eax*8]
        mov ecx, dword ptr ds : [ecx*4+public_6ae2480]
        test byte ptr ds : [ecx+eax*4+4], 1
        lea eax, ds:[ecx+eax*4]
        je public_6ad8769
        mov eax, dword ptr ds : [eax]
        ret 
        public_6ad8769 : nop
        call public_6ad24de
        mov dword ptr ds : [eax], 9
        call public_6ad24e7
        and dword ptr ds : [eax], 0
        or eax, 0xFFFFFFFF
        ret 
        UNREACHABLE_TRAP(0x6ad873e)
    }
}

#undef public_6ad8769
