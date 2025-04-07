#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_432240);
CLANG_FORWARD_PROC_SYMBOL(public_459210);
CLANG_FORWARD_PROC_SYMBOL(public_4592b0);

#define public_4592de _public_4592de
#define public_4592fc _public_4592fc
#define public_459310 _public_459310
#define public_45932e _public_45932e
#define public_45935f _public_45935f
#define public_45937d _public_45937d
#define public_4593a8 _public_4593a8
#define public_4593dc _public_4593dc
#define public_459402 _public_459402
#define public_45940b _public_45940b
#define public_459415 _public_459415

PROC_DECLARE(0x4592b0, internal_4592b0, public_4592b0);
extern "C" NAKED register_t __cdecl internal_4592b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [edi+4]
        mov esi, ecx
        lea ecx, ss:[esp+0x24]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x2C], eax
        call public_432240
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [esi+4]
        je public_4592fc
        public_4592de : nop
        mov ecx, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ss : [esp+0x28]
        pop edi
        mov dword ptr ds : [edx], ecx
        mov al, byte ptr ds : [eax+0x14]
        mov ecx, dword ptr ss : [esp+0x28]
        pop esi
        pop ebp
        mov byte ptr ds : [ecx], al
        mov al, 1
        pop ebx
        add esp, 0x10
        ret 0xC
        public_4592fc : nop
        mov edi, dword ptr ds : [edi]
        test edi, edi
        je public_459415
        mov ebp, dword ptr ds : [public_5c6094]
        lea esp, ss:[esp]
        public_459310 : nop
        movzx eax, word ptr ds : [edi+8]
        add eax, 0xFFFFFFBE
        cmp eax, 0x31
        ja public_45940b
/*FIXUP movzx edx, byte ptr ds : [eax+public_459438] @0x459320*/
/*FIXUP jmp dword ptr ds : [edx*4+public_459424] @0x459327*/
  JMPTB cmp eax, 0
  JMPTB mov edx, 0
  JMPTB je public_4593a8
  JMPTB cmp eax, 1
  JMPTB mov edx, 4
  JMPTB je public_45940b
  JMPTB cmp eax, 2
  JMPTB mov edx, 4
  JMPTB je public_45940b
  JMPTB cmp eax, 3
  JMPTB mov edx, 4
  JMPTB je public_45940b
  JMPTB cmp eax, 4
  JMPTB mov edx, 1
  JMPTB je public_4593dc
  JMPTB cmp eax, 5
  JMPTB mov edx, 4
  JMPTB je public_45940b
  JMPTB cmp eax, 6
  JMPTB mov edx, 4
  JMPTB je public_45940b
  JMPTB cmp eax, 7
  JMPTB mov edx, 4
  JMPTB je public_45940b
  JMPTB cmp eax, 8
  JMPTB mov edx, 4
  JMPTB je public_45940b
  JMPTB cmp eax, 9
  JMPTB mov edx, 4
  JMPTB je public_45940b
  JMPTB cmp eax, 0xA
  JMPTB mov edx, 4
  JMPTB je public_45940b
  JMPTB cmp eax, 0xB
  JMPTB mov edx, 4
  JMPTB je public_45940b
  JMPTB cmp eax, 0xC
  JMPTB mov edx, 4
  JMPTB je public_45940b
  JMPTB cmp eax, 0xD
  JMPTB mov edx, 4
  JMPTB je public_45940b
  JMPTB cmp eax, 0xE
  JMPTB mov edx, 4
  JMPTB je public_45940b
  JMPTB cmp eax, 0xF
  JMPTB mov edx, 4
  JMPTB je public_45940b
  JMPTB cmp eax, 0x10
  JMPTB mov edx, 4
  JMPTB je public_45940b
  JMPTB cmp eax, 0x11
  JMPTB mov edx, 2
  JMPTB je public_45937d
  JMPTB cmp eax, 0x12
  JMPTB mov edx, 4
  JMPTB je public_45940b
  JMPTB cmp eax, 0x13
  JMPTB mov edx, 4
  JMPTB je public_45940b
  JMPTB cmp eax, 0x14
  JMPTB mov edx, 4
  JMPTB je public_45940b
  JMPTB cmp eax, 0x15
  JMPTB mov edx, 4
  JMPTB je public_45940b
  JMPTB cmp eax, 0x16
  JMPTB mov edx, 4
  JMPTB je public_45940b
  JMPTB cmp eax, 0x17
  JMPTB mov edx, 4
  JMPTB je public_45940b
  JMPTB cmp eax, 0x18
  JMPTB mov edx, 4
  JMPTB je public_45940b
  JMPTB cmp eax, 0x19
  JMPTB mov edx, 4
  JMPTB je public_45940b
  JMPTB cmp eax, 0x1A
  JMPTB mov edx, 4
  JMPTB je public_45940b
  JMPTB cmp eax, 0x1B
  JMPTB mov edx, 4
  JMPTB je public_45940b
  JMPTB cmp eax, 0x1C
  JMPTB mov edx, 4
  JMPTB je public_45940b
  JMPTB cmp eax, 0x1D
  JMPTB mov edx, 4
  JMPTB je public_45940b
  JMPTB cmp eax, 0x1E
  JMPTB mov edx, 4
  JMPTB je public_45940b
  JMPTB cmp eax, 0x1F
  JMPTB mov edx, 4
  JMPTB je public_45940b
  JMPTB cmp eax, 0x20
  JMPTB mov edx, 4
  JMPTB je public_45940b
  JMPTB cmp eax, 0x21
  JMPTB mov edx, 4
  JMPTB je public_45940b
  JMPTB cmp eax, 0x22
  JMPTB mov edx, 4
  JMPTB je public_45940b
  JMPTB cmp eax, 0x23
  JMPTB mov edx, 4
  JMPTB je public_45940b
  JMPTB cmp eax, 0x24
  JMPTB mov edx, 4
  JMPTB je public_45940b
  JMPTB cmp eax, 0x25
  JMPTB mov edx, 4
  JMPTB je public_45940b
  JMPTB cmp eax, 0x26
  JMPTB mov edx, 4
  JMPTB je public_45940b
  JMPTB cmp eax, 0x27
  JMPTB mov edx, 4
  JMPTB je public_45940b
  JMPTB cmp eax, 0x28
  JMPTB mov edx, 4
  JMPTB je public_45940b
  JMPTB cmp eax, 0x29
  JMPTB mov edx, 4
  JMPTB je public_45940b
  JMPTB cmp eax, 0x2A
  JMPTB mov edx, 4
  JMPTB je public_45940b
  JMPTB cmp eax, 0x2B
  JMPTB mov edx, 4
  JMPTB je public_45940b
  JMPTB cmp eax, 0x2C
  JMPTB mov edx, 4
  JMPTB je public_45940b
  JMPTB cmp eax, 0x2D
  JMPTB mov edx, 4
  JMPTB je public_45940b
  JMPTB cmp eax, 0x2E
  JMPTB mov edx, 4
  JMPTB je public_45940b
  JMPTB cmp eax, 0x2F
  JMPTB mov edx, 4
  JMPTB je public_45940b
  JMPTB cmp eax, 0x30
  JMPTB mov edx, 4
  JMPTB je public_45940b
  JMPTB cmp eax, 0x31
  JMPTB mov edx, 3
  JMPTB je public_45932e
  JMPTB int 3
        public_45932e : nop
        mov ebx, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [public_66d334]
        push ebx
        call public_459210
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x2C], ebx
        call public_432240
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [esi+4]
        je public_45940b
        public_45935f : nop
        mov edx, dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ss : [esp+0x28]
        pop edi
        mov dword ptr ds : [ecx], edx
        mov dl, byte ptr ds : [eax+0x14]
        mov eax, dword ptr ss : [esp+0x28]
        pop esi
        pop ebp
        mov byte ptr ds : [eax], dl
        mov al, 1
        pop ebx
        add esp, 0x10
        ret 0xC
        public_45937d : nop
        mov edx, dword ptr ds : [edi+4]
        push edx
        call ebp
        mov edx, dword ptr ds : [eax]
        add esp, 4
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        mov dword ptr ss : [esp+0x24], eax
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, esi
        call public_432240
        mov eax, dword ptr ss : [esp+0x14]
        jmp public_459402
        public_4593a8 : nop
        mov edx, dword ptr ds : [edi+4]
        push edx
        call dword ptr ds : [public_5c6090]
        mov edx, dword ptr ds : [eax]
        add esp, 4
        mov ecx, eax
        call dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x24], eax
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_432240
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+4]
        jne public_45935f
        jmp public_45940b
        public_4593dc : nop
        mov edx, dword ptr ds : [edi+4]
        push edx
        call dword ptr ds : [public_5c608c]
        add esp, 4
        mov dword ptr ss : [esp+0x24], eax
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, esi
        call public_432240
        mov eax, dword ptr ss : [esp+0x1C]
        public_459402 : nop
        cmp eax, dword ptr ds : [esi+4]
        jne public_4592de
        public_45940b : nop
        mov edi, dword ptr ds : [edi]
        test edi, edi
        jne public_459310
        public_459415 : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x4592b0)
        ASM_EXPORT_ENTRY_SINGLE(0x45940b, public_45940b)
    }
}

#undef public_4592de
#undef public_4592fc
#undef public_459310
#undef public_45932e
#undef public_45935f
#undef public_45937d
#undef public_4593a8
#undef public_4593dc
#undef public_459402
#undef public_45940b
#undef public_459415

#pragma init_seg(compiler)
extern "C" void const* const public_45940b = __AsmFindLabelExport(&internal_4592b0, 0x45940b);
