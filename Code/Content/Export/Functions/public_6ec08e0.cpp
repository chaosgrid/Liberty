#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15b90);

#define public_6ec08fc _public_6ec08fc
#define public_6ec0915 _public_6ec0915

PROC_DECLARE(0x6ec08e0, internal_6ec08e0, public_6ec08e0);
extern "C" NAKED register_t __cdecl internal_6ec08e0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0xC]
        test ecx, ecx
        lea eax, ds:[esi+0xC]
        je public_6ec08fc
        mov ecx, dword ptr ds : [esi+4]
        push eax
        call public_6f15b90
        mov dword ptr ds : [esi+0x8C], eax
        public_6ec08fc : nop
        mov ecx, dword ptr ds : [esi+0x40]
        test ecx, ecx
        lea eax, ds:[esi+0x40]
        je public_6ec0915
        mov ecx, dword ptr ds : [esi+4]
        push eax
        call public_6f15b90
        mov dword ptr ds : [esi+0x90], eax
        public_6ec0915 : nop
        mov eax, dword ptr ds : [esi+0x80]
        mov dword ptr ds : [esi+0x7C], eax
        mov dword ptr ds : [esi+0x88], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ec08e0)
    }
}

#undef public_6ec08fc
#undef public_6ec0915
