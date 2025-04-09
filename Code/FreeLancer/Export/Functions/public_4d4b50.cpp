#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4d4b50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_4d4bb0 _public_4d4bb0
#define public_4d4bb4 _public_4d4bb4
#define public_4d4bfe _public_4d4bfe
#define public_4d4c1a _public_4d4c1a
#define public_4d4c45 _public_4d4c45
#define public_4d4c4d _public_4d4c4d
#define public_4d4c5e _public_4d4c5e

PROC_DECLARE(0x4d4b50, internal_4d4b50, public_4d4b50);
extern "C" NAKED register_t __cdecl internal_4d4b50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        sub esp, 0x10
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x20]
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [ebp], 0
        mov dword ptr ds : [eax], 0
        mov ecx, dword ptr ds : [esi+0xB0]
        cmp ecx, dword ptr ds : [public_674950]
        push edi
        je public_4d4c5e
        push 0x100
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_5c64f4]
        mov ebx, dword ptr ds : [public_5c64f0]
        lea edx, ss:[esp+0x10]
        lea edi, ds:[esi+0xE4]
        push edx
        mov ecx, edi
        call ebx
        test eax, eax
        je public_4d4c5e
        jmp public_4d4bb4
        public_4d4bb0 : nop
        mov ebp, dword ptr ss : [esp+0x28]
        public_4d4bb4 : nop
        push eax
        call dword ptr ds : [public_5c64ec]
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_4d4c4d
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x38]
        fld dword ptr ds : [esi+0x74]
        fmul st, st(1)
        call public_5b7ec0
        mov dword ptr ss : [esp+0x24], eax
        fild dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+0x24]
        fsub dword ptr ss : [esp+0x24]
        fcom dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_4d4bfe
        fstp st(0)
        fld dword ptr ds : [public_5c7474]
        public_4d4bfe : nop
        fadd dword ptr ss : [ebp]
        mov ecx, esi
        fstp dword ptr ss : [ebp]
        mov edx, dword ptr ds : [esi]
        call dword ptr ds : [edx+4]
        test al, al
        je public_4d4c1a
        mov eax, dword ptr ss : [esp+0x30]
        test eax, eax
        je public_4d4c1a
        mov byte ptr ds : [eax], 1
        public_4d4c1a : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0xC]
        test al, al
        je public_4d4c4d
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x3C]
        fsub dword ptr ss : [esp+0x24]
        fcom dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_4d4c45
        fstp st(0)
        fld dword ptr ds : [public_5c7474]
        public_4d4c45 : nop
        mov eax, dword ptr ss : [esp+0x2C]
        fadd dword ptr ds : [eax]
        fstp dword ptr ds : [eax]
        public_4d4c4d : nop
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, edi
        call ebx
        test eax, eax
        jne public_4d4bb0
        public_4d4c5e : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x4d4b50)
    }
}

#undef public_4d4bb0
#undef public_4d4bb4
#undef public_4d4bfe
#undef public_4d4c1a
#undef public_4d4c45
#undef public_4d4c4d
#undef public_4d4c5e
