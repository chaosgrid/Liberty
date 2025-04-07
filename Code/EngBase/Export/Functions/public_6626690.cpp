#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661caa0);
CLANG_FORWARD_PROC_SYMBOL(public_6628190);

#define public_66267a0 _public_66267a0
#define public_66267e3 _public_66267e3
#define public_6626837 _public_6626837
#define public_6626883 _public_6626883
#define public_66268c9 _public_66268c9
#define public_6626944 _public_6626944
#define public_6626948 _public_6626948
#define public_6626978 _public_6626978
#define public_6626982 _public_6626982
#define public_662698a _public_662698a

PROC_DECLARE(0x6626690, internal_6626690, public_6626690);
extern "C" NAKED register_t __cdecl internal_6626690()
{
    __asm
    {
        sub esp, 0x178
        mov edx, dword ptr ss : [esp+0x180]
        push ebx
        mov ebx, dword ptr ss : [esp+0x180]
        push ebp
        or ebp, 0xFFFFFFFF
        push esi
        mov eax, dword ptr ds : [ebx+0x30]
        mov dword ptr ss : [esp+0x74], ebp
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x64]
        mov esi, eax
        cmp esi, ebp
        mov dword ptr ss : [esp+0x1C], esi
        je public_6626982
        mov edx, dword ptr ss : [esp+0x190]
        mov eax, dword ptr ds : [ebx]
        lea ecx, ss:[esp+0xF4]
        push ecx
        push edx
        push esi
        push ebx
        call dword ptr ds : [eax+0xC]
        test al, al
        je public_6626982
        mov eax, dword ptr ds : [ebx+0x30]
        mov edx, dword ptr ss : [esp+0x194]
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x64]
        mov ebp, eax
        cmp ebp, 0xFFFFFFFF
        je public_6626978
        mov edx, dword ptr ss : [esp+0x198]
        mov eax, dword ptr ds : [ebx]
        lea ecx, ss:[esp+0x2C]
        push ecx
        push edx
        push ebp
        push ebx
        call dword ptr ds : [eax+0xC]
        test al, al
        je public_6626978
        mov eax, dword ptr ss : [esp+0x2C]
        push edi
        test eax, eax
        mov dword ptr ss : [esp+0x10], 3
        mov dword ptr ss : [esp+0x78], eax
        je public_6626837
        jle public_6626948
        cmp eax, 2
        jg public_6626948
        mov eax, dword ptr ss : [esp+0xFC]
        mov ecx, dword ptr ss : [esp+0x100]
        mov edx, dword ptr ss : [esp+0x104]
        mov dword ptr ss : [esp+0x7C], eax
        mov eax, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x80], ecx
        mov ecx, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x88], eax
        mov eax, dword ptr ds : [public_662b1b4]
        mov dword ptr ss : [esp+0x84], edx
        mov edx, dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0x8C], ecx
        test eax, eax
        mov dword ptr ss : [esp+0x90], edx
        jne public_66267a0
        call public_6628190
        mov dword ptr ds : [public_662b1b4], eax
        public_66267a0 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x40]
        push edx
        lea edx, ss:[esp+0x10C]
        push edx
        lea edx, ss:[esp+0xDC]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ds : [public_662b1b4]
        mov ecx, 9
        lea esi, ss:[esp+0xD4]
        lea edi, ss:[esp+0x94]
        test eax, eax
        rep movsd
        jne public_66267e3
        call public_6628190
        mov dword ptr ds : [public_662b1b4], eax
        public_66267e3 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x64]
        push edx
        lea edx, ss:[esp+0x98]
        push edx
        lea edx, ss:[esp+0x1C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0xB8], eax
        mov eax, dword ptr ss : [esp+0x70]
        mov dword ptr ss : [esp+0xBC], ecx
        mov ecx, dword ptr ss : [esp+0x74]
        mov dword ptr ss : [esp+0xC0], edx
        mov dword ptr ss : [esp+0xC4], eax
        mov dword ptr ss : [esp+0xC8], ecx
        jmp public_6626944
        public_6626837 : nop
        mov edx, dword ptr ss : [esp+0x60]
        mov eax, dword ptr ss : [esp+0x54]
        mov ecx, dword ptr ss : [esp+0x48]
        push edx
        mov edx, dword ptr ss : [esp+0x60]
        push eax
        mov eax, dword ptr ss : [esp+0x58]
        push ecx
        mov ecx, dword ptr ss : [esp+0x50]
        push edx
        mov edx, dword ptr ss : [esp+0x68]
        push eax
        mov eax, dword ptr ss : [esp+0x60]
        push ecx
        mov ecx, dword ptr ss : [esp+0x58]
        push edx
        push eax
        push ecx
        lea ecx, ss:[esp+0x164]
        call public_661caa0
        mov eax, dword ptr ds : [public_662b1b4]
        test eax, eax
        jne public_6626883
        call public_6628190
        mov dword ptr ds : [public_662b1b4], eax
        public_6626883 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x140]
        push ecx
        lea ecx, ss:[esp+0x10C]
        push ecx
        lea ecx, ss:[esp+0x16C]
        push ecx
        push eax
        call dword ptr ds : [edx+0x20]
        mov eax, dword ptr ds : [public_662b1b4]
        mov ecx, 9
        lea esi, ss:[esp+0x164]
        lea edi, ss:[esp+0xD4]
        test eax, eax
        rep movsd
        jne public_66268c9
        call public_6628190
        mov dword ptr ds : [public_662b1b4], eax
        public_66268c9 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x34]
        push ecx
        lea ecx, ss:[esp+0xD8]
        push ecx
        lea ecx, ss:[esp+0x2C]
        push ecx
        push eax
        call dword ptr ds : [edx+0x2C]
        fld dword ptr ss : [esp+0xFC]
        fsub dword ptr ss : [esp+0x24]
        lea esi, ss:[esp+0xD4]
        lea edi, ss:[esp+0x94]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x100]
        fsub dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x88], edx
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x104]
        fsub dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x8C], eax
        fstp dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x90], ecx
        mov ecx, 9
        rep movsd
        public_6626944 : nop
        mov esi, dword ptr ss : [esp+0x20]
        public_6626948 : nop
        mov eax, dword ptr ds : [ebx+0x30]
        lea ecx, ss:[esp+0x78]
        push ecx
        mov ecx, dword ptr ss : [esp+0x19C]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, dword ptr ss : [esp+0x198]
        push ecx
        push eax
        call dword ptr ds : [edx+0xBC]
        test eax, eax
        pop edi
        je public_662698a
        mov dword ptr ss : [esp+0xC], 0
        jmp public_662698a
        public_6626978 : nop
        mov dword ptr ss : [esp+0xC], 2
        jmp public_662698a
        public_6626982 : nop
        mov dword ptr ss : [esp+0xC], 1
        public_662698a : nop
        mov eax, dword ptr ds : [ebx+0x30]
        push ebp
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+0x3C]
        mov ebx, dword ptr ds : [ebx+0x30]
        push esi
        push ebx
        mov eax, dword ptr ds : [ebx]
        call dword ptr ds : [eax+0x3C]
        pop esi
        pop ebp
        mov eax, dword ptr ss : [esp+4]
        pop ebx
        add esp, 0x178
        ret 0x14
        UNREACHABLE_TRAP(0x6626690)
    }
}

#undef public_66267a0
#undef public_66267e3
#undef public_6626837
#undef public_6626883
#undef public_66268c9
#undef public_6626944
#undef public_6626948
#undef public_6626978
#undef public_6626982
#undef public_662698a
