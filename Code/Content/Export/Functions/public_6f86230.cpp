#include "Content-PCH.h"


#define public_6f86260 _public_6f86260
#define public_6f86275 _public_6f86275
#define public_6f862bf _public_6f862bf
#define public_6f862cb _public_6f862cb
#define public_6f862d9 _public_6f862d9

PROC_DECLARE(0x6f86230, internal_6f86230, public_6f86230);
extern "C" NAKED register_t __cdecl internal_6f86230()
{
    __asm
    {
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+8]
        test eax, eax
        jne public_6f862d9
        mov eax, dword ptr ds : [edi+0x1C]
        push ebp
        push esi
        lea ebp, ds:[edi+4]
        push eax
        mov ecx, ebp
        call dword ptr ds : [public_6fb303c]
        mov esi, dword ptr ds : [edi+0x24]
        cmp esi, dword ptr ds : [edi+0x28]
        je public_6f86275
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        lea esp, ss:[esp]
        public_6f86260 : nop
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ebx]
        push ebp
        push eax
        mov ecx, ebx
        call dword ptr ds : [edx]
        mov eax, dword ptr ds : [edi+0x28]
        add esi, 4
        cmp esi, eax
        jne public_6f86260
        pop ebx
        public_6f86275 : nop
        mov ecx, ebp
        call dword ptr ds : [public_6fb3038]
        fld dword ptr ds : [edi+0x50]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_6fb5810]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jp public_6f862bf
        fld dword ptr ds : [edi+0x54]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_6fb5810]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jp public_6f862bf
        fld dword ptr ds : [edi+0x58]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_6fb5810]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jnp public_6f862cb
        public_6f862bf : nop
        lea ecx, ds:[edi+0x48]
        push ecx
        mov ecx, ebp
        call dword ptr ds : [public_6fb3174]
        public_6f862cb : nop
        mov edx, dword ptr ds : [edi+0x5C]
        push edx
        mov ecx, ebp
        call dword ptr ds : [public_6fb3148]
        pop esi
        pop ebp
        public_6f862d9 : nop
        lea eax, ds:[edi+4]
        pop edi
        ret 4
        UNREACHABLE_TRAP(0x6f86230)
    }
}

#undef public_6f86260
#undef public_6f86275
#undef public_6f862bf
#undef public_6f862cb
#undef public_6f862d9
