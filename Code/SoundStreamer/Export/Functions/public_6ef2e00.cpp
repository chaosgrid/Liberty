#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef2910);
CLANG_FORWARD_PROC_SYMBOL(public_6ef2ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef46b0);

#define public_6ef2e5e _public_6ef2e5e
#define public_6ef2eb5 _public_6ef2eb5
#define public_6ef2eea _public_6ef2eea
#define public_6ef2f35 _public_6ef2f35
#define public_6ef2f40 _public_6ef2f40
#define public_6ef2f5b _public_6ef2f5b
#define public_6ef2f96 _public_6ef2f96
#define public_6ef2fa3 _public_6ef2fa3
#define public_6ef2fb5 _public_6ef2fb5
#define public_6ef2fe6 _public_6ef2fe6
#define public_6ef300b _public_6ef300b
#define public_6ef302c _public_6ef302c
#define public_6ef3036 _public_6ef3036
#define public_6ef3051 _public_6ef3051

PROC_DECLARE(0x6ef2e00, internal_6ef2e00, public_6ef2e00);
extern "C" NAKED register_t __cdecl internal_6ef2e00()
{
    __asm
    {
        mov eax, 0x2004
        call public_6ef46b0
        push ebx
        mov ebx, dword ptr ss : [esp+0x2010]
        test ebx, ebx
        push ebp
        push esi
        push edi
        je public_6ef302c
        cmp dword ptr ds : [ebx], 0x18
        jne public_6ef302c
        mov eax, dword ptr ds : [ebx+8]
        mov esi, dword ptr ss : [esp+0x2018]
        mov dword ptr ds : [esi+0xC], eax
        mov ecx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [esi+0x10], ecx
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        jne public_6ef2f35
        push eax
        call dword ptr ds : [public_6efc124]
        test eax, eax
        jge public_6ef2e5e
/*FIXUP push offset public_6efe370 @0x6ef2e4f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efe370
        push 0x1B2
        jmp public_6ef3036
        public_6ef2e5e : nop
        lea edi, ds:[esi+8]
        push edi
/*FIXUP push offset public_6efc174 @0x6ef2e62*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efc174
        push 1
        push 0
/*FIXUP push offset public_6efc184 @0x6ef2e6b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efc184
        call dword ptr ds : [public_6efc128]
        test eax, eax
        je public_6ef2eb5
        push eax
        push 0x1BB
/*FIXUP push offset public_6efe320 @0x6ef2e80*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efe320
        lea eax, ss:[esp+0x20]
/*FIXUP push offset public_6efe304 @0x6ef2e89*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efe304
        push eax
        call public_6ef2910
        push eax
        push 0x1BB
/*FIXUP push offset public_6efe320 @0x6ef2e9a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efe320
        mov ecx, 0x100001
/*FIXUP push offset public_6efe050 @0x6ef2ea4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efe050
        push ecx
        mov ecx, dword ptr ds : [public_6efc004]
        call dword ptr ds : [ecx]
        add esp, 0x28
        public_6ef2eb5 : nop
        mov eax, dword ptr ds : [edi]
        mov edx, dword ptr ds : [eax]
        push 0
        push eax
        call dword ptr ds : [edx+0x28]
        test eax, eax
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [eax]
        je public_6ef2eea
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi], 0
        call dword ptr ds : [public_6efc120]
/*FIXUP push offset public_6efe2d0 @0x6ef2ed7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efe2d0
        mov byte ptr ds : [esi+0x1C], 0
        push 0x1C7
        jmp public_6ef3036
        public_6ef2eea : nop
        mov edx, dword ptr ds : [esi+0xC]
        push 1
        push edx
        push eax
        call dword ptr ds : [ecx+0x18]
        test eax, eax
        je public_6ef2f40
        push eax
        push 0x1CC
/*FIXUP push offset public_6efe320 @0x6ef2efe*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efe320
        lea eax, ss:[esp+0x20]
/*FIXUP push offset public_6efe304 @0x6ef2f07*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efe304
        push eax
        call public_6ef2910
        push eax
        push 0x1CC
/*FIXUP push offset public_6efe320 @0x6ef2f18*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efe320
        mov ecx, 0x100001
/*FIXUP push offset public_6efe050 @0x6ef2f22*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efe050
        push ecx
        mov ecx, dword ptr ds : [public_6efc004]
        call dword ptr ds : [ecx]
        add esp, 0x28
        jmp public_6ef2f40
        public_6ef2f35 : nop
        lea edi, ds:[esi+8]
        mov dword ptr ds : [edi], eax
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+4]
        public_6ef2f40 : nop
        fld dword ptr ds : [ebx+0x14]
        fst dword ptr ds : [esi+0x18]
        fcomp dword ptr ds : [public_6efc150]
        fnstsw ax
        test ah, 0x44
        jp public_6ef2f5b
        mov eax, dword ptr ds : [public_6efc168]
        mov dword ptr ds : [esi+0x18], eax
        public_6ef2f5b : nop
        lea ecx, ss:[esp+0x10]
        push ecx
        push 0
        push esi
/*FIXUP push offset _public_6ef2ac0 @0x6ef2f63*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6ef2ac0
        push 0x1000
        push 0
        call dword ptr ds : [public_6efc05c]
        test eax, eax
        mov dword ptr ds : [esi+0x60], eax
        je public_6ef2fe6
        push 2
        push eax
        call dword ptr ds : [public_6efc058]
        test byte ptr ds : [esi+0x64], 3
        mov ebp, 0x1F4
        jne public_6ef2fa3
        mov ebx, dword ptr ds : [public_6efc054]
        public_6ef2f96 : nop
        push 0xA
        call ebx
        dec ebp
        je public_6ef2fb5
        test byte ptr ds : [esi+0x64], 3
        je public_6ef2f96
        public_6ef2fa3 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x2004
        ret 8
        public_6ef2fb5 : nop
        mov edx, dword ptr ds : [public_6efc004]
/*FIXUP push offset public_6efe2a4 @0x6ef2fbb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efe2a4
        push 0x20F
/*FIXUP push offset public_6efe320 @0x6ef2fc5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efe320
        mov eax, 0x100001
/*FIXUP push offset public_6efe050 @0x6ef2fcf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efe050
        push eax
        call dword ptr ds : [edx]
        mov eax, dword ptr ds : [esi+0x60]
        add esp, 0x14
        push eax
        call dword ptr ds : [public_6efc044]
        jmp public_6ef300b
        public_6ef2fe6 : nop
        mov edx, dword ptr ds : [public_6efc004]
/*FIXUP push offset public_6efe278 @0x6ef2fec*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efe278
        push 0x21A
/*FIXUP push offset public_6efe320 @0x6ef2ff6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efe320
        mov eax, 0x100001
/*FIXUP push offset public_6efe050 @0x6ef3000*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efe050
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_6ef300b : nop
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_6ef3051
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi], 0
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x2004
        ret 8
/*FIXUP public_6ef302c : nop
        push offset public_6efe254 @0x6ef302c*/
  FIXUP public_6ef302c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efe254
        push 0x1A5
        public_6ef3036 : nop
        mov edx, dword ptr ds : [public_6efc004]
/*FIXUP push offset public_6efe320 @0x6ef303c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efe320
        mov eax, 0x100001
/*FIXUP push offset public_6efe050 @0x6ef3046*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efe050
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_6ef3051 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x2004
        ret 8
        UNREACHABLE_TRAP(0x6ef2e00)
    }
}

#undef public_6ef2e5e
#undef public_6ef2eb5
#undef public_6ef2eea
#undef public_6ef2f35
#undef public_6ef2f40
#undef public_6ef2f5b
#undef public_6ef2f96
#undef public_6ef2fa3
#undef public_6ef2fb5
#undef public_6ef2fe6
#undef public_6ef300b
#undef public_6ef302c
#undef public_6ef3036
#undef public_6ef3051
