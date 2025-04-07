#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_6370570);
CLANG_FORWARD_PROC_SYMBOL(public_6373c70);
CLANG_FORWARD_PROC_SYMBOL(public_6377e60);
CLANG_FORWARD_PROC_SYMBOL(public_6377fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6378600);
CLANG_FORWARD_PROC_SYMBOL(public_6380f60);
CLANG_FORWARD_PROC_SYMBOL(public_63829d0);
CLANG_FORWARD_PROC_SYMBOL(public_6383f50);
CLANG_FORWARD_PROC_SYMBOL(public_6386b00);
CLANG_FORWARD_PROC_SYMBOL(public_6387f00);
CLANG_FORWARD_PROC_SYMBOL(public_6388ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6388ae0);
CLANG_FORWARD_PROC_SYMBOL(public_6388d10);
CLANG_FORWARD_PROC_SYMBOL(public_6388db0);
CLANG_FORWARD_PROC_SYMBOL(public_6389230);
CLANG_FORWARD_PROC_SYMBOL(public_63894b0);
CLANG_FORWARD_PROC_SYMBOL(public_6389640);
CLANG_FORWARD_PROC_SYMBOL(public_63896e0);
CLANG_FORWARD_PROC_SYMBOL(public_63898f0);
CLANG_FORWARD_PROC_SYMBOL(public_6389ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6389bf0);
CLANG_FORWARD_PROC_SYMBOL(public_6389cf0);
CLANG_FORWARD_PROC_SYMBOL(public_638b250);
CLANG_FORWARD_PROC_SYMBOL(public_638c530);
CLANG_FORWARD_PROC_SYMBOL(public_638c680);

#define public_6386b32 _public_6386b32
#define public_6386b4f _public_6386b4f
#define public_6386b6f _public_6386b6f
#define public_6386ba3 _public_6386ba3
#define public_6386bb9 _public_6386bb9
#define public_6386bf3 _public_6386bf3
#define public_6386c23 _public_6386c23
#define public_6386c34 _public_6386c34
#define public_6386c45 _public_6386c45
#define public_6386c6b _public_6386c6b
#define public_6386c96 _public_6386c96
#define public_6386cb2 _public_6386cb2
#define public_6386cba _public_6386cba
#define public_6386cf5 _public_6386cf5
#define public_6386d10 _public_6386d10
#define public_6386d33 _public_6386d33
#define public_6386d49 _public_6386d49
#define public_6386d64 _public_6386d64
#define public_6386d7a _public_6386d7a
#define public_6386d94 _public_6386d94
#define public_6386db5 _public_6386db5
#define public_6386de7 _public_6386de7
#define public_6386df9 _public_6386df9
#define public_6386e12 _public_6386e12
#define public_6386e32 _public_6386e32
#define public_6386e42 _public_6386e42
#define public_6386e59 _public_6386e59
#define public_6386e5d _public_6386e5d
#define public_6386e7e _public_6386e7e
#define public_6386ea2 _public_6386ea2
#define public_6386ead _public_6386ead
#define public_6386ed2 _public_6386ed2
#define public_6386ef4 _public_6386ef4
#define public_6386f0a _public_6386f0a
#define public_6386f32 _public_6386f32
#define public_6386f4a _public_6386f4a
#define public_6386f84 _public_6386f84
#define public_6386f90 _public_6386f90
#define public_6386f95 _public_6386f95
#define public_6386fbc _public_6386fbc
#define public_6386fe1 _public_6386fe1
#define public_638703d _public_638703d
#define public_6387056 _public_6387056
#define public_6387079 _public_6387079
#define public_6387084 _public_6387084
#define public_63870f7 _public_63870f7
#define public_6387110 _public_6387110
#define public_6387123 _public_6387123
#define public_638714d _public_638714d
#define public_638716d _public_638716d
#define public_63871ca _public_63871ca
#define public_63871e2 _public_63871e2
#define public_63871f6 _public_63871f6
#define public_6387228 _public_6387228
#define public_6387249 _public_6387249
#define public_6387254 _public_6387254

PROC_DECLARE(0x6386b00, internal_6386b00, public_6386b00);
extern "C" NAKED register_t __cdecl internal_6386b00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x5C
        push ebx
        mov ebx, dword ptr ss : [ebp+8]
        test ebx, ebx
        push esi
        push edi
        je public_6387254
        mov eax, dword ptr ss : [ebp+0x14]
        test eax, eax
        mov esi, dword ptr ss : [ebp+0x10]
        jne public_6386b32
        push esi
        call public_638c680
        add esp, 4
        test eax, eax
        jne public_6387254
        public_6386b32 : nop
        mov eax, dword ptr ds : [esi+0x50]
        test ah, 4
        mov edi, dword ptr ss : [ebp+0xC]
        je public_6386b4f
        mov eax, dword ptr ds : [public_658b8a0]
        test eax, eax
        je public_6386b4f
        cmp edi, 5
        jne public_6387254
        public_6386b4f : nop
        mov edx, dword ptr ds : [public_658b8c8]
        inc edx
        lea eax, ds:[edi-1]
        cmp eax, 0x18
        mov dword ptr ds : [public_658b8c8], edx
        ja public_6387254
/*FIXUP jmp dword ptr ds : [eax*4+public_638725c] @0x6386b68*/
  JMPTB cmp eax, 0
  JMPTB je public_6386b6f
  JMPTB cmp eax, 1
  JMPTB je public_6387254
  JMPTB cmp eax, 2
  JMPTB je public_6386bb9
  JMPTB cmp eax, 3
  JMPTB je public_63871e2
  JMPTB cmp eax, 4
  JMPTB je public_6386c23
  JMPTB cmp eax, 5
  JMPTB je public_6386c34
  JMPTB cmp eax, 6
  JMPTB je public_6386c45
  JMPTB cmp eax, 7
  JMPTB je public_6386d7a
  JMPTB cmp eax, 8
  JMPTB je public_6386df9
  JMPTB cmp eax, 9
  JMPTB je public_6386f4a
  JMPTB cmp eax, 0xA
  JMPTB je public_6386e32
  JMPTB cmp eax, 0xB
  JMPTB je public_6386e42
  JMPTB cmp eax, 0xC
  JMPTB je public_6386d94
  JMPTB cmp eax, 0xD
  JMPTB je public_6386f0a
  JMPTB cmp eax, 0xE
  JMPTB je public_6386e12
  JMPTB cmp eax, 0xF
  JMPTB je public_6386d94
  JMPTB cmp eax, 0x10
  JMPTB je public_6387254
  JMPTB cmp eax, 0x11
  JMPTB je public_6386fbc
  JMPTB cmp eax, 0x12
  JMPTB je public_638714d
  JMPTB cmp eax, 0x13
  JMPTB je public_63871ca
  JMPTB cmp eax, 0x14
  JMPTB je public_6387254
  JMPTB cmp eax, 0x15
  JMPTB je public_6387254
  JMPTB cmp eax, 0x16
  JMPTB je public_6387254
  JMPTB cmp eax, 0x17
  JMPTB je public_6386d94
  JMPTB cmp eax, 0x18
  JMPTB je public_63871f6
  JMPTB int 3
        public_6386b6f : nop
        test dword ptr ds : [esi+0x50], 0x80000
        je public_6386ba3
        mov eax, dword ptr ds : [esi+0x24]
        mov ecx, dword ptr ds : [esi+0x20]
        mov esi, dword ptr ds : [public_63991e8]
        push eax
        push ecx
/*FIXUP push offset public_63f637c @0x6386b86*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f637c
        push ebx
        call esi
        add esp, 0x10
/*FIXUP push offset public_63edccc @0x6386b91*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63edccc
        push ebx
        call esi
        add esp, 8
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
/*FIXUP public_6386ba3 : nop
        push offset public_63f7cb8 @0x6386ba3*/
  FIXUP public_6386ba3 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f7cb8
        push ebx
        call dword ptr ds : [public_63991e8]
        add esp, 8
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_6386bb9 : nop
        mov edx, dword ptr ds : [esi+0x44]
        push edx
        call public_636ec10
        mov edi, dword ptr ds : [public_63991e8]
        add esp, 4
        push eax
/*FIXUP push offset public_63a362c @0x6386bcc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a362c
        push ebx
        call edi
        mov esi, dword ptr ds : [esi+0x44]
        add esp, 0xC
        test esi, esi
        je public_6387249
        mov eax, dword ptr ds : [esi+4]
        add esi, 4
        add esi, 4
        test eax, eax
        je public_6387249
        public_6386bf3 : nop
        push eax
        call public_6370570
        add esp, 4
        push eax
/*FIXUP push offset public_63f10fc @0x6386bfd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f10fc
        push ebx
        call edi
        mov eax, dword ptr ds : [esi]
        add esp, 0xC
        add esi, 4
        test eax, eax
        jne public_6386bf3
/*FIXUP push offset public_63edccc @0x6386c11*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63edccc
        push ebx
        call edi
        add esp, 8
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_6386c23 : nop
        push esi
        push ebx
        call public_6388ab0
        add esp, 8
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_6386c34 : nop
        push esi
        push ebx
        call public_6389cf0
        add esp, 8
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_6386c45 : nop
        mov edx, dword ptr ds : [esi+0x18]
        test edx, edx
        je public_6387254
        mov eax, dword ptr ds : [public_658b24c]
        mov ecx, eax
        dec eax
        test ecx, ecx
        je public_6386cba
        mov edi, edx
        lea edx, ss:[esp+0x48]
        sub edi, edx
        lea ecx, ss:[esp+eax*8+0x48]
        lea edx, ds:[eax+1]
        public_6386c6b : nop
        fld qword ptr ds : [edi+ecx]
        fadd qword ptr ds : [public_63a5940]
        fmul qword ptr ds : [public_63a5980]
        fst qword ptr ds : [ecx]
        fcomp qword ptr ds : [public_63a59b8]
        fnstsw ax
        test ah, 1
        je public_6386c96
        mov dword ptr ds : [ecx], 0
        mov dword ptr ds : [ecx+4], 0xBFF00000
        public_6386c96 : nop
        fld qword ptr ds : [ecx]
        fcomp qword ptr ds : [public_63a5940]
        fnstsw ax
        test ah, 0x41
        jne public_6386cb2
        mov dword ptr ds : [ecx], 0
        mov dword ptr ds : [ecx+4], 0x3FF00000
        public_6386cb2 : nop
        dec edx
        sub ecx, 8
        test edx, edx
        ja public_6386c6b
        public_6386cba : nop
        lea eax, ss:[esp+0x48]
        push eax
        lea ecx, ss:[esp+0x4C]
        push ecx
        call public_638c530
        mov eax, dword ptr ds : [public_658b24c]
        mov ecx, dword ptr ds : [public_658b0f4]
        add esp, 8
        cmp ecx, eax
        je public_6386cf5
        push 0
        push 0
        push 1
        lea edx, ss:[esp+0x54]
        push 3
        push edx
        call public_6380f60
        mov eax, dword ptr ds : [public_658b24c]
        add esp, 0x14
        public_6386cf5 : nop
        cmp eax, 2
        jg public_6386d10
        lea eax, ss:[esp+0x48]
        push eax
        push esi
        push ebx
        call public_6388ae0
        add esp, 0xC
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_6386d10 : nop
        cmp eax, 3
        mov eax, dword ptr ds : [esi+0x50]
        jne public_6386d49
        test ah, 0x10
        je public_6386d33
        lea ecx, ss:[esp+0x48]
        push ecx
        push esi
        push ebx
        call public_6389230
        add esp, 0xC
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_6386d33 : nop
        lea edx, ss:[esp+0x48]
        push edx
        push esi
        push ebx
        call public_6388db0
        add esp, 0xC
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_6386d49 : nop
        test ah, 0x10
        je public_6386d64
        lea eax, ss:[esp+0x48]
        push eax
        push esi
        push ebx
        call public_63898f0
        add esp, 0xC
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_6386d64 : nop
        lea ecx, ss:[esp+0x48]
        push ecx
        push esi
        push ebx
        call public_63896e0
        add esp, 0xC
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_6386d7a : nop
        mov edx, dword ptr ds : [esi+0x4C]
        push edx
/*FIXUP push offset public_63f7cb4 @0x6386d7e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f7cb4
        push ebx
        call dword ptr ds : [public_63991e8]
        add esp, 0xC
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_6386d94 : nop
        mov eax, dword ptr ds : [public_658b24c]
        cmp eax, 3
        jne public_6386db5
        cmp edi, 0x18
        je public_6386db5
        push edi
        push esi
        push ebx
        call public_6389640
        add esp, 0xC
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_6386db5 : nop
        mov ecx, dword ptr ds : [esi+0x50]
        test ch, 0x10
        jne public_6386de7
        cmp eax, 2
        je public_6386de7
        cmp edi, 0x10
        je public_6386de7
        mov eax, dword ptr ds : [public_658b8c4]
        mov ecx, eax
        push edi
        push ecx
        inc eax
        push esi
        push ebx
        mov dword ptr ds : [public_658b8c4], eax
        call public_6389ac0
        add esp, 0x10
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_6386de7 : nop
        push edi
        push esi
        push ebx
        call public_6389bf0
        add esp, 0xC
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_6386df9 : nop
        lea eax, ss:[esp+0x38]
        push eax
        push 0
        push esi
        call public_6383f50
        fld qword ptr ds : [esi+0x10]
        fsub qword ptr ss : [esp+0x44]
        add esp, 0xC
        jmp public_6386e59
        public_6386e12 : nop
        mov ecx, dword ptr ds : [esi+0x50]
        and ecx, 0x1FF
        push ecx
/*FIXUP push offset public_63f7cb4 @0x6386e1c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f7cb4
        push ebx
        call dword ptr ds : [public_63991e8]
        add esp, 0xC
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_6386e32 : nop
        mov edx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+0x14]
        mov dword ptr ss : [esp+0x18], edx
        mov dword ptr ss : [esp+0x1C], eax
        jmp public_6386e5d
        public_6386e42 : nop
        push 0
        lea ecx, ss:[esp+0x44]
        push ecx
        push esi
        call public_6383f50
        fld qword ptr ds : [esi+0x10]
        fsub qword ptr ss : [esp+0x4C]
        add esp, 0xC
        public_6386e59 : nop
        fstp qword ptr ss : [esp+0x18]
        public_6386e5d : nop
        mov eax, dword ptr ds : [esi+0x18]
        test eax, eax
        jne public_6386e7e
        mov edx, dword ptr ds : [esi+0x4C]
        push edx
/*FIXUP push offset public_63f7c98 @0x6386e68*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f7c98
        push ebx
        call dword ptr ds : [public_63991e8]
        add esp, 0xC
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_6386e7e : nop
        mov eax, dword ptr ds : [public_658b038]
        test eax, eax
        je public_6386ea2
        fld qword ptr ss : [esp+0x18]
        sub esp, 8
        fchs 
        fstp qword ptr ss : [esp]
/*FIXUP push offset public_63f637c @0x6386e93*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f637c
        push ebx
        call dword ptr ds : [public_63991e8]
        add esp, 0x10
        public_6386ea2 : nop
        mov eax, dword ptr ds : [public_658b24c]
        xor edi, edi
        test eax, eax
        jle public_6386ed2
        public_6386ead : nop
        mov eax, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [eax+edi*8+4]
        mov edx, dword ptr ds : [eax+edi*8]
        push ecx
        push edx
/*FIXUP push offset public_63f637c @0x6386eb9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f637c
        push ebx
        call dword ptr ds : [public_63991e8]
        mov eax, dword ptr ds : [public_658b24c]
        add esp, 0x10
        inc edi
        cmp edi, eax
        jl public_6386ead
        public_6386ed2 : nop
        mov eax, dword ptr ds : [public_658b038]
        test eax, eax
        jne public_6386ef4
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x18]
        push eax
        push ecx
/*FIXUP push offset public_63f637c @0x6386ee5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f637c
        push ebx
        call dword ptr ds : [public_63991e8]
        add esp, 0x10
/*FIXUP public_6386ef4 : nop
        push offset public_63edccc @0x6386ef4*/
  FIXUP public_6386ef4 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63edccc
        push ebx
        call dword ptr ds : [public_63991e8]
        add esp, 8
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_6386f0a : nop
        cmp dword ptr ds : [public_658b24c], 2
        mov eax, dword ptr ds : [public_658b8c4]
        mov ecx, eax
        jne public_6386f32
        push ecx
        inc eax
        push esi
        push ebx
        mov dword ptr ds : [public_658b8c4], eax
        call public_6388d10
        add esp, 0xC
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_6386f32 : nop
        push ecx
        inc eax
        push esi
        push ebx
        mov dword ptr ds : [public_658b8c4], eax
        call public_63894b0
        add esp, 0xC
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_6386f4a : nop
        mov edx, dword ptr ds : [esi+0x3C]
        push edx
        call public_636ec10
        mov edi, dword ptr ds : [public_63991e8]
        add esp, 4
        push eax
/*FIXUP push offset public_63a362c @0x6386f5d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a362c
        push ebx
        call edi
        mov esi, dword ptr ds : [esi+0x3C]
        add esp, 0xC
        test esi, esi
        je public_6387249
        mov eax, dword ptr ds : [esi+4]
        add esi, 4
        add esi, 4
        test eax, eax
        je public_6387249
        public_6386f84 : nop
        mov ecx, dword ptr ds : [eax+0x48]
        test ecx, ecx
        je public_6386f90
        lea eax, ds:[ecx-1]
        jmp public_6386f95
        public_6386f90 : nop
        mov eax, dword ptr ds : [eax+0x4C]
        neg eax
        public_6386f95 : nop
        push eax
/*FIXUP push offset public_63f10fc @0x6386f96*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f10fc
        push ebx
        call edi
        mov eax, dword ptr ds : [esi]
        add esp, 0xC
        add esi, 4
        test eax, eax
        jne public_6386f84
/*FIXUP push offset public_63edccc @0x6386faa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63edccc
        push ebx
        call edi
        add esp, 8
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_6386fbc : nop
        mov eax, dword ptr ds : [public_658b240]
        test eax, eax
        mov edi, dword ptr ds : [public_63991e8]
        jne public_6386fe1
/*FIXUP push offset public_63f7c4c @0x6386fcb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f7c4c
        push ebx
        call edi
        push 0
        push 0
        push 1
        call public_6378600
        add esp, 0x14
        public_6386fe1 : nop
        fld qword ptr ds : [esi+0x10]
        fcomp qword ptr ds : [public_63a58b0]
        fnstsw ax
        test ah, 0x41
        je public_6387110
        mov eax, dword ptr ds : [public_658b804]
        push eax
        call public_6377e60
        fld qword ptr ds : [public_658b6d0]
        mov ecx, dword ptr ds : [public_658b240]
        fchs 
        fcomp qword ptr ds : [esi+0x10]
        mov edi, dword ptr ds : [esi+0x18]
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x1C], eax
        add esp, 4
        fnstsw ax
        mov dword ptr ss : [esp+0x10], ecx
        test ah, 0x41
        mov eax, dword ptr ds : [public_658b24c]
        jne public_6387079
        mov edx, eax
        dec eax
        test edx, edx
        je public_6387056
        lea edx, ds:[eax+1]
        mov eax, dword ptr ss : [esp+0xC]
        public_638703d : nop
        fld qword ptr ds : [edi]
        add eax, 8
        fdiv qword ptr ds : [esi+0x10]
        add ecx, 8
        add edi, 8
        dec edx
        fchs 
        fadd qword ptr ds : [ecx-8]
        fstp qword ptr ds : [eax-8]
        jne public_638703d
        public_6387056 : nop
        mov esi, dword ptr ss : [esp+0x18]
        push esi
        push 0
        push ebx
        call public_638b250
        mov eax, dword ptr ds : [public_658b804]
        push eax
        push esi
        call public_6377fe0
        add esp, 0x14
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_6387079 : nop
        mov ecx, eax
        dec eax
        test ecx, ecx
        mov dword ptr ss : [esp+0x14], eax
        je public_6387056
        public_6387084 : nop
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x28], edx
        mov edx, dword ptr ds : [public_658b6cc]
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, dword ptr ds : [esi+0x14]
        push edx
        mov edx, dword ptr ds : [esi+0x10]
        mov dword ptr ss : [esp+0x34], eax
        mov eax, dword ptr ds : [public_658b6c8]
        push eax
        mov eax, dword ptr ss : [esp+0x38]
        push ecx
        mov ecx, dword ptr ss : [esp+0x38]
        push edx
        push eax
        push ecx
        add edi, 8
        call public_63829d0
        mov ecx, dword ptr ss : [esp+0x2C]
        fadd qword ptr ds : [ecx]
        mov eax, dword ptr ss : [esp+0x28]
        add eax, 8
        mov dword ptr ss : [esp+0x28], eax
        fstp qword ptr ds : [eax-8]
        mov eax, dword ptr ss : [esp+0x40]
        add ecx, 8
        add esp, 0x1C
        test eax, eax
        mov dword ptr ss : [esp+0x10], ecx
        jne public_63870f7
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, eax
        dec eax
        test edx, edx
        mov dword ptr ss : [esp+0x14], eax
        jne public_6387084
        jmp public_6387056
        public_63870f7 : nop
        mov eax, dword ptr ds : [public_658b804]
        mov ecx, dword ptr ss : [esp+0x18]
        push eax
        push ecx
        call public_6377fe0
        mov edi, dword ptr ds : [public_63991e8]
        add esp, 8
        public_6387110 : nop
        mov eax, dword ptr ds : [public_658b24c]
        mov edx, eax
        dec eax
        test edx, edx
        je public_6387249
        lea esi, ds:[eax+1]
        public_6387123 : nop
        push 0xC02433B6
        push 0x45A1CAC1
/*FIXUP push offset public_63f637c @0x638712d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f637c
        push ebx
        call edi
        add esp, 0x10
        dec esi
        jne public_6387123
/*FIXUP push offset public_63edccc @0x638713b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63edccc
        push ebx
        call edi
        add esp, 8
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_638714d : nop
        mov eax, dword ptr ds : [esi+0x44]
        test eax, eax
        je public_6387254
        mov edi, dword ptr ds : [eax+4]
        add eax, 4
        add eax, 4
        test edi, edi
        mov dword ptr ss : [esp+0x18], eax
        je public_6387254
        public_638716d : nop
        lea ecx, ss:[esp+0x30]
        push ecx
        push edi
        push esi
        call public_6373c70
        mov edx, dword ptr ds : [eax+8]
        push edx
        call public_6370570
        push edi
        mov dword ptr ss : [esp+0x28], eax
        call public_6370570
        mov ecx, dword ptr ss : [esp+0x48]
        mov edx, dword ptr ss : [esp+0x44]
        add esp, 0x14
        push ecx
        mov ecx, dword ptr ds : [esi+0x4C]
        push edx
        mov edx, dword ptr ss : [esp+0x1C]
        push ecx
        push eax
        push edx
/*FIXUP push offset public_63f7c38 @0x63871a3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f7c38
        push ebx
        call dword ptr ds : [public_63991e8]
        mov eax, dword ptr ss : [esp+0x34]
        mov edi, dword ptr ds : [eax]
        add eax, 4
        add esp, 0x1C
        test edi, edi
        mov dword ptr ss : [esp+0x18], eax
        jne public_638716d
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_63871ca : nop
        mov eax, dword ptr ds : [public_658b038]
        test eax, eax
        je public_63871e2
/*FIXUP push offset public_63f7c34 @0x63871d3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f7c34
        push ebx
        call dword ptr ds : [public_63991e8]
        add esp, 8
        public_63871e2 : nop
        push esi
        push 0
        push edi
        push ebx
        call public_6387f00
        add esp, 0x10
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_63871f6 : nop
        mov eax, dword ptr ds : [esi+0x34]
        push eax
        call public_636ec10
        mov edi, dword ptr ds : [public_63991e8]
        add esp, 4
        push eax
/*FIXUP push offset public_63a362c @0x6387209*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a362c
        push ebx
        call edi
        mov esi, dword ptr ds : [esi+0x34]
        add esp, 0xC
        test esi, esi
        je public_6387249
        mov eax, dword ptr ds : [esi+4]
        add esi, 4
        add esi, 4
        test eax, eax
        je public_6387249
        public_6387228 : nop
        mov ecx, dword ptr ds : [eax+8]
        push ecx
        call public_6370570
        add esp, 4
        push eax
/*FIXUP push offset public_63f10fc @0x6387235*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f10fc
        push ebx
        call edi
        mov eax, dword ptr ds : [esi]
        add esp, 0xC
        add esi, 4
        test eax, eax
        jne public_6387228
/*FIXUP public_6387249 : nop
        push offset public_63edccc @0x6387249*/
  FIXUP public_6387249 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63edccc
        push ebx
        call edi
        add esp, 8
        public_6387254 : nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6386b00)
        ASM_EXPORT_ENTRY_FIRST(0x6386b6f, public_6386b6f)
        ASM_EXPORT_ENTRY(0x6386bb9, public_6386bb9)
        ASM_EXPORT_ENTRY(0x6386c23, public_6386c23)
        ASM_EXPORT_ENTRY(0x6386c34, public_6386c34)
        ASM_EXPORT_ENTRY(0x6386c45, public_6386c45)
        ASM_EXPORT_ENTRY(0x6386d7a, public_6386d7a)
        ASM_EXPORT_ENTRY(0x6386d94, public_6386d94)
        ASM_EXPORT_ENTRY(0x6386df9, public_6386df9)
        ASM_EXPORT_ENTRY(0x6386e12, public_6386e12)
        ASM_EXPORT_ENTRY(0x6386e32, public_6386e32)
        ASM_EXPORT_ENTRY(0x6386e42, public_6386e42)
        ASM_EXPORT_ENTRY(0x6386f0a, public_6386f0a)
        ASM_EXPORT_ENTRY(0x6386f4a, public_6386f4a)
        ASM_EXPORT_ENTRY(0x6386fbc, public_6386fbc)
        ASM_EXPORT_ENTRY(0x638714d, public_638714d)
        ASM_EXPORT_ENTRY(0x63871ca, public_63871ca)
        ASM_EXPORT_ENTRY(0x63871e2, public_63871e2)
        ASM_EXPORT_ENTRY(0x63871f6, public_63871f6)
        ASM_EXPORT_ENTRY_LAST(0x6387254, public_6387254)
    }
}

#undef public_6386b32
#undef public_6386b4f
#undef public_6386b6f
#undef public_6386ba3
#undef public_6386bb9
#undef public_6386bf3
#undef public_6386c23
#undef public_6386c34
#undef public_6386c45
#undef public_6386c6b
#undef public_6386c96
#undef public_6386cb2
#undef public_6386cba
#undef public_6386cf5
#undef public_6386d10
#undef public_6386d33
#undef public_6386d49
#undef public_6386d64
#undef public_6386d7a
#undef public_6386d94
#undef public_6386db5
#undef public_6386de7
#undef public_6386df9
#undef public_6386e12
#undef public_6386e32
#undef public_6386e42
#undef public_6386e59
#undef public_6386e5d
#undef public_6386e7e
#undef public_6386ea2
#undef public_6386ead
#undef public_6386ed2
#undef public_6386ef4
#undef public_6386f0a
#undef public_6386f32
#undef public_6386f4a
#undef public_6386f84
#undef public_6386f90
#undef public_6386f95
#undef public_6386fbc
#undef public_6386fe1
#undef public_638703d
#undef public_6387056
#undef public_6387079
#undef public_6387084
#undef public_63870f7
#undef public_6387110
#undef public_6387123
#undef public_638714d
#undef public_638716d
#undef public_63871ca
#undef public_63871e2
#undef public_63871f6
#undef public_6387228
#undef public_6387249
#undef public_6387254

#pragma init_seg(compiler)
extern "C" void const* const public_6386b6f = __AsmFindLabelExport(&internal_6386b00, 0x6386b6f);
extern "C" void const* const public_6386bb9 = __AsmFindLabelExport(&internal_6386b00, 0x6386bb9);
extern "C" void const* const public_6386c23 = __AsmFindLabelExport(&internal_6386b00, 0x6386c23);
extern "C" void const* const public_6386c34 = __AsmFindLabelExport(&internal_6386b00, 0x6386c34);
extern "C" void const* const public_6386c45 = __AsmFindLabelExport(&internal_6386b00, 0x6386c45);
extern "C" void const* const public_6386d7a = __AsmFindLabelExport(&internal_6386b00, 0x6386d7a);
extern "C" void const* const public_6386d94 = __AsmFindLabelExport(&internal_6386b00, 0x6386d94);
extern "C" void const* const public_6386df9 = __AsmFindLabelExport(&internal_6386b00, 0x6386df9);
extern "C" void const* const public_6386e12 = __AsmFindLabelExport(&internal_6386b00, 0x6386e12);
extern "C" void const* const public_6386e32 = __AsmFindLabelExport(&internal_6386b00, 0x6386e32);
extern "C" void const* const public_6386e42 = __AsmFindLabelExport(&internal_6386b00, 0x6386e42);
extern "C" void const* const public_6386f0a = __AsmFindLabelExport(&internal_6386b00, 0x6386f0a);
extern "C" void const* const public_6386f4a = __AsmFindLabelExport(&internal_6386b00, 0x6386f4a);
extern "C" void const* const public_6386fbc = __AsmFindLabelExport(&internal_6386b00, 0x6386fbc);
extern "C" void const* const public_638714d = __AsmFindLabelExport(&internal_6386b00, 0x638714d);
extern "C" void const* const public_63871ca = __AsmFindLabelExport(&internal_6386b00, 0x63871ca);
extern "C" void const* const public_63871e2 = __AsmFindLabelExport(&internal_6386b00, 0x63871e2);
extern "C" void const* const public_63871f6 = __AsmFindLabelExport(&internal_6386b00, 0x63871f6);
extern "C" void const* const public_6387254 = __AsmFindLabelExport(&internal_6386b00, 0x6387254);
