#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_100097e0);

#define public_100097e7 _public_100097e7
#define public_100097f3 _public_100097f3

PROC_DECLARE(0x100097e0, internal_100097e0, public_100097e0);
extern "C" NAKED register_t __cdecl internal_100097e0()
{
    __asm
    {
        push ecx
        xor eax, eax
        test esi, esi
        jle public_100097f3
        public_100097e7 : nop
        mov byte ptr ss : [esp+eax], cl
        shr ecx, 8
        inc eax
        cmp eax, esi
        jl public_100097e7
        public_100097f3 : nop
        mov ecx, dword ptr ss : [esp+8]
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov eax, dword ptr ds : [edx+0x1C]
        push ecx
        push eax
        call dword ptr ds : [edx+8]
        sub eax, esi
        neg eax
        sbb eax, eax
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x100097e0)
    }
}

#undef public_100097e7
#undef public_100097f3
