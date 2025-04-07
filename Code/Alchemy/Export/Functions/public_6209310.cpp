#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6209d30);
CLANG_FORWARD_PROC_SYMBOL(public_620c1a0);
CLANG_FORWARD_PROC_SYMBOL(public_620c230);

#define public_620933d _public_620933d
#define public_620935b _public_620935b
#define public_6209383 _public_6209383
#define public_62093a8 _public_62093a8
#define public_62093e1 _public_62093e1
#define public_62093e9 _public_62093e9

PROC_DECLARE(0x6209310, internal_6209310, public_6209310);
extern "C" NAKED register_t __cdecl internal_6209310()
{
    __asm
    {
        push ebp
        mov ebp, dword ptr ss : [esp+8]
        push esi
        push edi
        mov eax, dword ptr ss : [ebp+0x14]
        mov edx, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ss : [ebp+0xC]
        lea esi, ss:[ebp+8]
        lea eax, ds:[edx+eax*8+8]
        xor edi, edi
        cmp ecx, eax
        mov dword ptr ss : [esp+0x10], ecx
        setne al
        test al, al
        je public_620935b
        mov eax, dword ptr ds : [esi+0xC]
        lea edx, ds:[edx+eax*8+8]
        public_620933d : nop
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [ecx]
        fnstsw ax
        test ah, 5
        jnp public_620935b
        add ecx, 8
        inc edi
        cmp ecx, edx
        mov dword ptr ss : [esp+0x10], ecx
        setne al
        test al, al
        jne public_620933d
        public_620935b : nop
        mov eax, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [esi+4]
        lea eax, ds:[edx+eax*8+8]
        cmp ecx, eax
        jne public_6209383
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax]
        lea eax, ss:[esp+0x14]
        push ecx
        push edx
        push eax
        mov ecx, esi
        call public_620c1a0
        jmp public_62093a8
        public_6209383 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ecx]
        push edx
        push eax
        push ecx
        lea edx, ss:[esp+0x1C]
        mov ecx, esp
        push edx
        call public_6209d30
        lea eax, ss:[esp+0x20]
        mov ecx, esi
        push eax
        call public_620c230
        public_62093a8 : nop
        mov ecx, dword ptr ss : [ebp+0x14]
        mov dword ptr ss : [ebp+0x20], 0
        inc ecx
        mov dword ptr ss : [ebp+0x1C], 0
        cmp ecx, 1
        jle public_62093e9
        mov eax, dword ptr ss : [ebp+0xC]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [eax]
        fcom dword ptr ds : [public_624bc38]
        fnstsw ax
        test ah, 0x44
        mov eax, edi
        jnp public_62093e1
        fld dword ptr ds : [public_624bac4]
        fdiv st, st(1)
        fstp dword ptr ss : [ebp+0x1C]
        public_62093e1 : nop
        fstp st(0)
        pop edi
        pop esi
        pop ebp
        ret 0xC
        public_62093e9 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6209310)
    }
}

#undef public_620933d
#undef public_620935b
#undef public_6209383
#undef public_62093a8
#undef public_62093e1
#undef public_62093e9
