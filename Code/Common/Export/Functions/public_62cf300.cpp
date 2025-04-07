#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6341610);

#define public_62cf31d _public_62cf31d
#define public_62cf31f _public_62cf31f
#define public_62cf338 _public_62cf338

PROC_DECLARE(0x62cf300, internal_62cf300, public_62cf300);
extern "C" NAKED register_t __cdecl internal_62cf300()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x2C]
        test eax, eax
        push esi
        lea esi, ds:[ecx+0x2C]
        je public_62cf338
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62cf338
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_62cf31d
        lea ecx, ds:[eax-8]
        jmp public_62cf31f
        public_62cf31d : nop
        xor ecx, ecx
        public_62cf31f : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x20]
        cmp eax, dword ptr ss : [esp+8]
        jne public_62cf338
        cmp dword ptr ds : [esi], 0
        je public_62cf338
        push 0
        mov ecx, esi
        call public_6341610
        public_62cf338 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62cf300)
    }
}

#undef public_62cf31d
#undef public_62cf31f
#undef public_62cf338
