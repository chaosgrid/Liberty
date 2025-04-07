#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d010cf);
CLANG_FORWARD_PROC_SYMBOL(public_6d04138);
CLANG_FORWARD_PROC_SYMBOL(public_6d16310);
CLANG_FORWARD_PROC_SYMBOL(public_6d168f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2b964);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f270);

#define public_6d106f7 _public_6d106f7
#define public_6d1073e _public_6d1073e
#define public_6d1076c _public_6d1076c
#define public_6d107ad _public_6d107ad
#define public_6d107c9 _public_6d107c9
#define public_6d107e3 _public_6d107e3
#define public_6d10806 _public_6d10806
#define public_6d10829 _public_6d10829
#define public_6d10844 _public_6d10844
#define public_6d10974 _public_6d10974
#define public_6d10977 _public_6d10977

PROC_DECLARE(0x6d1067f, internal_6d1067f, public_6d1067f);
extern "C" NAKED register_t __cdecl internal_6d1067f()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, 0x2030
        call public_6d2f270
        mov eax, dword ptr ss : [ebp+8]
        mov cl, byte ptr ds : [eax+0x184]
        and cl, 1
        xor edx, edx
        mov dl, cl
        test edx, edx
        jne public_6d106f7
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
/*FIXUP push offset public_6d68c80 @0x6d106cc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68c80
        push 0xECD
/*FIXUP push offset public_6d68cc8 @0x6d106d6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68cc8
/*FIXUP push offset public_6d68d14 @0x6d106db*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68d14
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d10977
        public_6d106f7 : nop
        mov dword ptr ss : [ebp-4], 0x80004005
        cmp dword ptr ss : [ebp+0x18], 0
        jle public_6d10974
        mov dword ptr ss : [ebp-0x201C], 0
        mov eax, dword ptr ss : [ebp+8]
        add eax, 0x138
        mov dword ptr ss : [ebp-0x2018], eax
        mov ecx, dword ptr ss : [ebp-0x2018]
        mov edx, dword ptr ss : [ebp-0x201C]
        cmp edx, dword ptr ds : [ecx+4]
        jne public_6d1073e
        mov eax, dword ptr ss : [ebp-0x2018]
        mov ecx, dword ptr ss : [ebp+0x10]
        cmp ecx, dword ptr ds : [eax]
        je public_6d1076c
        public_6d1073e : nop
        mov edx, dword ptr ss : [ebp-0x2018]
        mov al, byte ptr ds : [edx+0x10]
        or al, 1
        mov ecx, dword ptr ss : [ebp-0x2018]
        mov byte ptr ds : [ecx+0x10], al
        mov edx, dword ptr ss : [ebp-0x2018]
        mov eax, dword ptr ss : [ebp-0x201C]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ss : [ebp-0x2018]
        mov edx, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [ecx], edx
        public_6d1076c : nop
        mov ecx, dword ptr ss : [ebp+8]
        call public_6d04138
        mov eax, dword ptr ss : [ebp+0x18]
        push eax
        mov ecx, dword ptr ss : [ebp+0xC]
        push ecx
        call public_6d010cf
        add esp, 8
        mov dword ptr ss : [ebp-8], eax
        mov dword ptr ss : [ebp-0x2020], 0
        mov edx, dword ptr ss : [ebp+0x10]
        and edx, 0xC
        cmp edx, 0xC
        jne public_6d107ad
        mov eax, dword ptr ss : [ebp-0x2020]
        add eax, 0x1C
        mov dword ptr ss : [ebp-0x2020], eax
        jmp public_6d107e3
        public_6d107ad : nop
        mov ecx, dword ptr ss : [ebp+0x10]
        and ecx, 4
        cmp ecx, 4
        jne public_6d107c9
        mov edx, dword ptr ss : [ebp-0x2020]
        add edx, 0x10
        mov dword ptr ss : [ebp-0x2020], edx
        jmp public_6d107e3
        public_6d107c9 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        and eax, 2
        cmp eax, 2
        jne public_6d107e3
        mov ecx, dword ptr ss : [ebp-0x2020]
        add ecx, 0xC
        mov dword ptr ss : [ebp-0x2020], ecx
        public_6d107e3 : nop
        mov dword ptr ss : [ebp-0x2024], 0
        mov edx, dword ptr ss : [ebp+0x10]
        and edx, 0x10
        test edx, edx
        je public_6d10806
        mov eax, dword ptr ss : [ebp-0x2024]
        add eax, 0xC
        mov dword ptr ss : [ebp-0x2024], eax
        public_6d10806 : nop
        mov dword ptr ss : [ebp-0x2028], 0
        mov ecx, dword ptr ss : [ebp+0x10]
        and ecx, 0x40
        test ecx, ecx
        je public_6d10829
        mov edx, dword ptr ss : [ebp-0x2028]
        add edx, 4
        mov dword ptr ss : [ebp-0x2028], edx
        public_6d10829 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        and eax, 0x80
        test eax, eax
        je public_6d10844
        mov ecx, dword ptr ss : [ebp-0x2028]
        add ecx, 4
        mov dword ptr ss : [ebp-0x2028], ecx
        public_6d10844 : nop
        mov edx, dword ptr ss : [ebp+0x10]
        push edx
        call public_6d16310
        add esp, 4
        mov ecx, dword ptr ss : [ebp-0x2020]
        add ecx, dword ptr ss : [ebp-0x2024]
        add ecx, dword ptr ss : [ebp-0x2028]
        add ecx, eax
        mov dword ptr ss : [ebp-0xC], ecx
        mov edx, dword ptr ss : [ebp-0xC]
        push edx
        mov eax, dword ptr ss : [ebp+0x14]
        push eax
        mov ecx, dword ptr ss : [ebp-8]
        push ecx
        mov edx, dword ptr ss : [ebp+0xC]
        push edx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x130]
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x130]
        mov ecx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [ecx+0x120]
        mov dword ptr ss : [ebp-4], eax
        mov edx, dword ptr ss : [ebp+8]
        add edx, 0x138
        mov dword ptr ss : [ebp-0x202C], edx
        mov eax, dword ptr ss : [ebp-0x202C]
        mov dword ptr ds : [eax], 0
        mov ecx, dword ptr ss : [ebp-0x202C]
        mov dword ptr ds : [ecx+4], 0
        mov edx, dword ptr ss : [ebp-0x202C]
        mov dword ptr ds : [edx+8], 0
        mov eax, dword ptr ss : [ebp-0x202C]
        mov dword ptr ds : [eax+0xC], 0xFFFFFFFF
        mov ecx, dword ptr ss : [ebp-0x202C]
        mov dword ptr ds : [ecx+0x10], 0
        cmp dword ptr ss : [ebp-4], 0
        jge public_6d10974
        mov edx, dword ptr ss : [ebp-4]
        push edx
        call public_6d2b964
        add esp, 4
        push eax
/*FIXUP push offset public_6d68d30 @0x6d108fb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68d30
        lea eax, ss:[ebp-0x2010]
        push eax
        call public_6d168f0
        add esp, 0xC
        mov dword ptr ss : [ebp-0x2030], eax
        mov ecx, 2
        and ecx, 0xF
        mov edx, dword ptr ss : [ebp-0x2014]
        and edx, 0xFFFFFFF0
        or edx, ecx
        mov dword ptr ss : [ebp-0x2014], edx
        mov eax, 0x10000
        and eax, 0xFFFFFFF
        shl eax, 4
        mov ecx, dword ptr ss : [ebp-0x2014]
        and ecx, 0xF
        or ecx, eax
        mov dword ptr ss : [ebp-0x2014], ecx
        mov edx, dword ptr ss : [ebp-0x2030]
        push edx
        push 0xEE1
/*FIXUP push offset public_6d68d48 @0x6d10958*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68d48
/*FIXUP push offset public_6d68d94 @0x6d1095d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68d94
        mov eax, dword ptr ss : [ebp-0x2014]
        push eax
        mov ecx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_6d10974 : nop
        mov eax, dword ptr ss : [ebp-4]
        public_6d10977 : nop
        mov esp, ebp
        pop ebp
        ret 0x18
        UNREACHABLE_TRAP(0x6d1067f)
    }
}

#undef public_6d106f7
#undef public_6d1073e
#undef public_6d1076c
#undef public_6d107ad
#undef public_6d107c9
#undef public_6d107e3
#undef public_6d10806
#undef public_6d10829
#undef public_6d10844
#undef public_6d10974
#undef public_6d10977
