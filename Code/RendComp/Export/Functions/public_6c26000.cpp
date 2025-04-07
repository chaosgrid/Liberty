#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c26000);
CLANG_FORWARD_PROC_SYMBOL(public_6c279a0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);

#define public_6c2602e _public_6c2602e
#define public_6c2603c _public_6c2603c
#define public_6c2604a _public_6c2604a
#define public_6c26055 _public_6c26055
#define public_6c26060 _public_6c26060
#define public_6c2606b _public_6c2606b
#define public_6c26097 _public_6c26097
#define public_6c260a9 _public_6c260a9
#define public_6c260bb _public_6c260bb
#define public_6c260d3 _public_6c260d3
#define public_6c26104 _public_6c26104
#define public_6c2613c _public_6c2613c
#define public_6c26147 _public_6c26147
#define public_6c2615e _public_6c2615e
#define public_6c2616c _public_6c2616c

PROC_DECLARE(0x6c26000, internal_6c26000, public_6c26000);
extern "C" NAKED register_t __cdecl internal_6c26000()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ds : [ecx+0x1E8]
        mov edx, dword ptr ss : [esp+4]
        push ebx
        mov ebx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [ebx+0x2C]
        push esi
        push edi
        xor esi, esi
        xor edi, edi
        cmp edx, 0x10
        ja public_6c2606b
        je public_6c26060
        dec edx
        cmp edx, 7
        ja public_6c260d3
/*FIXUP jmp dword ptr ds : [edx*4+public_6c26188] @0x6c26027*/
  JMPTB cmp edx, 0
  JMPTB je public_6c2602e
  JMPTB cmp edx, 1
  JMPTB je public_6c2604a
  JMPTB cmp edx, 2
  JMPTB je public_6c260d3
  JMPTB cmp edx, 3
  JMPTB je public_6c26055
  JMPTB cmp edx, 4
  JMPTB je public_6c260d3
  JMPTB cmp edx, 5
  JMPTB je public_6c260d3
  JMPTB cmp edx, 6
  JMPTB je public_6c260d3
  JMPTB cmp edx, 7
  JMPTB je public_6c2603c
  JMPTB int 3
        public_6c2602e : nop
        mov esi, dword ptr ds : [eax+0x10]
        lea edi, ds:[ecx+0x1F0]
        jmp public_6c260d3
        public_6c2603c : nop
        mov esi, dword ptr ds : [eax+0x24]
        lea edi, ds:[ecx+0x1F4]
        jmp public_6c260d3
        public_6c2604a : nop
        mov esi, dword ptr ds : [eax+0x4C]
        lea edi, ds:[ecx+0x1F8]
        jmp public_6c260d3
        public_6c26055 : nop
        mov esi, dword ptr ds : [eax+0x60]
        lea edi, ds:[ecx+0x1FC]
        jmp public_6c260d3
        public_6c26060 : nop
        mov esi, dword ptr ds : [eax+0x38]
        lea edi, ds:[ecx+0x200]
        jmp public_6c260d3
        public_6c2606b : nop
        cmp edx, 0x10000
        ja public_6c260bb
        je public_6c260a9
        cmp edx, 0x4000
        je public_6c26097
        cmp edx, 0x8000
        jne public_6c260d3
        mov eax, dword ptr ds : [ebx+0x38]
        test eax, eax
        je public_6c260d3
        mov esi, dword ptr ds : [eax+0x20]
        lea edi, ds:[ecx+0x20C]
        jmp public_6c260d3
        public_6c26097 : nop
        mov eax, dword ptr ds : [ebx+0x38]
        test eax, eax
        je public_6c260d3
        mov esi, dword ptr ds : [eax+0xC]
        lea edi, ds:[ecx+0x208]
        jmp public_6c260d3
        public_6c260a9 : nop
        mov eax, dword ptr ds : [ebx+0x38]
        test eax, eax
        je public_6c260d3
        mov esi, dword ptr ds : [eax+0x34]
        lea edi, ds:[ecx+0x210]
        jmp public_6c260d3
        public_6c260bb : nop
        cmp edx, 0x20000
        jne public_6c260d3
        mov eax, dword ptr ds : [ebx+0x38]
        test eax, eax
        je public_6c260d3
        mov esi, dword ptr ds : [eax+0x48]
        lea edi, ds:[ecx+0x214]
        public_6c260d3 : nop
        cmp dword ptr ds : [ecx+0x218], 2
        jne public_6c2616c
        mov dword ptr ds : [ebx+0x10], 0
        mov eax, dword ptr ds : [ecx+0x1E8]
        mov ebx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [ebx+0x18]
        mov ebx, dword ptr ds : [ebx+0x1C]
        mov edx, dword ptr ds : [edi]
        lea ebx, ds:[eax+ebx*2-6]
        cmp eax, ebx
        push ebp
        mov dword ptr ss : [esp+0x14], ebx
        jae public_6c2613c
        public_6c26104 : nop
        movzx ebx, word ptr ds : [edx]
        movzx ebp, word ptr ds : [eax]
        mov dword ptr ds : [esi+ebp*4], ebx
        movzx ebx, word ptr ds : [edx+2]
        movzx ebp, word ptr ds : [eax+2]
        mov dword ptr ds : [esi+ebp*4], ebx
        movzx ebx, word ptr ds : [edx+4]
        movzx ebp, word ptr ds : [eax+4]
        mov dword ptr ds : [esi+ebp*4], ebx
        movzx ebx, word ptr ds : [edx+6]
        movzx ebp, word ptr ds : [eax+6]
        mov dword ptr ds : [esi+ebp*4], ebx
        mov ebx, dword ptr ss : [esp+0x14]
        add eax, 8
        add edx, 8
        cmp eax, ebx
        jb public_6c26104
        public_6c2613c : nop
        add ebx, 6
        cmp eax, ebx
        mov dword ptr ss : [esp+0x14], ebx
        jae public_6c2615e
        public_6c26147 : nop
        movzx ebx, word ptr ds : [edx]
        movzx ebp, word ptr ds : [eax]
        mov dword ptr ds : [esi+ebp*4], ebx
        mov ebx, dword ptr ss : [esp+0x14]
        add eax, 2
        add edx, 2
        cmp eax, ebx
        jb public_6c26147
        public_6c2615e : nop
        mov ecx, dword ptr ds : [ecx+0x1E8]
        mov ecx, dword ptr ds : [ecx]
        call public_6c279a0
        pop ebp
        public_6c2616c : nop
        mov edx, dword ptr ds : [edi]
        push edx
        call public_6c34ea0
        add esp, 4
        mov dword ptr ds : [edi], 0
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6c26000)
        ASM_EXPORT_ENTRY_FIRST(0x6c2602e, public_6c2602e)
        ASM_EXPORT_ENTRY(0x6c2603c, public_6c2603c)
        ASM_EXPORT_ENTRY(0x6c2604a, public_6c2604a)
        ASM_EXPORT_ENTRY(0x6c26055, public_6c26055)
        ASM_EXPORT_ENTRY_LAST(0x6c260d3, public_6c260d3)
    }
}

#undef public_6c2602e
#undef public_6c2603c
#undef public_6c2604a
#undef public_6c26055
#undef public_6c26060
#undef public_6c2606b
#undef public_6c26097
#undef public_6c260a9
#undef public_6c260bb
#undef public_6c260d3
#undef public_6c26104
#undef public_6c2613c
#undef public_6c26147
#undef public_6c2615e
#undef public_6c2616c

#pragma init_seg(compiler)
extern "C" void const* const public_6c2602e = __AsmFindLabelExport(&internal_6c26000, 0x6c2602e);
extern "C" void const* const public_6c2603c = __AsmFindLabelExport(&internal_6c26000, 0x6c2603c);
extern "C" void const* const public_6c2604a = __AsmFindLabelExport(&internal_6c26000, 0x6c2604a);
extern "C" void const* const public_6c26055 = __AsmFindLabelExport(&internal_6c26000, 0x6c26055);
extern "C" void const* const public_6c260d3 = __AsmFindLabelExport(&internal_6c26000, 0x6c260d3);
