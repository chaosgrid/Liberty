#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_638d9f0);
CLANG_FORWARD_PROC_SYMBOL(public_638ecb0);
CLANG_FORWARD_PROC_SYMBOL(public_638fae0);

#define public_638ecdb _public_638ecdb
#define public_638ed0c _public_638ed0c
#define public_638ed1c _public_638ed1c
#define public_638ed1e _public_638ed1e
#define public_638ed83 _public_638ed83
#define public_638edc0 _public_638edc0
#define public_638edd9 _public_638edd9
#define public_638ee19 _public_638ee19
#define public_638ee4b _public_638ee4b
#define public_638ee6b _public_638ee6b
#define public_638ee85 _public_638ee85
#define public_638eecf _public_638eecf
#define public_638ef09 _public_638ef09
#define public_638ef3e _public_638ef3e

PROC_DECLARE(0x638ecb0, internal_638ecb0, public_638ecb0);
extern "C" NAKED register_t __cdecl internal_638ecb0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x34
        mov eax, dword ptr ds : [public_658b218]
        mov ecx, dword ptr ds : [public_658bf58]
        push ebx
        dec eax
        cmp eax, ecx
        push esi
        push edi
        jne public_638ecdb
        mov eax, dword ptr ds : [public_658b200]
        mov dword ptr ds : [public_658b078], eax
        mov dword ptr ds : [public_658b998], eax
        public_638ecdb : nop
        cmp dword ptr ds : [public_658b078], 3
        mov esi, dword ptr ss : [ebp+0xC]
        mov edi, dword ptr ss : [ebp+8]
        jl public_638ed0c
        mov edx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ds : [esi+0x4C]
        push edx
        mov edx, dword ptr ds : [edi+0x4C]
        push eax
        mov eax, dword ptr ds : [public_658b7fc]
        push edx
        inc ecx
        push ecx
/*FIXUP push offset public_63fab10 @0x638ecfd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fab10
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 0x18
        public_638ed0c : nop
        mov eax, dword ptr ds : [edi+0x50]
        test ah, 2
        jne public_638ed1c
        mov ebx, esi
        mov esi, edi
        mov edi, ebx
        jmp public_638ed1e
        public_638ed1c : nop
        mov ebx, edi
        public_638ed1e : nop
        lea ecx, ss:[esp+0x20]
        push ecx
        lea edx, ss:[esp+0x2C]
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        push ebx
        call public_638d9f0
        lea ecx, ss:[esp+0x40]
        push ecx
        lea edx, ss:[esp+0x4C]
        mov dword ptr ss : [esp+0x20], eax
        push edx
        lea eax, ss:[esp+0x30]
        push eax
        push esi
        call public_638d9f0
        fld qword ptr ss : [esp+0x30]
        fcomp qword ptr ss : [esp+0x38]
        mov ecx, eax
        add esp, 0x20
        fnstsw ax
        test ah, 1
        je public_638ed83
        mov eax, dword ptr ss : [esp+0xC]
        push 0
        lea ecx, ss:[esp+0x24]
        push ecx
        lea edx, ss:[esp+0x30]
        push edx
        push eax
        push ebx
        call public_638fae0
        fld qword ptr ss : [esp+0x24]
        add esp, 0x14
        jmp public_638ee85
        public_638ed83 : nop
        mov eax, dword ptr ds : [public_658b02c]
        test eax, eax
        je public_638ee6b
        mov eax, dword ptr ds : [esi+0x50]
        test ah, 2
        jne public_638ee6b
        fld qword ptr ds : [public_658b098]
        fchs 
        fcomp qword ptr ss : [esp+0x28]
        fnstsw ax
        test ah, 0x41
        je public_638edc0
        fld qword ptr ss : [esp+0x20]
        fcomp qword ptr ds : [public_658b888]
        fnstsw ax
        test ah, 0x41
        jne public_638edd9
        public_638edc0 : nop
        fld qword ptr ss : [esp+0x10]
        fmul qword ptr ds : [public_63a5a70]
        fcomp qword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 1
        je public_638ee6b
        public_638edd9 : nop
        fld qword ptr ds : [public_658ba40]
        mov eax, dword ptr ds : [public_658ba30]
        fadd qword ptr ss : [esp+0x10]
        inc eax
        mov dword ptr ds : [public_658ba30], eax
        fstp qword ptr ds : [public_658ba40]
        fld qword ptr ds : [public_658ba38]
        fcomp qword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 1
        je public_638ee19
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [public_658ba38], ecx
        mov dword ptr ds : [public_658ba3c], edx
        public_638ee19 : nop
        cmp dword ptr ds : [public_658b078], 2
        jl public_638ee4b
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [edi+0x4C]
        push eax
        push ecx
        push edx
        push eax
        mov eax, dword ptr ds : [esi+0x4C]
        push ecx
        mov ecx, dword ptr ds : [public_658b7fc]
        push eax
/*FIXUP push offset public_63faab4 @0x638ee3c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63faab4
        push ecx
        call dword ptr ds : [public_63991e8]
        add esp, 0x20
        public_638ee4b : nop
        mov ecx, dword ptr ss : [esp+0xC]
        push 0
        lea edx, ss:[esp+0x24]
        push edx
        lea eax, ss:[esp+0x30]
        push eax
        push ecx
        push ebx
        call public_638fae0
        fld qword ptr ss : [esp+0x24]
        add esp, 0x14
        jmp public_638ee85
        public_638ee6b : nop
        push 0
        lea edx, ss:[esp+0x34]
        push edx
        lea eax, ss:[esp+0x40]
        push eax
        push ecx
        push esi
        call public_638fae0
        fld qword ptr ss : [esp+0x2C]
        add esp, 0x14
        public_638ee85 : nop
        mov eax, dword ptr ds : [public_658b190]
        test eax, eax
        je public_638ef3e
        mov eax, dword ptr ss : [ebp+0x10]
        cmp eax, 2
        jne public_638eecf
        fld qword ptr ds : [public_658b9e8]
        mov eax, dword ptr ds : [public_658b9d8]
        fadd st, st(1)
        inc eax
        mov dword ptr ds : [public_658b9d8], eax
        fstp qword ptr ds : [public_658b9e8]
        fld qword ptr ds : [public_658b9e0]
        fcomp 
        fnstsw ax
        test ah, 1
        je public_638ef3e
        fstp qword ptr ds : [public_658b9e0]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_638eecf : nop
        cmp eax, 3
        jne public_638ef09
        fld qword ptr ds : [public_658ba88]
        mov eax, dword ptr ds : [public_658ba78]
        fadd st, st(1)
        inc eax
        mov dword ptr ds : [public_658ba78], eax
        fstp qword ptr ds : [public_658ba88]
        fld qword ptr ds : [public_658ba80]
        fcomp 
        fnstsw ax
        test ah, 1
        je public_638ef3e
        fstp qword ptr ds : [public_658ba80]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_638ef09 : nop
        fld qword ptr ds : [public_658bab0]
        mov eax, dword ptr ds : [public_658baa0]
        fadd st, st(1)
        inc eax
        mov dword ptr ds : [public_658baa0], eax
        fstp qword ptr ds : [public_658bab0]
        fld qword ptr ds : [public_658baa8]
        fcomp 
        fnstsw ax
        test ah, 1
        je public_638ef3e
        fstp qword ptr ds : [public_658baa8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_638ef3e : nop
        pop edi
        fstp st(0)
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x638ecb0)
    }
}

#undef public_638ecdb
#undef public_638ed0c
#undef public_638ed1c
#undef public_638ed1e
#undef public_638ed83
#undef public_638edc0
#undef public_638edd9
#undef public_638ee19
#undef public_638ee4b
#undef public_638ee6b
#undef public_638ee85
#undef public_638eecf
#undef public_638ef09
#undef public_638ef3e
