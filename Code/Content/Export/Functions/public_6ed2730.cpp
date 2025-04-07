#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed2730);

#define public_6ed2743 _public_6ed2743
#define public_6ed2751 _public_6ed2751
#define public_6ed2758 _public_6ed2758

PROC_DECLARE(0x6ed2730, internal_6ed2730, public_6ed2730);
extern "C" NAKED register_t __cdecl internal_6ed2730()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jbe public_6ed2758
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, eax
        mov eax, dword ptr ss : [esp+4]
        push esi
        public_6ed2743 : nop
        test eax, eax
        je public_6ed2751
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], esi
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], esi
        public_6ed2751 : nop
        add eax, 8
        dec edx
        jne public_6ed2743
        pop esi
        public_6ed2758 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6ed2730)
    }
}

#undef public_6ed2743
#undef public_6ed2751
#undef public_6ed2758
