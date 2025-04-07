#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e1680);
CLANG_FORWARD_PROC_SYMBOL(public_62e61f0);
CLANG_FORWARD_PROC_SYMBOL(public_62e8ce0);
CLANG_FORWARD_PROC_SYMBOL(public_62e91d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_62e8d54 _public_62e8d54
#define public_62e8d64 _public_62e8d64
#define public_62e8d66 _public_62e8d66
#define public_62e8d85 _public_62e8d85
#define public_62e8dbf _public_62e8dbf
#define public_62e8dc1 _public_62e8dc1
#define public_62e8e24 _public_62e8e24
#define public_62e8e46 _public_62e8e46
#define public_62e8e55 _public_62e8e55

PROC_DECLARE(0x62e8ce0, internal_62e8ce0, public_62e8ce0);
extern "C" NAKED register_t __cdecl internal_62e8ce0()
{
    __asm
    {
        sub esp, 0x30
        push esi
        push 1
        mov esi, ecx
        call public_62e91d0
        mov eax, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+8], edx
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0xC], eax
        fld dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+4], ecx
        fmul dword ptr ss : [esp+0xC]
        faddp 
        fld dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+4]
        faddp 
        fcomp dword ptr ds : [public_639a1d0]
        fnstsw ax
        test ah, 0x41
        jne public_62e8d54
        lea ecx, ss:[esp+4]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        call public_62e1680
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0xC], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x10], edx
        mov eax, dword ptr ds : [eax+8]
        add esp, 8
        mov dword ptr ss : [esp+0xC], eax
        public_62e8d54 : nop
        mov eax, dword ptr ds : [esi]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62e8d64
        add eax, 0xFFFFFFF8
        jmp public_62e8d66
        public_62e8d64 : nop
        xor eax, eax
        public_62e8d66 : nop
        push edi
        push eax
        call public_62e61f0
        mov edi, eax
        mov eax, dword ptr ds : [public_63fca58]
        add esp, 4
        test eax, eax
        jne public_62e8d85
        call public_6391cf0
        mov dword ptr ds : [public_63fca58], eax
        public_62e8d85 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+8]
        push edx
        push edi
        lea edx, ss:[esp+0x28]
        push edx
        push eax
        call dword ptr ds : [ecx+0x38]
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [esi]
        add eax, 8
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x1C], edx
        mov eax, dword ptr ds : [eax]
        test eax, eax
        pop edi
        je public_62e8dbf
        lea ecx, ds:[eax-8]
        jmp public_62e8dc1
        public_62e8dbf : nop
        xor ecx, ecx
        public_62e8dc1 : nop
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x28]
        push edx
        call dword ptr ds : [eax+0x54]
        test eax, eax
        jne public_62e8e55
        fld dword ptr ss : [esp+0x10]
        fsub dword ptr ss : [esp+0x28]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_63a07e4]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jp public_62e8e24
        fld dword ptr ss : [esp+0x14]
        fsub dword ptr ss : [esp+0x2C]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_63a07e4]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jp public_62e8e24
        fld dword ptr ss : [esp+0x18]
        fsub dword ptr ss : [esp+0x30]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_63a07e4]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jnp public_62e8e55
        public_62e8e24 : nop
        mov eax, dword ptr ds : [esi]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62e8e46
        add eax, 0xFFFFFFF8
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x10]
        push edx
        call dword ptr ds : [eax+8]
        pop esi
        add esp, 0x30
        ret 4
        public_62e8e46 : nop
        xor eax, eax
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x10]
        push edx
        call dword ptr ds : [eax+8]
        public_62e8e55 : nop
        pop esi
        add esp, 0x30
        ret 4
        UNREACHABLE_TRAP(0x62e8ce0)
    }
}

#undef public_62e8d54
#undef public_62e8d64
#undef public_62e8d66
#undef public_62e8d85
#undef public_62e8dbf
#undef public_62e8dc1
#undef public_62e8e24
#undef public_62e8e46
#undef public_62e8e55
