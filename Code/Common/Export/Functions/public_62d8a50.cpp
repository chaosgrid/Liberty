#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_62d4370);
CLANG_FORWARD_PROC_SYMBOL(public_62d76d0);
CLANG_FORWARD_PROC_SYMBOL(public_62d9220);
CLANG_FORWARD_PROC_SYMBOL(public_62de040);
CLANG_FORWARD_PROC_SYMBOL(public_62e1f40);
CLANG_FORWARD_PROC_SYMBOL(public_62e2630);
CLANG_FORWARD_PROC_SYMBOL(public_62e28f0);
CLANG_FORWARD_PROC_SYMBOL(public_62e2c00);
CLANG_FORWARD_PROC_SYMBOL(public_62e2c70);
CLANG_FORWARD_PROC_SYMBOL(public_62e37e0);
CLANG_FORWARD_PROC_SYMBOL(public_62e4500);
CLANG_FORWARD_PROC_SYMBOL(public_62e89a0);
CLANG_FORWARD_PROC_SYMBOL(public_62e8c20);
CLANG_FORWARD_PROC_SYMBOL(public_62e9120);

#define public_62d8a77 _public_62d8a77
#define public_62d8b4f _public_62d8b4f
#define public_62d8b6c _public_62d8b6c
#define public_62d8b88 _public_62d8b88
#define public_62d8b97 _public_62d8b97
#define public_62d8c65 _public_62d8c65
#define public_62d8c80 _public_62d8c80
#define public_62d8caa _public_62d8caa
#define public_62d8cc2 _public_62d8cc2
#define public_62d8ce9 _public_62d8ce9
#define public_62d8d01 _public_62d8d01
#define public_62d8d28 _public_62d8d28
#define public_62d8d40 _public_62d8d40
#define public_62d8d65 _public_62d8d65
#define public_62d8d69 _public_62d8d69
#define public_62d8d75 _public_62d8d75
#define public_62d8dd0 _public_62d8dd0
#define public_62d8de8 _public_62d8de8
#define public_62d8e18 _public_62d8e18
#define public_62d8e31 _public_62d8e31
#define public_62d8e97 _public_62d8e97
#define public_62d8e99 _public_62d8e99
#define public_62d8edd _public_62d8edd
#define public_62d8ee6 _public_62d8ee6
#define public_62d8ee8 _public_62d8ee8
#define public_62d8f1a _public_62d8f1a
#define public_62d9060 _public_62d9060
#define public_62d90c6 _public_62d90c6
#define public_62d90d2 _public_62d90d2
#define public_62d90d4 _public_62d90d4
#define public_62d90e3 _public_62d90e3
#define public_62d9105 _public_62d9105
#define public_62d91bf _public_62d91bf
#define public_62d91f2 _public_62d91f2

PROC_DECLARE(0x62d8a50, internal_62d8a50, public_62d8a50);
extern "C" NAKED register_t __cdecl internal_62d8a50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0xAC
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+4]
        push edi
        xor edi, edi
        cmp eax, edi
        jne public_62d8a77
        mov eax, 3
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xAC
        ret 4
        public_62d8a77 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+0xC]
        lea edx, ss:[esp+0x44]
        push edx
        call public_62de040
        test eax, eax
        jne public_62d8b97
        mov eax, dword ptr ss : [ebp+8]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        push edi
        lea ecx, ss:[esp+0x48]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        push eax
        lea eax, ss:[esp+0xA4]
        push eax
        call public_62e1f40
        push edi
        push 0x3E490FDB
        lea ecx, ss:[esp+0xB0]
        push ecx
        lea edx, ss:[esp+0x84]
        push edx
        call public_62e2630
        mov eax, dword ptr ss : [ebp+8]
        add esp, 0x20
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x28], 0
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        push ecx
        lea edx, ss:[esp+0x6C]
        push edx
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        push eax
        lea eax, ss:[esp+0x38]
        push eax
        call public_62e28f0
        fld dword ptr ss : [esp+0x38]
        fcomp dword ptr ds : [public_639f534]
        add esp, 0x10
        fnstsw ax
        test ah, 0x41
        jne public_62d8b4f
        push 1
        lea ecx, ss:[esp+0x30]
        push ecx
        mov ecx, dword ptr ss : [ebp+0xC]
        lea edx, ss:[esp+0x70]
        push edx
        lea eax, ss:[esp+0x44]
        push eax
        call public_62d4370
        mov ecx, dword ptr ss : [ebp+8]
        push eax
        add ecx, 0x14FC
        push ecx
        call public_62e37e0
        add esp, 0x14
        lea edx, ss:[esp+0x2C]
        push edx
        jmp public_62d8b6c
        public_62d8b4f : nop
        lea eax, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0
        push eax
        public_62d8b6c : nop
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0x18
        call public_62e8c20
        mov ecx, dword ptr ss : [ebp+8]
        push edi
        push 0x3F800000
        add ecx, 0x18
        call public_62e89a0
        public_62d8b88 : nop
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xAC
        ret 4
        public_62d8b97 : nop
        fld dword ptr ss : [esp+0xC0]
        fadd dword ptr ss : [ebp+0x84]
        fst dword ptr ss : [ebp+0x84]
        fcomp dword ptr ss : [ebp+0x88]
        fnstsw ax
        test ah, 1
        jne public_62d8d75
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0x3F800000
        mov dword ptr ss : [esp+0x24], 0
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+0x14]
        sub esp, 0xC
        fld dword ptr ds : [eax+0x20]
        lea ecx, ss:[esp+0x38]
        fchs 
        fstp dword ptr ss : [esp+8]
        fchs 
        fstp dword ptr ss : [esp+4]
        fchs 
        fstp dword ptr ss : [esp]
        call public_628b030
        mov eax, dword ptr ss : [ebp+8]
        lea ecx, ss:[esp+0x1C]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        push ecx
        lea edx, ss:[esp+0x30]
        push edx
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        push eax
        lea eax, ss:[esp+0xA4]
        push eax
        call public_62e1f40
        lea ebx, ss:[ebp+0x60]
        mov esi, eax
        mov ecx, 9
        mov edi, ebx
        rep movsd
        add esp, 0x10
        lea ecx, ss:[ebp+0x14]
        call public_62d76d0
        dec eax
        cmp eax, 3
        ja public_62d8d69
/*FIXUP jmp dword ptr ds : [eax*4+public_62d9208] @0x62d8c5e*/
  JMPTB cmp eax, 0
  JMPTB je public_62d8c65
  JMPTB cmp eax, 1
  JMPTB je public_62d8caa
  JMPTB cmp eax, 2
  JMPTB je public_62d8ce9
  JMPTB cmp eax, 3
  JMPTB je public_62d8d28
  JMPTB int 3
        public_62d8c65 : nop
        fld qword ptr ds : [public_63a0518]
        lea eax, ds:[ebx+8]
        fcos 
        mov ecx, 3
        fld qword ptr ds : [public_63a0518]
        fsin 
        lea ecx, ds:[ecx]
        public_62d8c80 : nop
        fld dword ptr ds : [eax-8]
        add eax, 0xC
        dec ecx
        fld st(0)
        fmul st, st(3)
        fld st(2)
        fmul dword ptr ds : [eax-0xC]
        fsubp 
        fstp dword ptr ds : [eax-0x14]
        fld st(2)
        fmul dword ptr ds : [eax-0xC]
        fxch 
        fmul st, st(2)
        faddp 
        fstp dword ptr ds : [eax-0xC]
        jne public_62d8c80
        jmp public_62d8d65
        public_62d8caa : nop
        fld qword ptr ds : [public_63a0510]
        lea eax, ds:[ebx+8]
        fcos 
        mov ecx, 3
        fld qword ptr ds : [public_63a0510]
        fsin 
        public_62d8cc2 : nop
        fld dword ptr ds : [eax-8]
        add eax, 0xC
        dec ecx
        fld st(0)
        fmul st, st(3)
        fld st(2)
        fmul dword ptr ds : [eax-0xC]
        fsubp 
        fstp dword ptr ds : [eax-0x14]
        fld st(2)
        fmul dword ptr ds : [eax-0xC]
        fxch 
        fmul st, st(2)
        faddp 
        fstp dword ptr ds : [eax-0xC]
        jne public_62d8cc2
        jmp public_62d8d65
        public_62d8ce9 : nop
        fld qword ptr ds : [public_63a0518]
        lea eax, ds:[ebx+8]
        fcos 
        mov ecx, 3
        fld qword ptr ds : [public_63a0518]
        fsin 
        public_62d8d01 : nop
        fld dword ptr ds : [eax-4]
        add eax, 0xC
        dec ecx
        fld st(0)
        fmul st, st(3)
        fld st(2)
        fmul dword ptr ds : [eax-0xC]
        faddp 
        fstp dword ptr ds : [eax-0x10]
        fld st(2)
        fmul dword ptr ds : [eax-0xC]
        fxch 
        fmul st, st(2)
        fsubp 
        fstp dword ptr ds : [eax-0xC]
        jne public_62d8d01
        jmp public_62d8d65
        public_62d8d28 : nop
        fld qword ptr ds : [public_63a0510]
        lea eax, ds:[ebx+8]
        fcos 
        mov ecx, 3
        fld qword ptr ds : [public_63a0510]
        fsin 
        public_62d8d40 : nop
        fld dword ptr ds : [eax-4]
        add eax, 0xC
        dec ecx
        fld st(0)
        fmul st, st(3)
        fld st(2)
        fmul dword ptr ds : [eax-0xC]
        faddp 
        fstp dword ptr ds : [eax-0x10]
        fld st(2)
        fmul dword ptr ds : [eax-0xC]
        fxch 
        fmul st, st(2)
        fsubp 
        fstp dword ptr ds : [eax-0xC]
        jne public_62d8d40
        public_62d8d65 : nop
        fstp st(0)
        fstp st(0)
        public_62d8d69 : nop
        mov dword ptr ss : [ebp+0x84], 0
        xor edi, edi
        public_62d8d75 : nop
        mov eax, dword ptr ss : [ebp+0x34]
        sub eax, edi
        je public_62d9105
        dec eax
        je public_62d8e31
        dec eax
        jne public_62d8b88
        fld dword ptr ss : [ebp+0x48]
        fcomp dword ptr ss : [ebp+0x4C]
        fnstsw ax
        test ah, 5
        jp public_62d8e18
        mov ecx, ebp
        call public_62d9220
        sub eax, edi
        je public_62d8de8
        dec eax
        je public_62d8dd0
        dec eax
        jne public_62d8b88
        fld dword ptr ss : [esp+0xC0]
        mov byte ptr ss : [ebp+0x5C], 0
        fadd dword ptr ss : [ebp+0x48]
        xor eax, eax
        fstp dword ptr ss : [ebp+0x48]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xAC
        ret 4
        public_62d8dd0 : nop
        mov dword ptr ss : [ebp+0x48], edi
        mov dword ptr ss : [ebp+0x50], edi
        mov eax, 1
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xAC
        ret 4
        public_62d8de8 : nop
        fld dword ptr ss : [esp+0xC0]
        fadd dword ptr ss : [ebp+0x50]
        fst dword ptr ss : [ebp+0x50]
        fcomp dword ptr ss : [ebp+0x58]
        fnstsw ax
        test ah, 0x41
        jne public_62d8b88
        mov dword ptr ss : [ebp+0x50], edi
        mov eax, 1
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xAC
        ret 4
        public_62d8e18 : nop
        mov dword ptr ss : [ebp+0x48], edi
        mov dword ptr ss : [ebp+0x50], edi
        mov byte ptr ss : [ebp+0x5C], 0
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xAC
        ret 4
        public_62d8e31 : nop
        mov ecx, dword ptr ss : [ebp+0x40]
        push edi
        push ecx
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0x18
        call public_62e89a0
        mov ecx, dword ptr ss : [ebp+4]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xC]
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+0x14]
        fld dword ptr ds : [eax+0x20]
        mov eax, dword ptr ss : [ebp+0x28]
        cmp eax, edi
        fstp dword ptr ss : [esp+0x24]
        fxch 
        fchs 
        fstp dword ptr ss : [esp+0x10]
        fchs 
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x24]
        fchs 
        fstp dword ptr ss : [esp+0x18]
        je public_62d8f1a
        add eax, 0xFFFFFFF8
        cmp eax, edi
        je public_62d8f1a
        mov al, byte ptr ss : [ebp+0x30]
        test al, al
        mov eax, dword ptr ss : [ebp+0x28]
        je public_62d8edd
        cmp eax, edi
        je public_62d8e97
        lea ecx, ds:[eax-8]
        jmp public_62d8e99
        public_62d8e97 : nop
        xor ecx, ecx
        public_62d8e99 : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0xC]
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+0x14]
        fld dword ptr ds : [eax+0x20]
        fstp dword ptr ss : [esp+0x40]
        fxch 
        fchs 
        fstp dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x1C]
        fchs 
        mov dword ptr ss : [esp+0x10], ecx
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x40]
        mov edx, dword ptr ss : [esp+0x20]
        fchs 
        mov dword ptr ss : [esp+0x14], edx
        fstp dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x18], eax
        jmp public_62d8f1a
        public_62d8edd : nop
        cmp eax, edi
        je public_62d8ee6
        lea ecx, ds:[eax-8]
        jmp public_62d8ee8
        public_62d8ee6 : nop
        xor ecx, ecx
        public_62d8ee8 : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xC]
        fld dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [eax+0x14]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ds : [eax+0x20]
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x18], edx
        public_62d8f1a : nop
        mov eax, dword ptr ss : [ebp+8]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+0x14]
        sub esp, 0xC
        fld dword ptr ds : [eax+0x20]
        lea ecx, ss:[esp+0x38]
        fchs 
        fstp dword ptr ss : [esp+8]
        fchs 
        fstp dword ptr ss : [esp+4]
        fchs 
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x14]
        faddp 
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        mov eax, dword ptr ss : [ebp+8]
        jne public_62d9060
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        push edi
        lea esi, ss:[ebp+0x60]
        push esi
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        push eax
        lea eax, ss:[esp+0x1C]
        push eax
        call public_62e28f0
        fld dword ptr ss : [ebp+0x94]
        fld dword ptr ss : [esp+0x20]
        add esp, 0x10
        fmul st, st(1)
        push 1
        push 0x3F800000
        push edi
        fstp dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        push esi
        fmul st, st(1)
        sub esp, 0xC
        mov ecx, esp
        mov dword ptr ds : [ecx], edx
        fstp dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x34]
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ss : [ebp+4]
        fmul st, st(1)
        push eax
        fstp dword ptr ss : [esp+0x38]
        mov edx, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [ecx+8], edx
        lea ecx, ss:[esp+0xAC]
        fstp st(0)
        push ecx
        call public_62e2c70
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x34], edx
        mov ecx, dword ptr ds : [eax+4]
        add esp, 0x24
        mov dword ptr ss : [esp+0x14], ecx
        mov edx, dword ptr ds : [eax+8]
        push edi
        lea eax, ss:[esp+0x14]
        push eax
        push esi
        lea ecx, ss:[esp+0x5C]
        push ecx
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [esp+0x28], edx
        call public_62d4370
        mov edx, dword ptr ss : [ebp+8]
        push eax
        add edx, 0x14FC
        push edx
        call public_62e37e0
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 0x14
        lea eax, ss:[esp+0x10]
        push eax
        add ecx, 0x18
        call public_62e8c20
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xAC
        ret 4
        public_62d9060 : nop
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ss : [ebp+0x98]
        push ecx
        push edi
        push edi
        push eax
        lea edx, ss:[esp+0x48]
        push edx
        call public_62e2c00
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 0x14
        lea eax, ss:[esp+0x38]
        push eax
        add ecx, 0x18
        call public_62e8c20
        fld dword ptr ss : [esp+0xC0]
        fadd dword ptr ss : [ebp+0x90]
        fst dword ptr ss : [ebp+0x90]
        fcomp dword ptr ss : [ebp+0x8C]
        fnstsw ax
        test ah, 1
        jne public_62d90c6
        mov ecx, dword ptr ss : [ebp+8]
        push 1
        add ecx, 0x18
        call public_62e9120
        public_62d90c6 : nop
        mov eax, dword ptr ss : [ebp+0x28]
        cmp eax, edi
        je public_62d90d2
        add eax, 0xFFFFFFF8
        jmp public_62d90d4
        public_62d90d2 : nop
        xor eax, eax
        public_62d90d4 : nop
        mov ecx, dword ptr ss : [ebp+0x38]
        mov edx, dword ptr ss : [ebp+8]
        push ecx
        push eax
        add edx, 0x14FC
        push edx
        public_62d90e3 : nop
        call public_62e4500
        add esp, 0xC
        test al, al
        jne public_62d8b88
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0xAC
        ret 4
        public_62d9105 : nop
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ss : [ebp+0x98]
        push ecx
        push edi
        push edi
        push eax
        lea edx, ss:[esp+0x6C]
        push edx
        call public_62e2c00
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x24], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x28], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x2C], eax
        mov eax, dword ptr ss : [ebp+8]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        add esp, 0x14
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ss : [ebp+8]
        lea eax, ss:[esp+0x10]
        push eax
        add ecx, 0x18
        call public_62e8c20
        mov ecx, dword ptr ss : [ebp+0x40]
        push edi
        push ecx
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0x18
        call public_62e89a0
        fld dword ptr ss : [esp+0xC0]
        fadd dword ptr ss : [ebp+0x90]
        fst dword ptr ss : [ebp+0x90]
        fcomp dword ptr ss : [ebp+0x8C]
        fnstsw ax
        test ah, 1
        jne public_62d91bf
        mov ecx, dword ptr ss : [ebp+8]
        push 1
        add ecx, 0x18
        call public_62e9120
        public_62d91bf : nop
        mov eax, dword ptr ss : [ebp+0x28]
        cmp eax, edi
        je public_62d8b88
        add eax, 0xFFFFFFF8
        cmp eax, edi
        je public_62d8b88
        mov eax, dword ptr ss : [ebp+0x28]
        cmp eax, edi
        je public_62d91f2
        mov edx, dword ptr ss : [ebp+0x38]
        add eax, 0xFFFFFFF8
        push edx
        push eax
        mov eax, dword ptr ss : [ebp+8]
        add eax, 0x14FC
        push eax
        jmp public_62d90e3
        public_62d91f2 : nop
        mov edx, dword ptr ss : [ebp+0x38]
        xor eax, eax
        push edx
        push eax
        mov eax, dword ptr ss : [ebp+8]
        add eax, 0x14FC
        push eax
        jmp public_62d90e3
        UNREACHABLE_TRAP(0x62d8a50)
        ASM_EXPORT_ENTRY_FIRST(0x62d8c65, public_62d8c65)
        ASM_EXPORT_ENTRY(0x62d8caa, public_62d8caa)
        ASM_EXPORT_ENTRY(0x62d8ce9, public_62d8ce9)
        ASM_EXPORT_ENTRY_LAST(0x62d8d28, public_62d8d28)
    }
}

#undef public_62d8a77
#undef public_62d8b4f
#undef public_62d8b6c
#undef public_62d8b88
#undef public_62d8b97
#undef public_62d8c65
#undef public_62d8c80
#undef public_62d8caa
#undef public_62d8cc2
#undef public_62d8ce9
#undef public_62d8d01
#undef public_62d8d28
#undef public_62d8d40
#undef public_62d8d65
#undef public_62d8d69
#undef public_62d8d75
#undef public_62d8dd0
#undef public_62d8de8
#undef public_62d8e18
#undef public_62d8e31
#undef public_62d8e97
#undef public_62d8e99
#undef public_62d8edd
#undef public_62d8ee6
#undef public_62d8ee8
#undef public_62d8f1a
#undef public_62d9060
#undef public_62d90c6
#undef public_62d90d2
#undef public_62d90d4
#undef public_62d90e3
#undef public_62d9105
#undef public_62d91bf
#undef public_62d91f2

#pragma init_seg(compiler)
extern "C" void const* const public_62d8c65 = __AsmFindLabelExport(&internal_62d8a50, 0x62d8c65);
extern "C" void const* const public_62d8caa = __AsmFindLabelExport(&internal_62d8a50, 0x62d8caa);
extern "C" void const* const public_62d8ce9 = __AsmFindLabelExport(&internal_62d8a50, 0x62d8ce9);
extern "C" void const* const public_62d8d28 = __AsmFindLabelExport(&internal_62d8a50, 0x62d8d28);
