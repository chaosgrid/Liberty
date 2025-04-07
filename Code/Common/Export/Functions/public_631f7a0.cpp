#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6301640);
CLANG_FORWARD_PROC_SYMBOL(public_63222f0);

#define public_631f7d2 _public_631f7d2
#define public_631f81b _public_631f81b
#define public_631f832 _public_631f832
#define public_631f838 _public_631f838
#define public_631f84f _public_631f84f
#define public_631f873 _public_631f873
#define public_631f893 _public_631f893
#define public_631f8aa _public_631f8aa

PROC_DECLARE(0x631f7a0, internal_631f7a0, public_631f7a0);
extern "C" NAKED register_t __cdecl internal_631f7a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x14
        push ebx
        push esi
        push edi
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, offset public_64018ec
        xor ebx, ebx
        call public_6301640
        mov eax, dword ptr ss : [esp+0x24]
        cmp eax, dword ptr ds : [public_64018f0]
        jne public_631f7d2
        pop edi
        pop esi
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0x14
        ret 
        public_631f7d2 : nop
        mov edi, dword ptr ss : [esp+0x28]
        lea esi, ds:[eax+0x30]
        push edi
        lea edx, ss:[esp+0x2C]
        push edx
        mov ecx, esi
        call public_6301640
        mov eax, dword ptr ss : [esp+0x28]
        cmp eax, dword ptr ds : [esi+4]
        jne public_631f873
        push edi
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, offset public_64018ec
        call public_6301640
        mov ecx, dword ptr ss : [esp+0xC]
        cmp ecx, dword ptr ds : [public_64018f0]
        jne public_631f81b
        pop edi
        pop esi
        mov eax, 0xFFFFFFFE
        pop ebx
        add esp, 0x14
        ret 
        public_631f81b : nop
        fld dword ptr ss : [esp+0x2C]
        fcomp dword ptr ds : [public_63a3ccc]
        fnstsw ax
        test ah, 5
        jp public_631f832
        fld dword ptr ss : [esp+0x2C]
        jmp public_631f838
        public_631f832 : nop
        fld dword ptr ds : [public_63a3ccc]
        public_631f838 : nop
        fld dword ptr ds : [public_63a3cc8]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_631f84f
        fstp st(0)
        fld dword ptr ds : [public_63a3cc8]
        public_631f84f : nop
        mov edx, dword ptr ds : [edi]
        fstp dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], edx
        call public_63222f0
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        add esp, 0x14
        ret 
        public_631f873 : nop
        fld dword ptr ss : [esp+0x2C]
        lea ecx, ds:[eax+0x10]
        fadd dword ptr ds : [ecx]
        fst dword ptr ds : [ecx]
        fcom dword ptr ds : [public_63a3ccc]
        fnstsw ax
        test ah, 5
        jnp public_631f893
        fstp st(0)
        fld dword ptr ds : [public_63a3ccc]
        public_631f893 : nop
        fld dword ptr ds : [public_63a3cc8]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_631f8aa
        fstp st(0)
        fld dword ptr ds : [public_63a3cc8]
        public_631f8aa : nop
        pop edi
        fstp dword ptr ds : [ecx]
        pop esi
        mov eax, ebx
        pop ebx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x631f7a0)
    }
}

#undef public_631f7d2
#undef public_631f81b
#undef public_631f832
#undef public_631f838
#undef public_631f84f
#undef public_631f873
#undef public_631f893
#undef public_631f8aa
