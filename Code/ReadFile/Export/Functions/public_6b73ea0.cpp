#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b73ea0);

#define public_6b73eaa _public_6b73eaa
#define public_6b73eb8 _public_6b73eb8
#define public_6b73eca _public_6b73eca

PROC_DECLARE(0x6b73ea0, internal_6b73ea0, public_6b73ea0);
extern "C" NAKED register_t __cdecl internal_6b73ea0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        dec eax
        cmp eax, 4
        jb public_6b73eb8
        public_6b73eaa : nop
        mov ecx, dword ptr ds : [ecx]
        test ecx, ecx
        je public_6b73eca
        sub eax, 4
        cmp eax, 4
        jae public_6b73eaa
        public_6b73eb8 : nop
        lea edx, ds:[eax+eax*2]
        shl edx, 3
        sub edx, eax
        lea edx, ds:[edx+edx*2]
        lea eax, ds:[ecx+edx*4+4]
        ret 4
        public_6b73eca : nop
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x6b73ea0)
    }
}

#undef public_6b73eaa
#undef public_6b73eb8
#undef public_6b73eca
