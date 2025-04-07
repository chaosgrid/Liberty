#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e1b0);
CLANG_FORWARD_PROC_SYMBOL(public_636e2a0);
CLANG_FORWARD_PROC_SYMBOL(public_636e8f0);
CLANG_FORWARD_PROC_SYMBOL(public_636ef40);
CLANG_FORWARD_PROC_SYMBOL(public_6370570);
CLANG_FORWARD_PROC_SYMBOL(public_63705e0);
CLANG_FORWARD_PROC_SYMBOL(public_637ed40);
CLANG_FORWARD_PROC_SYMBOL(public_637ef60);
CLANG_FORWARD_PROC_SYMBOL(public_637f410);
CLANG_FORWARD_PROC_SYMBOL(public_637ff10);
CLANG_FORWARD_PROC_SYMBOL(public_6380640);

#define public_637ef9b _public_637ef9b
#define public_637efc4 _public_637efc4
#define public_637f01f _public_637f01f
#define public_637f030 _public_637f030
#define public_637f036 _public_637f036
#define public_637f049 _public_637f049
#define public_637f055 _public_637f055
#define public_637f092 _public_637f092
#define public_637f09c _public_637f09c
#define public_637f0bd _public_637f0bd
#define public_637f0ca _public_637f0ca
#define public_637f10e _public_637f10e
#define public_637f144 _public_637f144
#define public_637f174 _public_637f174
#define public_637f1b1 _public_637f1b1
#define public_637f1f5 _public_637f1f5
#define public_637f1fe _public_637f1fe
#define public_637f20d _public_637f20d

PROC_DECLARE(0x637ef60, internal_637ef60, public_637ef60);
extern "C" NAKED register_t __cdecl internal_637ef60()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x14
        mov eax, dword ptr ds : [public_658b8a4]
        test eax, eax
        push ebx
        push esi
        push edi
        mov edi, 1
        je public_637ef9b
        mov ebx, dword ptr ss : [ebp+8]
        lea eax, ss:[esp+0x14]
        push eax
        mov eax, dword ptr ss : [ebp+0xC]
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        push eax
        push ebx
        call public_6380640
        add esp, 0x14
        jmp public_637efc4
        public_637ef9b : nop
        mov ebx, dword ptr ss : [ebp+8]
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, dword ptr ds : [public_658b030]
        lea edx, ss:[esp+0x14]
        push edx
        mov edx, dword ptr ss : [ebp+0xC]
        lea eax, ss:[esp+0x20]
        push eax
        push 0
        push edi
        push ecx
        push edx
        push ebx
        call public_637ff10
        add esp, 0x20
        public_637efc4 : nop
        mov ecx, dword ptr ds : [public_658be50]
        mov edx, dword ptr ds : [public_658bf68]
        mov esi, eax
        mov eax, dword ptr ss : [esp+0x14]
        add ecx, eax
        mov eax, dword ptr ds : [public_658b6f0]
        inc edx
        test eax, eax
        mov dword ptr ds : [public_658bf68], edx
        mov dword ptr ds : [public_658be50], ecx
        je public_637f049
        mov eax, dword ptr ds : [public_658b050]
        test eax, eax
        je public_637f01f
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        jne public_637f01f
        fld qword ptr ds : [public_658b098]
        fchs 
        fcomp qword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 0x41
        je public_637f01f
/*FIXUP push offset public_63f5bb8 @0x637f012*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f5bb8
        call public_637f410
        add esp, 4
        public_637f01f : nop
        mov eax, dword ptr ds : [public_658b248]
        test eax, eax
        je public_637f030
        fld qword ptr ds : [public_658b6f8]
        jmp public_637f036
        public_637f030 : nop
        fld qword ptr ds : [public_658b098]
        public_637f036 : nop
        fchs 
        fcomp qword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 0x41
        je public_637f049
        mov dword ptr ss : [esp+0x10], edi
        jmp public_637f055
        public_637f049 : nop
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        je public_637f10e
        public_637f055 : nop
        mov eax, dword ptr ds : [esi+0x40]
        test eax, eax
        lea edi, ds:[esi+0x40]
        je public_637f09c
        push eax
        call public_636e8f0
        add esp, 4
        test eax, eax
        je public_637f09c
        fld qword ptr ds : [esi]
        push ebx
        fcomp qword ptr ss : [esp+0x1C]
        push edi
        fnstsw ax
        test ah, 1
        je public_637f092
        call public_636e1b0
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [esi], ecx
        add esp, 8
        mov dword ptr ds : [esi+4], edx
        jmp public_637f0ca
        public_637f092 : nop
        call public_636e2a0
        add esp, 8
        jmp public_637f0ca
        public_637f09c : nop
        push ebx
        push edi
        call public_636e1b0
        mov eax, dword ptr ds : [esi+0x50]
        add esp, 8
        test ah, 2
        jne public_637f0bd
        push esi
        call public_63705e0
        push esi
        call public_636ef40
        add esp, 8
        public_637f0bd : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [esi+4], ecx
        public_637f0ca : nop
        mov ecx, dword ptr ds : [public_658b84c]
        mov eax, dword ptr ds : [public_658b078]
        inc ecx
        cmp eax, 4
        mov dword ptr ds : [public_658b84c], ecx
        jl public_637f20d
        mov edx, dword ptr ds : [esi+0x4C]
        push edx
        push ebx
        call public_6370570
        add esp, 4
        push eax
        mov eax, dword ptr ds : [public_658b7fc]
/*FIXUP push offset public_63f5b84 @0x637f0f8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f5b84
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 0x10
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_637f10e : nop
        fld qword ptr ds : [public_658b098]
        fchs 
        fcomp qword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 0x41
        je public_637f174
        mov ecx, dword ptr ds : [public_658bad8]
        mov eax, dword ptr ds : [public_658b050]
        inc ecx
        test eax, eax
        mov dword ptr ds : [public_658bad8], ecx
        je public_637f144
/*FIXUP push offset public_63f5b6c @0x637f137*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f5b6c
        call public_637f410
        add esp, 4
        public_637f144 : nop
        mov ecx, dword ptr ds : [public_658b080]
        mov edx, dword ptr ds : [public_658b248]
        add ecx, edx
        test ecx, ecx
        jne public_637f1fe
        fld qword ptr ss : [esp+0x18]
        fcomp qword ptr ds : [public_658b888]
        fnstsw ax
        test ah, 0x41
        jne public_637f20d
        jmp public_637f1fe
        public_637f174 : nop
        mov eax, dword ptr ds : [public_658b248]
        test eax, eax
        je public_637f1b1
        fld qword ptr ds : [public_658b6f8]
        fchs 
        fcomp qword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 1
        je public_637f1b1
        mov eax, dword ptr ds : [public_658be60]
        lea ecx, ss:[esp+0x18]
        push ecx
        inc eax
        push esi
        push ebx
        mov dword ptr ds : [public_658be60], eax
        call public_637ed40
        add esp, 0xC
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_637f1b1 : nop
        mov ecx, dword ptr ds : [public_658be48]
        mov eax, dword ptr ds : [public_658b078]
        inc ecx
        cmp eax, 4
        mov dword ptr ds : [public_658be48], ecx
        jl public_637f1f5
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [esi+0x4C]
        push edx
        push eax
        push ecx
        push ebx
        call public_6370570
        mov edx, dword ptr ds : [public_658b7fc]
        add esp, 4
        push eax
/*FIXUP push offset public_63f5b1c @0x637f1e6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f5b1c
        push edx
        call dword ptr ds : [public_63991e8]
        add esp, 0x18
        public_637f1f5 : nop
        mov eax, dword ptr ds : [public_658b084]
        test eax, eax
        je public_637f20d
        public_637f1fe : nop
        lea eax, ss:[esp+0x18]
        push eax
        push esi
        push ebx
        call public_637ed40
        add esp, 0xC
        public_637f20d : nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x637ef60)
    }
}

#undef public_637ef9b
#undef public_637efc4
#undef public_637f01f
#undef public_637f030
#undef public_637f036
#undef public_637f049
#undef public_637f055
#undef public_637f092
#undef public_637f09c
#undef public_637f0bd
#undef public_637f0ca
#undef public_637f10e
#undef public_637f144
#undef public_637f174
#undef public_637f1b1
#undef public_637f1f5
#undef public_637f1fe
#undef public_637f20d
