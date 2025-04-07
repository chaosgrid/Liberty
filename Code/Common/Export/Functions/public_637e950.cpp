#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e1b0);
CLANG_FORWARD_PROC_SYMBOL(public_636e740);
CLANG_FORWARD_PROC_SYMBOL(public_636e920);
CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_636ec70);
CLANG_FORWARD_PROC_SYMBOL(public_636ecc0);
CLANG_FORWARD_PROC_SYMBOL(public_636ee40);
CLANG_FORWARD_PROC_SYMBOL(public_6370570);
CLANG_FORWARD_PROC_SYMBOL(public_6378980);
CLANG_FORWARD_PROC_SYMBOL(public_637e950);
CLANG_FORWARD_PROC_SYMBOL(public_637ef60);
CLANG_FORWARD_PROC_SYMBOL(public_637fd60);

#define public_637e989 _public_637e989
#define public_637e9ad _public_637e9ad
#define public_637e9c2 _public_637e9c2
#define public_637e9e0 _public_637e9e0
#define public_637e9f8 _public_637e9f8
#define public_637ea01 _public_637ea01
#define public_637ea35 _public_637ea35
#define public_637ea63 _public_637ea63
#define public_637eaae _public_637eaae
#define public_637eab4 _public_637eab4
#define public_637eac7 _public_637eac7
#define public_637eaf7 _public_637eaf7
#define public_637eb05 _public_637eb05
#define public_637eb5e _public_637eb5e
#define public_637ebb2 _public_637ebb2
#define public_637ebd7 _public_637ebd7
#define public_637ec04 _public_637ec04
#define public_637ec0e _public_637ec0e
#define public_637ec4e _public_637ec4e
#define public_637ec52 _public_637ec52
#define public_637ec5b _public_637ec5b
#define public_637ec7e _public_637ec7e
#define public_637ec86 _public_637ec86
#define public_637ec9e _public_637ec9e
#define public_637ecc7 _public_637ecc7
#define public_637ecdb _public_637ecdb
#define public_637eceb _public_637eceb
#define public_637ecf1 _public_637ecf1
#define public_637ed33 _public_637ed33

PROC_DECLARE(0x637e950, internal_637e950, public_637e950);
extern "C" NAKED register_t __cdecl internal_637e950()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x34
        cmp dword ptr ds : [public_658b078], 1
        push ebx
        push esi
        push edi
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x2C], 0xFFEFFFFF
        jl public_637e989
        mov eax, dword ptr ds : [public_658b7fc]
/*FIXUP push offset public_63f5a30 @0x637e97a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f5a30
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 8
        public_637e989 : nop
        mov edi, dword ptr ss : [ebp+0x10]
        push edi
        call public_636ec70
        mov ecx, dword ptr ss : [ebp+0xC]
        xor ebx, ebx
        add esp, 4
        cmp edi, ebx
        mov dword ptr ss : [esp+0xC], eax
        mov dword ptr ds : [public_658b84c], ebx
        lea edx, ds:[eax+4]
        je public_637e9c2
        lea eax, ds:[edi]
        public_637e9ad : nop
        mov dword ptr ds : [edx], ecx
        mov esi, dword ptr ds : [public_658b24c]
        add edx, 4
        dec eax
        lea ecx, ds:[ecx+esi*8]
        jne public_637e9ad
        mov eax, dword ptr ss : [esp+0xC]
        public_637e9c2 : nop
        push edi
        push eax
        call public_636ee40
        mov esi, dword ptr ss : [ebp+8]
        add esp, 8
        cmp esi, ebx
        je public_637ea01
        mov eax, dword ptr ds : [esi+4]
        add esi, 4
        add esi, 4
        cmp eax, ebx
        je public_637ea01
        public_637e9e0 : nop
        mov ecx, dword ptr ds : [eax+8]
        push ecx
        call public_6370570
        add esp, 4
        cmp eax, ebx
        jl public_637e9f8
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edx+eax*4+4], ebx
        public_637e9f8 : nop
        mov eax, dword ptr ds : [esi]
        add esi, 4
        cmp eax, ebx
        jne public_637e9e0
        public_637ea01 : nop
        mov eax, dword ptr ds : [public_658b064]
        push eax
        call public_6370570
        add esp, 4
        cmp eax, ebx
        jl public_637ea35
        mov ecx, dword ptr ds : [public_658b1f4]
        dec ecx
        cmp ecx, eax
        je public_637ea35
        mov esi, dword ptr ds : [public_658b1f8]
        or edx, 0xFFFFFFFF
        sub edx, esi
        cmp edx, eax
        je public_637ea35
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx+eax*4+4], ebx
        public_637ea35 : nop
        mov eax, dword ptr ds : [public_658b070]
        cmp eax, ebx
        je public_637ea63
        cmp dword ptr ds : [public_658b0d8], ebx
        je public_637ea63
        cmp dword ptr ds : [public_658b0a8], ebx
        jne public_637ea63
        push eax
        call public_6370570
        add esp, 4
        cmp eax, ebx
        jl public_637ea63
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edx+eax*4+4], ebx
        public_637ea63 : nop
        cmp dword ptr ds : [public_658b030], ebx
        jne public_637ec9e
        cmp dword ptr ds : [public_658b0a8], ebx
        je public_637eab4
        fld qword ptr ds : [public_658b020]
        fmul qword ptr ds : [public_63a59a0]
        fld qword ptr ds : [public_658b888]
        fadd st(0), st
        fstp qword ptr ss : [esp+0x38]
        fcom qword ptr ss : [esp+0x38]
        fnstsw ax
        test ah, 1
        je public_637eaae
        mov eax, dword ptr ss : [esp+0x38]
        fstp st(0)
        mov ecx, dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0x38], eax
        mov dword ptr ss : [esp+0x3C], ecx
        jmp public_637eac7
        public_637eaae : nop
        fstp qword ptr ss : [esp+0x38]
        jmp public_637eac7
        public_637eab4 : nop
        mov edx, dword ptr ds : [public_658b020]
        mov eax, dword ptr ds : [public_658b024]
        mov dword ptr ss : [esp+0x38], edx
        mov dword ptr ss : [esp+0x3C], eax
        public_637eac7 : nop
        mov eax, dword ptr ds : [public_658b24c]
        mov ecx, dword ptr ds : [public_658b254]
        mov esi, dword ptr ds : [public_658b810]
        sub ecx, eax
        dec ecx
        cmp esi, ebx
        mov dword ptr ds : [public_658bf68], ecx
        mov ecx, dword ptr ds : [public_658b844]
        mov eax, edi
        mov dword ptr ss : [esp+0x10], esi
        je public_637ec86
        jmp public_637eb05
        public_637eaf7 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x24]
        xor ebx, ebx
        public_637eb05 : nop
        cmp dword ptr ds : [esi+0x30], ebx
        je public_637ec7e
        cdq 
        idiv ecx
        lea ebx, ds:[esi+0x40]
        add eax, 0x64
        dec ecx
        push eax
        mov dword ptr ss : [esp+0x28], ecx
        call public_636e920
        mov dword ptr ds : [ebx], eax
        mov eax, dword ptr ss : [esp+0x10]
        xor edi, edi
        add esp, 4
        cmp eax, edi
        mov dword ptr ss : [esp+0x14], edi
        je public_637ec52
        mov esi, dword ptr ds : [eax+4]
        push eax
        call public_636ec10
        add esp, 4
        test eax, eax
        jle public_637ec4e
        mov ecx, 4
        mov dword ptr ss : [esp+0x1C], ecx
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x20], eax
        public_637eb5e : nop
        test esi, esi
        je public_637ec0e
        mov ecx, dword ptr ds : [public_658be58]
        mov eax, dword ptr ss : [esp+0x10]
        lea edx, ss:[esp+0x30]
        push edx
        push eax
        inc ecx
        push esi
        mov dword ptr ds : [public_658be58], ecx
        call public_637fd60
        fld qword ptr ss : [esp+0x3C]
        fcomp qword ptr ss : [esp+0x44]
        add esp, 0xC
        fnstsw ax
        test ah, 1
        je public_637ebb2
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0xC]
        inc edx
        mov dword ptr ds : [eax+ecx], esi
        add eax, 4
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ss : [esp+0x18], eax
        jmp public_637ec0e
        public_637ebb2 : nop
        mov ecx, dword ptr ds : [public_658b84c]
        inc ecx
        test edi, edi
        mov dword ptr ds : [public_658b84c], ecx
        jne public_637ebd7
        mov edx, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0x34]
        mov edi, esi
        mov dword ptr ss : [esp+0x28], edx
        mov dword ptr ss : [esp+0x2C], eax
        jmp public_637ec0e
        public_637ebd7 : nop
        fld qword ptr ss : [esp+0x30]
        fcomp qword ptr ss : [esp+0x28]
        fnstsw ax
        test ah, 0x41
        jne public_637ec04
        push edi
        push ebx
        call public_636e1b0
        mov ecx, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ss : [esp+0x3C]
        add esp, 8
        mov edi, esi
        mov dword ptr ss : [esp+0x28], ecx
        mov dword ptr ss : [esp+0x2C], edx
        jmp public_637ec0e
        public_637ec04 : nop
        push esi
        push ebx
        call public_636e1b0
        add esp, 8
        public_637ec0e : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ds : [eax+ecx+4]
        add eax, 4
        mov dword ptr ss : [esp+0x1C], eax
        dec dword ptr ss : [esp+0x20]
        jne public_637eb5e
        test edi, edi
        je public_637ec4e
        push edi
        push ebx
        call public_636e1b0
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [eax], edx
        add esp, 8
        mov dword ptr ds : [eax+4], ecx
        mov esi, eax
        jmp public_637ec5b
        public_637ec4e : nop
        mov esi, dword ptr ss : [esp+0x10]
        public_637ec52 : nop
        push ebx
        call public_636e740
        add esp, 4
        public_637ec5b : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0xC]
        push edx
        push eax
        call public_636ee40
        mov esi, dword ptr ds : [esi+0x30]
        add esp, 8
        test esi, esi
        mov dword ptr ss : [esp+0x10], esi
        jne public_637eaf7
        xor ebx, ebx
        public_637ec7e : nop
        cmp dword ptr ds : [public_658b030], ebx
        jne public_637ec9e
        public_637ec86 : nop
        cmp dword ptr ds : [public_658b0a8], ebx
        jne public_637ec9e
        cmp dword ptr ds : [public_658b080], ebx
        jne public_637ec9e
        cmp dword ptr ds : [public_658b084], ebx
        je public_637ecf1
        public_637ec9e : nop
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, ebx
        mov dword ptr ds : [public_658b8a4], 1
        je public_637eceb
        mov edi, dword ptr ds : [eax+4]
        push eax
        call public_636ec10
        add esp, 4
        cmp eax, ebx
        jle public_637eceb
        mov esi, 4
        mov ebx, eax
        public_637ecc7 : nop
        test edi, edi
        je public_637ecdb
        mov ecx, dword ptr ds : [public_658b810]
        push ecx
        push edi
        call public_637ef60
        add esp, 8
        public_637ecdb : nop
        mov edx, dword ptr ss : [esp+0xC]
        mov edi, dword ptr ds : [esi+edx+4]
        add esi, 4
        dec ebx
        jne public_637ecc7
        xor ebx, ebx
        public_637eceb : nop
        mov dword ptr ds : [public_658b8a4], ebx
        public_637ecf1 : nop
        mov eax, dword ptr ds : [public_658be50]
        mov esi, dword ptr ds : [public_658be58]
        lea ecx, ss:[esp+0xC]
        add esi, eax
        push ecx
        mov dword ptr ds : [public_658be58], esi
        mov dword ptr ds : [public_658be50], ebx
        call public_636ecc0
        mov eax, dword ptr ds : [public_658b078]
        add esp, 4
        cmp eax, 4
        jl public_637ed33
        mov edx, dword ptr ds : [public_658b810]
        push 1
        push ebx
        push edx
        call public_6378980
        add esp, 0xC
        public_637ed33 : nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x637e950)
    }
}

#undef public_637e989
#undef public_637e9ad
#undef public_637e9c2
#undef public_637e9e0
#undef public_637e9f8
#undef public_637ea01
#undef public_637ea35
#undef public_637ea63
#undef public_637eaae
#undef public_637eab4
#undef public_637eac7
#undef public_637eaf7
#undef public_637eb05
#undef public_637eb5e
#undef public_637ebb2
#undef public_637ebd7
#undef public_637ec04
#undef public_637ec0e
#undef public_637ec4e
#undef public_637ec52
#undef public_637ec5b
#undef public_637ec7e
#undef public_637ec86
#undef public_637ec9e
#undef public_637ecc7
#undef public_637ecdb
#undef public_637eceb
#undef public_637ecf1
#undef public_637ed33
