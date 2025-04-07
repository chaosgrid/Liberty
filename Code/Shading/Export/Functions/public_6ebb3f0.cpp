#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0b60);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0ba0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);

#define public_6ebb41c _public_6ebb41c
#define public_6ebb423 _public_6ebb423
#define public_6ebb42a _public_6ebb42a
#define public_6ebb430 _public_6ebb430
#define public_6ebb43c _public_6ebb43c
#define public_6ebb441 _public_6ebb441
#define public_6ebb48a _public_6ebb48a
#define public_6ebb49f _public_6ebb49f
#define public_6ebb4c0 _public_6ebb4c0
#define public_6ebb4cf _public_6ebb4cf
#define public_6ebb4e3 _public_6ebb4e3
#define public_6ebb4f6 _public_6ebb4f6
#define public_6ebb52a _public_6ebb52a
#define public_6ebb52c _public_6ebb52c
#define public_6ebb58c _public_6ebb58c
#define public_6ebb59c _public_6ebb59c
#define public_6ebb5aa _public_6ebb5aa
#define public_6ebb5ac _public_6ebb5ac
#define public_6ebb5af _public_6ebb5af
#define public_6ebb5cc _public_6ebb5cc
#define public_6ebb5de _public_6ebb5de

PROC_DECLARE(0x6ebb3f0, internal_6ebb3f0, public_6ebb3f0);
extern "C" NAKED register_t __cdecl internal_6ebb3f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [ebp]
        push edi
        push ecx
        mov ecx, ebp
        call dword ptr ds : [eax+0x70]
        mov esi, eax
        test esi, esi
        je public_6ebb441
        mov ebx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [ebx]
        dec eax
        cmp eax, 9
        ja public_6ebb441
/*FIXUP jmp dword ptr ds : [eax*4+public_6ebb5e8] @0x6ebb415*/
  JMPTB cmp eax, 0
  JMPTB je public_6ebb41c
  JMPTB cmp eax, 1
  JMPTB je public_6ebb423
  JMPTB cmp eax, 2
  JMPTB je public_6ebb430
  JMPTB cmp eax, 3
  JMPTB je public_6ebb42a
  JMPTB cmp eax, 4
  JMPTB je public_6ebb48a
  JMPTB cmp eax, 5
  JMPTB je public_6ebb4cf
  JMPTB cmp eax, 6
  JMPTB je public_6ebb48a
  JMPTB cmp eax, 7
  JMPTB je public_6ebb41c
  JMPTB cmp eax, 8
  JMPTB je public_6ebb423
  JMPTB cmp eax, 9
  JMPTB je public_6ebb43c
  JMPTB int 3
        public_6ebb41c : nop
        mov edx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [esi], edx
        jmp public_6ebb441
        public_6ebb423 : nop
        mov eax, dword ptr ds : [ebx+4]
        mov dword ptr ds : [esi], eax
        jmp public_6ebb441
        public_6ebb42a : nop
        mov ecx, dword ptr ds : [ebx+0x10]
        mov dword ptr ds : [esi+0xC], ecx
        public_6ebb430 : nop
        mov edx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [esi+8], edx
        mov eax, dword ptr ds : [ebx+8]
        mov dword ptr ds : [esi+4], eax
        public_6ebb43c : nop
        mov ecx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [esi], ecx
        public_6ebb441 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [edx+4]
        mov cl, byte ptr ds : [eax]
        cmp cl, 0x44
        mov dl, 0x63
        jne public_6ebb4f6
        cmp byte ptr ds : [eax+1], dl
        jne public_6ebb4f6
        mov bl, byte ptr ds : [eax+2]
        test bl, bl
        jne public_6ebb4f6
        lea eax, ss:[ebp+0x20]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[ebp+0x30]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [ecx+8], edx
        mov dword ptr ds : [ecx+0xC], eax
        jmp public_6ebb5af
        public_6ebb48a : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6ebb49f
        push eax
        call public_6ed0c50
        add esp, 4
        mov dword ptr ds : [esi], 0
        public_6ebb49f : nop
        mov edi, dword ptr ds : [ebx+4]
        test edi, edi
        je public_6ebb441
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        push ecx
        call public_6ed0c5c
        mov dword ptr ds : [esi], eax
        mov ebx, dword ptr ds : [ebx+4]
        add esp, 4
        mov ecx, eax
        nop 
        public_6ebb4c0 : nop
        mov al, byte ptr ds : [ebx]
        inc ebx
        mov byte ptr ds : [ecx], al
        inc ecx
        test al, al
        jne public_6ebb4c0
        jmp public_6ebb441
        public_6ebb4cf : nop
        mov edx, dword ptr ds : [ebx+4]
        mov edi, dword ptr ds : [esi]
        mov dword ptr ds : [esi], edx
        mov ebx, dword ptr ds : [ebx+4]
        test ebx, ebx
        je public_6ebb4e3
        mov eax, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [eax+4]
        public_6ebb4e3 : nop
        test edi, edi
        je public_6ebb441
        mov ecx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [ecx+8]
        jmp public_6ebb441
        public_6ebb4f6 : nop
        cmp cl, 0x4F
        jne public_6ebb5af
        cmp byte ptr ds : [eax+1], dl
        jne public_6ebb5af
        mov cl, byte ptr ds : [eax+2]
        test cl, cl
        jne public_6ebb5af
        fld dword ptr ss : [ebp+0x2C]
        fcomp dword ptr ds : [public_6ed1270]
        fnstsw ax
        test ah, 5
        jp public_6ebb52a
        mov eax, 1
        jmp public_6ebb52c
        public_6ebb52a : nop
        xor eax, eax
        public_6ebb52c : nop
        test al, al
        mov byte ptr ss : [ebp+0x64], al
        mov byte ptr ss : [ebp+0x65], 0
        jne public_6ebb5af
        push 0
        call public_6ed0b60
        mov ecx, dword ptr ss : [ebp+0x18]
        mov dword ptr ss : [esp+0x20], eax
        mov ecx, dword ptr ds : [ecx+8]
        add esp, 4
        test ecx, ecx
        je public_6ebb5af
        mov eax, dword ptr ss : [ebp+4]
        mov edx, dword ptr ds : [eax]
        lea esi, ss:[esp+0x1C]
        push esi
        push ecx
        push eax
        call dword ptr ds : [edx+0xC8]
        test eax, eax
        jl public_6ebb5af
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        call public_6ed0ba0
        mov edx, dword ptr ds : [eax+0x38]
        mov eax, dword ptr ss : [esp+0x20]
        add esp, 4
        cmp edx, 1
        sete cl
        cmp eax, 0xA
        mov byte ptr ss : [ebp+0x65], cl
        jl public_6ebb58c
        cmp eax, 0xE
        jle public_6ebb59c
        public_6ebb58c : nop
        push eax
        call public_6ed0ba0
        mov cl, byte ptr ds : [eax+0x48]
        add esp, 4
        test cl, cl
        je public_6ebb5aa
        public_6ebb59c : nop
        mov al, byte ptr ss : [ebp+0x65]
        test al, al
        jne public_6ebb5aa
        mov eax, 1
        jmp public_6ebb5ac
        public_6ebb5aa : nop
        xor eax, eax
        public_6ebb5ac : nop
        mov byte ptr ss : [ebp+0x64], al
        public_6ebb5af : nop
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, 6
        jne public_6ebb5cc
        mov eax, dword ptr ss : [ebp+0x70]
        xor edx, edx
        test eax, eax
        setg dl
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x70], edx
        pop ebp
        pop ebx
        ret 0xC
        public_6ebb5cc : nop
        cmp eax, 7
        jne public_6ebb5de
        mov ecx, dword ptr ss : [ebp+0x74]
        xor eax, eax
        test ecx, ecx
        setg al
        mov dword ptr ss : [ebp+0x74], eax
        public_6ebb5de : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6ebb3f0)
        ASM_EXPORT_ENTRY_FIRST(0x6ebb41c, public_6ebb41c)
        ASM_EXPORT_ENTRY(0x6ebb423, public_6ebb423)
        ASM_EXPORT_ENTRY(0x6ebb42a, public_6ebb42a)
        ASM_EXPORT_ENTRY(0x6ebb430, public_6ebb430)
        ASM_EXPORT_ENTRY(0x6ebb43c, public_6ebb43c)
        ASM_EXPORT_ENTRY(0x6ebb48a, public_6ebb48a)
        ASM_EXPORT_ENTRY_LAST(0x6ebb4cf, public_6ebb4cf)
    }
}

#undef public_6ebb41c
#undef public_6ebb423
#undef public_6ebb42a
#undef public_6ebb430
#undef public_6ebb43c
#undef public_6ebb441
#undef public_6ebb48a
#undef public_6ebb49f
#undef public_6ebb4c0
#undef public_6ebb4cf
#undef public_6ebb4e3
#undef public_6ebb4f6
#undef public_6ebb52a
#undef public_6ebb52c
#undef public_6ebb58c
#undef public_6ebb59c
#undef public_6ebb5aa
#undef public_6ebb5ac
#undef public_6ebb5af
#undef public_6ebb5cc
#undef public_6ebb5de

#pragma init_seg(compiler)
extern "C" void const* const public_6ebb41c = __AsmFindLabelExport(&internal_6ebb3f0, 0x6ebb41c);
extern "C" void const* const public_6ebb423 = __AsmFindLabelExport(&internal_6ebb3f0, 0x6ebb423);
extern "C" void const* const public_6ebb42a = __AsmFindLabelExport(&internal_6ebb3f0, 0x6ebb42a);
extern "C" void const* const public_6ebb430 = __AsmFindLabelExport(&internal_6ebb3f0, 0x6ebb430);
extern "C" void const* const public_6ebb43c = __AsmFindLabelExport(&internal_6ebb3f0, 0x6ebb43c);
extern "C" void const* const public_6ebb48a = __AsmFindLabelExport(&internal_6ebb3f0, 0x6ebb48a);
extern "C" void const* const public_6ebb4cf = __AsmFindLabelExport(&internal_6ebb3f0, 0x6ebb4cf);
