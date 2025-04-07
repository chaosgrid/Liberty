#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4fd040);
CLANG_FORWARD_PROC_SYMBOL(public_522700);
CLANG_FORWARD_PROC_SYMBOL(public_5261b0);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_526277 _public_526277
#define public_526290 _public_526290
#define public_52632d _public_52632d
#define public_52635d _public_52635d
#define public_526375 _public_526375
#define public_5263a0 _public_5263a0
#define public_526400 _public_526400
#define public_52644f _public_52644f
#define public_526496 _public_526496
#define public_5264bd _public_5264bd
#define public_526500 _public_526500
#define public_526533 _public_526533
#define public_526545 _public_526545
#define public_526576 _public_526576
#define public_5265e1 _public_5265e1
#define public_5265ef _public_5265ef
#define public_5265fb _public_5265fb
#define public_526624 _public_526624
#define public_52663d _public_52663d

PROC_DECLARE(0x5261b0, internal_5261b0, public_5261b0);
extern "C" NAKED register_t __cdecl internal_5261b0()
{
    __asm
    {
        sub esp, 0x120
        push ebx
        push ebp
        push esi
        push 0x22
        mov ebp, ecx
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_52663d
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_52663d
        mov ebx, dword ptr ss : [esp+0x130]
        test ebx, ebx
        je public_52663d
        mov eax, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [eax+0xC]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[ebp+0x28]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov al, byte ptr ss : [ebp+0x35]
        test al, al
        je public_52663d
        mov ecx, dword ptr ds : [public_5c6d80]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, dword ptr ss : [ebp+0xA4]
        lea esi, ss:[ebp+0x38]
        push ecx
        mov ecx, dword ptr ds : [esi+0x68]
        push ecx
        push eax
        call dword ptr ds : [edx+0x14]
        test eax, eax
        jl public_52632d
        mov edx, dword ptr ds : [public_5c6d80]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [esi+0x6C]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x20]
        push 0
        push esi
        push edx
        mov edx, dword ptr ss : [esp+0x34]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ds : [public_5c6d80]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        call dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ss : [ebp+0xA8]
        test eax, eax
        je public_526277
        mov ecx, dword ptr ds : [eax]
        push 0
        push eax
        call dword ptr ds : [ecx+0x20]
        public_526277 : nop
        mov edx, dword ptr ds : [public_5c6de0]
        push edi
        mov edi, dword ptr ds : [edx]
        mov esi, offset public_5dc374
        mov eax, 0x89
        lea ebx, ds:[ebx]
        public_526290 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push edi
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_526290
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x14]
        push edx
        push 0x18
        push eax
        call dword ptr ds : [ecx+0xF4]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 5
        push 0x18
        push eax
        call dword ptr ds : [ecx+0xF0]
        xor eax, eax
        mov ecx, 0x11
        lea edi, ss:[esp+0x2C]
        push 0x18
        mov byte ptr ss : [esp+0x17], 0
        rep stosd
        call public_5792b0
        mov ecx, dword ptr ss : [ebp+0xC4]
        mov edx, dword ptr ss : [ebp+0xBC]
        add esp, 4
        test eax, eax
        mov eax, dword ptr ss : [ebp+0xC0]
        mov dword ptr ss : [esp+0x34], ecx
        mov dword ptr ss : [esp+0x2C], edx
        mov dword ptr ss : [esp+0x30], eax
        je public_52635d
        mov edx, dword ptr ss : [ebp+0xC8]
        mov eax, dword ptr ss : [ebp+0xCC]
        mov ecx, dword ptr ss : [ebp+0xD0]
        mov dword ptr ss : [esp+0x3C], edx
        jmp public_526375
/*FIXUP public_52632d : nop
        push offset public_5dd030 @0x52632d*/
  FIXUP public_52632d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dd030
        push 0x9BD
/*FIXUP push offset public_5dc47c @0x526337*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dc47c
        mov eax, 0x100002
/*FIXUP push offset public_5c8bd4 @0x526341*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8bd4
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        pop esi
        pop ebp
        pop ebx
        add esp, 0x120
        ret 0xC
        public_52635d : nop
        mov edx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x3C], edx
        mov edx, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x48], edx
        public_526375 : nop
        mov dword ptr ss : [esp+0x40], eax
        mov eax, dword ptr ds : [ebx]
        push ebx
        mov dword ptr ss : [esp+0x48], ecx
        call dword ptr ds : [eax+0x40]
        mov esi, eax
        mov eax, dword ptr ss : [ebp+0x14]
        mov ecx, 0xC
        lea edi, ss:[esp+0xA0]
        xor ebx, ebx
        test eax, eax
        rep movsd
        jle public_5265fb
        public_5263a0 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [ecx+ebx*4]
        test eax, eax
        lea ecx, ds:[ecx+ebx*4]
        je public_5265ef
        mov dl, byte ptr ds : [eax+0xAC]
        test dl, dl
        je public_5265ef
        mov edx, eax
        fld dword ptr ds : [edx+0xB0]
        fcomp dword ptr ds : [public_5d3e44]
        fnstsw ax
        test ah, 0x41
        jnp public_5265ef
        mov esi, dword ptr ss : [esp+0x138]
        cmp byte ptr ds : [esi], 0
        jne public_526400
        mov eax, dword ptr ss : [esp+0x134]
        mov ecx, dword ptr ss : [esp+0x13C]
        push 0x42C80000
        push eax
        call public_522700
        mov byte ptr ds : [esi], 1
        public_526400 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [ecx+ebx*4]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        mov esi, eax
        mov eax, dword ptr ds : [public_5c6de0]
        lea edx, ss:[esp+0x18]
        mov ecx, 0xC
        lea edi, ss:[esp+0x70]
        rep movsd
        push edx
        mov dword ptr ss : [esp+0x1C], 1
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 7
        push eax
        call dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ss : [esp+0x18]
        test eax, eax
        je public_526496
        mov eax, dword ptr ds : [public_6753d8]
        test eax, eax
        jne public_52644f
        call public_5b73e0
        mov dword ptr ds : [public_6753d8], eax
        public_52644f : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x70]
        push edx
        lea edx, ss:[esp+0xA4]
        push edx
        lea edx, ss:[esp+0x108]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [public_5c6de0]
        mov ecx, 0xC
        lea esi, ss:[esp+0x100]
        lea edi, ss:[esp+0xD0]
        rep movsd
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xD0]
        push edx
        push eax
        call dword ptr ds : [ecx+0x7C]
        jmp public_5264bd
        public_526496 : nop
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x70]
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xA0]
        push edx
        push eax
        call dword ptr ds : [ecx+0x74]
        public_5264bd : nop
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+ebx*4]
        mov edx, dword ptr ds : [ecx+0xB0]
        mov dword ptr ss : [esp+0x38], edx
        fld dword ptr ss : [esp+0x38]
        fcomp qword ptr ds : [public_5c89b8]
        fnstsw ax
        test ah, 5
        jp public_526533
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        jne public_526576
        mov eax, dword ptr ds : [public_5c6de0]
        mov edi, dword ptr ds : [eax]
        mov esi, offset public_5dc394
        mov eax, 0x89
        nop 
        lea esp, ss:[esp]
        public_526500 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push edi
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_526500
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 5
        push 0x18
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov byte ptr ss : [esp+0x13], 1
        jmp public_526576
        public_526533 : nop
        mov edx, dword ptr ds : [public_5c6de0]
        mov edi, dword ptr ds : [edx]
        mov esi, offset public_5dc374
        mov eax, 0x89
        public_526545 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push edi
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_526545
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0x7F
        push 0x18
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov byte ptr ss : [esp+0x13], 0
        public_526576 : nop
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x2C]
        push edx
        push eax
        call dword ptr ds : [ecx+0xAC]
        mov ecx, dword ptr ss : [ebp+0xB0]
        mov esi, dword ptr ds : [ecx+0xC]
        mov ecx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push 0
        push esi
        push ecx
        mov ecx, dword ptr ss : [ebp+0xA4]
        push ecx
        mov ecx, dword ptr ss : [esp+0x34]
        push ecx
        mov ecx, dword ptr ss : [esp+0x30]
        push ecx
        mov ecx, dword ptr ss : [ebp+0xAC]
        push ecx
        push eax
        call dword ptr ds : [edx+0x120]
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [edx+ebx*4]
        mov ecx, dword ptr ds : [eax+0xC0]
        test ecx, ecx
        je public_5265e1
        fld dword ptr ss : [esp+0x38]
        mov eax, dword ptr ds : [ecx]
        push ecx
        fstp dword ptr ss : [esp]
        call dword ptr ds : [eax+0xC]
        public_5265e1 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [ecx+ebx*4]
        add ecx, 0x28
        call public_4fd040
        public_5265ef : nop
        mov eax, dword ptr ss : [ebp+0x14]
        inc ebx
        cmp ebx, eax
        jl public_5263a0
        public_5265fb : nop
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax]
        push edx
        push 0x18
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [public_5c6de0]
        mov edi, dword ptr ds : [eax]
        mov esi, offset public_5dc374
        mov eax, 0x89
        public_526624 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push edi
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_526624
        pop edi
        public_52663d : nop
        pop esi
        pop ebp
        pop ebx
        add esp, 0x120
        ret 0xC
        UNREACHABLE_TRAP(0x5261b0)
    }
}

#undef public_526277
#undef public_526290
#undef public_52632d
#undef public_52635d
#undef public_526375
#undef public_5263a0
#undef public_526400
#undef public_52644f
#undef public_526496
#undef public_5264bd
#undef public_526500
#undef public_526533
#undef public_526545
#undef public_526576
#undef public_5265e1
#undef public_5265ef
#undef public_5265fb
#undef public_526624
#undef public_52663d
