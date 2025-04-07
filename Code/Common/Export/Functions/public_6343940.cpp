#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343940);
CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6344dc0);
CLANG_FORWARD_PROC_SYMBOL(public_6344f50);
CLANG_FORWARD_PROC_SYMBOL(public_63454b0);
CLANG_FORWARD_PROC_SYMBOL(public_6345550);
CLANG_FORWARD_PROC_SYMBOL(public_6345b20);
CLANG_FORWARD_PROC_SYMBOL(public_6346290);
CLANG_FORWARD_PROC_SYMBOL(public_63465a0);
CLANG_FORWARD_PROC_SYMBOL(public_6346f20);
CLANG_FORWARD_PROC_SYMBOL(public_6347660);
CLANG_FORWARD_PROC_SYMBOL(public_6347e60);
CLANG_FORWARD_PROC_SYMBOL(public_634b590);
CLANG_FORWARD_PROC_SYMBOL(public_634d530);
CLANG_FORWARD_PROC_SYMBOL(public_634d640);
CLANG_FORWARD_PROC_SYMBOL(public_6351310);
CLANG_FORWARD_PROC_SYMBOL(public_6351f80);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6397989);

#define public_634398e _public_634398e
#define public_63439b0 _public_63439b0
#define public_6343a51 _public_6343a51
#define public_6343a6e _public_6343a6e
#define public_6343a79 _public_6343a79
#define public_6343ac1 _public_6343ac1
#define public_6343ac3 _public_6343ac3
#define public_6343aed _public_6343aed
#define public_6343afa _public_6343afa
#define public_6343c2a _public_6343c2a
#define public_6343c3e _public_6343c3e
#define public_6343c7b _public_6343c7b
#define public_6343c9b _public_6343c9b

PROC_DECLARE(0x6343940, internal_6343940, public_6343940);
extern "C" NAKED register_t __cdecl internal_6343940()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6397989 @0x6343948*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6397989
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x264
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x280]
        push edi
        push 1
        mov ecx, esi
        call public_6345550
        mov eax, dword ptr ds : [esi+0x40]
        test eax, eax
        mov edi, dword ptr ds : [esi+0x18]
        mov ebp, dword ptr ds : [esi+0x98]
        jne public_634398e
        mov ecx, dword ptr ds : [edi+0x94]
        push esi
        call public_634d530
        mov dword ptr ds : [esi+0x40], eax
        public_634398e : nop
        mov eax, dword ptr ds : [esi+0x78]
        shl eax, 0x18
        cmp eax, 0x8000000
        jge public_63439b0
        mov eax, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [esi+0x40]
        mov eax, dword ptr ds : [eax+0x110]
        cmp eax, dword ptr ds : [ecx]
        jle public_63439b0
        call public_634d640
        public_63439b0 : nop
        mov eax, dword ptr ds : [esi+0x40]
        lea ecx, ds:[eax+0xC]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x4C], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x50], edx
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x54], edx
        mov ecx, dword ptr ds : [ecx+0xC]
        mov dword ptr ss : [esp+0x58], ecx
        fld dword ptr ds : [eax+0x4C]
        mov edx, dword ptr ds : [eax+0x50]
        mov eax, dword ptr ds : [eax+0x54]
        fstp dword ptr ss : [esp+0x3C]
        mov ecx, edx
        mov dword ptr ss : [esp+0x10], edx
        mov edx, eax
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x40], ecx
        lea eax, ss:[esp+0x5C]
        push eax
        lea ecx, ss:[esp+0x40]
        push ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x4C], edx
        call public_6346290
        mov ecx, dword ptr ss : [ebp+0x9C]
        mov edx, dword ptr ss : [ebp+0x94]
        mov eax, dword ptr ss : [ebp+0x98]
        mov dword ptr ss : [esp+0x24], ecx
        lea ecx, ds:[esi+0x30]
        mov dword ptr ss : [esp+0x10], edx
        mov dword ptr ss : [esp+0x1C], eax
        call public_6347e60
        fstp dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ss : [esp+0x288]
        mov cl, byte ptr ds : [ebx+4]
        test cl, cl
        lea eax, ds:[ebx+4]
        je public_6343a51
        push 8
        push eax
        lea edx, ds:[esi+0x84]
        push edx
        call dword ptr ds : [public_63992e0]
        add esp, 0xC
        public_6343a51 : nop
        xor eax, eax
        mov ax, word ptr ss : [ebp+0x52]
        push esi
        mov ecx, ebp
        mov dword ptr ss : [esp+0x18], eax
        call public_6346f20
        cmp dword ptr ss : [esp+0x14], 1
        jg public_6343a6e
        xor ebp, ebp
        jmp public_6343a79
        public_6343a6e : nop
        test ebp, ebp
        je public_6343a79
        mov ecx, ebp
        call public_63465a0
        public_6343a79 : nop
        mov eax, dword ptr ds : [esi+0x78]
        and eax, 0xFFFFFF08
        or eax, 8
        push 0x1BC
        mov dword ptr ds : [esi+0x78], eax
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        test eax, eax
        mov dword ptr ss : [esp+0x27C], 0
        je public_6343ac1
        mov ecx, dword ptr ds : [ebx+0x10]
        push ecx
        push 0
        lea edx, ss:[esp+0x44]
        push edx
        lea ecx, ss:[esp+0x58]
        push ecx
        push esi
        mov ecx, eax
        call public_6347660
        jmp public_6343ac3
        public_6343ac1 : nop
        xor eax, eax
        public_6343ac3 : nop
        mov dword ptr ds : [esi+0x98], eax
        mov dword ptr ds : [esi+0x9C], eax
        mov dword ptr ds : [esi+0xA0], eax
        mov eax, dword ptr ds : [ebx+0x18]
        test eax, eax
        mov dword ptr ss : [esp+0x27C], 0xFFFFFFFF
        je public_6343aed
        mov dword ptr ds : [esi+0x8C], eax
        public_6343aed : nop
        mov eax, dword ptr ds : [ebx+0x54]
        test eax, eax
        je public_6343afa
        mov dword ptr ds : [esi+0xA4], eax
        public_6343afa : nop
        mov edx, dword ptr ds : [ebx+0x4C]
        push ebx
        push edi
        mov ecx, esi
        mov dword ptr ds : [esi+0x94], edx
        call public_6345b20
        mov eax, dword ptr ss : [ebp+0x60]
        shl eax, 0x18
        cmp eax, 0x8000000
        jge public_6343c9b
        mov ecx, dword ptr ds : [esi+0x98]
        call public_634b590
        mov ecx, esi
        call public_6344dc0
        fld dword ptr ss : [esp+0x60]
        fld dword ptr ss : [esp+0x5C]
        mov ecx, dword ptr ss : [esp+0x64]
        mov eax, dword ptr ds : [esi+0x98]
        fstp dword ptr ds : [eax+0xA4]
        mov edx, ecx
        fstp dword ptr ds : [eax+0xA8]
        mov dword ptr ds : [eax+0xAC], edx
        fld dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi+0x98]
        fstp dword ptr ds : [eax+0x94]
        fld dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x14], ecx
        fstp dword ptr ds : [eax+0x98]
        fld dword ptr ss : [esp+0x24]
        xor ebx, ebx
        fstp dword ptr ds : [eax+0x9C]
        mov edx, dword ptr ds : [edi+0x100]
        mov eax, dword ptr ds : [edi+0xF8]
        mov ecx, dword ptr ds : [edi+0xFC]
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ds : [edi+0x104]
        mov dword ptr ss : [esp+0x24], edx
        fld dword ptr ss : [esp+0x24]
        fsub dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0x20], ecx
        lea eax, ss:[esp+0x74]
        fadd dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x70], eax
        mov word ptr ss : [esp+0x6C], 0x80
        fsub dword ptr ss : [esp+0x20]
        mov word ptr ss : [esp+0x6E], bx
        fstp dword ptr ss : [esp+0x10]
        mov ebp, dword ptr ds : [esi+0x98]
        test byte ptr ss : [ebp], 0xC
        mov dword ptr ss : [esp+0x27C], 1
        jne public_6343c7b
        fld dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi+0x4C], ebx
        fadd dword ptr ds : [esi+0x5C]
        mov dword ptr ds : [esi+0x50], ebx
        mov dword ptr ss : [esp+0x34], edi
        fst dword ptr ds : [esi+0x5C]
        fstp dword ptr ds : [esi+0x54]
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_63a53d8]
        fnstsw ax
        test ah, 0x41
        jne public_6343c2a
        fld dword ptr ds : [public_63a53d0]
        mov ecx, dword ptr ss : [esp+0x10]
        fdiv dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x2C], ecx
        fstp dword ptr ss : [esp+0x30]
        jmp public_6343c3e
        public_6343c2a : nop
        mov edx, dword ptr ds : [edi+0xAC]
        mov eax, dword ptr ds : [edi+0xB0]
        mov dword ptr ss : [esp+0x2C], edx
        mov dword ptr ss : [esp+0x30], eax
        public_6343c3e : nop
        lea ecx, ss:[esp+0x6C]
        push ecx
        lea edx, ss:[esp+0x30]
        push edx
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x20], ebp
        call public_6351310
        lea eax, ss:[esp+0x6C]
        push eax
        push edi
        mov dword ptr ss : [ebp+0x1B4], ebx
        call public_6351f80
        add esp, 8
        mov ecx, esi
        call public_63454b0
        mov ecx, esi
        call public_6344f50
        mov eax, dword ptr ss : [esp+0x70]
        public_6343c7b : nop
        lea ecx, ss:[esp+0x74]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x27C], 0xFFFFFFFF
        je public_6343c9b
        cmp eax, ebx
        je public_6343c9b
        push eax
        call public_6343fb0
        add esp, 4
        public_6343c9b : nop
        mov ecx, dword ptr ss : [esp+0x274]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x270
        ret 
        UNREACHABLE_TRAP(0x6343940)
    }
}

#undef public_634398e
#undef public_63439b0
#undef public_6343a51
#undef public_6343a6e
#undef public_6343a79
#undef public_6343ac1
#undef public_6343ac3
#undef public_6343aed
#undef public_6343afa
#undef public_6343c2a
#undef public_6343c3e
#undef public_6343c7b
#undef public_6343c9b
