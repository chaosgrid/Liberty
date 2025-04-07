#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea9f40);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fa0);

#define public_6ec6412 _public_6ec6412
#define public_6ec6424 _public_6ec6424
#define public_6ec6553 _public_6ec6553
#define public_6ec6571 _public_6ec6571

PROC_DECLARE(0x6ec63f0, internal_6ec63f0, public_6ec63f0);
extern "C" NAKED register_t __cdecl internal_6ec63f0()
{
    __asm
    {
        sub esp, 0x3C
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x48]
        push edi
        mov edi, ecx
        push 0
        mov ecx, esi
        call dword ptr ds : [public_6fb3048]
        test eax, eax
        jne public_6ec6412
        mov dword ptr ds : [edi+0xC], eax
        mov byte ptr ds : [edi+0x10], al
        jmp public_6ec6424
        public_6ec6412 : nop
        push eax
        lea eax, ds:[edi+0x10]
        push 0x30
        push eax
        call public_6ea9f40
        add esp, 0xC
        mov dword ptr ds : [edi+0xC], eax
        public_6ec6424 : nop
        mov ebp, dword ptr ds : [public_6fb306c]
        push 1
        mov ecx, esi
        call ebp
        test al, al
        jne public_6ec6571
        push 1
        mov ecx, esi
        call dword ptr ds : [public_6fb3048]
        push eax
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        push 2
        mov ecx, esi
        mov dword ptr ds : [edi+0xA8], eax
        call ebp
        test al, al
        jne public_6ec6571
        push 4
        mov ecx, esi
        mov byte ptr ds : [edi+0xA4], 1
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x10]
        push 3
        mov ecx, esi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x4C]
        push 2
        mov ecx, esi
        call dword ptr ds : [public_6fb3044]
        mov ecx, dword ptr ss : [esp+0x4C]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi+0x9C], ecx
        fstp dword ptr ds : [edi+0x98]
        push 5
        mov ecx, esi
        mov dword ptr ds : [edi+0xA0], edx
        call ebp
        test al, al
        jne public_6ec6571
        push 8
        mov ecx, esi
        mov byte ptr ds : [edi+0xA5], 1
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x10]
        push 7
        mov ecx, esi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0xC]
        push 6
        mov ecx, esi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x4C]
        push 5
        mov ecx, esi
        call dword ptr ds : [public_6fb3044]
        fld st(0)
        fmul st, st(1)
        mov eax, dword ptr ds : [public_6fcf014]
        test eax, eax
        fld dword ptr ss : [esp+0x4C]
        fmul dword ptr ss : [esp+0x4C]
        faddp 
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        faddp 
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_6fb5810]
        fld st(0)
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x4C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0xC]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x20]
        fstp st(0)
        jne public_6ec6553
        call public_6fa8fa0
        mov dword ptr ds : [public_6fcf014], eax
        public_6ec6553 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x14]
        push edx
        lea edx, ss:[esp+0x28]
        push edx
        push eax
        call dword ptr ds : [ecx+0x54]
        add edi, 0x74
        mov ecx, 9
        lea esi, ss:[esp+0x24]
        rep movsd
        public_6ec6571 : nop
        pop edi
        pop esi
        pop ebp
        add esp, 0x3C
        ret 4
        UNREACHABLE_TRAP(0x6ec63f0)
    }
}

#undef public_6ec6412
#undef public_6ec6424
#undef public_6ec6553
#undef public_6ec6571
