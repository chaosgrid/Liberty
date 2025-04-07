#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66fb3e0);
CLANG_FORWARD_PROC_SYMBOL(public_6700710);
CLANG_FORWARD_PROC_SYMBOL(public_6700810);
CLANG_FORWARD_PROC_SYMBOL(public_670092a);

#define public_66fb224 _public_66fb224
#define public_66fb22e _public_66fb22e
#define public_66fb234 _public_66fb234
#define public_66fb240 _public_66fb240
#define public_66fb247 _public_66fb247
#define public_66fb25c _public_66fb25c
#define public_66fb280 _public_66fb280
#define public_66fb28c _public_66fb28c
#define public_66fb2a0 _public_66fb2a0
#define public_66fb2ac _public_66fb2ac
#define public_66fb2b1 _public_66fb2b1
#define public_66fb2ea _public_66fb2ea
#define public_66fb302 _public_66fb302
#define public_66fb3ac _public_66fb3ac

PROC_DECLARE(0x66fb1f0, internal_66fb1f0, public_66fb1f0);
extern "C" NAKED register_t __cdecl internal_66fb1f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ebx]
        push edi
        push ecx
        mov ecx, ebx
        call dword ptr ds : [eax+0x70]
        mov ebp, dword ptr ss : [esp+0x1C]
        mov esi, eax
        test esi, esi
        je public_66fb2b1
        mov eax, dword ptr ss : [ebp]
        dec eax
        cmp eax, 9
        ja public_66fb2b1
/*FIXUP jmp dword ptr ds : [eax*4+public_66fb3b4] @0x66fb21d*/
  JMPTB cmp eax, 0
  JMPTB je public_66fb2ac
  JMPTB cmp eax, 1
  JMPTB je public_66fb224
  JMPTB cmp eax, 2
  JMPTB je public_66fb234
  JMPTB cmp eax, 3
  JMPTB je public_66fb22e
  JMPTB cmp eax, 4
  JMPTB je public_66fb247
  JMPTB cmp eax, 5
  JMPTB je public_66fb28c
  JMPTB cmp eax, 6
  JMPTB je public_66fb247
  JMPTB cmp eax, 7
  JMPTB je public_66fb224
  JMPTB cmp eax, 8
  JMPTB je public_66fb240
  JMPTB cmp eax, 9
  JMPTB je public_66fb2ac
  JMPTB int 3
        public_66fb224 : nop
        mov eax, dword ptr ss : [ebp+4]
        mov dword ptr ds : [esi], eax
        jmp public_66fb2b1
        public_66fb22e : nop
        mov ecx, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [esi+0xC], ecx
        public_66fb234 : nop
        mov edx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [esi+8], edx
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ds : [esi+4], eax
        public_66fb240 : nop
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ds : [esi], ecx
        jmp public_66fb2b1
        public_66fb247 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_66fb25c
        push eax
        call public_6700710
        add esp, 4
        mov dword ptr ds : [esi], 0
        public_66fb25c : nop
        mov edi, dword ptr ss : [ebp+4]
        test edi, edi
        je public_66fb2b1
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        push ecx
        call public_6700810
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ss : [ebp+4]
        add esp, 4
        mov edx, eax
        lea esp, ss:[esp]
        public_66fb280 : nop
        mov al, byte ptr ds : [ecx]
        inc ecx
        mov byte ptr ds : [edx], al
        inc edx
        test al, al
        jne public_66fb280
        jmp public_66fb2b1
        public_66fb28c : nop
        mov edx, dword ptr ss : [ebp+4]
        mov edi, dword ptr ds : [esi]
        mov dword ptr ds : [esi], edx
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        je public_66fb2a0
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_66fb2a0 : nop
        test edi, edi
        je public_66fb2b1
        mov edx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [edx+8]
        jmp public_66fb2b1
        public_66fb2ac : nop
        mov edx, dword ptr ss : [ebp+4]
        mov dword ptr ds : [esi], edx
        public_66fb2b1 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [eax+4]
        mov cl, byte ptr ds : [eax]
        cmp cl, 0x44
        mov dl, 0x63
        jne public_66fb2ea
        cmp byte ptr ds : [eax+1], dl
        jne public_66fb2ea
        cmp byte ptr ds : [eax+2], 0
        jne public_66fb2ea
        lea ecx, ds:[ebx+0x20]
        mov eax, dword ptr ds : [ecx]
        lea edx, ds:[ebx+0x30]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [edx+8], eax
        mov dword ptr ds : [edx+0xC], ecx
        jmp public_66fb302
        public_66fb2ea : nop
        cmp cl, 0x4F
        jne public_66fb302
        cmp byte ptr ds : [eax+1], dl
        jne public_66fb302
        mov cl, byte ptr ds : [eax+2]
        test cl, cl
        jne public_66fb302
        mov ecx, ebx
        call public_66fb3e0
        public_66fb302 : nop
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        jne public_66fb3ac
        mov edx, dword ptr ss : [ebp+4]
        mov dword ptr ds : [ebx+0x68], edx
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ds : [ebx+0x6C], eax
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [ebx+0x70], ecx
        fld dword ptr ss : [ebp+0x10]
        fst dword ptr ds : [ebx+0x74]
        fmul qword ptr ds : [public_6702810]
        call public_670092a
        fld dword ptr ds : [ebx+0x68]
        fmul qword ptr ds : [public_6702810]
        xor ecx, ecx
        mov ch, al
        mov dword ptr ss : [esp+0x14], ecx
        call public_670092a
        fld dword ptr ds : [ebx+0x6C]
        mov ecx, dword ptr ss : [esp+0x14]
        fmul qword ptr ds : [public_6702810]
        mov cl, al
        shl ecx, 8
        mov dword ptr ss : [esp+0x14], ecx
        call public_670092a
        fld dword ptr ds : [ebx+0x70]
        fmul qword ptr ds : [public_6702810]
        xor edx, edx
        mov dl, al
        mov eax, dword ptr ss : [esp+0x14]
        or eax, edx
        shl eax, 8
        mov dword ptr ss : [esp+0x14], eax
        call public_670092a
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ebx+0x6C]
        movzx eax, al
        or ecx, eax
        mov eax, dword ptr ds : [ebx+0x70]
        mov dword ptr ds : [ebx+0x78], ecx
        mov ecx, dword ptr ds : [ebx+0x68]
        mov dword ptr ds : [ebx+0x30], ecx
        mov ecx, dword ptr ds : [ebx+0x74]
        mov dword ptr ds : [ebx+0x34], edx
        mov dword ptr ds : [ebx+0x38], eax
        mov dword ptr ds : [ebx+0x2C], ecx
        mov dword ptr ds : [ebx+0x7C], 0
        public_66fb3ac : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x66fb1f0)
        ASM_EXPORT_ENTRY_FIRST(0x66fb224, public_66fb224)
        ASM_EXPORT_ENTRY(0x66fb22e, public_66fb22e)
        ASM_EXPORT_ENTRY(0x66fb234, public_66fb234)
        ASM_EXPORT_ENTRY(0x66fb240, public_66fb240)
        ASM_EXPORT_ENTRY(0x66fb247, public_66fb247)
        ASM_EXPORT_ENTRY(0x66fb28c, public_66fb28c)
        ASM_EXPORT_ENTRY_LAST(0x66fb2ac, public_66fb2ac)
    }
}

#undef public_66fb224
#undef public_66fb22e
#undef public_66fb234
#undef public_66fb240
#undef public_66fb247
#undef public_66fb25c
#undef public_66fb280
#undef public_66fb28c
#undef public_66fb2a0
#undef public_66fb2ac
#undef public_66fb2b1
#undef public_66fb2ea
#undef public_66fb302
#undef public_66fb3ac

#pragma init_seg(compiler)
extern "C" void const* const public_66fb224 = __AsmFindLabelExport(&internal_66fb1f0, 0x66fb224);
extern "C" void const* const public_66fb22e = __AsmFindLabelExport(&internal_66fb1f0, 0x66fb22e);
extern "C" void const* const public_66fb234 = __AsmFindLabelExport(&internal_66fb1f0, 0x66fb234);
extern "C" void const* const public_66fb240 = __AsmFindLabelExport(&internal_66fb1f0, 0x66fb240);
extern "C" void const* const public_66fb247 = __AsmFindLabelExport(&internal_66fb1f0, 0x66fb247);
extern "C" void const* const public_66fb28c = __AsmFindLabelExport(&internal_66fb1f0, 0x66fb28c);
extern "C" void const* const public_66fb2ac = __AsmFindLabelExport(&internal_66fb1f0, 0x66fb2ac);
