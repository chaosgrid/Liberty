#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_406880);
CLANG_FORWARD_PROC_SYMBOL(public_411350);
CLANG_FORWARD_PROC_SYMBOL(public_4215b0);
CLANG_FORWARD_PROC_SYMBOL(public_447b60);
CLANG_FORWARD_PROC_SYMBOL(public_447bb0);
CLANG_FORWARD_PROC_SYMBOL(public_447be0);
CLANG_FORWARD_PROC_SYMBOL(public_528d70);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_528df0 _public_528df0
#define public_528e2f _public_528e2f
#define public_528edc _public_528edc
#define public_528f39 _public_528f39
#define public_528f48 _public_528f48
#define public_528f77 _public_528f77

PROC_DECLARE(0x528d70, internal_528d70, public_528d70);
extern "C" NAKED register_t __cdecl internal_528d70()
{
    __asm
    {
        sub esp, 0x164
        push ebp
        mov ebp, ecx
        push esi
        mov esi, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [esi+0x38]
        test eax, eax
        je public_528f77
        mov ecx, dword ptr ds : [esi+0x3C]
        sub ecx, eax
        mov eax, 0x88888889
        imul ecx
        add edx, ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0xC], edx
        je public_528f77
        push ebx
        push edi
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x10], 0
        call public_4215b0
        mov ebx, dword ptr ds : [esi+0x38]
        mov esi, dword ptr ds : [esi+0x3C]
        cmp ebx, esi
        mov edi, dword ptr ss : [esp+0x178]
        mov dword ptr ss : [esp+0x5C], 0
        mov dword ptr ss : [esp+0x58], 0
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x14], esi
        je public_528f48
        mov edi, edi
        public_528df0 : nop
        lea ecx, ss:[esp+0x30]
        push ecx
        mov ecx, ebx
        call dword ptr ds : [public_5c684c]
        test al, al
        je public_528f39
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0xA0]
        mov esi, eax
        mov eax, dword ptr ds : [public_6753f8]
        test eax, eax
        jne public_528e2f
        call public_5b73e0
        mov dword ptr ds : [public_6753f8], eax
        public_528e2f : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x30]
        push edx
        push esi
        lea edx, ss:[esp+0xBC]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        lea eax, ss:[esp+0xB4]
        push eax
        lea ecx, ss:[esp+0x118]
        call public_406880
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        mov esi, eax
        lea eax, ds:[esi+0x24]
        push eax
        lea ecx, ss:[esp+0x1C]
        push esi
        push ecx
        call public_447be0
        add esp, 0xC
        lea edx, ss:[esp+0x24]
        push edx
        lea ecx, ss:[esp+0x1C]
        call public_411350
        mov eax, dword ptr ds : [esi+0x20]
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [esi+8]
        push eax
        mov eax, dword ptr ds : [esi+0x1C]
        push ecx
        mov ecx, dword ptr ds : [esi+0x10]
        push edx
        mov edx, dword ptr ds : [esi+4]
        push eax
        mov eax, dword ptr ds : [esi+0x18]
        push ecx
        mov ecx, dword ptr ds : [esi+0xC]
        push edx
        mov edx, dword ptr ds : [esi]
        push eax
        push ecx
        push edx
        lea ecx, ss:[esp+0xB4]
        call public_447b60
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x94]
        push ecx
        lea ecx, ss:[esp+0xEC]
        call public_447bb0
        mov eax, dword ptr ds : [public_6753f8]
        test eax, eax
        jne public_528edc
        call public_5b73e0
        mov dword ptr ds : [public_6753f8], eax
        public_528edc : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x114]
        push ecx
        lea ecx, ss:[esp+0xE8]
        push ecx
        lea ecx, ss:[esp+0x14C]
        push ecx
        push eax
        call dword ptr ds : [edx+0x1C]
        lea edx, ss:[esp+0x144]
        push edx
        lea ecx, ss:[esp+0x64]
        call public_406880
        fld dword ptr ss : [esp+0x84]
        fadd dword ptr ds : [edi]
        mov eax, dword ptr ss : [esp+0x10]
        inc eax
        mov dword ptr ss : [esp+0x10], eax
        fstp dword ptr ds : [edi]
        fld dword ptr ss : [esp+0x88]
        fadd dword ptr ds : [edi+4]
        fstp dword ptr ds : [edi+4]
        fld dword ptr ss : [esp+0x8C]
        fadd dword ptr ds : [edi+8]
        fstp dword ptr ds : [edi+8]
        public_528f39 : nop
        mov eax, dword ptr ss : [esp+0x14]
        add ebx, 0x3C
        cmp ebx, eax
        jne public_528df0
        public_528f48 : nop
        fild dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x10]
        fdivr dword ptr ds : [public_5c75dc]
        fld st(0)
        fmul dword ptr ds : [edi]
        fstp dword ptr ds : [edi]
        fld st(0)
        fmul dword ptr ds : [edi+4]
        fstp dword ptr ds : [edi+4]
        fmul dword ptr ds : [edi+8]
        fstp dword ptr ds : [edi+8]
        pop edi
        pop ebx
        pop esi
        pop ebp
        add esp, 0x164
        ret 4
        public_528f77 : nop
        pop esi
        xor eax, eax
        pop ebp
        add esp, 0x164
        ret 4
        UNREACHABLE_TRAP(0x528d70)
    }
}

#undef public_528df0
#undef public_528e2f
#undef public_528edc
#undef public_528f39
#undef public_528f48
#undef public_528f77
