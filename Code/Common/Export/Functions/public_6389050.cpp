#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e1b0);
CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_636ec70);
CLANG_FORWARD_PROC_SYMBOL(public_636ecc0);
CLANG_FORWARD_PROC_SYMBOL(public_6377fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6381270);
CLANG_FORWARD_PROC_SYMBOL(public_6389050);

#define public_63890cf _public_63890cf
#define public_63890fa _public_63890fa
#define public_63890fd _public_63890fd
#define public_6389124 _public_6389124
#define public_638912a _public_638912a
#define public_638912e _public_638912e
#define public_6389141 _public_6389141
#define public_638915a _public_638915a
#define public_638916c _public_638916c
#define public_6389189 _public_6389189
#define public_638919e _public_638919e
#define public_63891c2 _public_63891c2
#define public_63891d5 _public_63891d5
#define public_63891ef _public_63891ef
#define public_6389204 _public_6389204
#define public_6389229 _public_6389229

PROC_DECLARE(0x6389050, internal_6389050, public_6389050);
extern "C" NAKED register_t __cdecl internal_6389050()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x1C
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+0xC]
        push edi
        push esi
        call public_636ec10
        mov edi, dword ptr ss : [ebp+8]
        add esp, 4
        test edi, edi
        mov dword ptr ss : [esp+0x14], eax
        je public_6389229
        mov ecx, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ds : [ecx+0x4C]
        mov ebx, dword ptr ds : [public_63991e8]
        push edx
        push eax
/*FIXUP push offset public_63f8300 @0x6389085*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f8300
        push edi
        call ebx
        fld qword ptr ss : [ebp+0x14]
        fcomp qword ptr ds : [public_63a58b0]
        add esp, 0x10
        fnstsw ax
        test ah, 0x40
        jne public_6389124
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        call public_636ec70
        add esp, 4
        test esi, esi
        mov dword ptr ss : [esp+0x10], eax
        je public_63890fd
        mov eax, dword ptr ds : [esi+4]
        add esi, 4
        add esi, 4
        test eax, eax
        je public_63890fa
        fld qword ptr ss : [ebp+0x14]
        fchs 
        fstp qword ptr ss : [esp+0x20]
        public_63890cf : nop
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x20]
        push ecx
        mov ecx, dword ptr ss : [ebp+0x10]
        push edx
        push ecx
        push eax
        call public_6381270
        push eax
        lea edx, ss:[esp+0x24]
        push edx
        call public_636e1b0
        mov eax, dword ptr ds : [esi]
        add esp, 0x18
        add esi, 4
        test eax, eax
        jne public_63890cf
        public_63890fa : nop
        mov esi, dword ptr ss : [ebp+0xC]
        public_63890fd : nop
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        je public_63891c2
        mov ecx, dword ptr ds : [eax+4]
        add eax, 4
        add eax, 4
        test ecx, ecx
        mov dword ptr ss : [esp+0x1C], ecx
        mov dword ptr ss : [esp+0x20], eax
        je public_63891c2
        jmp public_638912e
        public_6389124 : nop
        mov dword ptr ss : [esp+0x10], esi
        jmp public_63890fd
        public_638912a : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        public_638912e : nop
        mov eax, dword ptr ds : [public_658b24c]
        test eax, eax
        mov dword ptr ss : [esp+0x18], 0
        jle public_6389189
        mov esi, ecx
        public_6389141 : nop
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [public_658b058]
        jne public_638915a
/*FIXUP push offset public_63f7e24 @0x638914d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f7e24
        push edi
        call ebx
        add esp, 8
        jmp public_638916c
        public_638915a : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        push ecx
        push edx
/*FIXUP push offset public_63f82f8 @0x6389161*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f82f8
        push edi
        call ebx
        add esp, 0x10
        public_638916c : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [public_658b24c]
        inc eax
        add esi, 8
        cmp eax, ecx
        mov dword ptr ss : [esp+0x18], eax
        jl public_6389141
        mov esi, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ss : [esp+0x1C]
        public_6389189 : nop
        cmp dword ptr ss : [esp+0x10], esi
        je public_638919e
        mov eax, dword ptr ds : [public_658b804]
        push eax
        push ecx
        call public_6377fe0
        add esp, 8
/*FIXUP public_638919e : nop
        push offset public_63edccc @0x638919e*/
  FIXUP public_638919e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63edccc
        push edi
        call ebx
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        add esp, 8
        test eax, eax
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], ecx
        jne public_638912a
        public_63891c2 : nop
        cmp dword ptr ss : [esp+0x10], esi
        je public_63891d5
        lea ecx, ss:[esp+0x10]
        push ecx
        call public_636ecc0
        add esp, 4
        public_63891d5 : nop
        mov edx, dword ptr ss : [esp+0x14]
        push edx
/*FIXUP push offset public_63ee77c @0x63891da*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ee77c
        push edi
        call ebx
        mov eax, dword ptr ss : [esp+0x20]
        add esp, 0xC
        xor esi, esi
        test eax, eax
        jle public_6389204
        public_63891ef : nop
        push esi
/*FIXUP push offset public_63ee77c @0x63891f0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ee77c
        push edi
        call ebx
        mov eax, dword ptr ss : [esp+0x20]
        add esp, 0xC
        inc esi
        cmp esi, eax
        jl public_63891ef
        public_6389204 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
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
        push ecx
        push edx
/*FIXUP push offset public_63f82dc @0x638921e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f82dc
        push edi
        call ebx
        add esp, 0x20
        public_6389229 : nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6389050)
    }
}

#undef public_63890cf
#undef public_63890fa
#undef public_63890fd
#undef public_6389124
#undef public_638912a
#undef public_638912e
#undef public_6389141
#undef public_638915a
#undef public_638916c
#undef public_6389189
#undef public_638919e
#undef public_63891c2
#undef public_63891d5
#undef public_63891ef
#undef public_6389204
#undef public_6389229
