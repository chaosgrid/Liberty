#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3bbf0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3ceb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3cec0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e9c);

#define public_6f3947e _public_6f3947e
#define public_6f39485 _public_6f39485
#define public_6f394a0 _public_6f394a0
#define public_6f394ae _public_6f394ae
#define public_6f394c6 _public_6f394c6
#define public_6f394ce _public_6f394ce
#define public_6f394d9 _public_6f394d9
#define public_6f394e1 _public_6f394e1
#define public_6f394f0 _public_6f394f0
#define public_6f394fe _public_6f394fe
#define public_6f39509 _public_6f39509
#define public_6f39511 _public_6f39511
#define public_6f3951a _public_6f3951a
#define public_6f39549 _public_6f39549
#define public_6f39551 _public_6f39551
#define public_6f39559 _public_6f39559
#define public_6f39561 _public_6f39561
#define public_6f39569 _public_6f39569
#define public_6f39575 _public_6f39575
#define public_6f3957d _public_6f3957d
#define public_6f39584 _public_6f39584
#define public_6f39592 _public_6f39592
#define public_6f395b7 _public_6f395b7
#define public_6f395dc _public_6f395dc
#define public_6f3960a _public_6f3960a
#define public_6f39626 _public_6f39626

PROC_DECLARE(0x6f39460, internal_6f39460, public_6f39460);
extern "C" NAKED register_t __cdecl internal_6f39460()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [ebp+0x2C]
        add eax, 0xFFFFFFFE
        cmp eax, 5
        push esi
        push edi
        ja public_6f3951a
/*FIXUP jmp dword ptr ds : [eax*4+public_6f39644] @0x6f39477*/
  JMPTB cmp eax, 0
  JMPTB je public_6f3947e
  JMPTB cmp eax, 1
  JMPTB je public_6f3947e
  JMPTB cmp eax, 2
  JMPTB je public_6f3947e
  JMPTB cmp eax, 3
  JMPTB je public_6f3960a
  JMPTB cmp eax, 4
  JMPTB je public_6f3951a
  JMPTB cmp eax, 5
  JMPTB je public_6f39485
  JMPTB int 3
        public_6f3947e : nop
        mov dword ptr ss : [ebp+0x24], 0
        public_6f39485 : nop
        mov edx, dword ptr ss : [ebp+0xD0]
        mov ecx, dword ptr ss : [ebp+0xCC]
        lea esi, ss:[ebp+0xC8]
        mov eax, edx
        cmp eax, edx
        je public_6f394ae
        lea ecx, ds:[ecx]
        public_6f394a0 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edi
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6f394a0
        public_6f394ae : nop
        lea edi, ss:[ebp+0xB8]
        cmp esi, edi
        mov dword ptr ds : [esi+8], ecx
        je public_6f3951a
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_6f394c6
        xor ebx, ebx
        jmp public_6f394ce
        public_6f394c6 : nop
        mov ebx, dword ptr ds : [edi+8]
        sub ebx, eax
        sar ebx, 2
        public_6f394ce : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_6f394d9
        xor edx, edx
        jmp public_6f394e1
        public_6f394d9 : nop
        mov edx, dword ptr ds : [esi+8]
        sub edx, ecx
        sar edx, 2
        public_6f394e1 : nop
        cmp ebx, edx
        ja public_6f39549
        mov edx, dword ptr ds : [edi+8]
        cmp eax, edx
        je public_6f394fe
        lea esp, ss:[esp]
        public_6f394f0 : nop
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], ebx
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6f394f0
        public_6f394fe : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_6f39509
        xor edi, edi
        jmp public_6f39511
        public_6f39509 : nop
        mov edi, dword ptr ds : [edi+8]
        sub edi, eax
        sar edi, 2
        public_6f39511 : nop
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[eax+edi*4]
        mov dword ptr ds : [esi+8], ecx
        public_6f3951a : nop
        mov al, byte ptr ss : [ebp+0x30]
        test al, al
        je public_6f39626
        mov edi, dword ptr ss : [ebp+0x9C]
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [ebp]
        sub edx, edi
        push edx
        push ebp
        mov dword ptr ss : [ebp+0x2C], 7
        call dword ptr ds : [ecx+0x68]
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 8
        public_6f39549 : nop
        test eax, eax
        jne public_6f39551
        xor ebx, ebx
        jmp public_6f39559
        public_6f39551 : nop
        mov ebx, dword ptr ds : [edi+8]
        sub ebx, eax
        sar ebx, 2
        public_6f39559 : nop
        test ecx, ecx
        jne public_6f39561
        xor edx, edx
        jmp public_6f39569
        public_6f39561 : nop
        mov edx, dword ptr ds : [esi+0xC]
        sub edx, ecx
        sar edx, 2
        public_6f39569 : nop
        cmp ebx, edx
        ja public_6f395b7
        test ecx, ecx
        jne public_6f39575
        xor edx, edx
        jmp public_6f3957d
        public_6f39575 : nop
        mov edx, dword ptr ds : [esi+8]
        sub edx, ecx
        sar edx, 2
        public_6f3957d : nop
        lea edx, ds:[eax+edx*4]
        cmp eax, edx
        je public_6f39592
        public_6f39584 : nop
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], ebx
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6f39584
        public_6f39592 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [edi+8]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call public_6f3cec0
        mov ecx, edi
        call public_6f3bbf0
        mov edx, dword ptr ds : [esi+4]
        lea eax, ds:[edx+eax*4]
        mov dword ptr ds : [esi+8], eax
        jmp public_6f3951a
        public_6f395b7 : nop
        mov edx, dword ptr ds : [esi+8]
        push edx
        push ecx
        mov ecx, esi
        call public_6f3ceb0
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6f57e26
        add esp, 4
        mov ecx, edi
        call public_6f3bbf0
        test eax, eax
        jge public_6f395dc
        xor eax, eax
        public_6f395dc : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6f57e9c
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov edi, dword ptr ds : [edi+4]
        push eax
        push ecx
        push edi
        mov ecx, esi
        call public_6f3cec0
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        jmp public_6f3951a
        public_6f3960a : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [ebp]
        push eax
        push ebp
        mov dword ptr ss : [ebp+0x2C], 6
        call dword ptr ds : [edx+0x68]
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 8
        public_6f39626 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [ebp]
        push ecx
        push ebp
        mov dword ptr ss : [ebp+0x2C], 6
        call dword ptr ds : [eax+0x68]
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6f39460)
        ASM_EXPORT_ENTRY_FIRST(0x6f3947e, public_6f3947e)
        ASM_EXPORT_ENTRY(0x6f39485, public_6f39485)
        ASM_EXPORT_ENTRY(0x6f3951a, public_6f3951a)
        ASM_EXPORT_ENTRY_LAST(0x6f3960a, public_6f3960a)
    }
}

#undef public_6f3947e
#undef public_6f39485
#undef public_6f394a0
#undef public_6f394ae
#undef public_6f394c6
#undef public_6f394ce
#undef public_6f394d9
#undef public_6f394e1
#undef public_6f394f0
#undef public_6f394fe
#undef public_6f39509
#undef public_6f39511
#undef public_6f3951a
#undef public_6f39549
#undef public_6f39551
#undef public_6f39559
#undef public_6f39561
#undef public_6f39569
#undef public_6f39575
#undef public_6f3957d
#undef public_6f39584
#undef public_6f39592
#undef public_6f395b7
#undef public_6f395dc
#undef public_6f3960a
#undef public_6f39626

#pragma init_seg(compiler)
extern "C" void const* const public_6f3947e = __AsmFindLabelExport(&internal_6f39460, 0x6f3947e);
extern "C" void const* const public_6f39485 = __AsmFindLabelExport(&internal_6f39460, 0x6f39485);
extern "C" void const* const public_6f3951a = __AsmFindLabelExport(&internal_6f39460, 0x6f3951a);
extern "C" void const* const public_6f3960a = __AsmFindLabelExport(&internal_6f39460, 0x6f3960a);
