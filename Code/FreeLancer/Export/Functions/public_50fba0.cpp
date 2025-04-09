#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_417c50);
CLANG_FORWARD_PROC_SYMBOL(public_50fba0);
CLANG_FORWARD_PROC_SYMBOL(public_5126f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);
CLANG_FORWARD_JUMP_SYMBOL(public_5bfcef);

#define public_50fc10 _public_50fc10
#define public_50fc35 _public_50fc35
#define public_50fc90 _public_50fc90
#define public_50fcb3 _public_50fcb3
#define public_50fcd9 _public_50fcd9
#define public_50fcf0 _public_50fcf0
#define public_50fd0e _public_50fd0e
#define public_50fd2c _public_50fd2c
#define public_50fe2c _public_50fe2c
#define public_50fe3e _public_50fe3e
#define public_50fe4f _public_50fe4f
#define public_50fe65 _public_50fe65
#define public_50fe80 _public_50fe80
#define public_50fea0 _public_50fea0
#define public_50fea4 _public_50fea4
#define public_50feae _public_50feae
#define public_50feb0 _public_50feb0
#define public_50feb3 _public_50feb3
#define public_50fef5 _public_50fef5
#define public_50ff35 _public_50ff35
#define public_50ff7f _public_50ff7f
#define public_50ffb6 _public_50ffb6
#define public_50ffcb _public_50ffcb
#define public_50ffe0 _public_50ffe0
#define public_510003 _public_510003
#define public_510028 _public_510028
#define public_510031 _public_510031
#define public_51006d _public_51006d
#define public_5100a6 _public_5100a6
#define public_5100a9 _public_5100a9
#define public_5100d6 _public_5100d6
#define public_5100e5 _public_5100e5
#define public_5100f4 _public_5100f4
#define public_510117 _public_510117
#define public_51013c _public_51013c
#define public_510145 _public_510145

PROC_DECLARE(0x50fba0, internal_50fba0, public_50fba0);
extern "C" NAKED register_t __cdecl internal_50fba0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5bfcef @0x50fba8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bfcef
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x15C4
        mov dword ptr fs : [0], esp
        call public_5b7e90
        push ebx
        push esi
        mov esi, ecx
        push edi
        lea ecx, ss:[esp+0x68]
        mov dword ptr ss : [esp+0xC], 2
        mov dword ptr ss : [esp+0x18], 0x3F800000
        call dword ptr ds : [public_5c605c]
        mov eax, dword ptr ss : [esp+0x15E0]
        xor ebx, ebx
        push ebx
        push eax
        lea ecx, ss:[esp+0x70]
        mov dword ptr ss : [esp+0x15E0], ebx
        call dword ptr ds : [public_5c6058]
        test al, al
        je public_50fea4
        mov edi, dword ptr ss : [esp+0x15E4]
        mov ebx, dword ptr ds : [public_5c6d24]
        nop 
        public_50fc10 : nop
        lea ecx, ss:[esp+0x68]
        call dword ptr ds : [public_5c6054]
        test al, al
        je public_50feae
/*FIXUP push offset public_5db61c @0x50fc22*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5db61c
        lea ecx, ss:[esp+0x6C]
        call dword ptr ds : [public_5c6050]
        test al, al
        je public_50fc10
        public_50fc35 : nop
        lea ecx, ss:[esp+0x68]
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_50fc10
/*FIXUP push offset public_5c866c @0x50fc43*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c866c
        lea ecx, ss:[esp+0x6C]
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_50fc35
        lea ecx, ss:[esp+0x68]
        call dword ptr ds : [public_5c6698]
        push eax
        push edi
        call ebx
        add esp, 8
        test eax, eax
        jne public_50fc10
        xor ebx, ebx
        lea ecx, ss:[esp+0x68]
        mov dword ptr ss : [esp+0xC], ebx
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_50fe3e
        mov edi, dword ptr ds : [public_5c6cf4]
        lea esp, ss:[esp]
/*FIXUP public_50fc90 : nop
        push offset public_5db5c8 @0x50fc90*/
  FIXUP public_50fc90 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5db5c8
        lea ecx, ss:[esp+0x6C]
        call edi
        test al, al
        lea ecx, ss:[esp+0x68]
        je public_50fcb3
        push ebx
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x18]
        jmp public_50fe2c
/*FIXUP public_50fcb3 : nop
        push offset public_5c9660 @0x50fcb3*/
  FIXUP public_50fcb3 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9660
        call edi
        test al, al
        lea ecx, ss:[esp+0x68]
        je public_50fcf0
        push ebx
        call dword ptr ds : [public_5c6024]
        cmp eax, ebx
        jne public_50fcd9
        mov dword ptr ds : [esi+0x10], ebx
        mov byte ptr ds : [esi+0x14], 0
        jmp public_50fe2c
        public_50fcd9 : nop
        push eax
        lea ecx, ds:[esi+0x14]
        push 0x20
        push ecx
        call public_417c50
        add esp, 0xC
        mov dword ptr ds : [esi+0x10], eax
        jmp public_50fe2c
/*FIXUP public_50fcf0 : nop
        push offset public_5da688 @0x50fcf0*/
  FIXUP public_50fcf0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da688
        call edi
        test al, al
        lea ecx, ss:[esp+0x68]
        je public_50fd0e
        push ebx
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [esi+0x38]
        jmp public_50fe2c
/*FIXUP public_50fd0e : nop
        push offset public_5da67c @0x50fd0e*/
  FIXUP public_50fd0e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da67c
        call edi
        test al, al
        lea ecx, ss:[esp+0x68]
        je public_50fd2c
        push ebx
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [esi+0x3C]
        jmp public_50fe2c
/*FIXUP public_50fd2c : nop
        push offset public_5db614 @0x50fd2c*/
  FIXUP public_50fd2c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5db614
        call edi
        test al, al
        je public_50fe2c
        push ebx
        lea ecx, ss:[esp+0x6C]
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x44]
        push 1
        lea ecx, ss:[esp+0x6C]
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x48]
        push 3
        lea ecx, ss:[esp+0x6C]
        call dword ptr ds : [public_5c6cfc]
        fstp qword ptr ss : [esp+0x1C]
        push 2
        lea ecx, ss:[esp+0x6C]
        call dword ptr ds : [public_5c6cfc]
        fstp qword ptr ss : [esp+0x10]
        push 4
        lea ecx, ss:[esp+0x6C]
        call dword ptr ds : [public_5c6cfc]
        fld qword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x30]
        fld qword ptr ss : [esp+0x1C]
        push 6
        fstp dword ptr ss : [esp+0x38]
        mov eax, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x50], edx
        fstp dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0x58], ecx
        lea ecx, ss:[esp+0x6C]
        mov dword ptr ss : [esp+0x54], eax
        call dword ptr ds : [public_5c6cfc]
        fstp qword ptr ss : [esp+0x10]
        push 5
        lea ecx, ss:[esp+0x6C]
        call dword ptr ds : [public_5c6cfc]
        fstp qword ptr ss : [esp+0x1C]
        push 7
        lea ecx, ss:[esp+0x6C]
        call dword ptr ds : [public_5c6cfc]
        fld qword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x24]
        fld qword ptr ss : [esp+0x10]
        push 8
        fstp dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x5C], edx
        fstp dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x64], ecx
        lea ecx, ss:[esp+0x6C]
        mov dword ptr ss : [esp+0x60], eax
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x64]
        mov eax, dword ptr ds : [esi+8]
        lea edx, ss:[esp+0x3C]
        push edx
        push 1
        push eax
        mov ecx, esi
        call public_5126f0
        public_50fe2c : nop
        lea ecx, ss:[esp+0x68]
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_50fc90
        public_50fe3e : nop
        mov eax, dword ptr ds : [esi+4]
        fld dword ptr ds : [public_5c7474]
        cmp eax, ebx
        jne public_50fe4f
        xor edx, edx
        jmp public_50fe65
        public_50fe4f : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        mov eax, 0x2E8BA2E9
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_50fe65 : nop
        cmp edx, ebx
        mov dword ptr ss : [esp+0x10], edx
        fild dword ptr ss : [esp+0x10]
        fdivr dword ptr ds : [public_5da774]
        fstp dword ptr ss : [esp+0x10]
        jle public_50fea0
        xor eax, eax
        lea ecx, ds:[ecx]
        public_50fe80 : nop
        fld st(0)
        mov ecx, dword ptr ds : [esi+4]
        fcos 
        add eax, 0x2C
        dec edx
        fstp dword ptr ds : [ecx+eax-0x2C]
        mov ecx, dword ptr ds : [esi+4]
        fld st(0)
        fsin 
        fstp dword ptr ds : [ecx+eax-0x28]
        fadd dword ptr ss : [esp+0x10]
        jne public_50fe80
        public_50fea0 : nop
        fstp st(0)
        jmp public_50feb0
        public_50fea4 : nop
        mov dword ptr ss : [esp+0xC], 1
        jmp public_50feb0
        public_50feae : nop
        xor ebx, ebx
        public_50feb0 : nop
        push ebp
        xor ebp, ebp
        public_50feb3 : nop
        mov edi, dword ptr ds : [esi+4]
        test edi, edi
        je public_50fef5
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, edi
        mov eax, 0x2E8BA2E9
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp ebx, edx
        jae public_50fef5
        fld dword ptr ss : [esp+0x1C]
        inc ebx
        fmul dword ptr ds : [edi+ebp+8]
        fstp dword ptr ds : [edi+ebp+8]
        mov edx, dword ptr ds : [esi+4]
        fld dword ptr ss : [esp+0x1C]
        lea eax, ds:[edx+ebp+0xC]
        fmul dword ptr ds : [eax]
        add ebp, 0x2C
        fstp dword ptr ds : [eax]
        jmp public_50feb3
        public_50fef5 : nop
        lea eax, ss:[esp+0x1494]
        mov dword ptr ss : [esp+0x15DC], 1
        mov dword ptr ss : [esp+0x14], eax
        mov ecx, dword ptr ds : [public_5c7080]
        mov esi, dword ptr ds : [ecx]
        lea ecx, ss:[esp+0x1494]
        mov byte ptr ss : [esp+0x15DC], 2
        call dword ptr ds : [public_5c7068]
        mov eax, dword ptr ss : [esp+0x149C]
        cmp eax, esi
        jae public_50ff35
        mov esi, eax
        public_50ff35 : nop
        mov ebp, dword ptr ds : [public_5c709c]
        xor ebx, ebx
        cmp esi, ebx
        jbe public_50ff7f
        mov ecx, dword ptr ss : [esp+0x1498]
        sub eax, esi
        push eax
        lea edx, ds:[ecx+esi]
        push edx
        push ecx
        call ebp
        mov edi, dword ptr ss : [esp+0x14A8]
        add esp, 0xC
        push ebx
        sub edi, esi
        push edi
        lea ecx, ss:[esp+0x149C]
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_50ff7f
        push edi
        lea ecx, ss:[esp+0x1498]
        call dword ptr ds : [public_5c706c]
        public_50ff7f : nop
        mov eax, dword ptr ss : [esp+0x14A4]
        or edi, 0xFFFFFFFF
        cmp eax, edi
        je public_50ffe0
        cmp dword ptr ss : [esp+0x14A8], ebx
        je public_50ffcb
        mov eax, dword ptr ss : [esp+0x14AC]
        cmp eax, ebx
        je public_50ffb6
        push eax
        call dword ptr ds : [public_5c6efc]
        mov dword ptr ss : [esp+0x14AC], ebx
        mov dword ptr ss : [esp+0x14B0], ebx
        public_50ffb6 : nop
        mov edx, dword ptr ss : [esp+0x14A8]
        push edx
        call dword ptr ds : [public_5c6ef8]
        mov dword ptr ss : [esp+0x14A8], ebx
        public_50ffcb : nop
        mov eax, dword ptr ss : [esp+0x14A4]
        push eax
        call dword ptr ds : [public_5c6ef8]
        mov dword ptr ss : [esp+0x14A4], edi
        public_50ffe0 : nop
        mov eax, dword ptr ss : [esp+0x14AC]
        cmp eax, ebx
        je public_510003
        push eax
        call dword ptr ds : [public_5c71d8]
        add esp, 4
        mov dword ptr ss : [esp+0x14AC], ebx
        mov dword ptr ss : [esp+0x14B0], ebx
        public_510003 : nop
        mov eax, dword ptr ss : [esp+0x1498]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x14B4], ebx
        je public_510031
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_510028
        cmp cl, 0xFF
        je public_510028
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_510031
        public_510028 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_510031 : nop
        mov dword ptr ss : [esp+0x1498], ebx
        mov dword ptr ss : [esp+0x149C], ebx
        mov dword ptr ss : [esp+0x14A0], ebx
        mov ecx, dword ptr ds : [public_5c7080]
        mov esi, dword ptr ds : [ecx]
        lea ecx, ss:[esp+0x6C]
        mov dword ptr ss : [esp+0x15DC], 3
        call dword ptr ds : [public_5c7068]
        mov eax, dword ptr ss : [esp+0x74]
        cmp eax, esi
        jae public_51006d
        mov esi, eax
        public_51006d : nop
        cmp esi, ebx
        jbe public_5100a9
        sub eax, esi
        push eax
        mov eax, dword ptr ss : [esp+0x74]
        lea edx, ds:[eax+esi]
        push edx
        push eax
        call ebp
        mov edi, dword ptr ss : [esp+0x80]
        add esp, 0xC
        push ebx
        sub edi, esi
        push edi
        lea ecx, ss:[esp+0x74]
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_5100a6
        push edi
        lea ecx, ss:[esp+0x70]
        call dword ptr ds : [public_5c706c]
        public_5100a6 : nop
        or edi, 0xFFFFFFFF
        public_5100a9 : nop
        cmp dword ptr ss : [esp+0x7C], edi
        pop ebp
        je public_5100f4
        cmp dword ptr ss : [esp+0x7C], ebx
        je public_5100e5
        mov eax, dword ptr ss : [esp+0x80]
        cmp eax, ebx
        je public_5100d6
        push eax
        call dword ptr ds : [public_5c6efc]
        mov dword ptr ss : [esp+0x80], ebx
        mov dword ptr ss : [esp+0x84], ebx
        public_5100d6 : nop
        mov eax, dword ptr ss : [esp+0x7C]
        push eax
        call dword ptr ds : [public_5c6ef8]
        mov dword ptr ss : [esp+0x7C], ebx
        public_5100e5 : nop
        mov ecx, dword ptr ss : [esp+0x78]
        push ecx
        call dword ptr ds : [public_5c6ef8]
        mov dword ptr ss : [esp+0x78], edi
        public_5100f4 : nop
        mov eax, dword ptr ss : [esp+0x80]
        cmp eax, ebx
        je public_510117
        push eax
        call dword ptr ds : [public_5c71d8]
        add esp, 4
        mov dword ptr ss : [esp+0x80], ebx
        mov dword ptr ss : [esp+0x84], ebx
        public_510117 : nop
        mov eax, dword ptr ss : [esp+0x6C]
        pop edi
        pop esi
        mov dword ptr ss : [esp+0x80], ebx
        cmp eax, ebx
        pop ebx
        je public_510145
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_51013c
        cmp cl, 0xFF
        je public_51013c
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_510145
        public_51013c : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_510145 : nop
        mov ecx, dword ptr ss : [esp+0x15C4]
        mov eax, dword ptr ss : [esp]
        mov dword ptr fs : [0], ecx
        add esp, 0x15D0
        ret 8
        UNREACHABLE_TRAP(0x50fba0)
    }
}

#undef public_50fc10
#undef public_50fc35
#undef public_50fc90
#undef public_50fcb3
#undef public_50fcd9
#undef public_50fcf0
#undef public_50fd0e
#undef public_50fd2c
#undef public_50fe2c
#undef public_50fe3e
#undef public_50fe4f
#undef public_50fe65
#undef public_50fe80
#undef public_50fea0
#undef public_50fea4
#undef public_50feae
#undef public_50feb0
#undef public_50feb3
#undef public_50fef5
#undef public_50ff35
#undef public_50ff7f
#undef public_50ffb6
#undef public_50ffcb
#undef public_50ffe0
#undef public_510003
#undef public_510028
#undef public_510031
#undef public_51006d
#undef public_5100a6
#undef public_5100a9
#undef public_5100d6
#undef public_5100e5
#undef public_5100f4
#undef public_510117
#undef public_51013c
#undef public_510145
