#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_636e1b0);
CLANG_FORWARD_PROC_SYMBOL(public_636e2a0);
CLANG_FORWARD_PROC_SYMBOL(public_636e8f0);
CLANG_FORWARD_PROC_SYMBOL(public_6370570);
CLANG_FORWARD_PROC_SYMBOL(public_6378820);
CLANG_FORWARD_PROC_SYMBOL(public_637ed40);
CLANG_FORWARD_PROC_SYMBOL(public_637fd60);
CLANG_FORWARD_PROC_SYMBOL(public_637ff10);
CLANG_FORWARD_PROC_SYMBOL(public_6380640);

#define public_637ed90 _public_637ed90
#define public_637edad _public_637edad
#define public_637ede8 _public_637ede8
#define public_637edee _public_637edee
#define public_637ee08 _public_637ee08
#define public_637ee18 _public_637ee18
#define public_637ee75 _public_637ee75
#define public_637eea9 _public_637eea9
#define public_637eede _public_637eede
#define public_637ef1d _public_637ef1d
#define public_637ef1f _public_637ef1f
#define public_637ef55 _public_637ef55

PROC_DECLARE(0x637ed40, internal_637ed40, public_637ed40);
extern "C" NAKED register_t __cdecl internal_637ed40()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x1C
        mov eax, dword ptr ss : [ebp+0x10]
        test eax, eax
        push ebx
        mov ebx, dword ptr ss : [ebp+8]
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ds : [public_658b8ec], 1
        jne public_637ee08
        mov eax, dword ptr ds : [public_658b8a4]
        test eax, eax
        lea eax, ss:[esp+0x10]
        push eax
        je public_637ed90
        mov edx, dword ptr ss : [ebp+0xC]
        push 0
        lea ecx, ss:[esp+0x20]
        push ecx
        push edx
        push ebx
        call public_6380640
        add esp, 0x14
        jmp public_637edad
        public_637ed90 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        push 0
        push 0
        push 1
        push eax
        push ebx
        call public_637ff10
        add esp, 0x20
        public_637edad : nop
        mov edi, dword ptr ds : [public_658bf60]
        mov edx, dword ptr ds : [public_658be40]
        mov ecx, dword ptr ss : [esp+0x10]
        mov esi, eax
        mov eax, dword ptr ds : [public_658b084]
        inc edi
        add edx, ecx
        test eax, eax
        mov dword ptr ds : [public_658bf60], edi
        mov dword ptr ds : [public_658be40], edx
        jne public_637ee18
        mov eax, dword ptr ds : [public_658b248]
        test eax, eax
        je public_637ede8
        fld qword ptr ds : [public_658b6f8]
        jmp public_637edee
        public_637ede8 : nop
        fld qword ptr ds : [public_658b098]
        public_637edee : nop
        fchs 
        fcomp qword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 0x41
        jne public_637ee18
        inc dword ptr ds : [public_658bad0]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_637ee08 : nop
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        mov esi, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [esp+0x18], edx
        mov dword ptr ss : [esp+0x1C], eax
        public_637ee18 : nop
        mov ecx, dword ptr ds : [public_658b080]
        mov edx, dword ptr ds : [public_658b248]
        mov eax, dword ptr ds : [public_658b084]
        add ecx, edx
        add ecx, eax
        je public_637eea9
        mov eax, dword ptr ds : [esi+0x44]
        lea edi, ds:[esi+0x44]
        push eax
        call public_636e8f0
        add esp, 4
        test eax, eax
        je public_637ee75
        inc dword ptr ds : [public_658ba70]
        lea ecx, ss:[esp+0x20]
        push ecx
        push esi
        push eax
        call public_637fd60
        fld qword ptr ss : [esp+0x2C]
        fcomp qword ptr ss : [esp+0x24]
        add esp, 0xC
        fnstsw ax
        test ah, 1
        jne public_637ee75
        push ebx
        push edi
        call public_636e2a0
        add esp, 8
        jmp public_637ef1f
        public_637ee75 : nop
        push ebx
        push edi
        call public_636e1b0
        fld qword ptr ss : [esp+0x20]
        fcom qword ptr ds : [public_658b888]
        add esp, 8
        fnstsw ax
        test ah, 0x41
        jne public_637ef1d
        fst qword ptr ds : [public_658b888]
        fcomp qword ptr ds : [public_658b210]
        fnstsw ax
        test ah, 0x41
        jne public_637ef1f
        jmp public_637eede
        public_637eea9 : nop
        fld qword ptr ss : [esp+0x18]
        fcomp qword ptr ds : [public_658b888]
        fnstsw ax
        test ah, 0x41
        jne public_637ef1f
        fld qword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x1C]
        fcomp qword ptr ds : [public_658b210]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [public_658b88c], eax
        mov dword ptr ds : [public_658b888], edx
        fnstsw ax
        test ah, 0x41
        jne public_637ef1f
        public_637eede : nop
        mov ecx, dword ptr ds : [public_658b870]
        mov edx, dword ptr ds : [esi+0x4C]
        mov eax, dword ptr ss : [esp+0x1C]
        push ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        push edx
        push eax
        push ecx
        push ebx
        call public_6370570
        add esp, 4
        push eax
/*FIXUP push offset public_63f5ac8 @0x637eefd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f5ac8
        call public_6356960
        push 0
        push 0
        push 0
        push esi
/*FIXUP push offset public_63f5ac0 @0x637ef0e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f5ac0
        call public_6378820
        add esp, 0x2C
        jmp public_637ef1f
        public_637ef1d : nop
        fstp st(0)
        public_637ef1f : nop
        cmp dword ptr ds : [public_658b078], 4
        jl public_637ef55
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
/*FIXUP push offset public_63f5a6c @0x637ef46*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f5a6c
        push edx
        call dword ptr ds : [public_63991e8]
        add esp, 0x18
        public_637ef55 : nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x637ed40)
    }
}

#undef public_637ed90
#undef public_637edad
#undef public_637ede8
#undef public_637edee
#undef public_637ee08
#undef public_637ee18
#undef public_637ee75
#undef public_637eea9
#undef public_637eede
#undef public_637ef1d
#undef public_637ef1f
#undef public_637ef55
