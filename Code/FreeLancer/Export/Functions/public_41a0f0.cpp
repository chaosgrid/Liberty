#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_412010);
CLANG_FORWARD_PROC_SYMBOL(public_41a0f0);

#define public_41a10c _public_41a10c
#define public_41a116 _public_41a116

PROC_DECLARE(0x41a0f0, internal_41a0f0, public_41a0f0);
extern "C" NAKED register_t __cdecl internal_41a0f0()
{
    __asm
    {
        call public_412010
        test al, al
        je public_41a10c
        mov eax, dword ptr ss : [esp+4]
        mov ecx, eax
        mov dword ptr ds : [public_6166ac], eax
        mov dword ptr ds : [public_6166b0], ecx
        jmp public_41a116
        public_41a10c : nop
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [public_6166ac], edx
        public_41a116 : nop
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [public_610690], eax
        mov byte ptr ds : [public_6166b4], 1
        mov dword ptr ds : [public_6166b8], 0
        ret 
        UNREACHABLE_TRAP(0x41a0f0)
    }
}

#undef public_41a10c
#undef public_41a116
