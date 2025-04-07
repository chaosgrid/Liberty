#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f9f00);
CLANG_FORWARD_PROC_SYMBOL(public_65fac50);
CLANG_FORWARD_PROC_SYMBOL(public_65face0);
CLANG_FORWARD_PROC_SYMBOL(public_65fadb0);

#define public_65fae4e _public_65fae4e
#define public_65fae58 _public_65fae58
#define public_65fae73 _public_65fae73
#define public_65fae81 _public_65fae81
#define public_65fae8a _public_65fae8a

PROC_DECLARE(0x65fadb0, internal_65fadb0, public_65fadb0);
extern "C" NAKED register_t __cdecl internal_65fadb0()
{
    __asm
    {
        sub esp, 0x70C
        mov edx, ecx
        mov eax, dword ptr ds : [edx+0x244]
        push ebx
        mov ebx, dword ptr ss : [esp+0x714]
        mov dword ptr ds : [ebx+0x240], eax
        mov ecx, dword ptr ds : [edx+0x240]
        push esi
        mov dword ptr ds : [ebx+0x244], ecx
        mov esi, dword ptr ds : [edx+0x244]
        push edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x3C], ecx
        xor eax, eax
        lea edi, ss:[esp+0xC]
        rep stosd
        mov dword ptr ss : [esp+0x280], esi
        mov dword ptr ss : [esp+0x284], esi
        mov esi, edx
        mov ecx, 0x92
        lea edi, ss:[esp+0x4D0]
        rep movsd
        lea eax, ss:[esp+0x40]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        lea eax, ss:[esp+0x4D8]
        push eax
        mov ecx, edx
        call public_65f9f00
        test al, al
        jne public_65fae4e
        mov ecx, dword ptr ds : [public_6601008]
/*FIXUP push offset public_66029bc @0x65fae2f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66029bc
        push 0x2E8
/*FIXUP push offset public_660297c @0x65fae39*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_660297c
        mov eax, 0x100002
/*FIXUP push offset public_66024c8 @0x65fae43*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66024c8
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_65fae4e : nop
        mov eax, dword ptr ss : [esp+0x3C]
        xor ecx, ecx
        test eax, eax
        jle public_65fae8a
        public_65fae58 : nop
        fld dword ptr ss : [esp+ecx*4+0xC]
        fcomp qword ptr ds : [public_66013a0]
        fnstsw ax
        test ah, 5
        jp public_65fae73
        mov dword ptr ss : [esp+ecx*4+0xC], 0
        jmp public_65fae81
        public_65fae73 : nop
        fld dword ptr ss : [esp+ecx*4+0xC]
        fdivr qword ptr ds : [public_6601320]
        fstp dword ptr ss : [esp+ecx*4+0xC]
        public_65fae81 : nop
        mov eax, dword ptr ss : [esp+0x3C]
        inc ecx
        cmp ecx, eax
        jl public_65fae58
        public_65fae8a : nop
        mov edx, dword ptr ss : [esp+0x280]
        mov eax, dword ptr ss : [esp+0x284]
        lea ecx, ss:[esp+0x288]
        mov dword ptr ss : [esp+0x4C8], edx
        push ecx
        lea edx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x4D0], eax
        push edx
        lea eax, ss:[esp+0x48]
        push eax
        call public_65fac50
        push ebx
        lea ecx, ss:[esp+0x4E0]
        push ecx
        lea edx, ss:[esp+0x29C]
        push edx
        call public_65face0
        add esp, 0x18
        pop edi
        pop esi
        pop ebx
        add esp, 0x70C
        ret 4
        UNREACHABLE_TRAP(0x65fadb0)
    }
}

#undef public_65fae4e
#undef public_65fae58
#undef public_65fae73
#undef public_65fae81
#undef public_65fae8a
