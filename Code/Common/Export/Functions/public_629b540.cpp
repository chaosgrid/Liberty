#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629b540);

#define public_629b55f _public_629b55f
#define public_629b564 _public_629b564
#define public_629b577 _public_629b577
#define public_629b593 _public_629b593
#define public_629b59e _public_629b59e
#define public_629b5a8 _public_629b5a8
#define public_629b5ad _public_629b5ad
#define public_629b5cb _public_629b5cb
#define public_629b5d5 _public_629b5d5
#define public_629b5de _public_629b5de
#define public_629b60d _public_629b60d
#define public_629b615 _public_629b615
#define public_629b61c _public_629b61c

PROC_DECLARE(0x629b540, internal_629b540, public_629b540);
extern "C" NAKED register_t __cdecl internal_629b540()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        push esi
        push edi
        je public_629b61c
        mov eax, dword ptr ss : [ebp+0x18]
        test eax, eax
        je public_629b61c
        mov esi, dword ptr ss : [esp+0x10]
        public_629b55f : nop
        mov ecx, 2
        public_629b564 : nop
        mov eax, dword ptr ds : [esi+8]
        cmp eax, 3
        ja public_629b61c
/*FIXUP jmp dword ptr ds : [eax*4+public_629b624] @0x629b570*/
  JMPTB cmp eax, 0
  JMPTB je public_629b577
  JMPTB cmp eax, 1
  JMPTB je public_629b5cb
  JMPTB cmp eax, 2
  JMPTB je public_629b5ad
  JMPTB cmp eax, 3
  JMPTB je public_629b59e
  JMPTB int 3
        public_629b577 : nop
        mov eax, dword ptr ss : [ebp+0x18]
        test eax, eax
        je public_629b5a8
        test dword ptr ds : [esi], 0xC10003
        je public_629b5a8
        mov dword ptr ds : [esi+8], 3
        mov eax, dword ptr ss : [ebp+0x14]
        mov dword ptr ds : [esi+0xC], eax
        public_629b593 : nop
        mov edx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+0xC], eax
        jmp public_629b5de
        public_629b59e : nop
        mov edx, dword ptr ss : [ebp+0x14]
        mov eax, dword ptr ds : [esi+0xC]
        cmp eax, dword ptr ds : [edx]
        jne public_629b593
        public_629b5a8 : nop
        mov dword ptr ds : [esi+8], ecx
        jmp public_629b564
        public_629b5ad : nop
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_629b615
        test dword ptr ds : [esi], 0xFF3EFFFC
        je public_629b615
        mov dword ptr ds : [esi+8], 1
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [esi+0xC], edx
        jmp public_629b5d5
        public_629b5cb : nop
        mov eax, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [esi+0xC]
        cmp edx, dword ptr ds : [eax]
        je public_629b615
        public_629b5d5 : nop
        mov eax, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+0xC], edx
        public_629b5de : nop
        mov eax, dword ptr ds : [esi+0xC]
        mov edi, dword ptr ds : [eax+8]
        test edi, edi
        je public_629b564
        mov edx, dword ptr ds : [edi+0x14]
        test dword ptr ds : [esi], edx
        je public_629b564
        mov al, byte ptr ds : [esi+4]
        test al, al
        jne public_629b60d
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+8]
        test al, al
        jne public_629b55f
        public_629b60d : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        ret 4
        public_629b615 : nop
        mov dword ptr ds : [esi+8], 0
        public_629b61c : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x629b540)
        ASM_EXPORT_ENTRY_FIRST(0x629b577, public_629b577)
        ASM_EXPORT_ENTRY(0x629b59e, public_629b59e)
        ASM_EXPORT_ENTRY(0x629b5ad, public_629b5ad)
        ASM_EXPORT_ENTRY_LAST(0x629b5cb, public_629b5cb)
    }
}

#undef public_629b55f
#undef public_629b564
#undef public_629b577
#undef public_629b593
#undef public_629b59e
#undef public_629b5a8
#undef public_629b5ad
#undef public_629b5cb
#undef public_629b5d5
#undef public_629b5de
#undef public_629b60d
#undef public_629b615
#undef public_629b61c

#pragma init_seg(compiler)
extern "C" void const* const public_629b577 = __AsmFindLabelExport(&internal_629b540, 0x629b577);
extern "C" void const* const public_629b59e = __AsmFindLabelExport(&internal_629b540, 0x629b59e);
extern "C" void const* const public_629b5ad = __AsmFindLabelExport(&internal_629b540, 0x629b5ad);
extern "C" void const* const public_629b5cb = __AsmFindLabelExport(&internal_629b540, 0x629b5cb);
