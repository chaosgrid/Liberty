#include "ReadFile-PCH.h"


#define public_6b77619 _public_6b77619
#define public_6b77620 _public_6b77620

PROC_DECLARE(0x6b77600, internal_6b77600, public_6b77600);
extern "C" NAKED register_t __cdecl internal_6b77600()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        or eax, 0xFFFFFFFF
        test ecx, ecx
        jne public_6b77620
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        je public_6b77619
        mov dword ptr ds : [eax], 0
        public_6b77619 : nop
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x10]
        public_6b77620 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6b77600)
    }
}

#undef public_6b77619
#undef public_6b77620
