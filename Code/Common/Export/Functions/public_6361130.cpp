#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6346080);
CLANG_FORWARD_PROC_SYMBOL(public_63480a0);
CLANG_FORWARD_PROC_SYMBOL(public_6348150);
CLANG_FORWARD_PROC_SYMBOL(public_6348470);
CLANG_FORWARD_PROC_SYMBOL(public_6348580);
CLANG_FORWARD_PROC_SYMBOL(public_634d530);
CLANG_FORWARD_PROC_SYMBOL(public_634d640);
CLANG_FORWARD_PROC_SYMBOL(public_634ded0);
CLANG_FORWARD_PROC_SYMBOL(public_6360fd0);

#define public_636116a _public_636116a
#define public_6361196 _public_6361196
#define public_63611c7 _public_63611c7
#define public_6361221 _public_6361221
#define public_6361244 _public_6361244
#define public_6361297 _public_6361297
#define public_63613a4 _public_63613a4
#define public_63613a6 _public_63613a6
#define public_63613ba _public_63613ba
#define public_6361451 _public_6361451

PROC_DECLARE(0x6361130, internal_6361130, public_6361130);
extern "C" NAKED register_t __cdecl internal_6361130()
{
    __asm
    {
        sub esp, 0xAC
        mov edx, dword ptr ss : [esp+0xB8]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xBC]
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edx+0x98]
        mov bl, byte ptr ds : [ecx]
        xor eax, eax
        test bl, 0xC
        mov dword ptr ss : [esp+0x44], edi
        mov dword ptr ss : [esp+0x14], ebp
        mov dword ptr ss : [esp+0x18], edx
        je public_636116a
        mov eax, 1
        public_636116a : nop
        lea ecx, ds:[eax*4]
        mov esi, dword ptr ss : [esp+ecx+0x14]
        mov ebx, dword ptr ds : [esi+0x98]
        test byte ptr ds : [ebx], 0xC
        jne public_6361196
        push edx
        push ebp
        mov ecx, edi
        call public_6360fd0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xAC
        ret 0xC
        public_6361196 : nop
        lea ebx, ds:[eax*8]
        sub ebx, eax
        mov eax, dword ptr ss : [esp+0xC0]
        cmp word ptr ds : [eax+ebx*4+0x32], 2
        lea ebx, ds:[eax+ebx*4]
        jle public_63611c7
        push edx
        push ebp
        mov ecx, edi
        call public_6360fd0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xAC
        ret 0xC
        public_63611c7 : nop
        lea edx, ss:[esp+0x18]
        sub edx, ecx
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [eax+0x98]
        fld dword ptr ds : [eax+0x128]
        mov ecx, dword ptr ds : [eax+0x12C]
        fld dword ptr ds : [eax+0x124]
        add eax, 0x124
        fstp dword ptr ss : [esp+0x7C]
        mov edx, ecx
        fstp dword ptr ss : [esp+0x80]
        mov dword ptr ss : [esp+0x84], edx
        mov eax, dword ptr ds : [esi+0x40]
        test eax, eax
        mov dword ptr ss : [esp+0x10], ecx
        jne public_6361221
        mov eax, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [eax+0x94]
        push esi
        call public_634d530
        mov dword ptr ds : [esi+0x40], eax
        public_6361221 : nop
        mov ecx, dword ptr ds : [esi+0x78]
        shl ecx, 0x18
        cmp ecx, 0x8000000
        jge public_6361244
        mov edx, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [esi+0x40]
        mov eax, dword ptr ds : [edx+0x110]
        cmp eax, dword ptr ds : [ecx]
        jle public_6361244
        call public_634d640
        public_6361244 : nop
        mov esi, dword ptr ds : [esi+0x40]
        lea ecx, ss:[esp+0x5C]
        push ecx
        lea edx, ss:[esp+0x80]
        lea ebp, ds:[esi+0x1C]
        push edx
        mov ecx, ebp
        call public_6348470
        lea ecx, ds:[ebx+0x18]
        call public_634ded0
        mov esi, eax
        xor ebx, ebx
        mov dword ptr ss : [esp+0x4C], 0x3F800000
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x54], 0
        cmp word ptr ds : [esi+0xC], bx
        mov dword ptr ss : [esp+0x10], 0xE0AD78EC
        jle public_63613ba
        lea edi, ds:[esi+0x18]
        public_6361297 : nop
        mov eax, dword ptr ds : [edi-4]
        mov ecx, dword ptr ds : [esi]
        and eax, 0xFFFF
        shl eax, 4
        add eax, ecx
        mov edx, dword ptr ds : [eax+esi+8]
        fld dword ptr ds : [eax+esi+4]
        fld dword ptr ds : [eax+esi]
        add eax, esi
        mov eax, edx
        mov dword ptr ss : [esp+0x94], eax
        mov eax, dword ptr ds : [edi]
        and eax, 0xFFFF
        shl eax, 4
        add eax, ecx
        add eax, esi
        fstp dword ptr ss : [esp+0x8C]
        mov dword ptr ss : [esp+0x3C], edx
        fstp dword ptr ss : [esp+0x90]
        mov edx, dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x40], edx
        fld dword ptr ds : [eax]
        mov eax, edx
        mov dword ptr ss : [esp+0xA4], eax
        mov eax, dword ptr ds : [edi+4]
        and eax, 0xFFFF
        shl eax, 4
        add eax, ecx
        add eax, esi
        fstp dword ptr ss : [esp+0x9C]
        fstp dword ptr ss : [esp+0xA0]
        mov ecx, dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+4]
        mov edx, ecx
        fld dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x48], ecx
        lea eax, ss:[esp+0x9C]
        push eax
        lea ecx, ss:[esp+0xB0]
        mov dword ptr ss : [esp+0xB8], edx
        push ecx
        fstp dword ptr ss : [esp+0xB4]
        lea edx, ss:[esp+0x94]
        push edx
        fstp dword ptr ss : [esp+0xBC]
        lea ecx, ss:[esp+0x38]
        call public_63480a0
        lea ecx, ss:[esp+0x2C]
        call public_6348150
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x64]
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x60]
        faddp 
        fld dword ptr ss : [esp+0x5C]
        fmul dword ptr ss : [esp+0x2C]
        faddp 
        fadd dword ptr ss : [esp+0x38]
        fcom dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 0x41
        jne public_63613a4
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp+0x4C]
        fld dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp+0x50]
        fld dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp+0x54]
        jmp public_63613a6
        public_63613a4 : nop
        fstp st(0)
        public_63613a6 : nop
        movsx eax, word ptr ds : [esi+0xC]
        add edi, 0x10
        inc ebx
        cmp ebx, eax
        jl public_6361297
        mov edi, dword ptr ss : [esp+0x44]
        public_63613ba : nop
        lea ecx, ss:[esp+0x6C]
        push ecx
        lea edx, ss:[esp+0x50]
        push edx
        mov ecx, ebp
        call public_6348580
        fld dword ptr ss : [esp+0x6C]
        mov ecx, dword ptr ss : [esp+0xC8]
        mov edx, dword ptr ss : [esp+0xC4]
        mov eax, dword ptr ds : [edi]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x70]
        push ecx
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x78]
        push edx
        fstp dword ptr ss : [esp+0x2C]
        mov ecx, edi
        call dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx+0x98]
        mov edx, dword ptr ds : [eax+0x60]
        shl edx, 0x18
        cmp edx, 0x8000000
        jge public_6361451
        fld dword ptr ss : [esp+0x20]
        lea edx, ss:[esp+0x1C]
        fmul st, st(1)
        push edx
        fld dword ptr ss : [esp+0x28]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x28], eax
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x24]
        fstp st(0)
        call public_6346080
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xAC
        ret 0xC
        public_6361451 : nop
        pop edi
        fstp st(0)
        pop esi
        pop ebp
        pop ebx
        add esp, 0xAC
        ret 0xC
        UNREACHABLE_TRAP(0x6361130)
    }
}

#undef public_636116a
#undef public_6361196
#undef public_63611c7
#undef public_6361221
#undef public_6361244
#undef public_6361297
#undef public_63613a4
#undef public_63613a6
#undef public_63613ba
#undef public_6361451
