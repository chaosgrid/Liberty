#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66126e0);
CLANG_FORWARD_PROC_SYMBOL(public_661ad90);

#define public_6612759 _public_6612759
#define public_6612784 _public_6612784
#define public_66127a8 _public_66127a8
#define public_66127af _public_66127af
#define public_66127b6 _public_66127b6
#define public_66127c9 _public_66127c9
#define public_66127d0 _public_66127d0

PROC_DECLARE(0x66126e0, internal_66126e0, public_66126e0);
extern "C" NAKED register_t __cdecl internal_66126e0()
{
    __asm
    {
        sub esp, 0x1C
        mov eax, dword ptr ss : [esp+0x20]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, eax
        xor ebp, ebp
        fld dword ptr ss : [esp+0x38]
        and ecx, 0xFE
        and eax, 1
        mov edx, ebp
        mov dword ptr ss : [esp+0x14], ecx
        sete dl
        mov ecx, dword ptr ss : [esp+0x3C]
        mov esi, dword ptr ds : [edi+0xC]
        lea edx, ds:[edx+edx-1]
        mov ebx, dword ptr ds : [edi+0x10]
        fabs 
        mov dword ptr ss : [esp+0x30], edx
        mov edx, dword ptr ss : [esp+0x40]
        fild dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x1C], ecx
        mov ecx, dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x20], edx
        mov edx, dword ptr ss : [esp+0x48]
        fmulp 
        mov dword ptr ss : [esp+0x24], ecx
        mov ecx, dword ptr ss : [esp+0x34]
        test eax, eax
        fstp dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x28], edx
        mov dword ptr ss : [esp+0x10], ecx
        je public_66127af
        cmp esi, ebx
        mov dword ptr ss : [esp+0x30], 0xBF800000
        jae public_66127af
        public_6612759 : nop
        fld dword ptr ss : [esp+0x30]
        fcomp dword ptr ds : [public_66291e0]
        fnstsw ax
        test ah, 5
        jp public_6612784
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edx+0x24]
        lea edx, ss:[esp+0x38]
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x30], eax
        jmp public_66127a8
        public_6612784 : nop
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [ecx+0x24]
        lea ecx, ss:[esp+0x3C]
        push ecx
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+0x10]
        fld dword ptr ss : [esp+0x30]
        fcomp dword ptr ss : [esp+0x3C]
        fnstsw ax
        test ah, 0x44
        jnp public_66127a8
        mov ebp, 1
        public_66127a8 : nop
        add esi, 4
        cmp esi, ebx
        jb public_6612759
        public_66127af : nop
        mov edi, dword ptr ds : [edi+0xC]
        cmp edi, ebx
        jae public_66127d0
        public_66127b6 : nop
        mov ecx, dword ptr ds : [edi]
        lea edx, ss:[esp+0x10]
        push edx
        call public_661ad90
        test al, al
        jne public_66127c9
        or ebp, 0xFFFFFFFF
        public_66127c9 : nop
        add edi, 4
        cmp edi, ebx
        jb public_66127b6
        public_66127d0 : nop
        pop edi
        mov eax, ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1C
        ret 0x1C
        UNREACHABLE_TRAP(0x66126e0)
    }
}

#undef public_6612759
#undef public_6612784
#undef public_66127a8
#undef public_66127af
#undef public_66127b6
#undef public_66127c9
#undef public_66127d0
