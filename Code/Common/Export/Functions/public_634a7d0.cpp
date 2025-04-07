#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634a600);
CLANG_FORWARD_PROC_SYMBOL(public_634a7d0);

#define public_634a7e8 _public_634a7e8
#define public_634a7f3 _public_634a7f3
#define public_634a7fe _public_634a7fe
#define public_634a813 _public_634a813
#define public_634a822 _public_634a822

PROC_DECLARE(0x634a7d0, internal_634a7d0, public_634a7d0);
extern "C" NAKED register_t __cdecl internal_634a7d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        push esi
        je public_634a7fe
        mov edx, dword ptr ds : [ecx+0x48]
        test dl, 1
        je public_634a7e8
        mov esi, dword ptr ds : [eax+0x1C]
        test esi, esi
        jne public_634a822
        public_634a7e8 : nop
        test dl, 2
        je public_634a7f3
        test byte ptr ds : [eax+0x78], 0x10
        je public_634a822
        public_634a7f3 : nop
        test dl, 4
        je public_634a7fe
        test byte ptr ds : [eax+0x78], 0x10
        jne public_634a822
        public_634a7fe : nop
        mov edx, dword ptr ds : [eax+4]
        sub edx, 2
        je public_634a813
        dec edx
        jne public_634a822
        push eax
        call public_634a600
        pop esi
        ret 4
        public_634a813 : nop
        mov edx, dword ptr ds : [eax+0x80]
        mov esi, dword ptr ds : [edx]
        push eax
        push ecx
        mov ecx, edx
        call dword ptr ds : [esi+0x18]
        public_634a822 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x634a7d0)
    }
}

#undef public_634a7e8
#undef public_634a7f3
#undef public_634a7fe
#undef public_634a813
#undef public_634a822
