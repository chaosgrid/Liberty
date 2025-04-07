#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6209f00);
CLANG_FORWARD_PROC_SYMBOL(public_620c640);
CLANG_FORWARD_PROC_SYMBOL(public_620c760);

#define public_6207e2c _public_6207e2c
#define public_6207e4a _public_6207e4a
#define public_6207e75 _public_6207e75

PROC_DECLARE(0x6207e00, internal_6207e00, public_6207e00);
extern "C" NAKED register_t __cdecl internal_6207e00()
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
        je public_6207e4a
        mov eax, dword ptr ds : [esi+0xC]
        lea edx, ds:[edx+eax*8+8]
        public_6207e2c : nop
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [ecx]
        fnstsw ax
        test ah, 5
        jnp public_6207e4a
        add ecx, 8
        inc edi
        cmp ecx, edx
        mov dword ptr ss : [esp+0xC], ecx
        setne al
        test al, al
        jne public_6207e2c
        public_6207e4a : nop
        mov eax, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [esi+4]
        lea eax, ds:[edx+eax*8+8]
        cmp ecx, eax
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x10]
        push eax
        push ecx
        jne public_6207e75
        lea edx, ss:[esp+0x18]
        mov ecx, esi
        push edx
        call public_620c640
        mov eax, edi
        pop edi
        pop esi
        ret 0xC
        public_6207e75 : nop
        push ecx
        lea edx, ss:[esp+0x18]
        mov ecx, esp
        push edx
        call public_6209f00
        lea eax, ss:[esp+0x1C]
        mov ecx, esi
        push eax
        call public_620c760
        mov eax, edi
        pop edi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6207e00)
    }
}

#undef public_6207e2c
#undef public_6207e4a
#undef public_6207e75
