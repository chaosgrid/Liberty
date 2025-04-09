#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4142f0);

#define public_41431d _public_41431d
#define public_414334 _public_414334
#define public_41434f _public_41434f
#define public_414353 _public_414353
#define public_414365 _public_414365
#define public_41437d _public_41437d
#define public_414399 _public_414399
#define public_41439d _public_41439d

PROC_DECLARE(0x4142f0, internal_4142f0, public_4142f0);
extern "C" NAKED register_t __cdecl internal_4142f0()
{
    __asm
    {
        sub esp, 0x18
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [edi]
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, edi
        call dword ptr ds : [eax+0x18]
        mov eax, dword ptr ds : [esi+0x10]
        dec eax
        mov ecx, 0
        je public_414334
        dec eax
        je public_41431d
        mov edx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+8], edx
        jmp public_414353
        public_41431d : nop
        fld dword ptr ds : [esi+8]
        mov eax, dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], ecx
        fisub dword ptr ss : [esp+0x18]
        jmp public_41434f
        public_414334 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x18], edx
        mov dword ptr ss : [esp+0x1C], ecx
        fild qword ptr ss : [esp+0x18]
        fsubr dword ptr ds : [esi+8]
        fmul dword ptr ds : [public_5c75e0]
        fadd dword ptr ds : [esi]
        public_41434f : nop
        fstp dword ptr ss : [esp+8]
        public_414353 : nop
        mov eax, dword ptr ds : [esi+0x14]
        dec eax
        je public_41437d
        dec eax
        je public_414365
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0xC], eax
        jmp public_41439d
        public_414365 : nop
        fld dword ptr ds : [esi+0xC]
        mov edx, dword ptr ss : [esp+0x14]
        fadd dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x18], edx
        mov dword ptr ss : [esp+0x1C], ecx
        fisub dword ptr ss : [esp+0x18]
        jmp public_414399
        public_41437d : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], ecx
        fild qword ptr ss : [esp+0x18]
        fsubr dword ptr ds : [esi+0xC]
        fmul dword ptr ds : [public_5c75e0]
        fadd dword ptr ds : [esi+4]
        public_414399 : nop
        fstp dword ptr ss : [esp+0xC]
        public_41439d : nop
        mov eax, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ds : [edi]
        push eax
        push ecx
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+0x24]
        pop edi
        pop esi
        add esp, 0x18
        ret 0xC
        UNREACHABLE_TRAP(0x4142f0)
    }
}

#undef public_41431d
#undef public_414334
#undef public_41434f
#undef public_414353
#undef public_414365
#undef public_41437d
#undef public_414399
#undef public_41439d
