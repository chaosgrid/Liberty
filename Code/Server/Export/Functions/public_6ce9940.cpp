#include "Server-PCH.h"


#define public_6ce995e _public_6ce995e
#define public_6ce9960 _public_6ce9960
#define public_6ce9a0f _public_6ce9a0f
#define public_6ce9a26 _public_6ce9a26
#define public_6ce9a3d _public_6ce9a3d
#define public_6ce9a50 _public_6ce9a50
#define public_6ce9a82 _public_6ce9a82

PROC_DECLARE(0x6ce9940, internal_6ce9940, public_6ce9940);
extern "C" NAKED register_t __cdecl internal_6ce9940()
{
    __asm
    {
        sub esp, 0x18
        push ebx
        push esi
        mov ebx, ecx
        push edi
        mov edi, dword ptr ds : [ebx+0x10]
        test edi, edi
        je public_6ce995e
        mov eax, dword ptr ds : [edi+0x4C]
        and eax, 0x103
        cmp eax, 0x103
        je public_6ce9960
        public_6ce995e : nop
        xor edi, edi
        public_6ce9960 : nop
        fld dword ptr ds : [edi+0x19C]
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 5
        jnp public_6ce9a82
        mov esi, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [esi+0x18]
        fld dword ptr ds : [ecx+0x10]
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x44
        jnp public_6ce9a82
        fld dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        fld st(0)
        lea eax, ss:[esp+0x18]
        fmul st, st(1)
        push eax
        mov ecx, edi
        fstp dword ptr ss : [esp+0x10]
        fstp st(0)
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_6d655d4]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_6d655d0]
        fstp dword ptr ss : [esp+0x18]
        call dword ptr ds : [edx+0x64]
        fld dword ptr ds : [esi+0xC]
        fsub dword ptr ss : [esp+0x18]
        fld dword ptr ds : [esi+0x10]
        fsub dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [esi+0x14]
        fsub dword ptr ss : [esp+0x20]
        fld st(0)
        fmul st, st(1)
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(4)
        fmul st, st(5)
        fsubp 
        fstp st(4)
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fcom dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x41
        je public_6ce9a0f
        fstp st(0)
        fld dword ptr ds : [public_6d65188]
        public_6ce9a0f : nop
        fcom dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 5
        jp public_6ce9a26
        fstp st(0)
        mov dword ptr ss : [esp+0x28], 3
        jmp public_6ce9a50
        public_6ce9a26 : nop
        fcom dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 5
        jp public_6ce9a3d
        fstp st(0)
        mov dword ptr ss : [esp+0x28], 2
        jmp public_6ce9a50
        public_6ce9a3d : nop
        fcomp dword ptr ss : [esp+0xC]
        fnstsw ax
        test ah, 5
        jp public_6ce9a82
        mov dword ptr ss : [esp+0x28], 1
        public_6ce9a50 : nop
        mov ecx, edi
        call dword ptr ds : [public_6d6419c]
        fld dword ptr ds : [eax+0x28]
        fild dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [esi+0x18]
        mov eax, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ds : [ebx]
        fmul dword ptr ds : [public_6d655cc]
        push eax
        push ecx
        fmul dword ptr ds : [ecx+0x10]
        mov ecx, ebx
        fmul st, st(1)
        fstp dword ptr ss : [esp]
        fstp st(0)
        call dword ptr ds : [edx+0x21C]
        public_6ce9a82 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x18
        ret 8
        UNREACHABLE_TRAP(0x6ce9940)
    }
}

#undef public_6ce995e
#undef public_6ce9960
#undef public_6ce9a0f
#undef public_6ce9a26
#undef public_6ce9a3d
#undef public_6ce9a50
#undef public_6ce9a82
