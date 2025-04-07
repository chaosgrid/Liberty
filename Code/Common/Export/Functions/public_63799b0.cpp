#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6356b40);
CLANG_FORWARD_PROC_SYMBOL(public_63799b0);

#define public_63799c9 _public_63799c9
#define public_63799d1 _public_63799d1
#define public_63799fc _public_63799fc

PROC_DECLARE(0x63799b0, internal_63799b0, public_63799b0);
extern "C" NAKED register_t __cdecl internal_63799b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+0xC]
        sub esp, 8
        cmp eax, ecx
        jae public_63799c9
        mov dword ptr ss : [esp], eax
        mov dword ptr ss : [esp+4], ecx
        jmp public_63799d1
        public_63799c9 : nop
        mov dword ptr ss : [esp], ecx
        mov dword ptr ss : [esp+4], eax
        public_63799d1 : nop
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        lea eax, ss:[esp+4]
        push eax
        mov ecx, esi
        call public_6356ac0
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x1C]
        jne public_63799fc
        push ecx
        lea edx, ss:[esp+8]
        push edx
        mov ecx, esi
        call public_6356b40
        pop esi
        add esp, 8
        ret 
        public_63799fc : nop
        mov dword ptr ds : [ecx+0x14], eax
        mov dword ptr ds : [eax+0x14], ecx
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x63799b0)
    }
}

#undef public_63799c9
#undef public_63799d1
#undef public_63799fc
