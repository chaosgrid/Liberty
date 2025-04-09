#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_427940);
CLANG_FORWARD_PROC_SYMBOL(public_42d680);
CLANG_FORWARD_PROC_SYMBOL(public_42d740);
CLANG_FORWARD_PROC_SYMBOL(public_4cbc40);
CLANG_FORWARD_PROC_SYMBOL(public_4cc140);
CLANG_FORWARD_PROC_SYMBOL(public_4cc2c0);
CLANG_FORWARD_PROC_SYMBOL(public_4cdc10);
CLANG_FORWARD_PROC_SYMBOL(public_4cdc30);
CLANG_FORWARD_PROC_SYMBOL(public_4cdc60);
CLANG_FORWARD_PROC_SYMBOL(public_4cde50);
CLANG_FORWARD_PROC_SYMBOL(public_4cdf40);
CLANG_FORWARD_PROC_SYMBOL(public_4cdfc0);
CLANG_FORWARD_PROC_SYMBOL(public_4ce000);
CLANG_FORWARD_PROC_SYMBOL(public_4ce4c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b3510);

#define public_4cda0e _public_4cda0e
#define public_4cda1c _public_4cda1c
#define public_4cda28 _public_4cda28
#define public_4cda42 _public_4cda42
#define public_4cda52 _public_4cda52
#define public_4cda57 _public_4cda57
#define public_4cda5d _public_4cda5d
#define public_4cda8b _public_4cda8b
#define public_4cdb1d _public_4cdb1d
#define public_4cdb37 _public_4cdb37
#define public_4cdb61 _public_4cdb61
#define public_4cdb78 _public_4cdb78
#define public_4cdbad _public_4cdbad
#define public_4cdbf2 _public_4cdbf2
#define public_4cdc04 _public_4cdc04

PROC_DECLARE(0x4cd9d0, internal_4cd9d0, public_4cd9d0);
extern "C" NAKED register_t __cdecl internal_4cd9d0()
{
    __asm
    {
        sub esp, 0x13C
        push esi
        push edi
        mov edi, ecx
        mov al, byte ptr ds : [edi+0xEC]
        test al, al
        lea esi, ds:[edi+0xB4]
        mov dword ptr ss : [esp+0x10], esi
        je public_4cda1c
        push 5
        call public_5b3510
        fcomp qword ptr ds : [public_5c8ba8]
        add esp, 4
        fnstsw ax
        test ah, 0x41
        jne public_4cda0e
        cmp byte ptr ds : [esi+0x174], 1
        jne public_4cda1c
        public_4cda0e : nop
        mov eax, dword ptr ds : [edi+0x5B4]
        mov cl, byte ptr ds : [eax+0x6C]
        or cl, 3
        jmp public_4cda28
        public_4cda1c : nop
        mov eax, dword ptr ds : [edi+0x5B4]
        mov cl, byte ptr ds : [eax+0x6C]
        and cl, 0xFC
        public_4cda28 : nop
        mov byte ptr ds : [eax+0x6C], cl
        call public_42d740
        test al, al
        jne public_4cdc04
        mov ecx, dword ptr ds : [edi+0xC]
        push ebx
        xor ebx, ebx
        cmp ecx, ebx
        je public_4cda5d
        public_4cda42 : nop
        test byte ptr ds : [ecx+0x6C], 1
        mov esi, dword ptr ds : [ecx+8]
        je public_4cda52
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x2C]
        jmp public_4cda57
        public_4cda52 : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x30]
        public_4cda57 : nop
        cmp esi, ebx
        mov ecx, esi
        jne public_4cda42
        public_4cda5d : nop
        call public_42d680
        fstp dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [edi+0x458]
        lea esi, ds:[edi+0x454]
        push eax
        call public_4cbc40
        test al, al
        mov byte ptr ss : [esp+0xF], al
        je public_4cda8b
        mov dword ptr ds : [esi+8], ebx
        mov byte ptr ds : [esi+0xC], 0
        public_4cda8b : nop
        push ebp
        lea ecx, ss:[esp+0x24]
        call public_4cdc10
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0xA4], 1
        mov dword ptr ss : [esp+0xA8], ebx
        mov dword ptr ss : [esp+0xB0], 0
        call public_4cde50
        test al, al
        je public_4cdbad
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, edi
        call public_4cdf40
        mov ebp, eax
        xor bl, bl
        test ebp, ebp
        jge public_4cdb1d
        mov al, byte ptr ds : [esi+0xC]
        test al, al
        je public_4cdb37
        cmp ebp, dword ptr ds : [esi+8]
        jge public_4cdb1d
        lea ecx, ss:[esp+0xB4]
        call public_4cdc30
        mov ecx, dword ptr ds : [esi]
        lea eax, ss:[esp+0xB4]
        push eax
        call public_4cdc60
        lea ecx, ss:[esp+0xB4]
        push ecx
        mov ecx, edi
        mov bl, 1
        mov dword ptr ss : [esp+0x14C], 2
        call public_4cdfc0
        public_4cdb1d : nop
        mov al, byte ptr ds : [esi+0xC]
        test al, al
        je public_4cdb37
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        jge public_4cdb37
        cmp ebp, eax
        jle public_4cdb37
        mov ecx, dword ptr ds : [esi+4]
        call public_4cc2c0
        public_4cdb37 : nop
        test bl, bl
        jne public_4cdbad
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        je public_4cdb61
        mov ecx, dword ptr ds : [esi]
        lea edx, ss:[esp+0x1C]
        push edx
        call public_4cdc60
        lea eax, ss:[esp+0x1C]
        push eax
        push esi
        mov ecx, edi
        call public_4ce000
        mov byte ptr ds : [esi+0xD], bl
        jmp public_4cdbad
        public_4cdb61 : nop
        mov ecx, dword ptr ds : [public_5c64b8]
        cmp ebp, dword ptr ds : [ecx]
        jle public_4cdb78
        mov al, byte ptr ds : [esi+0xD]
        test al, al
        jne public_4cdbad
        mov byte ptr ds : [esi+0xD], 1
        jmp public_4cdbad
        public_4cdb78 : nop
        lea ecx, ss:[esp+0xB4]
        call public_4cdc30
        mov ecx, dword ptr ds : [esi]
        lea edx, ss:[esp+0xB4]
        push edx
        call public_4cdc60
        lea eax, ss:[esp+0xB4]
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x14C], 2
        call public_4cdfc0
        public_4cdbad : nop
        mov ebx, dword ptr ss : [esp+0x14]
        push ebx
        lea esi, ds:[edi+0x464]
        push esi
        mov ecx, edi
        call public_4ce4c0
        mov ecx, dword ptr ds : [public_6735a4]
        mov edx, dword ptr ds : [public_6735a8]
/*FIXUP push offset public_6735a8 @0x4cdbcc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6735a8
/*FIXUP push offset public_6735ac @0x4cdbd1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6735ac
        push ebx
        push ecx
        push edx
        call public_427940
        mov esi, dword ptr ds : [esi+4]
        add esp, 0x14
        test esi, esi
        pop ebp
        je public_4cdbf2
        fld dword ptr ds : [public_6735a8]
        fstp dword ptr ds : [esi+0x1C]
        public_4cdbf2 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        add edi, 0x4B8
        push edi
        push ebx
        call public_4cc140
        pop ebx
        public_4cdc04 : nop
        pop edi
        pop esi
        add esp, 0x13C
        ret 
        UNREACHABLE_TRAP(0x4cd9d0)
    }
}

#undef public_4cda0e
#undef public_4cda1c
#undef public_4cda28
#undef public_4cda42
#undef public_4cda52
#undef public_4cda57
#undef public_4cda5d
#undef public_4cda8b
#undef public_4cdb1d
#undef public_4cdb37
#undef public_4cdb61
#undef public_4cdb78
#undef public_4cdbad
#undef public_4cdbf2
#undef public_4cdc04
