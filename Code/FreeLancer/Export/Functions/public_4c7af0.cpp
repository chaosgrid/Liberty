#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c7af0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_4c7b16 _public_4c7b16
#define public_4c7b31 _public_4c7b31
#define public_4c7b5e _public_4c7b5e
#define public_4c7b8a _public_4c7b8a

PROC_DECLARE(0x4c7af0, internal_4c7af0, public_4c7af0);
extern "C" NAKED register_t __cdecl internal_4c7af0()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+4]
        fcomp qword ptr ds : [public_5d5060]
        mov dword ptr ds : [public_673564], eax
        fnstsw ax
        test ah, 5
        jp public_4c7b16
        mov dword ptr ds : [public_673564], 0xBF800000
        jmp public_4c7b31
        public_4c7b16 : nop
        fld dword ptr ss : [esp+4]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 0x41
        jne public_4c7b31
        mov dword ptr ds : [public_673564], 0x3F800000
        public_4c7b31 : nop
        mov ecx, dword ptr ds : [public_673564]
        push esi
        mov dword ptr ss : [esp+8], ecx
        call public_54baf0
        mov esi, dword ptr ds : [public_5c6470]
        push eax
        call esi
        add esp, 4
        test eax, eax
        je public_4c7b5e
        mov edx, dword ptr ss : [esp+8]
        push edx
        mov ecx, eax
        call dword ptr ds : [public_5c6478]
        public_4c7b5e : nop
        fld dword ptr ds : [public_673564]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jp public_4c7b8a
        call public_54baf0
        push eax
        call esi
        add esp, 4
        test eax, eax
        je public_4c7b8a
        push 0
        mov ecx, eax
        call dword ptr ds : [public_5c647c]
        public_4c7b8a : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4c7af0)
    }
}

#undef public_4c7b16
#undef public_4c7b31
#undef public_4c7b5e
#undef public_4c7b8a
