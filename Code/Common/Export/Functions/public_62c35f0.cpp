#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e7400);

#define public_62c360e _public_62c360e
#define public_62c3669 _public_62c3669
#define public_62c36ce _public_62c36ce
#define public_62c36d3 _public_62c36d3
#define public_62c36db _public_62c36db

PROC_DECLARE(0x62c35f0, internal_62c35f0, public_62c35f0);
extern "C" NAKED register_t __cdecl internal_62c35f0()
{
    __asm
    {
        sub esp, 0x18
        push esi
        push edi
        mov edi, ecx
        mov al, byte ptr ds : [edi+0x398]
        test al, al
        je public_62c360e
        pop edi
        mov eax, 1
        pop esi
        add esp, 0x18
        ret 4
        public_62c360e : nop
        mov ecx, dword ptr ds : [edi+0x14]
        lea edx, ss:[esp+8]
        mov dword ptr ss : [esp+8], 0
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x74]
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_62c36ce
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x10]
        push edx
        mov esi, ecx
        call dword ptr ds : [eax+0x88]
        mov eax, dword ptr ss : [esp+0x10]
        test eax, 0x600DE0
        je public_62c36db
        test eax, 0x8C0
        jne public_62c3669
        test eax, 0x120
        je public_62c36ce
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0xC4]
        test al, al
        je public_62c36ce
        public_62c3669 : nop
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0xC]
        push eax
        mov dword ptr ss : [esp+0x10], 0x3F800000
        call dword ptr ds : [edx+0x40]
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_62c36ce
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x14]
        push eax
        call dword ptr ds : [edx+4]
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+4]
        fld dword ptr ds : [eax]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fcomp dword ptr ds : [public_639f484]
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 5
        fstp st(0)
        mov eax, 1
        jnp public_62c36d3
        public_62c36ce : nop
        mov eax, 2
        public_62c36d3 : nop
        pop edi
        pop esi
        add esp, 0x18
        ret 4
        public_62c36db : nop
        test al, 3
        je public_62c36ce
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0
        call dword ptr ds : [edx+0x8C]
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        je public_62c36ce
        mov ecx, dword ptr ds : [edi+0x24]
        push esi
        add ecx, 0x34
        call public_62e7400
        test eax, eax
        jne public_62c3669
        pop edi
        mov eax, 2
        pop esi
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x62c35f0)
    }
}

#undef public_62c360e
#undef public_62c3669
#undef public_62c36ce
#undef public_62c36d3
#undef public_62c36db
