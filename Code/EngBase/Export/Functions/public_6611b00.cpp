#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66113c0);
CLANG_FORWARD_PROC_SYMBOL(public_6611440);
CLANG_FORWARD_PROC_SYMBOL(public_6611b00);
CLANG_FORWARD_PROC_SYMBOL(public_6611d80);
CLANG_FORWARD_PROC_SYMBOL(public_6612e00);
CLANG_FORWARD_PROC_SYMBOL(public_6613360);
CLANG_FORWARD_PROC_SYMBOL(public_66134d0);
CLANG_FORWARD_PROC_SYMBOL(public_6613540);
CLANG_FORWARD_PROC_SYMBOL(public_6628230);

#define public_6611b78 _public_6611b78
#define public_6611cb4 _public_6611cb4
#define public_6611ce6 _public_6611ce6
#define public_6611cf6 _public_6611cf6
#define public_6611d28 _public_6611d28
#define public_6611d42 _public_6611d42
#define public_6611d67 _public_6611d67
#define public_6611d75 _public_6611d75

PROC_DECLARE(0x6611b00, internal_6611b00, public_6611b00);
extern "C" NAKED register_t __cdecl internal_6611b00()
{
    __asm
    {
        mov eax, 0x4098
        call public_6628230
        push ebx
        mov ebx, dword ptr ss : [esp+0x40A4]
/*FIXUP push offset public_662a058 @0x6611b12*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a058
        push ebx
        mov eax, dword ptr ds : [ebx]
        call dword ptr ds : [eax+0x60]
        test eax, eax
        je public_6611d75
        push ebp
        push esi
        push edi
        mov edi, offset public_66290a0
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        mov edi, offset public_66290ac
        mov dword ptr ds : [public_662acd8], ecx
        or ecx, 0xFFFFFFFF
        repne scasb
        not ecx
        dec ecx
        mov edi, offset public_66290b8
        mov dword ptr ds : [public_662acdc], ecx
        or ecx, 0xFFFFFFFF
        repne scasb
        not ecx
        dec ecx
        xor ebp, ebp
        mov dword ptr ds : [public_662acc0], ecx
        mov ecx, dword ptr ss : [esp+0x40B8]
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x18], eax
        jle public_6611d67
        public_6611b78 : nop
        mov ecx, dword ptr ss : [esp+0x40B4]
        mov esi, dword ptr ds : [ecx+eax*4]
        cmp esi, ebp
        je public_6611d42
        mov edx, dword ptr ds : [ebx]
        push esi
        push ebx
        call dword ptr ds : [edx+0x70]
        test al, 0x10
        push esi
        je public_6611cf6
        call dword ptr ds : [public_662900c]
        mov ecx, dword ptr ss : [esp+0x40B0]
        add esp, 4
        mov dword ptr ss : [esp+0x24], eax
        lea eax, ss:[esp+0x24]
        mov edi, dword ptr ds : [ecx+4]
        lea edx, ss:[esp+0x20]
        push eax
        push edx
        call public_66134d0
        cmp dword ptr ss : [esp+0x20], edi
        jne public_6611d28
        mov ecx, 0xB
        xor eax, eax
        lea edi, ss:[esp+0x50]
        mov dword ptr ss : [esp+0x4C], offset public_662a030
        rep stosd
        mov eax, dword ptr ds : [ebx]
        lea ecx, ss:[esp+0x10]
        lea edx, ss:[esp+0x48]
        push ecx
        push edx
        push ebx
        mov dword ptr ss : [esp+0x64], 0x80000000
        mov dword ptr ss : [esp+0x68], 1
        mov dword ptr ss : [esp+0x70], 3
        mov dword ptr ss : [esp+0x74], 0x8000080
        mov dword ptr ss : [esp+0x60], esi
        mov dword ptr ss : [esp+0x54], 0x34
        mov dword ptr ss : [esp+0x84], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x1C], ebp
        call dword ptr ds : [eax+0xC]
        test eax, eax
        push esi
        jne public_6611cb4
        call dword ptr ds : [public_662900c]
        add esp, 4
        mov dword ptr ss : [esp+0x1C], eax
        lea eax, ss:[esp+0x17]
        lea ecx, ss:[esp+0x38]
        push eax
        mov dword ptr ss : [esp+0x2C], ebp
        mov dword ptr ss : [esp+0x30], ebp
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x38], ebp
        call public_6612e00
        lea ecx, ss:[esp+0x28]
        lea edx, ss:[esp+0x1C]
        push ecx
        push edx
        lea ecx, ss:[esp+0x8C]
        call public_6613540
        mov ecx, dword ptr ss : [esp+0x40AC]
        push eax
        lea eax, ss:[esp+0x80]
        push eax
        call public_6613360
        mov edi, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x88]
        call public_66113c0
        lea ecx, ss:[esp+0x28]
        call public_66113c0
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        push esi
        lea ecx, ds:[edi+0x10]
        call public_6611440
        jmp public_6611ce6
        public_6611cb4 : nop
        lea edx, ss:[esp+0xAC]
/*FIXUP push offset public_662a134 @0x6611cbb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a134
        push edx
        call public_6611d80
        push eax
        mov eax, dword ptr ds : [public_6629004]
        push 0x189
        mov ecx, 0x100002
/*FIXUP push offset public_662a0f0 @0x6611cd6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a0f0
/*FIXUP push offset public_662a0d4 @0x6611cdb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a0d4
        push ecx
        call dword ptr ds : [eax]
        add esp, 0x20
        public_6611ce6 : nop
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ebp
        je public_6611d28
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        jmp public_6611d28
        public_6611cf6 : nop
        lea edx, ss:[esp+0x20AC]
/*FIXUP push offset public_662a0a4 @0x6611cfd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a0a4
        push edx
        call public_6611d80
        push eax
        mov eax, dword ptr ds : [public_6629004]
        push 0x193
        mov ecx, 0x100002
/*FIXUP push offset public_662a0f0 @0x6611d18*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a0f0
/*FIXUP push offset public_662a0d4 @0x6611d1d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a0d4
        push ecx
        call dword ptr ds : [eax]
        add esp, 0x20
        public_6611d28 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x40B8]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x18], eax
        jl public_6611b78
        jmp public_6611d67
        public_6611d42 : nop
        mov ecx, dword ptr ds : [public_6629004]
/*FIXUP push offset public_662a06c @0x6611d48*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a06c
        push 0x176
        mov eax, 0x100002
/*FIXUP push offset public_662a0f0 @0x6611d57*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a0f0
/*FIXUP push offset public_662a0d4 @0x6611d5c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a0d4
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_6611d67 : nop
        mov edx, dword ptr ds : [ebx]
/*FIXUP push offset public_662a03c @0x6611d69*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a03c
        push ebx
        call dword ptr ds : [edx+0x60]
        pop edi
        pop esi
        pop ebp
        public_6611d75 : nop
        xor eax, eax
        pop ebx
        add esp, 0x4098
        ret 
        UNREACHABLE_TRAP(0x6611b00)
    }
}

#undef public_6611b78
#undef public_6611cb4
#undef public_6611ce6
#undef public_6611cf6
#undef public_6611d28
#undef public_6611d42
#undef public_6611d67
#undef public_6611d75
