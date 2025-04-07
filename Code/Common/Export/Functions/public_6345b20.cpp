#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6261260);
CLANG_FORWARD_PROC_SYMBOL(public_6273bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6345b20);
CLANG_FORWARD_PROC_SYMBOL(public_6346870);
CLANG_FORWARD_PROC_SYMBOL(public_6346e70);
CLANG_FORWARD_PROC_SYMBOL(public_6347410);
CLANG_FORWARD_PROC_SYMBOL(public_63474d0);
CLANG_FORWARD_PROC_SYMBOL(public_6347e60);
CLANG_FORWARD_PROC_SYMBOL(public_63483d0);
CLANG_FORWARD_PROC_SYMBOL(public_6350bc0);

#define public_6345b91 _public_6345b91
#define public_6345ba1 _public_6345ba1
#define public_6345bf8 _public_6345bf8
#define public_6345c0a _public_6345c0a
#define public_6345c24 _public_6345c24
#define public_6345c62 _public_6345c62
#define public_6345c84 _public_6345c84
#define public_6345ca0 _public_6345ca0
#define public_6345cb0 _public_6345cb0
#define public_6345ce4 _public_6345ce4
#define public_6345cfc _public_6345cfc
#define public_6345d1d _public_6345d1d
#define public_6345d28 _public_6345d28
#define public_6345d30 _public_6345d30
#define public_6345e03 _public_6345e03
#define public_6345e19 _public_6345e19

PROC_DECLARE(0x6345b20, internal_6345b20, public_6345b20);
extern "C" NAKED register_t __cdecl internal_6345b20()
{
    __asm
    {
        sub esp, 0xD8
        push ebx
        push ebp
        push esi
        push edi
/*FIXUP push offset _public_6261260 @0x6345b2a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6261260
        push 3
        push 0x10
        lea eax, ss:[esp+0x74]
        push eax
        mov ebx, ecx
        call public_6273bc0
        mov edi, dword ptr ss : [esp+0xF0]
        mov eax, dword ptr ds : [edi+0x50]
        test eax, eax
        mov ebp, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0x60], 0
        mov dword ptr ss : [esp+0x5C], 0
        mov dword ptr ss : [esp+0x58], 0
        mov dword ptr ss : [esp+0x64], 0x3F800000
        mov dword ptr ss : [esp+0x1C], ebp
        je public_6345b91
        fld dword ptr ds : [eax+0x34]
        mov ecx, dword ptr ds : [eax+0x38]
        fld dword ptr ds : [eax+0x30]
        mov edx, ecx
        fstp dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x14], ecx
        fstp dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x30], edx
        jmp public_6345ba1
        public_6345b91 : nop
        mov ecx, dword ptr ds : [ebx+0x80]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x28]
        push edx
        call dword ptr ds : [eax+4]
        public_6345ba1 : nop
        lea eax, ss:[esp+0x68]
        push eax
        lea ecx, ss:[esp+0x5C]
        call public_6350bc0
        fld dword ptr ss : [esp+0x28]
        mov edx, dword ptr ds : [ebx]
        fstp dword ptr ss : [esp+0x98]
        fld dword ptr ss : [esp+0x2C]
        lea eax, ss:[esp+0x68]
        fstp dword ptr ss : [esp+0x9C]
        fld dword ptr ss : [esp+0x30]
        push eax
        fstp dword ptr ss : [esp+0xA4]
        mov ecx, ebx
        call dword ptr ds : [edx+8]
        mov esi, dword ptr ds : [ebx+0x98]
        mov eax, ebp
        sub eax, 2
        je public_6345c0a
        dec eax
        je public_6345bf8
        mov dword ptr ds : [0], 0
        jmp public_6345c24
        public_6345bf8 : nop
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x24], 0
        jmp public_6345c24
        public_6345c0a : nop
        mov ecx, dword ptr ds : [ebx+0x80]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x24]
        push eax
        lea eax, ss:[esp+0x14]
        push eax
        lea eax, ss:[esp+0x30]
        push eax
        call dword ptr ds : [edx+8]
        public_6345c24 : nop
        fld dword ptr ds : [ebx+0x94]
        mov ecx, dword ptr ss : [esp+0x24]
        fadd dword ptr ss : [esp+0x10]
        push ecx
        mov ecx, esi
        fstp dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        call public_6346870
        fld dword ptr ds : [edi+0x1C]
        fcomp dword ptr ds : [public_63a545c]
        mov eax, dword ptr ds : [edi+0x1C]
        mov dword ptr ss : [esp+0x14], eax
        fnstsw ax
        test ah, 1
        je public_6345c62
        mov dword ptr ss : [esp+0x14], 0x3F800000
        public_6345c62 : nop
        mov eax, dword ptr ds : [edi+0x20]
        test eax, eax
        lea ebp, ds:[esi+0x14]
        je public_6345ce4
        mov eax, dword ptr ss : [esp+0x1C]
        sub eax, 2
        je public_6345ca0
        dec eax
        je public_6345c84
        mov dword ptr ds : [0], 0
        jmp public_6345cb0
        public_6345c84 : nop
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_63a5458]
        fst dword ptr ss : [esp+0x38]
        fst dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp+0x40]
        jmp public_6345cb0
        public_6345ca0 : nop
        mov ecx, dword ptr ds : [ebx+0x80]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x38]
        push eax
        call dword ptr ds : [edx+0xC]
        public_6345cb0 : nop
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ds : [edi+0x28]
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ds : [edi+0x2C]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ds : [edi+0x24]
        fmul dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [ebp]
        fmul dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [ebp+4]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [ebp+8]
        jmp public_6345cfc
        public_6345ce4 : nop
        fld dword ptr ds : [edi+0x28]
        mov ecx, dword ptr ds : [edi+0x2C]
        fld dword ptr ds : [edi+0x24]
        mov edx, ecx
        fstp dword ptr ss : [ebp]
        mov dword ptr ss : [esp+0x1C], ecx
        fstp dword ptr ss : [ebp+4]
        mov dword ptr ss : [ebp+8], edx
        public_6345cfc : nop
        fld dword ptr ds : [edi+0x34]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 0x40
        jne public_6345d30
        mov ecx, ebp
        call public_6347e60
        fmul dword ptr ds : [edi+0x34]
        mov ecx, ebp
        mov edx, 3
        public_6345d1d : nop
        fcom dword ptr ds : [ecx]
        fnstsw ax
        test ah, 0x41
        jne public_6345d28
        fst dword ptr ds : [ecx]
        public_6345d28 : nop
        add ecx, 4
        dec edx
        jne public_6345d1d
        fstp st(0)
        public_6345d30 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [ebp+0xC], eax
        mov ecx, dword ptr ds : [edi+0x38]
        mov dword ptr ds : [esi+0x44], ecx
        fld dword ptr ds : [edi+0x40]
        fld dword ptr ds : [edi+0x3C]
        mov edx, dword ptr ds : [edi+0x44]
        lea ecx, ss:[esp+0x68]
        fstp dword ptr ds : [esi+0x24]
        mov eax, edx
        push ecx
        fstp dword ptr ds : [esi+0x28]
        lea ecx, ss:[esp+0xAC]
        mov dword ptr ss : [esp+0x20], edx
        mov dword ptr ds : [esi+0x2C], eax
        call public_63483d0
        xor eax, eax
        mov dword ptr ds : [esi+0x94], eax
        mov dword ptr ds : [esi+0x98], eax
        mov dword ptr ds : [esi+0x9C], eax
        mov ecx, esi
        mov dword ptr ds : [esi+0xA4], eax
        mov dword ptr ds : [esi+0xA8], eax
        mov dword ptr ds : [esi+0xAC], eax
        call public_6347410
        lea edx, ss:[esp+0x68]
        push edx
        mov ecx, esi
        call public_63474d0
        mov ecx, dword ptr ss : [esp+0xEC]
        mov eax, dword ptr ds : [ecx+0xF8]
        mov edx, dword ptr ds : [ecx+0xFC]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [ecx+0x100]
        mov dword ptr ss : [esp+0x1C], eax
        fld dword ptr ss : [esp+0x1C]
        fsub dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x18], edx
        mov edx, dword ptr ds : [ecx+0x104]
        mov dword ptr ss : [esp+0x20], edx
        fadd dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x50], ecx
        fsub dword ptr ss : [esp+0x18]
        fcom dword ptr ds : [public_63a53d8]
        fnstsw ax
        test ah, 0x41
        jne public_6345e03
        fst dword ptr ss : [esp+0x48]
        fld dword ptr ds : [public_63a53d0]
        fdiv st, st(1)
        fstp dword ptr ss : [esp+0x4C]
        fstp st(0)
        jmp public_6345e19
        public_6345e03 : nop
        fstp st(0)
        fld dword ptr ds : [ecx+0xAC]
        fstp dword ptr ss : [esp+0x48]
        fld dword ptr ds : [ecx+0xB0]
        fstp dword ptr ss : [esp+0x4C]
        public_6345e19 : nop
        lea eax, ss:[esp+0x48]
        push eax
        mov ecx, esi
        call public_6346e70
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xD8
        ret 8
        UNREACHABLE_TRAP(0x6345b20)
    }
}

#undef public_6345b91
#undef public_6345ba1
#undef public_6345bf8
#undef public_6345c0a
#undef public_6345c24
#undef public_6345c62
#undef public_6345c84
#undef public_6345ca0
#undef public_6345cb0
#undef public_6345ce4
#undef public_6345cfc
#undef public_6345d1d
#undef public_6345d28
#undef public_6345d30
#undef public_6345e03
#undef public_6345e19
