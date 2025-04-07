#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d010cf);
CLANG_FORWARD_PROC_SYMBOL(public_6d04138);
CLANG_FORWARD_PROC_SYMBOL(public_6d168f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2b964);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f270);

#define public_6d10d01 _public_6d10d01
#define public_6d10d52 _public_6d10d52
#define public_6d10d7f _public_6d10d7f
#define public_6d10e42 _public_6d10e42
#define public_6d10e45 _public_6d10e45

PROC_DECLARE(0x6d10c89, internal_6d10c89, public_6d10c89);
extern "C" NAKED register_t __cdecl internal_6d10c89()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, 0x201C
        call public_6d2f270
        mov eax, dword ptr ss : [ebp+8]
        mov cl, byte ptr ds : [eax+0x184]
        and cl, 1
        xor edx, edx
        mov dl, cl
        test edx, edx
        jne public_6d10d01
        mov eax, 2
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-0x10]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-0x10], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-0x10]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-0x10], eax
/*FIXUP push offset public_6d68ef0 @0x6d10cd6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68ef0
        push 0xF0D
/*FIXUP push offset public_6d68f38 @0x6d10ce0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68f38
/*FIXUP push offset public_6d68f84 @0x6d10ce5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68f84
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d10e45
        public_6d10d01 : nop
        mov dword ptr ss : [ebp-8], 0x80004005
        mov eax, dword ptr ss : [ebp+0x18]
        push eax
        mov ecx, dword ptr ss : [ebp+0xC]
        push ecx
        call public_6d010cf
        add esp, 8
        mov dword ptr ss : [ebp-4], eax
        cmp dword ptr ss : [ebp-4], 0
        jle public_6d10e42
        mov edx, dword ptr ss : [ebp+0x10]
        mov dword ptr ss : [ebp-0xC], edx
        mov eax, dword ptr ss : [ebp+8]
        add eax, 0x138
        mov dword ptr ss : [ebp-0x2018], eax
        mov ecx, dword ptr ss : [ebp-0x2018]
        mov edx, dword ptr ss : [ebp-0xC]
        cmp edx, dword ptr ds : [ecx+4]
        jne public_6d10d52
        mov eax, dword ptr ss : [ebp-0x2018]
        cmp dword ptr ds : [eax], 0
        je public_6d10d7f
        public_6d10d52 : nop
        mov ecx, dword ptr ss : [ebp-0x2018]
        mov dl, byte ptr ds : [ecx+0x10]
        or dl, 1
        mov eax, dword ptr ss : [ebp-0x2018]
        mov byte ptr ds : [eax+0x10], dl
        mov ecx, dword ptr ss : [ebp-0x2018]
        mov edx, dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ss : [ebp-0x2018]
        mov dword ptr ds : [eax], 0
        public_6d10d7f : nop
        mov ecx, dword ptr ss : [ebp+8]
        call public_6d04138
        mov ecx, dword ptr ss : [ebp-4]
        push ecx
        mov edx, dword ptr ss : [ebp+0x14]
        push edx
        mov eax, dword ptr ss : [ebp+0xC]
        push eax
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x130]
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x130]
        mov edx, dword ptr ds : [edx]
        push ecx
        call dword ptr ds : [edx+0x118]
        mov dword ptr ss : [ebp-8], eax
        cmp dword ptr ss : [ebp-8], 0
        jge public_6d10e42
        mov eax, dword ptr ss : [ebp-8]
        push eax
        call public_6d2b964
        add esp, 4
        push eax
/*FIXUP push offset public_6d68fa0 @0x6d10dc8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68fa0
        lea ecx, ss:[ebp-0x2010]
        push ecx
        call public_6d168f0
        add esp, 0xC
        mov dword ptr ss : [ebp-0x201C], eax
        mov edx, 2
        and edx, 0xF
        mov eax, dword ptr ss : [ebp-0x2014]
        and eax, 0xFFFFFFF0
        or eax, edx
        mov dword ptr ss : [ebp-0x2014], eax
        mov ecx, 0x10000
        and ecx, 0xFFFFFFF
        shl ecx, 4
        mov edx, dword ptr ss : [ebp-0x2014]
        and edx, 0xF
        or edx, ecx
        mov dword ptr ss : [ebp-0x2014], edx
        mov eax, dword ptr ss : [ebp-0x201C]
        push eax
        push 0xF1A
/*FIXUP push offset public_6d68fb8 @0x6d10e26*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68fb8
/*FIXUP push offset public_6d69004 @0x6d10e2b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d69004
        mov ecx, dword ptr ss : [ebp-0x2014]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        public_6d10e42 : nop
        mov eax, dword ptr ss : [ebp-8]
        public_6d10e45 : nop
        mov esp, ebp
        pop ebp
        ret 0x18
        UNREACHABLE_TRAP(0x6d10c89)
    }
}

#undef public_6d10d01
#undef public_6d10d52
#undef public_6d10d7f
#undef public_6d10e42
#undef public_6d10e45
