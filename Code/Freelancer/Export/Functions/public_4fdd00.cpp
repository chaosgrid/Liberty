#include "Freelancer-PCH.h"


#define public_4fdd50 _public_4fdd50
#define public_4fdd52 _public_4fdd52
#define public_4fdd73 _public_4fdd73
#define public_4fdd91 _public_4fdd91
#define public_4fdd94 _public_4fdd94

PROC_DECLARE(0x4fdd00, internal_4fdd00, public_4fdd00);
extern "C" NAKED register_t __cdecl internal_4fdd00()
{
    __asm
    {
        sub esp, 8
        push esi
        mov esi, ecx
        fld dword ptr ds : [esi+0x74]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jnp public_4fdd94
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [esi+0x74]
        fadd dword ptr ds : [esi+0x78]
        fcom qword ptr ds : [public_5c89b8]
        fst dword ptr ds : [esi+0x78]
        fnstsw ax
        test ah, 1
        jne public_4fdd50
        fstp qword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+4]
        push eax
        push ecx
        call dword ptr ds : [public_5c71c4]
        fsubr qword ptr ss : [esp+0xC]
        add esp, 8
        fstp dword ptr ds : [esi+0x78]
        jmp public_4fdd52
        public_4fdd50 : nop
        fstp st(0)
        public_4fdd52 : nop
        fld dword ptr ds : [esi+0x78]
        fcom dword ptr ds : [esi+0x70]
        fnstsw ax
        test ah, 0x41
        jne public_4fdd73
        fstp st(0)
        mov al, 1
        fld dword ptr ds : [public_5c7474]
        fstp dword ptr ds : [esi+0x7C]
        pop esi
        add esp, 8
        ret 8
        public_4fdd73 : nop
        fld dword ptr ds : [public_5d55b4]
        fdiv dword ptr ds : [esi+0x70]
        fmulp 
        fcom dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 0x41
        jne public_4fdd91
        fsubr dword ptr ds : [public_5d55b4]
        public_4fdd91 : nop
        fstp dword ptr ds : [esi+0x7C]
        public_4fdd94 : nop
        mov al, 1
        pop esi
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x4fdd00)
    }
}

#undef public_4fdd50
#undef public_4fdd52
#undef public_4fdd73
#undef public_4fdd91
#undef public_4fdd94
