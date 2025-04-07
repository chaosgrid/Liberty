#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629b440);

#define public_629b457 _public_629b457
#define public_629b45b _public_629b45b
#define public_629b460 _public_629b460
#define public_629b473 _public_629b473
#define public_629b493 _public_629b493
#define public_629b4a2 _public_629b4a2
#define public_629b4a7 _public_629b4a7
#define public_629b4c7 _public_629b4c7
#define public_629b4d6 _public_629b4d6
#define public_629b501 _public_629b501
#define public_629b509 _public_629b509
#define public_629b510 _public_629b510

PROC_DECLARE(0x629b440, internal_629b440, public_629b440);
extern "C" NAKED register_t __cdecl internal_629b440()
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
        jne public_629b457
        mov eax, dword ptr ss : [ebp+0x18]
        test eax, eax
        je public_629b510
        public_629b457 : nop
        mov esi, dword ptr ss : [esp+0x10]
        public_629b45b : nop
        mov ecx, 2
        public_629b460 : nop
        mov eax, dword ptr ds : [esi+8]
        cmp eax, 3
        ja public_629b510
/*FIXUP jmp dword ptr ds : [eax*4+public_629b518] @0x629b46c*/
  JMPTB cmp eax, 0
  JMPTB je public_629b473
  JMPTB cmp eax, 1
  JMPTB je public_629b493
  JMPTB cmp eax, 2
  JMPTB je public_629b4a7
  JMPTB cmp eax, 3
  JMPTB je public_629b4c7
  JMPTB int 3
        public_629b473 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_629b4a2
        test dword ptr ds : [esi], 0xFF3EFFFC
        je public_629b4a2
        mov dword ptr ds : [esi+8], 1
        mov eax, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [esi+0xC], edx
        jmp public_629b4d6
        public_629b493 : nop
        mov eax, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [eax]
        mov eax, edx
        mov dword ptr ds : [esi+0xC], edx
        cmp eax, dword ptr ss : [ebp+8]
        jne public_629b4d6
        public_629b4a2 : nop
        mov dword ptr ds : [esi+8], ecx
        jmp public_629b460
        public_629b4a7 : nop
        mov eax, dword ptr ss : [ebp+0x18]
        test eax, eax
        je public_629b509
        test dword ptr ds : [esi], 0xC10003
        je public_629b509
        mov dword ptr ds : [esi+8], 3
        mov edx, dword ptr ss : [ebp+0x14]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ds : [esi+0xC], eax
        jmp public_629b4d6
        public_629b4c7 : nop
        mov edx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [edx]
        mov edx, eax
        mov dword ptr ds : [esi+0xC], eax
        cmp edx, dword ptr ss : [ebp+0x14]
        je public_629b509
        public_629b4d6 : nop
        mov eax, dword ptr ds : [esi+0xC]
        mov edi, dword ptr ds : [eax+8]
        test edi, edi
        je public_629b460
        mov edx, dword ptr ds : [edi+0x14]
        test dword ptr ds : [esi], edx
        je public_629b460
        mov al, byte ptr ds : [esi+4]
        test al, al
        jne public_629b501
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+8]
        test al, al
        jne public_629b45b
        public_629b501 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        ret 4
        public_629b509 : nop
        mov dword ptr ds : [esi+8], 0
        public_629b510 : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x629b440)
        ASM_EXPORT_ENTRY_FIRST(0x629b473, public_629b473)
        ASM_EXPORT_ENTRY(0x629b493, public_629b493)
        ASM_EXPORT_ENTRY(0x629b4a7, public_629b4a7)
        ASM_EXPORT_ENTRY_LAST(0x629b4c7, public_629b4c7)
    }
}

#undef public_629b457
#undef public_629b45b
#undef public_629b460
#undef public_629b473
#undef public_629b493
#undef public_629b4a2
#undef public_629b4a7
#undef public_629b4c7
#undef public_629b4d6
#undef public_629b501
#undef public_629b509
#undef public_629b510

#pragma init_seg(compiler)
extern "C" void const* const public_629b473 = __AsmFindLabelExport(&internal_629b440, 0x629b473);
extern "C" void const* const public_629b493 = __AsmFindLabelExport(&internal_629b440, 0x629b493);
extern "C" void const* const public_629b4a7 = __AsmFindLabelExport(&internal_629b440, 0x629b4a7);
extern "C" void const* const public_629b4c7 = __AsmFindLabelExport(&internal_629b440, 0x629b4c7);
