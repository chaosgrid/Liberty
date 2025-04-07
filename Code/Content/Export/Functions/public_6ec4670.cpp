#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15b90);

#define public_6ec4695 _public_6ec4695
#define public_6ec46a9 _public_6ec46a9
#define public_6ec470d _public_6ec470d
#define public_6ec472b _public_6ec472b
#define public_6ec473a _public_6ec473a
#define public_6ec473e _public_6ec473e

PROC_DECLARE(0x6ec4670, internal_6ec4670, public_6ec4670);
extern "C" NAKED register_t __cdecl internal_6ec4670()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x78]
        push edi
        mov edi, 0x3FFFFFFF
        xor bl, bl
        test edi, eax
        jne public_6ec4695
        mov ecx, dword ptr ds : [esi+4]
        lea eax, ds:[esi+0x10]
        push eax
        call public_6f15b90
        mov dword ptr ds : [esi+0x78], eax
        public_6ec4695 : nop
        test dword ptr ds : [esi+0x7C], edi
        jne public_6ec46a9
        lea ecx, ds:[esi+0x44]
        push ecx
        mov ecx, dword ptr ds : [esi+4]
        call public_6f15b90
        mov dword ptr ds : [esi+0x7C], eax
        public_6ec46a9 : nop
        mov eax, dword ptr ds : [esi+0x78]
        test edi, eax
        je public_6ec473e
        test dword ptr ds : [esi+0x7C], edi
        je public_6ec473e
        mov edi, dword ptr ds : [public_6fb364c]
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        call edi
        mov ecx, dword ptr ds : [esi+0x7C]
        lea eax, ss:[esp+0x18]
        push eax
        push ecx
        call edi
        lea edx, ss:[esp+0x1C]
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x2C]
        push ecx
        call dword ptr ds : [public_6fb365c]
        mov eax, dword ptr ds : [esi+0xC]
        add esp, 0x1C
        sub eax, 0
        je public_6ec472b
        dec eax
        je public_6ec470d
        dec eax
        jne public_6ec473e
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [esi+0x80]
        fnstsw ax
        test ah, 0x44
        jmp public_6ec473a
        public_6ec470d : nop
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [esi+0x80]
        fnstsw ax
        test ah, 1
        jne public_6ec473e
        pop edi
        mov bl, 1
        pop esi
        mov al, bl
        pop ebx
        add esp, 0xC
        ret 8
        public_6ec472b : nop
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [esi+0x80]
        fnstsw ax
        test ah, 0x41
        public_6ec473a : nop
        jp public_6ec473e
        mov bl, 1
        public_6ec473e : nop
        pop edi
        pop esi
        mov al, bl
        pop ebx
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x6ec4670)
    }
}

#undef public_6ec4695
#undef public_6ec46a9
#undef public_6ec470d
#undef public_6ec472b
#undef public_6ec473a
#undef public_6ec473e
