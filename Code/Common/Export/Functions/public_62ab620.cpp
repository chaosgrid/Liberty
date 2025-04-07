#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6261db0);
CLANG_FORWARD_PROC_SYMBOL(public_629b430);
CLANG_FORWARD_PROC_SYMBOL(public_629b990);
CLANG_FORWARD_PROC_SYMBOL(public_62a0200);
CLANG_FORWARD_PROC_SYMBOL(public_62a15f0);
CLANG_FORWARD_PROC_SYMBOL(public_62b5fb0);
CLANG_FORWARD_PROC_SYMBOL(public_62b5fc0);

#define public_62ab662 _public_62ab662
#define public_62ab692 _public_62ab692
#define public_62ab6b0 _public_62ab6b0
#define public_62ab6db _public_62ab6db
#define public_62ab6ed _public_62ab6ed
#define public_62ab70b _public_62ab70b

PROC_DECLARE(0x62ab620, internal_62ab620, public_62ab620);
extern "C" NAKED register_t __cdecl internal_62ab620()
{
    __asm
    {
        sub esp, 0x20
        push ebx
        push esi
        push edi
        mov edi, ecx
        call public_62b5fc0
        fstp dword ptr ss : [esp+0x10]
        mov ecx, edi
        call public_62b5fb0
        fstp dword ptr ss : [esp+0xC]
        push 0x1EE0
        lea ecx, ss:[esp+0x20]
        call public_629b990
        lea eax, ss:[esp+0x1C]
        lea ebx, ds:[edi+0xE4]
        push eax
        mov ecx, ebx
        call public_629b430
        mov esi, eax
        test esi, esi
        je public_62ab692
        public_62ab662 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x3C]
        fadd dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        fstp dword ptr ss : [esp+0x10]
        call dword ptr ds : [eax+0x38]
        fadd dword ptr ss : [esp+0xC]
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, ebx
        fstp dword ptr ss : [esp+0x10]
        call public_629b430
        mov esi, eax
        test esi, esi
        jne public_62ab662
        public_62ab692 : nop
        lea edx, ss:[esp+0x14]
        add edi, 0x144
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x18], 1
        call public_62a15f0
        mov esi, eax
        test esi, esi
        je public_62ab6ed
        nop 
        public_62ab6b0 : nop
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, 2
        je public_62ab6db
        cmp eax, 3
        je public_62ab6db
        mov ecx, esi
        call public_6261db0
        fadd dword ptr ss : [esp+0x10]
        mov ecx, esi
        fstp dword ptr ss : [esp+0x10]
        call public_62a0200
        fadd dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0xC]
        public_62ab6db : nop
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, edi
        call public_62a15f0
        mov esi, eax
        test esi, esi
        jne public_62ab6b0
        public_62ab6ed : nop
        fld dword ptr ss : [esp+0xC]
        pop edi
        fcomp dword ptr ds : [public_6399408]
        pop esi
        pop ebx
        fnstsw ax
        test ah, 0x41
        jp public_62ab70b
        fld dword ptr ds : [public_6399408]
        add esp, 0x20
        ret 
        public_62ab70b : nop
        fld dword ptr ss : [esp+4]
        fdiv dword ptr ss : [esp]
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x62ab620)
    }
}

#undef public_62ab662
#undef public_62ab692
#undef public_62ab6b0
#undef public_62ab6db
#undef public_62ab6ed
#undef public_62ab70b
