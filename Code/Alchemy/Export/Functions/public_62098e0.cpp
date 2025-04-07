#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6209d30);
CLANG_FORWARD_PROC_SYMBOL(public_620c1a0);
CLANG_FORWARD_PROC_SYMBOL(public_620c230);
CLANG_FORWARD_PROC_SYMBOL(public_6246188);

#define public_6209947 _public_6209947
#define public_6209965 _public_6209965
#define public_6209987 _public_6209987
#define public_62099a5 _public_62099a5
#define public_62099d8 _public_62099d8
#define public_62099e1 _public_62099e1

PROC_DECLARE(0x62098e0, internal_62098e0, public_62098e0);
extern "C" NAKED register_t __cdecl internal_62098e0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [edi+4]
        fmul dword ptr ds : [public_624babc]
        call public_6246188
        fld dword ptr ds : [edi]
        fmul dword ptr ds : [public_624babc]
        mov esi, eax
        call public_6246188
        fld dword ptr ds : [edi+8]
        shl eax, 8
        fmul dword ptr ds : [public_624babc]
        or esi, eax
        shl esi, 8
        call public_6246188
        mov ebx, dword ptr ss : [esp+0x14]
        or esi, eax
        xor ebp, ebp
        mov eax, dword ptr ds : [ebx+0x14]
        mov edx, dword ptr ds : [ebx+0xC]
        mov ecx, dword ptr ds : [ebx+0xC]
        lea edi, ds:[ebx+8]
        lea eax, ds:[edx+eax*8+8]
        mov dword ptr ss : [esp+0x1C], ecx
        cmp ecx, eax
        setne al
        test al, al
        je public_6209965
        mov eax, dword ptr ds : [edi+0xC]
        lea edx, ds:[edx+eax*8+8]
        public_6209947 : nop
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [ecx]
        fnstsw ax
        test ah, 5
        jnp public_6209965
        add ecx, 8
        inc ebp
        cmp ecx, edx
        mov dword ptr ss : [esp+0x1C], ecx
        setne al
        test al, al
        jne public_6209947
        public_6209965 : nop
        mov eax, dword ptr ds : [edi+0xC]
        mov edx, dword ptr ds : [edi+4]
        push esi
        lea eax, ds:[edx+eax*8+8]
        cmp ecx, eax
        jne public_6209987
        mov eax, dword ptr ss : [esp+0x1C]
        lea ecx, ss:[esp+0x1C]
        push eax
        push ecx
        mov ecx, edi
        call public_620c1a0
        jmp public_62099a5
        public_6209987 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        lea eax, ss:[esp+0x20]
        push edx
        push ecx
        mov ecx, esp
        push eax
        call public_6209d30
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, edi
        call public_620c230
        public_62099a5 : nop
        mov edx, dword ptr ds : [ebx+0x14]
        xor eax, eax
        inc edx
        mov dword ptr ds : [ebx+0x20], eax
        cmp edx, 1
        mov dword ptr ds : [ebx+0x1C], eax
        jle public_62099e1
        mov eax, dword ptr ds : [ebx+0xC]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [eax]
        fcom dword ptr ds : [public_624bc38]
        fnstsw ax
        test ah, 0x44
        mov eax, ebp
        jnp public_62099d8
        fld dword ptr ds : [public_624bac4]
        fdiv st, st(1)
        fstp dword ptr ds : [ebx+0x1C]
        public_62099d8 : nop
        fstp st(0)
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_62099e1 : nop
        pop edi
        mov eax, ebp
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x62098e0)
    }
}

#undef public_6209947
#undef public_6209965
#undef public_6209987
#undef public_62099a5
#undef public_62099d8
#undef public_62099e1
