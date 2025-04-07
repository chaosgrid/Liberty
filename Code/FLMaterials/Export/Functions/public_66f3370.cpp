#include "FLMaterials-PCH.h"


#define public_66f33ba _public_66f33ba
#define public_66f33f9 _public_66f33f9
#define public_66f345a _public_66f345a
#define public_66f346e _public_66f346e
#define public_66f347b _public_66f347b
#define public_66f3488 _public_66f3488
#define public_66f3499 _public_66f3499
#define public_66f34a2 _public_66f34a2
#define public_66f34b7 _public_66f34b7
#define public_66f34ca _public_66f34ca
#define public_66f34cf _public_66f34cf
#define public_66f34d4 _public_66f34d4
#define public_66f34d9 _public_66f34d9
#define public_66f34dc _public_66f34dc
#define public_66f34ea _public_66f34ea
#define public_66f3560 _public_66f3560

PROC_DECLARE(0x66f3370, internal_66f3370, public_66f3370);
extern "C" NAKED register_t __cdecl internal_66f3370()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+0x20]
        sub esp, 0x14
        test ah, 1
        push ebx
        mov ebx, dword ptr ss : [esp+0x2C]
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x24]
        push edi
        mov edi, dword ptr ss : [esp+0x2C]
        je public_66f33ba
        mov edx, dword ptr ss : [esp+0x40]
        mov ebp, dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ds : [edi+0x18]
        mov edx, dword ptr ds : [edx+4]
        add edx, ebp
        push edx
        mov edx, dword ptr ss : [esp+0x3C]
        push ebx
        push edx
        mov edx, dword ptr ss : [esp+0x40]
        push edx
        push eax
        call dword ptr ds : [ecx+0xC]
        test eax, eax
        jge public_66f3560
        public_66f33ba : nop
        mov ecx, dword ptr ds : [edi+0x14]
        or eax, 0xFFFFFFFF
        test ecx, ecx
        je public_66f33f9
        mov ebp, dword ptr ss : [esp+0x40]
        mov edi, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        push 0
        push ebp
        mov ebp, dword ptr ss : [esp+0x44]
        lea edi, ds:[edi+ebp*2]
        mov ebp, dword ptr ss : [esp+0x3C]
        push edi
        mov edi, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [ecx]
        push ebx
        add edi, ebp
        push edi
        push ecx
        mov ecx, dword ptr ss : [esp+0x48]
        push ecx
        push eax
        call dword ptr ds : [edx+0x120]
        mov edi, dword ptr ss : [esp+0x2C]
        public_66f33f9 : nop
        xor ebp, ebp
        cmp eax, ebp
        jge public_66f3560
        mov edi, dword ptr ds : [edi+0xC]
        cmp edi, ebp
        je public_66f3560
        cmp ebx, ebp
        jbe public_66f3560
        cmp dword ptr ss : [esp+0x40], ebp
        jbe public_66f3560
        mov eax, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, dword ptr ds : [edi+0x68]
        push ebx
        push ecx
        push eax
        call dword ptr ds : [edx+0x14]
        cmp eax, ebp
        jl public_66f3560
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, edx
        mov edi, 0xC
        and eax, edi
        cmp al, 0xC
        mov dword ptr ss : [esp+0x28], ebp
        jne public_66f345a
        mov dword ptr ss : [esp+0x28], 0x1C
        jmp public_66f347b
        public_66f345a : nop
        mov ecx, edx
        and ecx, 4
        cmp cl, 4
        jne public_66f346e
        mov dword ptr ss : [esp+0x28], 0x10
        jmp public_66f347b
        public_66f346e : nop
        mov eax, edx
        and eax, 2
        cmp al, 2
        jne public_66f347b
        mov dword ptr ss : [esp+0x28], edi
        public_66f347b : nop
        test dl, 0x10
        mov dword ptr ss : [esp+0x10], ebp
        je public_66f3488
        mov dword ptr ss : [esp+0x10], edi
        public_66f3488 : nop
        test dl, 0x40
        mov dword ptr ss : [esp+0x44], ebp
        je public_66f3499
        mov dword ptr ss : [esp+0x44], 4
        public_66f3499 : nop
        test dl, dl
        jns public_66f34a2
        add dword ptr ss : [esp+0x44], 4
        public_66f34a2 : nop
        mov eax, edx
        shr eax, 8
        xor edi, edi
        and eax, 0xF
        jle public_66f34ea
        mov ecx, 0x10
        mov dword ptr ss : [esp+0x38], eax
        public_66f34b7 : nop
        mov eax, edx
        shr eax, cl
        and eax, 3
        cmp eax, 3
        ja public_66f34dc
/*FIXUP jmp dword ptr ds : [eax*4+public_66f356c] @0x66f34c3*/
  JMPTB cmp eax, 0
  JMPTB je public_66f34cf
  JMPTB cmp eax, 1
  JMPTB je public_66f34d4
  JMPTB cmp eax, 2
  JMPTB je public_66f34d9
  JMPTB cmp eax, 3
  JMPTB je public_66f34ca
  JMPTB int 3
        public_66f34ca : nop
        add edi, 4
        jmp public_66f34dc
        public_66f34cf : nop
        add edi, 8
        jmp public_66f34dc
        public_66f34d4 : nop
        add edi, 0xC
        jmp public_66f34dc
        public_66f34d9 : nop
        add edi, 0x10
        public_66f34dc : nop
        mov eax, dword ptr ss : [esp+0x38]
        add ecx, 2
        dec eax
        mov dword ptr ss : [esp+0x38], eax
        jne public_66f34b7
        public_66f34ea : nop
        mov ebp, dword ptr ss : [esp+0x34]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x34]
        mov ebp, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [eax]
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        push edx
        mov edx, dword ptr ss : [esp+0x54]
        add edi, edx
        mov edx, dword ptr ss : [esp+0x38]
        add edi, ebp
        add edi, edx
        imul edi, dword ptr ss : [esp+0x44]
        mov edx, dword ptr ss : [esp+0x30]
        sub edx, edi
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        call dword ptr ds : [ecx+0x18]
        mov edx, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ds : [esi+4]
        mov esi, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ds : [eax]
        push 0
        push edx
        mov edx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ds : [edx+0x10]
        lea edx, ds:[edx+esi*2]
        push edx
        mov edx, dword ptr ss : [esp+0x28]
        push ebx
        push edx
        mov edx, dword ptr ss : [esp+0x28]
        push edx
        mov edx, dword ptr ss : [esp+0x48]
        push edx
        push eax
        call dword ptr ds : [ecx+0x120]
        public_66f3560 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 0x20
        UNREACHABLE_TRAP(0x66f3370)
        ASM_EXPORT_ENTRY_FIRST(0x66f34ca, public_66f34ca)
        ASM_EXPORT_ENTRY(0x66f34cf, public_66f34cf)
        ASM_EXPORT_ENTRY(0x66f34d4, public_66f34d4)
        ASM_EXPORT_ENTRY_LAST(0x66f34d9, public_66f34d9)
    }
}

#undef public_66f33ba
#undef public_66f33f9
#undef public_66f345a
#undef public_66f346e
#undef public_66f347b
#undef public_66f3488
#undef public_66f3499
#undef public_66f34a2
#undef public_66f34b7
#undef public_66f34ca
#undef public_66f34cf
#undef public_66f34d4
#undef public_66f34d9
#undef public_66f34dc
#undef public_66f34ea
#undef public_66f3560

#pragma init_seg(compiler)
extern "C" void const* const public_66f34ca = __AsmFindLabelExport(&internal_66f3370, 0x66f34ca);
extern "C" void const* const public_66f34cf = __AsmFindLabelExport(&internal_66f3370, 0x66f34cf);
extern "C" void const* const public_66f34d4 = __AsmFindLabelExport(&internal_66f3370, 0x66f34d4);
extern "C" void const* const public_66f34d9 = __AsmFindLabelExport(&internal_66f3370, 0x66f34d9);
