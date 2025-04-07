#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6370570);
CLANG_FORWARD_PROC_SYMBOL(public_637fd60);
CLANG_FORWARD_PROC_SYMBOL(public_638aa10);
CLANG_FORWARD_PROC_SYMBOL(public_638b280);
CLANG_FORWARD_PROC_SYMBOL(public_638bbd0);

#define public_638aaa6 _public_638aaa6
#define public_638aaaa _public_638aaaa
#define public_638aad3 _public_638aad3
#define public_638aaf4 _public_638aaf4
#define public_638aaf8 _public_638aaf8
#define public_638ab3c _public_638ab3c
#define public_638ab50 _public_638ab50
#define public_638ab70 _public_638ab70
#define public_638ab8a _public_638ab8a
#define public_638abcb _public_638abcb
#define public_638abe5 _public_638abe5
#define public_638abf2 _public_638abf2
#define public_638ac07 _public_638ac07
#define public_638ac43 _public_638ac43
#define public_638ac84 _public_638ac84

PROC_DECLARE(0x638aa10, internal_638aa10, public_638aa10);
extern "C" NAKED register_t __cdecl internal_638aa10()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x1C
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [ebp+8]
        test edi, edi
        je public_638ac84
        mov eax, dword ptr ds : [public_658b24c]
        mov ebx, dword ptr ds : [public_63991e8]
        push eax
/*FIXUP push offset public_63f9858 @0x638aa33*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f9858
        push edi
        call ebx
        mov ecx, dword ptr ds : [public_658b810]
        push 1
        push 0
        push ecx
/*FIXUP push offset public_63997b0 @0x638aa46*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63997b0
        push edi
        call public_638bbd0
        mov edx, dword ptr ds : [public_658b6a4]
        mov eax, dword ptr ds : [public_658b6a0]
        add esp, 0x20
        push edx
        push eax
/*FIXUP push offset public_63f976c @0x638aa61*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f976c
        push edi
        call ebx
        mov ecx, dword ptr ds : [public_658b800]
        mov edx, dword ptr ds : [public_658b24c]
        push 0xFFFFFFFF
        push ecx
        push edx
/*FIXUP push offset public_63f975c @0x638aa79*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f975c
        push edi
        call public_638b280
        add esp, 0x24
/*FIXUP push offset public_63edccc @0x638aa87*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63edccc
        push edi
        call ebx
        mov esi, dword ptr ds : [public_658b810]
        add esp, 8
        test esi, esi
        mov dword ptr ss : [esp+0xC], esi
        je public_638ab3c
        jmp public_638aaaa
        public_638aaa6 : nop
        mov esi, dword ptr ss : [esp+0xC]
        public_638aaaa : nop
        mov eax, dword ptr ds : [esi+0x30]
        test eax, eax
        je public_638ab3c
/*FIXUP push offset public_63f9754 @0x638aab5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f9754
        push edi
        call ebx
        mov eax, dword ptr ds : [esi+0x34]
        add esp, 8
        test eax, eax
        je public_638aaf8
        lea esi, ds:[eax+4]
        mov eax, dword ptr ds : [esi]
        add esi, 4
        test eax, eax
        je public_638aaf4
        public_638aad3 : nop
        mov eax, dword ptr ds : [eax+8]
        push eax
        call public_6370570
        add esp, 4
        push eax
/*FIXUP push offset public_63f7268 @0x638aae0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f7268
        push edi
        call ebx
        mov eax, dword ptr ds : [esi]
        add esp, 0xC
        add esi, 4
        test eax, eax
        jne public_638aad3
        public_638aaf4 : nop
        mov esi, dword ptr ss : [esp+0xC]
        public_638aaf8 : nop
        mov eax, dword ptr ds : [public_658bb70]
        mov edx, dword ptr ds : [public_658b800]
        lea ecx, ss:[esp+0x20]
        push ecx
        inc eax
        push esi
        push edx
        mov dword ptr ds : [public_658bb70], eax
        call public_637fd60
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x2C]
        add esp, 0xC
        push eax
        push ecx
/*FIXUP push offset public_63f9740 @0x638ab22*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f9740
        push edi
        call ebx
        mov esi, dword ptr ds : [esi+0x30]
        add esp, 0x10
        test esi, esi
        mov dword ptr ss : [esp+0xC], esi
        jne public_638aaa6
        public_638ab3c : nop
        mov eax, dword ptr ds : [public_658b074]
        test eax, eax
        je public_638ab50
/*FIXUP push offset public_63f96d4 @0x638ab45*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f96d4
        push edi
        call ebx
        add esp, 8
/*FIXUP public_638ab50 : nop
        push offset public_63f9618 @0x638ab50*/
  FIXUP public_638ab50 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f9618
        push edi
        call ebx
        mov eax, dword ptr ds : [public_658b24c]
        add esp, 8
        cmp eax, 8
        jl public_638ab70
/*FIXUP push offset public_63f9510 @0x638ab65*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f9510
        push edi
        call ebx
        add esp, 8
/*FIXUP public_638ab70 : nop
        push offset public_63f94d8 @0x638ab70*/
  FIXUP public_638ab70 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f94d8
        push edi
        call ebx
        mov eax, dword ptr ds : [public_658b24c]
        add esp, 8
        xor esi, esi
        test eax, eax
        jle public_638ac43
        public_638ab8a : nop
        mov edx, dword ptr ds : [public_658b258]
        fld qword ptr ds : [public_63a59c0]
        mov eax, dword ptr ds : [public_658b254]
        fst qword ptr ss : [esp+0x10]
        lea ecx, ds:[edx+esi*8]
        mov edx, eax
        dec eax
        test edx, edx
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x1C], 0x80100000
        je public_638ac07
        mov edx, dword ptr ds : [public_658b24c]
        shl edx, 3
        inc eax
        mov dword ptr ss : [esp+0x10], edx
        mov dword ptr ss : [esp+0xC], eax
        public_638abcb : nop
        fld qword ptr ss : [esp+0x18]
        fcomp qword ptr ds : [ecx]
        fnstsw ax
        test ah, 1
        je public_638abe5
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], edx
        public_638abe5 : nop
        fcom qword ptr ds : [ecx]
        fnstsw ax
        test ah, 0x41
        jne public_638abf2
        fstp st(0)
        fld qword ptr ds : [ecx]
        public_638abf2 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0xC]
        add ecx, edx
        dec eax
        mov dword ptr ss : [esp+0xC], eax
        jne public_638abcb
        fst qword ptr ss : [esp+0x10]
        public_638ac07 : nop
        fld qword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x18]
        fsub st, st(1)
        mov edx, dword ptr ss : [esp+0x14]
        sub esp, 8
        fstp qword ptr ss : [esp]
        push eax
        mov eax, dword ptr ss : [esp+0x1C]
        push ecx
        fstp st(0)
        push edx
        push eax
        push esi
/*FIXUP push offset public_63f94b0 @0x638ac2a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f94b0
        push edi
        call ebx
        mov eax, dword ptr ds : [public_658b24c]
        add esp, 0x24
        inc esi
        cmp esi, eax
        jl public_638ab8a
        public_638ac43 : nop
        mov ecx, dword ptr ds : [public_658b6a4]
        mov edx, dword ptr ds : [public_658b6a0]
        push ecx
        push edx
/*FIXUP push offset public_63f92c8 @0x638ac51*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f92c8
        push edi
        call ebx
        add esp, 0x10
/*FIXUP push offset public_63f9104 @0x638ac5c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f9104
        push edi
        call ebx
        mov eax, dword ptr ds : [public_658b050]
        add esp, 8
        test eax, eax
        je public_638ac84
        mov eax, dword ptr ds : [public_658b028]
        test eax, eax
        jne public_638ac84
/*FIXUP push offset public_63f902c @0x638ac79*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f902c
        push edi
        call ebx
        add esp, 8
        public_638ac84 : nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x638aa10)
    }
}

#undef public_638aaa6
#undef public_638aaaa
#undef public_638aad3
#undef public_638aaf4
#undef public_638aaf8
#undef public_638ab3c
#undef public_638ab50
#undef public_638ab70
#undef public_638ab8a
#undef public_638abcb
#undef public_638abe5
#undef public_638abf2
#undef public_638ac07
#undef public_638ac43
#undef public_638ac84
