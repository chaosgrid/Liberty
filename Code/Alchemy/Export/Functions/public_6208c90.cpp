#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6209b80);
CLANG_FORWARD_PROC_SYMBOL(public_620bf10);
CLANG_FORWARD_PROC_SYMBOL(public_620bfa0);

#define public_6208cbd _public_6208cbd
#define public_6208cdb _public_6208cdb
#define public_6208d03 _public_6208d03
#define public_6208d28 _public_6208d28
#define public_6208d61 _public_6208d61
#define public_6208d69 _public_6208d69

PROC_DECLARE(0x6208c90, internal_6208c90, public_6208c90);
extern "C" NAKED register_t __cdecl internal_6208c90()
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
        je public_6208cdb
        mov eax, dword ptr ds : [esi+0xC]
        lea edx, ds:[edx+eax*8+8]
        public_6208cbd : nop
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [ecx]
        fnstsw ax
        test ah, 5
        jnp public_6208cdb
        add ecx, 8
        inc edi
        cmp ecx, edx
        mov dword ptr ss : [esp+0x10], ecx
        setne al
        test al, al
        jne public_6208cbd
        public_6208cdb : nop
        mov eax, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [esi+4]
        lea eax, ds:[edx+eax*8+8]
        cmp ecx, eax
        jne public_6208d03
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax]
        lea eax, ss:[esp+0x14]
        push ecx
        push edx
        push eax
        mov ecx, esi
        call public_620bf10
        jmp public_6208d28
        public_6208d03 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ecx]
        push edx
        push eax
        push ecx
        lea edx, ss:[esp+0x1C]
        mov ecx, esp
        push edx
        call public_6209b80
        lea eax, ss:[esp+0x20]
        mov ecx, esi
        push eax
        call public_620bfa0
        public_6208d28 : nop
        mov ecx, dword ptr ss : [ebp+0x14]
        mov dword ptr ss : [ebp+0x20], 0
        inc ecx
        mov dword ptr ss : [ebp+0x1C], 0
        cmp ecx, 1
        jle public_6208d69
        mov eax, dword ptr ss : [ebp+0xC]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [eax]
        fcom dword ptr ds : [public_624bc38]
        fnstsw ax
        test ah, 0x44
        mov eax, edi
        jnp public_6208d61
        fld dword ptr ds : [public_624bac4]
        fdiv st, st(1)
        fstp dword ptr ss : [ebp+0x1C]
        public_6208d61 : nop
        fstp st(0)
        pop edi
        pop esi
        pop ebp
        ret 0xC
        public_6208d69 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6208c90)
    }
}

#undef public_6208cbd
#undef public_6208cdb
#undef public_6208d03
#undef public_6208d28
#undef public_6208d61
#undef public_6208d69
