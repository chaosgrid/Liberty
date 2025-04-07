#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6209dc0);
CLANG_FORWARD_PROC_SYMBOL(public_620c300);
CLANG_FORWARD_PROC_SYMBOL(public_620c420);

#define public_620767c _public_620767c
#define public_620769a _public_620769a
#define public_62076c5 _public_62076c5

PROC_DECLARE(0x6207650, internal_6207650, public_6207650);
extern "C" NAKED register_t __cdecl internal_6207650()
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
        je public_620769a
        mov eax, dword ptr ds : [esi+0xC]
        lea edx, ds:[edx+eax*8+8]
        public_620767c : nop
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [ecx]
        fnstsw ax
        test ah, 5
        jnp public_620769a
        add ecx, 8
        inc edi
        cmp ecx, edx
        mov dword ptr ss : [esp+0xC], ecx
        setne al
        test al, al
        jne public_620767c
        public_620769a : nop
        mov eax, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [esi+4]
        lea eax, ds:[edx+eax*8+8]
        cmp ecx, eax
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x10]
        push eax
        push ecx
        jne public_62076c5
        lea edx, ss:[esp+0x18]
        mov ecx, esi
        push edx
        call public_620c300
        mov eax, edi
        pop edi
        pop esi
        ret 0xC
        public_62076c5 : nop
        push ecx
        lea edx, ss:[esp+0x18]
        mov ecx, esp
        push edx
        call public_6209dc0
        lea eax, ss:[esp+0x1C]
        mov ecx, esi
        push eax
        call public_620c420
        mov eax, edi
        pop edi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6207650)
    }
}

#undef public_620767c
#undef public_620769a
#undef public_62076c5
