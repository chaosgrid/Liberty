#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_6370570);
CLANG_FORWARD_PROC_SYMBOL(public_637fd60);
CLANG_FORWARD_PROC_SYMBOL(public_6380c50);
CLANG_FORWARD_PROC_SYMBOL(public_63829d0);
CLANG_FORWARD_PROC_SYMBOL(public_638ac90);
CLANG_FORWARD_PROC_SYMBOL(public_638c530);

#define public_638acf9 _public_638acf9
#define public_638ad1b _public_638ad1b
#define public_638ad21 _public_638ad21
#define public_638ad6d _public_638ad6d
#define public_638ae19 _public_638ae19
#define public_638ae39 _public_638ae39
#define public_638ae57 _public_638ae57
#define public_638ae81 _public_638ae81
#define public_638aece _public_638aece
#define public_638af08 _public_638af08
#define public_638af2e _public_638af2e
#define public_638af44 _public_638af44
#define public_638af62 _public_638af62
#define public_638af9f _public_638af9f
#define public_638afd9 _public_638afd9

PROC_DECLARE(0x638ac90, internal_638ac90, public_638ac90);
extern "C" NAKED register_t __cdecl internal_638ac90()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x64
        mov eax, dword ptr ss : [ebp+8]
        test eax, eax
        push ebx
        push esi
        push edi
        je public_638afd9
        mov edi, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ds : [edi+0x18]
        mov ebx, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [ebx+0x18]
        push eax
        push ecx
        call public_6380c50
        fst qword ptr ss : [esp+0x30]
        fmul qword ptr ss : [esp+0x30]
        mov esi, dword ptr ss : [ebp+0x14]
        push esi
        fsubr qword ptr ds : [public_63a5940]
        fstp qword ptr ss : [esp+0x2C]
        call public_636ec10
        mov ecx, dword ptr ds : [public_658b24c]
        add esp, 0xC
        cmp ecx, 3
        jne public_638acf9
        mov edx, dword ptr ss : [ebp+8]
        push eax
        push eax
/*FIXUP push offset public_63f9998 @0x638ace8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f9998
        push edx
        call dword ptr ds : [public_63991e8]
        add esp, 0x10
        jmp public_638ad21
        public_638acf9 : nop
        cmp ecx, 4
        jne public_638ad1b
        mov eax, dword ptr ds : [public_658b058]
        test eax, eax
        jl public_638ad1b
        mov eax, dword ptr ss : [ebp+8]
/*FIXUP push offset public_63f998c @0x638ad0a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f998c
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 8
        jmp public_638ad21
        public_638ad1b : nop
        inc dword ptr ds : [public_658b8c4]
        public_638ad21 : nop
        mov ecx, dword ptr ds : [edi+0x4C]
        mov edx, dword ptr ds : [ebx+0x4C]
        mov eax, dword ptr ss : [ebp+8]
        push ecx
        push edx
/*FIXUP push offset public_63f9974 @0x638ad2c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f9974
        push eax
        call dword ptr ds : [public_63991e8]
        fld qword ptr ds : [public_658b6a8]
        fmul qword ptr ds : [public_63a5a28]
        add esp, 0x10
        test esi, esi
        fdivr qword ptr ds : [public_63a5940]
        fstp qword ptr ss : [esp+0x18]
        je public_638af62
        lea eax, ds:[esi+4]
        mov esi, dword ptr ds : [eax]
        add eax, 4
        test esi, esi
        mov dword ptr ss : [esp+0x14], eax
        je public_638af62
        public_638ad6d : nop
        mov eax, dword ptr ds : [public_658bb70]
        lea ecx, ss:[esp+0x40]
        add eax, 2
        push ecx
        mov dword ptr ds : [public_658bb70], eax
        mov edx, dword ptr ds : [esi+8]
        push ebx
        push edx
        call public_637fd60
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ss:[esp+0x54]
        push eax
        push edi
        push ecx
        call public_637fd60
        fld qword ptr ss : [esp+0x60]
        mov eax, dword ptr ss : [esp+0x34]
        fmul qword ptr ss : [esp+0x40]
        mov ecx, dword ptr ss : [esp+0x30]
        add esp, 0x18
        fsub qword ptr ss : [esp+0x40]
        lea edx, ss:[esp+0xC]
        push edx
        mov edx, dword ptr ss : [esp+0x28]
        push eax
        mov eax, dword ptr ss : [esp+0x28]
        push ecx
        push edx
        push eax
        sub esp, 8
        fstp qword ptr ss : [esp]
        call public_63829d0
        mov edx, dword ptr ss : [esp+0x38]
        fstp qword ptr ss : [esp+0x54]
        mov eax, dword ptr ss : [esp+0x34]
        fld qword ptr ss : [esp+0x5C]
        fmul qword ptr ss : [esp+0x44]
        add esp, 0x1C
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, dword ptr ss : [esp+0x28]
        fsub qword ptr ss : [esp+0x4C]
        push edx
        mov edx, dword ptr ss : [esp+0x28]
        push eax
        push ecx
        push edx
        sub esp, 8
        fstp qword ptr ss : [esp]
        call public_63829d0
        mov eax, dword ptr ss : [esp+0x28]
        fstp qword ptr ss : [esp+0x4C]
        add esp, 0x1C
        test eax, eax
        jne public_638ae19
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        je public_638ae39
        public_638ae19 : nop
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x3C], 0
        public_638ae39 : nop
        mov ecx, dword ptr ds : [public_658b24c]
        mov eax, ecx
        dec ecx
        test eax, eax
        je public_638ae81
        mov edx, dword ptr ds : [ebx+0x18]
        mov edi, dword ptr ds : [edi+0x18]
        lea ebx, ss:[esp+0x50]
        sub edi, edx
        lea eax, ds:[edx+ecx*8]
        sub ebx, edx
        public_638ae57 : nop
        fld qword ptr ss : [esp+0x30]
        mov edx, dword ptr ds : [esi+8]
        fmul qword ptr ds : [edi+eax]
        sub eax, 8
        fadd qword ptr ds : [edx+ecx*8]
        mov edx, ecx
        fld qword ptr ss : [esp+0x38]
        dec ecx
        test edx, edx
        fmul qword ptr ds : [eax+8]
        faddp 
        fstp qword ptr ds : [ebx+eax+8]
        jne public_638ae57
        mov edi, dword ptr ss : [ebp+0x10]
        mov ebx, dword ptr ss : [ebp+0xC]
        public_638ae81 : nop
        cmp dword ptr ds : [public_658b0f4], 3
        jg public_638aece
        lea eax, ss:[esp+0x50]
        push eax
        lea ecx, ss:[esp+0x54]
        push ecx
        call public_638c530
        mov edx, dword ptr ss : [esp+0x6C]
        mov eax, dword ptr ss : [esp+0x68]
        mov ecx, dword ptr ss : [esp+0x64]
        add esp, 8
        push edx
        mov edx, dword ptr ss : [esp+0x5C]
        push eax
        mov eax, dword ptr ss : [esp+0x5C]
        push ecx
        mov ecx, dword ptr ss : [esp+0x5C]
        push edx
        mov edx, dword ptr ss : [ebp+8]
        push eax
        push ecx
/*FIXUP push offset public_63f995c @0x638aebd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f995c
        push edx
        call dword ptr ds : [public_63991e8]
        add esp, 0x20
        jmp public_638af08
        public_638aece : nop
        mov eax, dword ptr ss : [esp+0x6C]
        mov ecx, dword ptr ss : [esp+0x68]
        mov edx, dword ptr ss : [esp+0x64]
        push eax
        mov eax, dword ptr ss : [esp+0x64]
        push ecx
        mov ecx, dword ptr ss : [esp+0x64]
        push edx
        mov edx, dword ptr ss : [esp+0x64]
        push eax
        mov eax, dword ptr ss : [esp+0x64]
        push ecx
        mov ecx, dword ptr ss : [esp+0x64]
        push edx
        mov edx, dword ptr ss : [ebp+8]
        push eax
        push ecx
/*FIXUP push offset public_63f9940 @0x638aef9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f9940
        push edx
        call dword ptr ds : [public_63991e8]
        add esp, 0x28
        public_638af08 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        add ecx, eax
        test ecx, ecx
        je public_638af2e
        mov edx, dword ptr ds : [esi+8]
        push edx
        call public_6370570
        add esp, 4
        push eax
        mov eax, dword ptr ss : [ebp+8]
/*FIXUP push offset public_63f9928 @0x638af26*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f9928
        push eax
        jmp public_638af44
        public_638af2e : nop
        mov ecx, dword ptr ds : [esi+8]
        push ecx
        call public_6370570
        mov edx, dword ptr ss : [ebp+8]
        add esp, 4
        push eax
/*FIXUP push offset public_63f9918 @0x638af3e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f9918
        push edx
        public_638af44 : nop
        call dword ptr ds : [public_63991e8]
        mov eax, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ds : [eax]
        add eax, 4
        add esp, 0xC
        test esi, esi
        mov dword ptr ss : [esp+0x14], eax
        jne public_638ad6d
        public_638af62 : nop
        mov eax, dword ptr ds : [public_658b24c]
        cmp eax, 3
        jne public_638af9f
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ds : [eax+0x14]
        mov edx, dword ptr ds : [eax+0x10]
        push ecx
        mov ecx, dword ptr ds : [eax+0xC]
        push edx
        mov edx, dword ptr ds : [eax+8]
        push ecx
        mov ecx, dword ptr ds : [eax+4]
        push edx
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [ebp+8]
        push ecx
        push edx
/*FIXUP push offset public_63f8254 @0x638af89*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f8254
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 0x20
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_638af9f : nop
        cmp eax, 4
        jne public_638afd9
        mov eax, dword ptr ds : [public_658b058]
        test eax, eax
        jl public_638afd9
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ds : [eax+0x14]
        mov edx, dword ptr ds : [eax+0x10]
        push ecx
        mov ecx, dword ptr ds : [eax+0xC]
        push edx
        mov edx, dword ptr ds : [eax+8]
        push ecx
        mov ecx, dword ptr ds : [eax+4]
        push edx
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [ebp+8]
        push ecx
        push edx
/*FIXUP push offset public_63f98f8 @0x638afca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f98f8
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 0x20
        public_638afd9 : nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x638ac90)
    }
}

#undef public_638acf9
#undef public_638ad1b
#undef public_638ad21
#undef public_638ad6d
#undef public_638ae19
#undef public_638ae39
#undef public_638ae57
#undef public_638ae81
#undef public_638aece
#undef public_638af08
#undef public_638af2e
#undef public_638af44
#undef public_638af62
#undef public_638af9f
#undef public_638afd9
