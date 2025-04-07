#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6209f90);
CLANG_FORWARD_PROC_SYMBOL(public_620c980);
CLANG_FORWARD_PROC_SYMBOL(public_620caa0);

#define public_6206ecc _public_6206ecc
#define public_6206eea _public_6206eea
#define public_6206f15 _public_6206f15

PROC_DECLARE(0x6206ea0, internal_6206ea0, public_6206ea0);
extern "C" NAKED register_t __cdecl internal_6206ea0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push edi
        xor edi, edi
        mov ecx, dword ptr ds : [eax+0xC]
        mov edx, dword ptr ds : [eax+0xC]
        lea esi, ds:[eax+8]
        mov dword ptr ss : [esp+0xC], ecx
        mov eax, dword ptr ds : [esi+0xC]
        lea eax, ds:[edx+eax*8+8]
        cmp ecx, eax
        setne al
        test al, al
        je public_6206eea
        mov eax, dword ptr ds : [esi+0xC]
        lea edx, ds:[edx+eax*8+8]
        public_6206ecc : nop
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [ecx]
        fnstsw ax
        test ah, 5
        jnp public_6206eea
        add ecx, 8
        inc edi
        cmp ecx, edx
        mov dword ptr ss : [esp+0xC], ecx
        setne al
        test al, al
        jne public_6206ecc
        public_6206eea : nop
        mov eax, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [esi+4]
        lea eax, ds:[edx+eax*8+8]
        cmp ecx, eax
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x10]
        push eax
        push ecx
        jne public_6206f15
        lea edx, ss:[esp+0x18]
        mov ecx, esi
        push edx
        call public_620c980
        mov eax, edi
        pop edi
        pop esi
        ret 0xC
        public_6206f15 : nop
        push ecx
        lea edx, ss:[esp+0x18]
        mov ecx, esp
        push edx
        call public_6209f90
        lea eax, ss:[esp+0x1C]
        mov ecx, esi
        push eax
        call public_620caa0
        mov eax, edi
        pop edi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6206ea0)
    }
}

#undef public_6206ecc
#undef public_6206eea
#undef public_6206f15
