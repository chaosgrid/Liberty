#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c5090);
CLANG_FORWARD_PROC_SYMBOL(public_540fc0);

#define public_4c50b8 _public_4c50b8
#define public_4c50d7 _public_4c50d7
#define public_4c50d9 _public_4c50d9
#define public_4c50eb _public_4c50eb
#define public_4c50f4 _public_4c50f4
#define public_4c50f6 _public_4c50f6
#define public_4c510a _public_4c510a

PROC_DECLARE(0x4c5090, internal_4c5090, public_4c5090);
extern "C" NAKED register_t __cdecl internal_4c5090()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp]
        push esi
        push eax
        mov byte ptr ds : [public_673398], 1
        mov dword ptr ss : [esp+8], 2
        call public_540fc0
        add esp, 4
        test eax, eax
        je public_4c510a
        mov edx, dword ptr ds : [public_673394]
        public_4c50b8 : nop
        lea ecx, ds:[eax+0xC]
        test ecx, ecx
        je public_4c50d7
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_4c50d7
        mov esi, dword ptr ds : [ecx+0x4C]
        and esi, 0x303
        cmp esi, 0x303
        je public_4c50d9
        public_4c50d7 : nop
        xor ecx, ecx
        public_4c50d9 : nop
        cmp dword ptr ds : [ecx+0x160], edx
        je public_4c50eb
        mov eax, dword ptr ds : [eax+0x14]
        test eax, eax
        jne public_4c50b8
        pop esi
        pop ecx
        ret 
        public_4c50eb : nop
        test eax, eax
        je public_4c50f4
        add eax, 8
        jmp public_4c50f6
        public_4c50f4 : nop
        xor eax, eax
        public_4c50f6 : nop
        cmp eax, dword ptr ds : [public_6728d8]
        je public_4c510a
        push eax
        mov ecx, offset public_6728d8
        call dword ptr ds : [public_5c62a8]
        public_4c510a : nop
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4c5090)
    }
}

#undef public_4c50b8
#undef public_4c50d7
#undef public_4c50d9
#undef public_4c50eb
#undef public_4c50f4
#undef public_4c50f6
#undef public_4c510a
