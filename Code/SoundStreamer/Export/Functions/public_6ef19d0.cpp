#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef1080);
CLANG_FORWARD_PROC_SYMBOL(public_6ef19d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef27a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4680);

#define public_6ef1a03 _public_6ef1a03
#define public_6ef1a09 _public_6ef1a09
#define public_6ef1a71 _public_6ef1a71
#define public_6ef1a73 _public_6ef1a73
#define public_6ef1a97 _public_6ef1a97
#define public_6ef1a9d _public_6ef1a9d
#define public_6ef1ad1 _public_6ef1ad1
#define public_6ef1b02 _public_6ef1b02
#define public_6ef1b33 _public_6ef1b33
#define public_6ef1b5d _public_6ef1b5d

PROC_DECLARE(0x6ef19d0, internal_6ef19d0, public_6ef19d0);
extern "C" NAKED register_t __cdecl internal_6ef19d0()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        push esi
        mov esi, ecx
        fld dword ptr ds : [esi+0xC4]
        mov dword ptr ds : [esi+0x80], 2
        fcomp qword ptr ds : [public_6efc160]
        mov byte ptr ds : [esi+0x86], 1
        fnstsw ax
        test ah, 0x41
        jne public_6ef1a03
        fld qword ptr ds : [public_6efc160]
        jmp public_6ef1a09
        public_6ef1a03 : nop
        fld dword ptr ds : [esi+0xC4]
        public_6ef1a09 : nop
        mov ecx, esi
        fstp dword ptr ss : [esp+0x10]
        call public_6ef1080
        mov ecx, dword ptr ds : [esi+0xF0]
        xor ebx, ebx
        mov dword ptr ss : [esp+8], ecx
        mov dword ptr ss : [esp+0xC], ebx
        fild qword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x18], ebx
        fstp dword ptr ss : [esp+8]
        fild qword ptr ss : [esp+0x14]
        fdiv dword ptr ss : [esp+8]
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 5
        jp public_6ef1ad1
        push edi
        movzx edi, word ptr ds : [esi+0xE4]
        cmp edi, ebx
        jbe public_6ef1a71
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0x14]
        call public_6ef4680
        lea eax, ds:[eax+edi-1]
        xor edx, edx
        div edi
        imul eax, edi
        jmp public_6ef1a73
        public_6ef1a71 : nop
        xor eax, eax
        public_6ef1a73 : nop
        push eax
        mov ecx, esi
        call public_6ef27a0
        fld dword ptr ds : [esi+0xC4]
        fcomp qword ptr ds : [public_6efc158]
        pop edi
        fnstsw ax
        test ah, 0x41
        jne public_6ef1a97
        fld qword ptr ds : [public_6efc158]
        jmp public_6ef1a9d
        public_6ef1a97 : nop
        fld dword ptr ds : [esi+0xC4]
        public_6ef1a9d : nop
        mov ecx, esi
        call public_6ef1080
        mov edx, dword ptr ds : [esi+0xF0]
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x18], ebx
        fild qword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ss : [esp+0x18], ebx
        fidiv dword ptr ss : [esp+0x14]
        fxch 
        fcompp 
        fnstsw ax
        test ah, 0x41
        je public_6ef1b5d
        public_6ef1ad1 : nop
        mov eax, dword ptr ds : [esi+0xB8]
        cmp eax, ebx
        je public_6ef1b33
        mov ecx, dword ptr ds : [eax]
        push 1
        push ebx
        push ebx
        push eax
        call dword ptr ds : [ecx+0x30]
        test eax, eax
        jne public_6ef1b02
        cmp dword ptr ds : [esi+0x80], 2
        jne public_6ef1b5d
        mov dword ptr ds : [esi+0x80], 3
        pop esi
        pop ebx
        add esp, 0x14
        ret 
/*FIXUP public_6ef1b02 : nop
        push offset public_6efe1bc @0x6ef1b02*/
  FIXUP public_6ef1b02 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efe1bc
        push 0x25F
/*FIXUP push offset public_6efe070 @0x6ef1b0c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efe070
        mov eax, 0x100001
        mov dword ptr ds : [esi+0x80], ebx
        mov edx, dword ptr ds : [public_6efc004]
/*FIXUP push offset public_6efe050 @0x6ef1b22*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efe050
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        pop esi
        pop ebx
        add esp, 0x14
        ret 
/*FIXUP public_6ef1b33 : nop
        push offset public_6efe194 @0x6ef1b33*/
  FIXUP public_6ef1b33 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efe194
        push 0x265
/*FIXUP push offset public_6efe070 @0x6ef1b3d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efe070
        mov eax, 0x100001
/*FIXUP push offset public_6efe050 @0x6ef1b47*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efe050
        mov dword ptr ds : [esi+0x80], ebx
        push eax
        mov eax, dword ptr ds : [public_6efc004]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_6ef1b5d : nop
        pop esi
        pop ebx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6ef19d0)
    }
}

#undef public_6ef1a03
#undef public_6ef1a09
#undef public_6ef1a71
#undef public_6ef1a73
#undef public_6ef1a97
#undef public_6ef1a9d
#undef public_6ef1ad1
#undef public_6ef1b02
#undef public_6ef1b33
#undef public_6ef1b5d
