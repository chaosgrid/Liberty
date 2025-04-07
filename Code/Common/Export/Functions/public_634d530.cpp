#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634d510);
CLANG_FORWARD_PROC_SYMBOL(public_634d530);
CLANG_FORWARD_PROC_SYMBOL(public_634d640);

#define public_634d553 _public_634d553
#define public_634d572 _public_634d572
#define public_634d58e _public_634d58e
#define public_634d5b2 _public_634d5b2

PROC_DECLARE(0x634d530, internal_634d530, public_634d530);
extern "C" NAKED register_t __cdecl internal_634d530()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [ecx+8]
        push esi
        lea esi, ds:[eax*8]
        sub esi, eax
        shl esi, 4
        mov eax, dword ptr ds : [esi+edx+4]
        add esi, edx
        test eax, eax
        je public_634d572
        mov eax, dword ptr ds : [ecx]
        push edi
        lea edi, ds:[eax-1]
        public_634d553 : nop
        mov eax, dword ptr ds : [ecx+4]
        inc eax
        and eax, edi
        lea esi, ds:[eax*8]
        sub esi, eax
        shl esi, 4
        add esi, edx
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_634d553
        pop edi
        public_634d572 : nop
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx+4]
        dec eax
        inc edx
        and eax, edx
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_634d58e
        push eax
        call public_634d510
        add esp, 4
        public_634d58e : nop
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [eax+0x40], esi
        mov dword ptr ds : [esi], 0
        mov eax, dword ptr ds : [eax+0x78]
        shl eax, 0x18
        cmp eax, 0x8000000
        jl public_634d5b2
        mov ecx, esi
        call public_634d640
        public_634d5b2 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x634d530)
    }
}

#undef public_634d553
#undef public_634d572
#undef public_634d58e
#undef public_634d5b2
