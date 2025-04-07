#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_417c50);
CLANG_FORWARD_PROC_SYMBOL(public_41df30);
CLANG_FORWARD_PROC_SYMBOL(public_41e550);
CLANG_FORWARD_PROC_SYMBOL(public_41e5a0);
CLANG_FORWARD_PROC_SYMBOL(public_420750);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);
CLANG_FORWARD_JUMP_SYMBOL(public_5b8abd);

#define public_41dfa7 _public_41dfa7
#define public_41dfb7 _public_41dfb7
#define public_41dfc1 _public_41dfc1
#define public_41dff6 _public_41dff6
#define public_41e027 _public_41e027
#define public_41e051 _public_41e051
#define public_41e082 _public_41e082
#define public_41e084 _public_41e084
#define public_41e0ab _public_41e0ab
#define public_41e0c8 _public_41e0c8
#define public_41e0f8 _public_41e0f8
#define public_41e10f _public_41e10f
#define public_41e14a _public_41e14a
#define public_41e170 _public_41e170
#define public_41e1e1 _public_41e1e1
#define public_41e1eb _public_41e1eb
#define public_41e1f8 _public_41e1f8
#define public_41e205 _public_41e205
#define public_41e212 _public_41e212
#define public_41e23c _public_41e23c
#define public_41e271 _public_41e271
#define public_41e288 _public_41e288
#define public_41e2c7 _public_41e2c7
#define public_41e2fd _public_41e2fd
#define public_41e31b _public_41e31b
#define public_41e339 _public_41e339
#define public_41e355 _public_41e355
#define public_41e36a _public_41e36a
#define public_41e37f _public_41e37f
#define public_41e3ee _public_41e3ee
#define public_41e3ff _public_41e3ff
#define public_41e414 _public_41e414
#define public_41e439 _public_41e439
#define public_41e4a8 _public_41e4a8
#define public_41e4b9 _public_41e4b9
#define public_41e4ce _public_41e4ce
#define public_41e4ef _public_41e4ef
#define public_41e529 _public_41e529
#define public_41e532 _public_41e532

PROC_DECLARE(0x41df30, internal_41df30, public_41df30);
extern "C" NAKED register_t __cdecl internal_41df30()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5b8abd @0x41df38*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b8abd
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x1778
        mov dword ptr fs : [0], esp
        call public_5b7e90
        push ebx
        push edi
        lea ecx, ss:[esp+0x218]
        call dword ptr ds : [public_5c605c]
        mov eax, dword ptr ss : [esp+0x1794]
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x1788], ebx
        je public_41dfa7
        mov ecx, dword ptr ds : [eax]
        push 0x104
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        call dword ptr ds : [ecx+0x84]
        mov eax, dword ptr ss : [esp+0x1790]
        push ebx
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x120]
        push ebx
        push edx
        call dword ptr ds : [public_5c70b8]
        add esp, 0x14
        jmp public_41dfc1
        public_41dfa7 : nop
        mov eax, dword ptr ss : [esp+0x1790]
        lea edx, ss:[esp+0x114]
        sub edx, eax
        public_41dfb7 : nop
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [edx+eax], cl
        inc eax
        test cl, cl
        jne public_41dfb7
        public_41dfc1 : nop
        push ebp
        push esi
        push ebx
        lea eax, ss:[esp+0x120]
        push eax
        lea ecx, ss:[esp+0x228]
        call dword ptr ds : [public_5c6058]
        test al, al
        je public_41e37f
        lea ecx, ss:[esp+0x220]
        call dword ptr ds : [public_5c6054]
        test al, al
        je public_41e37f
/*FIXUP public_41dff6 : nop
        push offset public_5c9668 @0x41dff6*/
  FIXUP public_41dff6 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9668
        lea ecx, ss:[esp+0x224]
        call dword ptr ds : [public_5c6050]
        test al, al
        je public_41e36a
        mov esi, dword ptr ds : [public_5c669c]
        lea ecx, ss:[esp+0x220]
        call esi
        test al, al
        je public_41e36a
        public_41e027 : nop
        mov edi, dword ptr ds : [public_5c6cf4]
/*FIXUP push offset public_5c866c @0x41e02d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c866c
        lea ecx, ss:[esp+0x224]
        call edi
        test al, al
        lea ecx, ss:[esp+0x220]
        jne public_41e051
        call esi
        test al, al
        jne public_41e027
        jmp public_41e36a
        public_41e051 : nop
        push ebx
        call dword ptr ds : [public_5c6024]
        push 0x90
        mov esi, eax
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x10], eax
        cmp eax, ebx
        mov byte ptr ss : [esp+0x1790], 1
        je public_41e082
        mov ecx, eax
        call public_41e550
        mov ebp, eax
        jmp public_41e084
        public_41e082 : nop
        xor ebp, ebp
        public_41e084 : nop
        push esi
        mov ecx, ebp
        mov byte ptr ss : [esp+0x1794], 0
        call public_420750
        mov eax, dword ptr ds : [public_616740]
        cmp eax, 0x14
        jae public_41e0ab
        mov dword ptr ds : [eax*4+public_616744], ebp
        inc dword ptr ds : [public_616740]
        public_41e0ab : nop
        cmp ebp, ebx
        je public_41e36a
        lea ecx, ss:[esp+0x220]
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_41e36a
/*FIXUP public_41e0c8 : nop
        push offset public_5c9660 @0x41e0c8*/
  FIXUP public_41e0c8 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9660
        lea ecx, ss:[esp+0x224]
        call edi
        test al, al
        lea ecx, ss:[esp+0x220]
        je public_41e10f
        push ebx
        call dword ptr ds : [public_5c6024]
        cmp eax, ebx
        jne public_41e0f8
        mov dword ptr ss : [ebp+0x28], ebx
        mov byte ptr ss : [ebp+0x2C], 0
        jmp public_41e355
        public_41e0f8 : nop
        push eax
        lea ecx, ss:[ebp+0x2C]
        push 0x18
        push ecx
        call public_417c50
        add esp, 0xC
        mov dword ptr ss : [ebp+0x28], eax
        jmp public_41e355
/*FIXUP public_41e10f : nop
        push offset public_5c9658 @0x41e10f*/
  FIXUP public_41e10f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9658
        call edi
        test al, al
        lea ecx, ss:[esp+0x220]
        je public_41e14a
        push ebx
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x10]
        push 1
        lea ecx, ss:[esp+0x224]
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [ebp+0x48]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [ebp+0x44], edx
        jmp public_41e355
/*FIXUP public_41e14a : nop
        push offset public_5c9650 @0x41e14a*/
  FIXUP public_41e14a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9650
        call edi
        test al, al
        lea ecx, ss:[esp+0x220]
        je public_41e170
        push ebx
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        mov dword ptr ss : [ebp+0x50], eax
        jmp public_41e355
/*FIXUP public_41e170 : nop
        push offset public_5c7f6c @0x41e170*/
  FIXUP public_41e170 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7f6c
        call edi
        test al, al
        lea ecx, ss:[esp+0x220]
        je public_41e23c
        push ebx
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        push 1
        lea ecx, ss:[esp+0x224]
        mov esi, eax
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        push 2
        lea ecx, ss:[esp+0x224]
        mov edi, eax
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        push 3
        lea ecx, ss:[esp+0x224]
        mov dword ptr ss : [esp+0x14], eax
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        mov ebx, eax
        test ebx, ebx
        jne public_41e1e1
        mov ebx, 0xFF
        public_41e1e1 : nop
        test esi, esi
        mov eax, esi
        jge public_41e1eb
        xor eax, eax
        jmp public_41e1f8
        public_41e1eb : nop
        cmp esi, 0xFF
        jle public_41e1f8
        mov eax, 0xFF
        public_41e1f8 : nop
        test edi, edi
        mov byte ptr ss : [ebp+0x4C], al
        mov eax, edi
        jge public_41e205
        xor eax, eax
        jmp public_41e212
        public_41e205 : nop
        cmp edi, 0xFF
        jle public_41e212
        mov eax, 0xFF
        public_41e212 : nop
        mov byte ptr ss : [ebp+0x4D], al
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        mov ecx, ebp
        call public_41e5a0
        push ebx
        mov ecx, ebp
        mov byte ptr ss : [ebp+0x4E], al
        call public_41e5a0
        mov edi, dword ptr ds : [public_5c6cf4]
        mov byte ptr ss : [ebp+0x4F], al
        xor ebx, ebx
        jmp public_41e355
/*FIXUP public_41e23c : nop
        push offset public_5c9648 @0x41e23c*/
  FIXUP public_41e23c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9648
        call edi
        test al, al
        lea ecx, ss:[esp+0x220]
        je public_41e2fd
        push ebx
        call dword ptr ds : [public_5c6024]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x18], ebx
        mov byte ptr ss : [esp+0x1C], 0
        jne public_41e271
        mov dword ptr ss : [esp+0x18], ebx
        mov byte ptr ss : [esp+0x1C], 0
        jmp public_41e288
        public_41e271 : nop
        push eax
        lea ecx, ss:[esp+0x20]
        push 0x80
        push ecx
        call public_417c50
        add esp, 0xC
        mov dword ptr ss : [esp+0x18], eax
        public_41e288 : nop
        push 1
        lea ecx, ss:[esp+0x224]
        call dword ptr ds : [public_5c6cfc]
        fstp qword ptr ss : [esp+0x10]
        push 2
        lea ecx, ss:[esp+0x224]
        call dword ptr ds : [public_5c6cfc]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        lea edi, ss:[esp+0x1C]
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        lea edx, ss:[ebp+0x70]
        jb public_41e2c7
        mov eax, 0x1F
        public_41e2c7 : nop
        fld qword ptr ss : [esp+0x10]
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, edx
        lea esi, ss:[esp+0x1C]
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+edx], 0
        mov dword ptr ss : [ebp+0x6C], eax
        call public_5b7ec0
        mov edi, dword ptr ds : [public_5c6cf4]
        fstp dword ptr ss : [ebp+0x68]
        mov dword ptr ss : [ebp+0x60], eax
        xor ebx, ebx
        jmp public_41e355
/*FIXUP public_41e2fd : nop
        push offset public_5c9640 @0x41e2fd*/
  FIXUP public_41e2fd : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9640
        call edi
        test al, al
        lea ecx, ss:[esp+0x220]
        je public_41e31b
        push ebx
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [ebp+0x58]
        jmp public_41e355
/*FIXUP public_41e31b : nop
        push offset public_5c9638 @0x41e31b*/
  FIXUP public_41e31b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9638
        call edi
        test al, al
        lea ecx, ss:[esp+0x220]
        je public_41e339
        push ebx
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [ebp+0x5C]
        jmp public_41e355
/*FIXUP public_41e339 : nop
        push offset public_5c9630 @0x41e339*/
  FIXUP public_41e339 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9630
        call edi
        test al, al
        je public_41e355
        push ebx
        lea ecx, ss:[esp+0x224]
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [ebp+0x54]
        public_41e355 : nop
        lea ecx, ss:[esp+0x220]
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_41e0c8
        public_41e36a : nop
        lea ecx, ss:[esp+0x220]
        call dword ptr ds : [public_5c6054]
        test al, al
        jne public_41dff6
        public_41e37f : nop
        lea edx, ss:[esp+0x1648]
        mov dword ptr ss : [esp+0x1790], 2
        mov dword ptr ss : [esp+0x10], edx
        mov eax, dword ptr ds : [public_5c7080]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push ebx
        lea ecx, ss:[esp+0x1650]
        mov byte ptr ss : [esp+0x1798], 3
        call dword ptr ds : [public_5c707c]
        cmp dword ptr ss : [esp+0x1658], 0xFFFFFFFF
        mov ebp, dword ptr ds : [public_5c6efc]
        mov esi, dword ptr ds : [public_5c6ef8]
        je public_41e414
        cmp dword ptr ss : [esp+0x165C], ebx
        je public_41e3ff
        mov eax, dword ptr ss : [esp+0x1660]
        cmp eax, ebx
        je public_41e3ee
        push eax
        call ebp
        mov dword ptr ss : [esp+0x1660], ebx
        mov dword ptr ss : [esp+0x1664], ebx
        public_41e3ee : nop
        mov edx, dword ptr ss : [esp+0x165C]
        push edx
        call esi
        mov dword ptr ss : [esp+0x165C], ebx
        public_41e3ff : nop
        mov eax, dword ptr ss : [esp+0x1658]
        push eax
        call esi
        mov dword ptr ss : [esp+0x1658], 0xFFFFFFFF
        public_41e414 : nop
        mov eax, dword ptr ss : [esp+0x1660]
        cmp eax, ebx
        mov edi, dword ptr ds : [public_5c71d8]
        je public_41e439
        push eax
        call edi
        add esp, 4
        mov dword ptr ss : [esp+0x1660], ebx
        mov dword ptr ss : [esp+0x1664], ebx
        public_41e439 : nop
        push 1
        lea ecx, ss:[esp+0x164C]
        mov dword ptr ss : [esp+0x166C], ebx
        mov byte ptr ss : [esp+0x1794], 2
        call dword ptr ds : [public_5c7084]
        mov ecx, dword ptr ds : [public_5c7080]
        mov edx, dword ptr ds : [ecx]
        push edx
        push ebx
        lea ecx, ss:[esp+0x228]
        mov dword ptr ss : [esp+0x1798], 4
        call dword ptr ds : [public_5c707c]
        cmp dword ptr ss : [esp+0x230], 0xFFFFFFFF
        je public_41e4ce
        cmp dword ptr ss : [esp+0x234], ebx
        je public_41e4b9
        mov eax, dword ptr ss : [esp+0x238]
        cmp eax, ebx
        je public_41e4a8
        push eax
        call ebp
        mov dword ptr ss : [esp+0x238], ebx
        mov dword ptr ss : [esp+0x23C], ebx
        public_41e4a8 : nop
        mov eax, dword ptr ss : [esp+0x234]
        push eax
        call esi
        mov dword ptr ss : [esp+0x234], ebx
        public_41e4b9 : nop
        mov ecx, dword ptr ss : [esp+0x230]
        push ecx
        call esi
        mov dword ptr ss : [esp+0x230], 0xFFFFFFFF
        public_41e4ce : nop
        mov eax, dword ptr ss : [esp+0x238]
        cmp eax, ebx
        pop esi
        pop ebp
        je public_41e4ef
        push eax
        call edi
        add esp, 4
        mov dword ptr ss : [esp+0x230], ebx
        mov dword ptr ss : [esp+0x234], ebx
        public_41e4ef : nop
        mov eax, dword ptr ss : [esp+0x21C]
        pop edi
        mov dword ptr ss : [esp+0x234], ebx
        cmp eax, ebx
        pop ebx
        je public_41e532
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_41e529
        cmp cl, 0xFF
        je public_41e529
        dec cl
        mov byte ptr ds : [eax], cl
        mov ecx, dword ptr ss : [esp+0x1778]
        mov dword ptr fs : [0], ecx
        add esp, 0x1784
        ret 
        public_41e529 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_41e532 : nop
        mov ecx, dword ptr ss : [esp+0x1778]
        mov dword ptr fs : [0], ecx
        add esp, 0x1784
        ret 
        UNREACHABLE_TRAP(0x41df30)
    }
}

#undef public_41dfa7
#undef public_41dfb7
#undef public_41dfc1
#undef public_41dff6
#undef public_41e027
#undef public_41e051
#undef public_41e082
#undef public_41e084
#undef public_41e0ab
#undef public_41e0c8
#undef public_41e0f8
#undef public_41e10f
#undef public_41e14a
#undef public_41e170
#undef public_41e1e1
#undef public_41e1eb
#undef public_41e1f8
#undef public_41e205
#undef public_41e212
#undef public_41e23c
#undef public_41e271
#undef public_41e288
#undef public_41e2c7
#undef public_41e2fd
#undef public_41e31b
#undef public_41e339
#undef public_41e355
#undef public_41e36a
#undef public_41e37f
#undef public_41e3ee
#undef public_41e3ff
#undef public_41e414
#undef public_41e439
#undef public_41e4a8
#undef public_41e4b9
#undef public_41e4ce
#undef public_41e4ef
#undef public_41e529
#undef public_41e532
