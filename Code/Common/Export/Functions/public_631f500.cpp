#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);
CLANG_FORWARD_PROC_SYMBOL(public_631f500);

#define public_631f52f _public_631f52f
#define public_631f537 _public_631f537
#define public_631f544 _public_631f544

PROC_DECLARE(0x631f500, internal_631f500, public_631f500);
extern "C" NAKED register_t __cdecl internal_631f500()
{
    __asm
    {
        sub esp, 8
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, offset public_64018ec
        call public_62fcfb0
        mov ecx, dword ptr ds : [public_64018f0]
        cmp eax, ecx
        mov dword ptr ss : [esp], eax
        je public_631f52f
        mov edx, dword ptr ss : [esp+0xC]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_631f52f
        lea eax, ss:[esp]
        jmp public_631f537
        public_631f52f : nop
        mov dword ptr ss : [esp+4], ecx
        lea eax, ss:[esp+4]
        public_631f537 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        je public_631f544
        mov eax, dword ptr ds : [eax+0x24]
        add esp, 8
        ret 
        public_631f544 : nop
        xor eax, eax
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x631f500)
    }
}

#undef public_631f52f
#undef public_631f537
#undef public_631f544
