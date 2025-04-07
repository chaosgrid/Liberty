#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f67840);
CLANG_FORWARD_PROC_SYMBOL(public_6f6b140);
CLANG_FORWARD_PROC_SYMBOL(public_6f6b600);
CLANG_FORWARD_PROC_SYMBOL(public_6f6b6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f6b790);
CLANG_FORWARD_PROC_SYMBOL(public_6f6f3e0);

#define public_6f67870 _public_6f67870
#define public_6f67890 _public_6f67890
#define public_6f678b4 _public_6f678b4
#define public_6f678c1 _public_6f678c1
#define public_6f678f0 _public_6f678f0
#define public_6f67913 _public_6f67913
#define public_6f6792c _public_6f6792c
#define public_6f67974 _public_6f67974
#define public_6f6797a _public_6f6797a
#define public_6f6798a _public_6f6798a
#define public_6f679f3 _public_6f679f3
#define public_6f67a00 _public_6f67a00
#define public_6f67ad1 _public_6f67ad1
#define public_6f67ada _public_6f67ada
#define public_6f67b02 _public_6f67b02
#define public_6f67b20 _public_6f67b20
#define public_6f67b36 _public_6f67b36
#define public_6f67b58 _public_6f67b58
#define public_6f67b6e _public_6f67b6e
#define public_6f67b89 _public_6f67b89
#define public_6f67b95 _public_6f67b95
#define public_6f67b99 _public_6f67b99
#define public_6f67ba3 _public_6f67ba3

PROC_DECLARE(0x6f67840, internal_6f67840, public_6f67840);
extern "C" NAKED register_t __cdecl internal_6f67840()
{
    __asm
    {
        sub esp, 0x1C
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x2C]
        push edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0
        call dword ptr ds : [public_6fb3024]
        test al, al
        je public_6f6798a
        mov ebp, dword ptr ds : [public_6fb3018]
        mov ebx, dword ptr ds : [public_6fb3014]
        nop 
/*FIXUP public_6f67870 : nop
        push offset public_6fbbce8 @0x6f67870*/
  FIXUP public_6f67870 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbce8
        mov ecx, esi
        call dword ptr ds : [public_6fb301c]
        test al, al
        mov ecx, esi
        je public_6f678c1
        call ebp
        test al, al
        je public_6f6797a
        lea ecx, ds:[ecx]
/*FIXUP public_6f67890 : nop
        push offset public_6fb445c @0x6f67890*/
  FIXUP public_6f67890 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb445c
        mov ecx, esi
        call ebx
        test al, al
        je public_6f678b4
        mov ecx, esi
        call dword ptr ds : [public_6fb3054]
        push eax
        lea eax, ss:[esp+0x14]
        push eax
        call dword ptr ds : [public_6fb33b4]
        add esp, 8
        public_6f678b4 : nop
        mov ecx, esi
        call ebp
        test al, al
        jne public_6f67890
        jmp public_6f6797a
/*FIXUP public_6f678c1 : nop
        push offset public_6fbbce0 @0x6f678c1*/
  FIXUP public_6f678c1 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbce0
        call dword ptr ds : [public_6fb301c]
        test al, al
        je public_6f6797a
        xor edi, edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x18], 0xBFF00000
        call ebp
        test al, al
        je public_6f67974
        mov edi, edi
/*FIXUP public_6f678f0 : nop
        push offset public_6fbbcdc @0x6f678f0*/
  FIXUP public_6f678f0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbcdc
        mov ecx, esi
        call ebx
        test al, al
        mov ecx, esi
        je public_6f67913
        call dword ptr ds : [public_6fb3054]
        push eax
        call dword ptr ds : [public_6fb3684]
        add esp, 4
        mov edi, eax
        jmp public_6f6792c
/*FIXUP public_6f67913 : nop
        push offset public_6fbbcd0 @0x6f67913*/
  FIXUP public_6f67913 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbcd0
        call ebx
        test al, al
        je public_6f6792c
        push 0
        mov ecx, esi
        call dword ptr ds : [public_6fb3044]
        fstp qword ptr ss : [esp+0x14]
        public_6f6792c : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6f678f0
        fld qword ptr ss : [esp+0x14]
        fcomp qword ptr ds : [public_6fb78f0]
        fnstsw ax
        test ah, 0x44
        jnp public_6f67974
        mov ecx, dword ptr ss : [esp+0x10]
        fld qword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [public_6fd1bb0]
        fstp dword ptr ss : [esp+0x28]
        lea edx, ss:[esp+0x20]
        push edx
        push 1
        mov dword ptr ss : [esp+0x28], ecx
        push eax
        mov ecx, offset public_6fd1ba8
        mov dword ptr ss : [esp+0x30], edi
        call public_6f6f3e0
        public_6f67974 : nop
        mov ebp, dword ptr ds : [public_6fb3018]
        public_6f6797a : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb3024]
        test al, al
        jne public_6f67870
        public_6f6798a : nop
        mov esi, dword ptr ds : [public_6fd1bac]
        test esi, esi
        je public_6f67b99
        mov edi, dword ptr ds : [public_6fd1bb0]
        mov ecx, edi
        sub ecx, esi
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov dword ptr ss : [esp+0x30], edx
        je public_6f67b95
        mov ecx, edi
        sub ecx, esi
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 0x10
        mov dword ptr ss : [esp+0x30], edi
        mov dword ptr ss : [esp+0x14], esi
        jg public_6f679f3
        mov ecx, dword ptr ss : [esp+0x30]
        push 0
        push ecx
        push edi
        push esi
        call public_6f6b600
        add esp, 0x10
        jmp public_6f67b89
        public_6f679f3 : nop
        mov ebp, dword ptr ss : [esp+0x30]
        jle public_6f67b02
        lea ecx, ds:[ecx]
        public_6f67a00 : nop
        push ebp
        sub esp, 0xC
        lea edx, ds:[edi-0xC]
        mov ecx, dword ptr ds : [edx]
        mov eax, esp
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], edx
        mov ecx, edi
        sub ecx, esi
        mov eax, 0x2AAAAAAB
        imul ecx
        mov eax, edx
        sar eax, 1
        mov ecx, eax
        shr ecx, 0x1F
        add eax, ecx
        cdq 
        sub eax, edx
        sar eax, 1
        lea edx, ds:[eax+eax*2]
        lea eax, ds:[esi+edx*4]
        mov edx, dword ptr ds : [eax]
        sub esp, 0xC
        mov ecx, esp
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+4], edx
        mov dword ptr ds : [ecx+8], eax
        sub esp, 0xC
        mov ecx, esi
        mov eax, dword ptr ds : [ecx]
        mov edx, esp
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+4], eax
        mov dword ptr ds : [edx+8], ecx
        lea edx, ss:[esp+0x48]
        push edx
        call public_6f6b6f0
        mov edx, dword ptr ds : [eax]
        add esp, 0x2C
        push ebp
        sub esp, 0xC
        mov ecx, esp
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+4], edx
        push edi
        push esi
        mov dword ptr ds : [ecx+8], eax
        call public_6f6b790
        mov ebx, eax
        mov ecx, edi
        sub ecx, ebx
        mov eax, 0x2AAAAAAB
        imul ecx
        mov ecx, edx
        sar ecx, 1
        mov edx, ecx
        shr edx, 0x1F
        add ecx, edx
        mov edx, ebx
        sub edx, esi
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 1
        mov eax, edx
        add esp, 0x18
        shr eax, 0x1F
        add edx, eax
        cmp ecx, edx
        push 0
        push ebp
        jg public_6f67ad1
        push edi
        push ebx
        call public_6f6b140
        mov edi, ebx
        jmp public_6f67ada
        public_6f67ad1 : nop
        push ebx
        push esi
        call public_6f6b140
        mov esi, ebx
        public_6f67ada : nop
        mov ecx, edi
        sub ecx, esi
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        add esp, 0x10
        cmp edx, 0x10
        jg public_6f67a00
        mov esi, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x30]
        public_6f67b02 : nop
        push 0
        push ebp
        lea ebx, ds:[esi+0xC0]
        push ebx
        push esi
        call public_6f6b600
        mov ecx, ebx
        add esp, 0x10
        cmp ecx, edi
        je public_6f67b89
        nop 
        lea esp, ss:[esp]
        public_6f67b20 : nop
        mov edx, ecx
        mov ebp, dword ptr ds : [edx]
        mov eax, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], edx
        mov esi, ecx
        mov eax, ecx
        public_6f67b36 : nop
        sub eax, 0xC
        mov ebx, eax
        mov edx, dword ptr ds : [ebx]
        cmp ebp, edx
        mov edi, dword ptr ds : [ebx+4]
        mov ebx, dword ptr ds : [ebx+8]
        mov dword ptr ss : [esp+0x28], ebx
        jb public_6f67b58
        ja public_6f67b6e
        cmp dword ptr ss : [esp+0x18], edi
        setb dl
        test dl, dl
        je public_6f67b6e
        public_6f67b58 : nop
        mov edx, eax
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+4], edi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+8], edx
        mov esi, eax
        jmp public_6f67b36
        public_6f67b6e : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ebp
        mov dword ptr ds : [esi+4], eax
        mov eax, dword ptr ss : [esp+0x30]
        add ecx, 0xC
        cmp ecx, eax
        mov dword ptr ds : [esi+8], edx
        jne public_6f67b20
        public_6f67b89 : nop
        mov edi, dword ptr ds : [public_6fd1bb0]
        mov esi, dword ptr ds : [public_6fd1bac]
        public_6f67b95 : nop
        test esi, esi
        jne public_6f67ba3
        public_6f67b99 : nop
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1C
        ret 
        public_6f67ba3 : nop
        sub edi, esi
        mov eax, 0x2AAAAAAB
        imul edi
        sar edx, 1
        pop edi
        mov eax, edx
        shr eax, 0x1F
        pop esi
        add edx, eax
        pop ebp
        mov eax, edx
        pop ebx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6f67840)
    }
}

#undef public_6f67870
#undef public_6f67890
#undef public_6f678b4
#undef public_6f678c1
#undef public_6f678f0
#undef public_6f67913
#undef public_6f6792c
#undef public_6f67974
#undef public_6f6797a
#undef public_6f6798a
#undef public_6f679f3
#undef public_6f67a00
#undef public_6f67ad1
#undef public_6f67ada
#undef public_6f67b02
#undef public_6f67b20
#undef public_6f67b36
#undef public_6f67b58
#undef public_6f67b6e
#undef public_6f67b89
#undef public_6f67b95
#undef public_6f67b99
#undef public_6f67ba3
