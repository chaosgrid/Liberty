#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628e780);

#define public_628dabb _public_628dabb
#define public_628dac2 _public_628dac2

PROC_DECLARE(0x628daa0, internal_628daa0, public_628daa0);
extern "C" NAKED register_t __cdecl internal_628daa0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        je public_628dabb
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        cmp eax, edi
        ja public_628dac2
        public_628dabb : nop
        mov ecx, esi
        call public_628e780
        public_628dac2 : nop
        mov eax, dword ptr ds : [esi+4]
        lea eax, ds:[eax+edi*4]
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x628daa0)
    }
}

#undef public_628dabb
#undef public_628dac2
