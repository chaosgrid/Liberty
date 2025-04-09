#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_45ccf0);
CLANG_FORWARD_PROC_SYMBOL(public_45d770);
CLANG_FORWARD_PROC_SYMBOL(public_55e280);
CLANG_FORWARD_PROC_SYMBOL(public_55e360);
CLANG_FORWARD_PROC_SYMBOL(public_55e590);

#define public_45d5bb _public_45d5bb
#define public_45d5e0 _public_45d5e0
#define public_45d5fa _public_45d5fa
#define public_45d5fc _public_45d5fc
#define public_45d60c _public_45d60c
#define public_45d612 _public_45d612
#define public_45d62f _public_45d62f
#define public_45d636 _public_45d636
#define public_45d63d _public_45d63d
#define public_45d644 _public_45d644
#define public_45d64b _public_45d64b
#define public_45d652 _public_45d652
#define public_45d659 _public_45d659
#define public_45d65b _public_45d65b
#define public_45d675 _public_45d675
#define public_45d680 _public_45d680
#define public_45d6ae _public_45d6ae
#define public_45d6b9 _public_45d6b9
#define public_45d6d7 _public_45d6d7
#define public_45d6f0 _public_45d6f0
#define public_45d702 _public_45d702
#define public_45d71d _public_45d71d
#define public_45d740 _public_45d740

PROC_DECLARE(0x45d5a0, internal_45d5a0, public_45d5a0);
extern "C" NAKED register_t __cdecl internal_45d5a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        lea ebx, ds:[esi+0x20]
        push edi
        mov ecx, ebx
        call public_55e280
        test al, al
        je public_45d5bb
        mov eax, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [eax]
        public_45d5bb : nop
        mov eax, dword ptr ds : [esi+0x1DC]
        test eax, eax
        je public_45d612
        and byte ptr ds : [eax+0x6C], 0xFC
        mov dword ptr ds : [esi+0x1DC], 0
        lea edi, ds:[esi+0xA4]
        mov ebp, 7
        mov edi, edi
        public_45d5e0 : nop
        mov ecx, dword ptr ds : [edi]
        test ecx, ecx
        je public_45d60c
        mov eax, dword ptr ds : [edi-0x1C]
        cmp eax, dword ptr ds : [esi+0x78]
        je public_45d5fa
        cmp eax, dword ptr ds : [esi+0x1DC]
        je public_45d5fa
        xor al, al
        jmp public_45d5fc
        public_45d5fa : nop
        mov al, 1
        public_45d5fc : nop
        mov edx, dword ptr ds : [ecx]
        movzx eax, al
        push 0
        push eax
        push 0xC
        call dword ptr ds : [edx+0xA8]
        public_45d60c : nop
        add edi, 4
        dec ebp
        jne public_45d5e0
        public_45d612 : nop
        mov eax, dword ptr ds : [esi+0x78]
        test eax, eax
        je public_45d6d7
        mov eax, dword ptr ds : [esi+0x7C]
        add eax, 0xFFFFFF9D
        cmp eax, 7
        ja public_45d659
/*FIXUP jmp dword ptr ds : [eax*4+public_45d748] @0x45d628*/
  JMPTB cmp eax, 0
  JMPTB je public_45d659
  JMPTB cmp eax, 1
  JMPTB je public_45d659
  JMPTB cmp eax, 2
  JMPTB je public_45d63d
  JMPTB cmp eax, 3
  JMPTB je public_45d62f
  JMPTB cmp eax, 4
  JMPTB je public_45d636
  JMPTB cmp eax, 5
  JMPTB je public_45d64b
  JMPTB cmp eax, 6
  JMPTB je public_45d652
  JMPTB cmp eax, 7
  JMPTB je public_45d644
  JMPTB int 3
        public_45d62f : nop
        mov ebp, 1
        jmp public_45d65b
        public_45d636 : nop
        mov ebp, 2
        jmp public_45d65b
        public_45d63d : nop
        mov ebp, 3
        jmp public_45d65b
        public_45d644 : nop
        mov ebp, 4
        jmp public_45d65b
        public_45d64b : nop
        mov ebp, 5
        jmp public_45d65b
        public_45d652 : nop
        mov ebp, 6
        jmp public_45d65b
        public_45d659 : nop
        xor ebp, ebp
        public_45d65b : nop
        mov al, byte ptr ds : [esi+0x1FC]
        test al, al
        lea edi, ds:[esi-0x330]
        je public_45d675
        mov dword ptr ss : [esp+0x10], 0x3D4CCCCD
        jmp public_45d680
        public_45d675 : nop
        fld dword ptr ds : [edi+ebp*4+0x498]
        fstp dword ptr ss : [esp+0x10]
        public_45d680 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        mov ecx, edi
        call public_45d770
        mov edx, dword ptr ds : [public_5cea10]
        push edx
        mov ecx, ebx
        call public_55e590
        mov al, byte ptr ds : [edi+0x52C]
        test al, al
        je public_45d6ae
        mov dword ptr ss : [esp+0x10], 0x3D4CCCCD
        jmp public_45d6b9
        public_45d6ae : nop
        fld dword ptr ds : [edi+ebp*4+0x498]
        fstp dword ptr ss : [esp+0x10]
        public_45d6b9 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [esi+0x1D8]
        push 0x3F800000
        push eax
        push ecx
        mov ecx, ebx
        call public_55e360
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        public_45d6d7 : nop
        mov ebp, dword ptr ds : [esi+0x1D8]
        test ebp, ebp
        lea ebx, ds:[esi-0x330]
        je public_45d71d
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_45d702
        mov edi, edi
        public_45d6f0 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_45d6f0
        public_45d702 : nop
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ss : [ebp]
        push 1
        mov ecx, ebp
        call dword ptr ds : [eax]
        mov dword ptr ds : [ebx+0x508], 0
        public_45d71d : nop
        mov eax, dword ptr ds : [esi+0x1F4]
        test eax, eax
        je public_45d740
        mov ecx, dword ptr ds : [esi+0x1F8]
        push ecx
        push eax
        mov ecx, ebx
        call public_45ccf0
        mov dword ptr ds : [esi+0x1F4], 0
        public_45d740 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x45d5a0)
        ASM_EXPORT_ENTRY_SINGLE(0x45d644, public_45d644)
    }
}

#undef public_45d5bb
#undef public_45d5e0
#undef public_45d5fa
#undef public_45d5fc
#undef public_45d60c
#undef public_45d612
#undef public_45d62f
#undef public_45d636
#undef public_45d63d
#undef public_45d644
#undef public_45d64b
#undef public_45d652
#undef public_45d659
#undef public_45d65b
#undef public_45d675
#undef public_45d680
#undef public_45d6ae
#undef public_45d6b9
#undef public_45d6d7
#undef public_45d6f0
#undef public_45d702
#undef public_45d71d
#undef public_45d740

#pragma init_seg(compiler)
extern "C" void const* const public_45d644 = __AsmFindLabelExport(&internal_45d5a0, 0x45d644);
