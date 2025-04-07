#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0b60);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0ba0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);

#define public_6eb23ec _public_6eb23ec
#define public_6eb23f3 _public_6eb23f3
#define public_6eb23fa _public_6eb23fa
#define public_6eb2400 _public_6eb2400
#define public_6eb240c _public_6eb240c
#define public_6eb2411 _public_6eb2411
#define public_6eb245d _public_6eb245d
#define public_6eb2472 _public_6eb2472
#define public_6eb2492 _public_6eb2492
#define public_6eb24a1 _public_6eb24a1
#define public_6eb24b5 _public_6eb24b5
#define public_6eb24c8 _public_6eb24c8
#define public_6eb24fc _public_6eb24fc
#define public_6eb24fe _public_6eb24fe
#define public_6eb2562 _public_6eb2562
#define public_6eb2572 _public_6eb2572
#define public_6eb2588 _public_6eb2588
#define public_6eb258d _public_6eb258d

PROC_DECLARE(0x6eb23c0, internal_6eb23c0, public_6eb23c0);
extern "C" NAKED register_t __cdecl internal_6eb23c0()
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
        je public_6eb2411
        mov ebx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [ebx]
        dec eax
        cmp eax, 9
        ja public_6eb2411
/*FIXUP jmp dword ptr ds : [eax*4+public_6eb2594] @0x6eb23e5*/
  JMPTB cmp eax, 0
  JMPTB je public_6eb23ec
  JMPTB cmp eax, 1
  JMPTB je public_6eb23f3
  JMPTB cmp eax, 2
  JMPTB je public_6eb2400
  JMPTB cmp eax, 3
  JMPTB je public_6eb23fa
  JMPTB cmp eax, 4
  JMPTB je public_6eb245d
  JMPTB cmp eax, 5
  JMPTB je public_6eb24a1
  JMPTB cmp eax, 6
  JMPTB je public_6eb245d
  JMPTB cmp eax, 7
  JMPTB je public_6eb23ec
  JMPTB cmp eax, 8
  JMPTB je public_6eb23f3
  JMPTB cmp eax, 9
  JMPTB je public_6eb240c
  JMPTB int 3
        public_6eb23ec : nop
        mov edx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [esi], edx
        jmp public_6eb2411
        public_6eb23f3 : nop
        mov eax, dword ptr ds : [ebx+4]
        mov dword ptr ds : [esi], eax
        jmp public_6eb2411
        public_6eb23fa : nop
        mov ecx, dword ptr ds : [ebx+0x10]
        mov dword ptr ds : [esi+0xC], ecx
        public_6eb2400 : nop
        mov edx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [esi+8], edx
        mov eax, dword ptr ds : [ebx+8]
        mov dword ptr ds : [esi+4], eax
        public_6eb240c : nop
        mov ecx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [esi], ecx
        public_6eb2411 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [edx+4]
        mov cl, byte ptr ds : [eax]
        cmp cl, 0x44
        mov dl, 0x63
        jne public_6eb24c8
        cmp byte ptr ds : [eax+1], dl
        jne public_6eb24c8
        mov bl, byte ptr ds : [eax+2]
        test bl, bl
        jne public_6eb24c8
        lea eax, ss:[ebp+0x20]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        add ebp, 0x30
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp+4], edx
        mov edx, dword ptr ds : [eax+0xC]
        pop edi
        mov dword ptr ss : [ebp+8], ecx
        pop esi
        mov dword ptr ss : [ebp+0xC], edx
        pop ebp
        pop ebx
        ret 0xC
        public_6eb245d : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6eb2472
        push eax
        call public_6ed0c50
        add esp, 4
        mov dword ptr ds : [esi], 0
        public_6eb2472 : nop
        mov edi, dword ptr ds : [ebx+4]
        test edi, edi
        je public_6eb2411
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
        public_6eb2492 : nop
        mov al, byte ptr ds : [ebx]
        inc ebx
        mov byte ptr ds : [ecx], al
        inc ecx
        test al, al
        jne public_6eb2492
        jmp public_6eb2411
        public_6eb24a1 : nop
        mov edx, dword ptr ds : [ebx+4]
        mov edi, dword ptr ds : [esi]
        mov dword ptr ds : [esi], edx
        mov ebx, dword ptr ds : [ebx+4]
        test ebx, ebx
        je public_6eb24b5
        mov eax, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [eax+4]
        public_6eb24b5 : nop
        test edi, edi
        je public_6eb2411
        mov ecx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [ecx+8]
        jmp public_6eb2411
        public_6eb24c8 : nop
        cmp cl, 0x4F
        jne public_6eb258d
        cmp byte ptr ds : [eax+1], dl
        jne public_6eb258d
        mov cl, byte ptr ds : [eax+2]
        test cl, cl
        jne public_6eb258d
        fld dword ptr ss : [ebp+0x2C]
        fcomp dword ptr ds : [public_6ed1270]
        fnstsw ax
        test ah, 5
        jp public_6eb24fc
        mov eax, 1
        jmp public_6eb24fe
        public_6eb24fc : nop
        xor eax, eax
        public_6eb24fe : nop
        test al, al
        mov byte ptr ss : [ebp+0x64], al
        mov byte ptr ss : [ebp+0x65], 0
        jne public_6eb258d
        push 0
        call public_6ed0b60
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ds : [eax+8]
        add esp, 4
        test ecx, ecx
        je public_6eb258d
        mov eax, dword ptr ss : [ebp+4]
        mov edx, dword ptr ds : [eax]
        lea esi, ss:[esp+0x14]
        push esi
        push ecx
        push eax
        call dword ptr ds : [edx+0xC8]
        test eax, eax
        jl public_6eb258d
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        call public_6ed0ba0
        mov edx, dword ptr ds : [eax+0x38]
        mov eax, dword ptr ss : [esp+0x18]
        add esp, 4
        cmp edx, 1
        sete cl
        cmp eax, 0xA
        mov byte ptr ss : [ebp+0x65], cl
        jl public_6eb2562
        cmp eax, 0xE
        jle public_6eb2572
        public_6eb2562 : nop
        push eax
        call public_6ed0ba0
        mov cl, byte ptr ds : [eax+0x48]
        add esp, 4
        test cl, cl
        je public_6eb2588
        public_6eb2572 : nop
        mov al, byte ptr ss : [ebp+0x65]
        test al, al
        jne public_6eb2588
        pop edi
        mov eax, 1
        pop esi
        mov byte ptr ss : [ebp+0x64], al
        pop ebp
        pop ebx
        ret 0xC
        public_6eb2588 : nop
        xor eax, eax
        mov byte ptr ss : [ebp+0x64], al
        public_6eb258d : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6eb23c0)
        ASM_EXPORT_ENTRY_FIRST(0x6eb23ec, public_6eb23ec)
        ASM_EXPORT_ENTRY(0x6eb23f3, public_6eb23f3)
        ASM_EXPORT_ENTRY(0x6eb23fa, public_6eb23fa)
        ASM_EXPORT_ENTRY(0x6eb2400, public_6eb2400)
        ASM_EXPORT_ENTRY(0x6eb240c, public_6eb240c)
        ASM_EXPORT_ENTRY(0x6eb245d, public_6eb245d)
        ASM_EXPORT_ENTRY_LAST(0x6eb24a1, public_6eb24a1)
    }
}

#undef public_6eb23ec
#undef public_6eb23f3
#undef public_6eb23fa
#undef public_6eb2400
#undef public_6eb240c
#undef public_6eb2411
#undef public_6eb245d
#undef public_6eb2472
#undef public_6eb2492
#undef public_6eb24a1
#undef public_6eb24b5
#undef public_6eb24c8
#undef public_6eb24fc
#undef public_6eb24fe
#undef public_6eb2562
#undef public_6eb2572
#undef public_6eb2588
#undef public_6eb258d

#pragma init_seg(compiler)
extern "C" void const* const public_6eb23ec = __AsmFindLabelExport(&internal_6eb23c0, 0x6eb23ec);
extern "C" void const* const public_6eb23f3 = __AsmFindLabelExport(&internal_6eb23c0, 0x6eb23f3);
extern "C" void const* const public_6eb23fa = __AsmFindLabelExport(&internal_6eb23c0, 0x6eb23fa);
extern "C" void const* const public_6eb2400 = __AsmFindLabelExport(&internal_6eb23c0, 0x6eb2400);
extern "C" void const* const public_6eb240c = __AsmFindLabelExport(&internal_6eb23c0, 0x6eb240c);
extern "C" void const* const public_6eb245d = __AsmFindLabelExport(&internal_6eb23c0, 0x6eb245d);
extern "C" void const* const public_6eb24a1 = __AsmFindLabelExport(&internal_6eb23c0, 0x6eb24a1);
