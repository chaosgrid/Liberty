#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4795f0);
CLANG_FORWARD_PROC_SYMBOL(public_47e590);
CLANG_FORWARD_PROC_SYMBOL(public_47f240);
CLANG_FORWARD_PROC_SYMBOL(public_4c6a50);

#define public_47f267 _public_47f267
#define public_47f2a2 _public_47f2a2
#define public_47f2e8 _public_47f2e8
#define public_47f2fe _public_47f2fe
#define public_47f36e _public_47f36e
#define public_47f385 _public_47f385
#define public_47f396 _public_47f396
#define public_47f3a8 _public_47f3a8
#define public_47f3b5 _public_47f3b5

PROC_DECLARE(0x47f240, internal_47f240, public_47f240);
extern "C" NAKED register_t __cdecl internal_47f240()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x360]
        xor ebx, ebx
        cmp ecx, ebx
        mov dword ptr ds : [esi+0x32C], eax
        jne public_47f267
        cmp byte ptr ds : [esi+0x35C], bl
        jne public_47f267
        mov dword ptr ds : [public_671ce4], eax
        public_47f267 : nop
        mov ecx, esi
        mov dword ptr ds : [esi+0x3C4], ebx
        mov dword ptr ds : [esi+0x3A4], 0xFFFFFFFF
        call public_47e590
        push ebx
        mov ecx, esi
        call public_4795f0
        mov ecx, dword ptr ds : [esi+0x3D0]
        cmp ecx, ebx
        je public_47f2a2
        mov edx, dword ptr ds : [esi+0x3C4]
        mov eax, dword ptr ds : [ecx]
        push ebx
        push edx
        push 0x38
        call dword ptr ds : [eax+0xA8]
        public_47f2a2 : nop
        push edi
        push 5
        push ebx
        lea edi, ds:[esi+0x330]
        push ebx
        mov ecx, edi
        mov dword ptr ds : [esi+0x3A4], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x4F4], ebx
        call public_4c6a50
        push ebx
        mov ecx, esi
        call public_4795f0
        mov eax, dword ptr ds : [esi+0x360]
        cmp eax, ebx
        je public_47f2e8
        mov dword ptr ds : [eax+0x4E8], ebx
        mov eax, dword ptr ds : [esi+0x360]
        mov dword ptr ds : [eax+0x4EC], ebx
        public_47f2e8 : nop
        mov ecx, dword ptr ds : [esi+0x3D0]
        cmp ecx, ebx
        je public_47f2fe
        mov edx, dword ptr ds : [ecx]
        push ebx
        push ebx
        push 0x38
        call dword ptr ds : [edx+0xA8]
        public_47f2fe : nop
        mov ecx, dword ptr ds : [esi+0x360]
        cmp ecx, ebx
        je public_47f36e
        cmp byte ptr ss : [esp+0x14], bl
        je public_47f36e
        cmp dword ptr ds : [ecx+0x978], 1
        je public_47f36e
        mov eax, dword ptr ds : [esi+0x32C]
        push 1
        push eax
        call public_47f240
        mov esi, dword ptr ds : [esi+0x360]
        push 5
        push ebx
        push ebx
        lea ecx, ds:[esi+0x330]
        mov dword ptr ds : [esi+0x3A4], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x4F4], ebx
        call public_4c6a50
        push ebx
        mov ecx, esi
        call public_4795f0
        mov eax, dword ptr ds : [esi+0x360]
        cmp eax, ebx
        je public_47f36e
        mov dword ptr ds : [eax+0x4E8], ebx
        mov ecx, dword ptr ds : [esi+0x360]
        mov dword ptr ds : [ecx+0x4EC], ebx
        public_47f36e : nop
        mov ecx, dword ptr ds : [edi]
        cmp ecx, ebx
        pop edi
        je public_47f3b5
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, 5
        ja public_47f3b5
/*FIXUP jmp dword ptr ds : [eax*4+public_47f3bc] @0x47f37e*/
  JMPTB cmp eax, 0
  JMPTB je public_47f385
  JMPTB cmp eax, 1
  JMPTB je public_47f3a8
  JMPTB cmp eax, 2
  JMPTB je public_47f396
  JMPTB cmp eax, 3
  JMPTB je public_47f3a8
  JMPTB cmp eax, 4
  JMPTB je public_47f3a8
  JMPTB cmp eax, 5
  JMPTB je public_47f3a8
  JMPTB int 3
        public_47f385 : nop
        mov edx, dword ptr ds : [ecx]
        push ebx
        push ebx
        push 0x4C
        call dword ptr ds : [edx+0xA8]
        pop esi
        pop ebx
        ret 8
        public_47f396 : nop
        mov eax, dword ptr ds : [ecx]
        push ebx
        push 1
        push 0x4C
        call dword ptr ds : [eax+0xA8]
        pop esi
        pop ebx
        ret 8
        public_47f3a8 : nop
        mov edx, dword ptr ds : [ecx]
        push ebx
        push 2
        push 0x4C
        call dword ptr ds : [edx+0xA8]
        public_47f3b5 : nop
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x47f240)
        ASM_EXPORT_ENTRY_SINGLE(0x47f3a8, public_47f3a8)
    }
}

#undef public_47f267
#undef public_47f2a2
#undef public_47f2e8
#undef public_47f2fe
#undef public_47f36e
#undef public_47f385
#undef public_47f396
#undef public_47f3a8
#undef public_47f3b5

#pragma init_seg(compiler)
extern "C" void const* const public_47f3a8 = __AsmFindLabelExport(&internal_47f240, 0x47f3a8);
