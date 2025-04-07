#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6271490);
CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);

#define public_62714ca _public_62714ca
#define public_62714d2 _public_62714d2
#define public_62714e0 _public_62714e0

PROC_DECLARE(0x6271490, internal_6271490, public_6271490);
extern "C" NAKED register_t __cdecl internal_6271490()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0xC]
        push esi
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, offset public_63fbb80
        mov dword ptr ss : [esp+0x14], eax
        xor esi, esi
        call public_62fcfb0
        mov ecx, dword ptr ds : [public_63fbb84]
        cmp eax, ecx
        mov dword ptr ss : [esp+4], eax
        je public_62714ca
        mov edx, dword ptr ss : [esp+0x10]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_62714ca
        lea eax, ss:[esp+4]
        jmp public_62714d2
        public_62714ca : nop
        mov dword ptr ss : [esp+8], ecx
        lea eax, ss:[esp+8]
        public_62714d2 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        je public_62714e0
        mov eax, dword ptr ds : [eax+0x10]
        pop esi
        add esp, 8
        ret 
        public_62714e0 : nop
        mov eax, esi
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6271490)
    }
}

#undef public_62714ca
#undef public_62714d2
#undef public_62714e0
