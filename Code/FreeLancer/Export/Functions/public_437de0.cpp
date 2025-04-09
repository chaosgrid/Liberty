#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_432240);
CLANG_FORWARD_PROC_SYMBOL(public_437de0);
CLANG_FORWARD_PROC_SYMBOL(public_438310);
CLANG_FORWARD_PROC_SYMBOL(public_43b630);

#define public_437e30 _public_437e30
#define public_437e5e _public_437e5e
#define public_437e6d _public_437e6d
#define public_437ea1 _public_437ea1
#define public_437ebd _public_437ebd
#define public_437ed3 _public_437ed3
#define public_437f5f _public_437f5f

PROC_DECLARE(0x437de0, internal_437de0, public_437de0);
extern "C" NAKED register_t __cdecl internal_437de0()
{
    __asm
    {
        sub esp, 0x9C
        push ebx
        mov dword ptr ss : [esp+0xC], ecx
        call dword ptr ds : [public_5c6158]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [eax+4]
        mov ebx, dword ptr ds : [eax]
        cmp ebx, eax
        je public_437f5f
        fld dword ptr ds : [public_5c75dc]
        push ebp
        fsub dword ptr ss : [esp+0xA8]
        push esi
        push edi
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0xB0]
        fadd dword ptr ds : [public_5c75dc]
        fsub dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x24]
        nop 
        lea esp, ss:[esp]
        public_437e30 : nop
        mov ebp, dword ptr ds : [ebx+8]
        lea ecx, ss:[esp+0x28]
        call dword ptr ds : [public_5c6154]
        xor edi, edi
        mov dword ptr ss : [esp+0x44], edi
        mov dword ptr ss : [esp+0x48], edi
        mov eax, dword ptr ss : [ebp+0x48]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [esp+0xB4]
        cmp eax, edi
        je public_437e5e
        lea esi, ds:[eax+0x10]
        jmp public_437e6d
        public_437e5e : nop
        mov ecx, offset public_668708
        call public_43b630
        mov esi, eax
        add esi, 0x10
        public_437e6d : nop
        lea ecx, ss:[esp+0x10]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, esi
        call public_432240
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, dword ptr ds : [esi+4]
        je public_437ea1
        lea esi, ds:[eax+0x10]
        cmp esi, edi
        je public_437ea1
        mov ecx, 7
        lea edi, ss:[esp+0x28]
        rep movsd
        mov eax, dword ptr ss : [esp+0x34]
        xor edi, edi
        jmp public_437ebd
        public_437ea1 : nop
        mov eax, dword ptr ss : [ebp+0x48]
        mov dword ptr ss : [esp+0x28], eax
        mov ecx, dword ptr ss : [ebp+0x58]
        xor eax, eax
        mov dword ptr ss : [esp+0x2C], ecx
        mov dword ptr ss : [esp+0x30], edi
        mov dword ptr ss : [esp+0x34], eax
        mov dword ptr ss : [esp+0x38], edi
        public_437ebd : nop
        cmp dword ptr ss : [esp+0x30], edi
        mov dword ptr ss : [esp+0x44], edi
        je public_437ed3
        cmp eax, edi
        jle public_437ed3
        mov dword ptr ss : [esp+0x44], 0x7F000000
        public_437ed3 : nop
        call dword ptr ds : [public_5c71dc]
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        lea ecx, ss:[esp+0x58]
        fmul dword ptr ds : [public_5caeec]
        fmul dword ptr ss : [esp+0x24]
        fadd dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x48]
        mov esi, dword ptr ss : [ebp+0x48]
        call dword ptr ds : [public_5c6154]
        mov dword ptr ss : [esp+0x74], edi
        mov dword ptr ss : [esp+0x80], esi
        lea edx, ss:[esp+0x80]
        mov dword ptr ss : [esp+0x78], 0
        mov ecx, 0xA
        lea esi, ss:[esp+0x58]
        lea edi, ss:[esp+0x84]
        push edx
        lea eax, ss:[esp+0x54]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x1C]
        push eax
        call public_438310
        mov ecx, dword ptr ss : [esp+0x50]
        mov edx, dword ptr ss : [esp+0x20]
        lea edi, ds:[ecx+0x10]
        mov ecx, 0xA
        lea esi, ss:[esp+0x28]
        rep movsd
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, dword ptr ds : [edx+4]
        jne public_437e30
        pop edi
        pop esi
        pop ebp
        public_437f5f : nop
        pop ebx
        add esp, 0x9C
        ret 8
        UNREACHABLE_TRAP(0x437de0)
    }
}

#undef public_437e30
#undef public_437e5e
#undef public_437e6d
#undef public_437ea1
#undef public_437ebd
#undef public_437ed3
#undef public_437f5f
