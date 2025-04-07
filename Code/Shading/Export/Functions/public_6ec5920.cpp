#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec5920);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);

#define public_6ec5946 _public_6ec5946

PROC_DECLARE(0x6ec5920, internal_6ec5920, public_6ec5920);
extern "C" NAKED register_t __cdecl internal_6ec5920()
{
    __asm
    {
        cmp dword ptr ds : [public_6ed57e0], 0x7FFFFFFF
        jge public_6ec5946
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [public_6ed57d4]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [public_6ed57d4], eax
        inc dword ptr ds : [public_6ed57e0]
        ret 8
        public_6ec5946 : nop
        mov edx, dword ptr ss : [esp+4]
        push edx
        call public_6ed0c50
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6ec5920)
    }
}

#undef public_6ec5946
