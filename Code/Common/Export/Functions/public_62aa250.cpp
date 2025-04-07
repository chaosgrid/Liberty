#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629b440);
CLANG_FORWARD_PROC_SYMBOL(public_629b970);
CLANG_FORWARD_PROC_SYMBOL(public_62aa250);

#define public_62aa275 _public_62aa275
#define public_62aa28c _public_62aa28c

PROC_DECLARE(0x62aa250, internal_62aa250, public_62aa250);
extern "C" NAKED register_t __cdecl internal_62aa250()
{
    __asm
    {
        sub esp, 0x10
        push esi
        mov esi, ecx
        lea ecx, ss:[esp+4]
        call public_629b970
        lea eax, ss:[esp+4]
        add esi, 0xE4
        push eax
        mov ecx, esi
        call public_629b440
        test eax, eax
        je public_62aa28c
        public_62aa275 : nop
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x4C]
        lea eax, ss:[esp+4]
        push eax
        mov ecx, esi
        call public_629b440
        test eax, eax
        jne public_62aa275
        public_62aa28c : nop
        pop esi
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x62aa250)
    }
}

#undef public_62aa275
#undef public_62aa28c
