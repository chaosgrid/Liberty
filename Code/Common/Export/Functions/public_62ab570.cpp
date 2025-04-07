#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629b430);
CLANG_FORWARD_PROC_SYMBOL(public_629b990);
CLANG_FORWARD_PROC_SYMBOL(public_62a0200);
CLANG_FORWARD_PROC_SYMBOL(public_62a15f0);
CLANG_FORWARD_PROC_SYMBOL(public_62b5fb0);

#define public_62ab5a4 _public_62ab5a4
#define public_62ab5c3 _public_62ab5c3
#define public_62ab5e0 _public_62ab5e0
#define public_62ab5fc _public_62ab5fc
#define public_62ab60c _public_62ab60c

PROC_DECLARE(0x62ab570, internal_62ab570, public_62ab570);
extern "C" NAKED register_t __cdecl internal_62ab570()
{
    __asm
    {
        sub esp, 0x1C
        push esi
        push edi
        mov edi, ecx
        call public_62b5fb0
        fstp dword ptr ss : [esp+8]
        push 0x1EE0
        lea ecx, ss:[esp+0x18]
        call public_629b990
        lea eax, ss:[esp+0x14]
        lea esi, ds:[edi+0xE4]
        push eax
        mov ecx, esi
        call public_629b430
        test eax, eax
        je public_62ab5c3
        public_62ab5a4 : nop
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x38]
        fadd dword ptr ss : [esp+8]
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        fstp dword ptr ss : [esp+0xC]
        call public_629b430
        test eax, eax
        jne public_62ab5a4
        public_62ab5c3 : nop
        lea ecx, ss:[esp+0xC]
        lea esi, ds:[edi+0x144]
        push ecx
        mov ecx, esi
        mov byte ptr ss : [esp+0x10], 1
        call public_62a15f0
        test eax, eax
        je public_62ab60c
        mov edi, edi
        public_62ab5e0 : nop
        mov ecx, dword ptr ds : [eax+0x14]
        cmp ecx, 2
        je public_62ab5fc
        cmp ecx, 3
        je public_62ab5fc
        mov ecx, eax
        call public_62a0200
        fadd dword ptr ss : [esp+8]
        fstp dword ptr ss : [esp+8]
        public_62ab5fc : nop
        lea edx, ss:[esp+0xC]
        push edx
        mov ecx, esi
        call public_62a15f0
        test eax, eax
        jne public_62ab5e0
        public_62ab60c : nop
        fld dword ptr ss : [esp+8]
        pop edi
        pop esi
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x62ab570)
    }
}

#undef public_62ab5a4
#undef public_62ab5c3
#undef public_62ab5e0
#undef public_62ab5fc
#undef public_62ab60c
