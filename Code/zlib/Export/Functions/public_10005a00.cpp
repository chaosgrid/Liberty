#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10004010);
CLANG_FORWARD_PROC_SYMBOL(public_10004130);
CLANG_FORWARD_PROC_SYMBOL(public_10005a00);

#define public_10005a50 _public_10005a50
#define public_10005a57 _public_10005a57
#define public_10005aa5 _public_10005aa5
#define public_10005ac7 _public_10005ac7
#define public_10005acd _public_10005acd
#define public_10005b22 _public_10005b22
#define public_10005b38 _public_10005b38
#define public_10005b68 _public_10005b68
#define public_10005b6e _public_10005b6e
#define public_10005ba2 _public_10005ba2
#define public_10005ba8 _public_10005ba8
#define public_10005bdc _public_10005bdc
#define public_10005c11 _public_10005c11
#define public_10005c47 _public_10005c47
#define public_10005c84 _public_10005c84
#define public_10005c8a _public_10005c8a
#define public_10005c98 _public_10005c98
#define public_10005ca4 _public_10005ca4
#define public_10005cad _public_10005cad
#define public_10005cb6 _public_10005cb6
#define public_10005ce6 _public_10005ce6
#define public_10005d18 _public_10005d18
#define public_10005d42 _public_10005d42
#define public_10005d80 _public_10005d80
#define public_10005da6 _public_10005da6
#define public_10005daf _public_10005daf
#define public_10005dbb _public_10005dbb

PROC_DECLARE(0x10005a00, internal_10005a00, public_10005a00);
extern "C" NAKED register_t __cdecl internal_10005a00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        test esi, esi
        push edi
        je public_10005c98
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        je public_10005c98
        cmp dword ptr ds : [esi], 0
        je public_10005c98
        mov ebx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [eax]
        xor ecx, ecx
        cmp ebx, 4
        setne cl
        mov edi, 0xFFFFFFFB
        dec ecx
        and ecx, 0xFFFFFFFB
        cmp eax, 0xD
        mov ebp, ecx
        ja public_10005c98
        mov ebx, 5
        jmp public_10005a50
        lea ecx, ds:[ecx]
/*FIXUP public_10005a50 : nop
        jmp dword ptr ds : [eax*4+public_10005dc8] @0x10005a50*/
  JMPTB public_10005a50 : nop
        cmp eax, 0
  JMPTB je public_10005a57
  JMPTB cmp eax, 1
  JMPTB je public_10005acd
  JMPTB cmp eax, 2
  JMPTB je public_10005cb6
  JMPTB cmp eax, 3
  JMPTB je public_10005ce6
  JMPTB cmp eax, 4
  JMPTB je public_10005d18
  JMPTB cmp eax, 5
  JMPTB je public_10005d42
  JMPTB cmp eax, 6
  JMPTB je public_10005d80
  JMPTB cmp eax, 7
  JMPTB je public_10005b38
  JMPTB cmp eax, 8
  JMPTB je public_10005ba8
  JMPTB cmp eax, 9
  JMPTB je public_10005bdc
  JMPTB cmp eax, 0xA
  JMPTB je public_10005c11
  JMPTB cmp eax, 0xB
  JMPTB je public_10005c47
  JMPTB cmp eax, 0xC
  JMPTB je public_10005daf
  JMPTB cmp eax, 0xD
  JMPTB je public_10005dbb
  JMPTB int 3
        public_10005a57 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_10005ca4
        mov edx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+0x1C]
        dec eax
        inc edx
        mov dword ptr ds : [esi+8], edx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [esi+4], eax
        movzx eax, byte ptr ds : [edx]
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ds : [esi+0x1C]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [esi]
        and dl, 0xF
        inc ecx
        cmp dl, 8
        mov edi, ebp
        mov dword ptr ds : [esi], ecx
        je public_10005aa5
        mov dword ptr ds : [eax], 0xD
        mov eax, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [esi+0x18], offset public_1000b2a4
        mov dword ptr ds : [eax+4], ebx
        jmp public_10005c8a
        public_10005aa5 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax+0x10]
        shr ecx, 4
        add ecx, 8
        cmp ecx, edx
        jbe public_10005ac7
        mov dword ptr ds : [eax], 0xD
        mov dword ptr ds : [esi+0x18], offset public_1000b290
        jmp public_10005c84
        public_10005ac7 : nop
        mov dword ptr ds : [eax], 1
        public_10005acd : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_10005ca4
        mov ecx, dword ptr ds : [esi+0x1C]
        dec eax
        mov dword ptr ds : [esi+4], eax
        inc dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi]
        movzx edx, byte ptr ds : [eax]
        inc eax
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ds : [ecx+4]
        shl eax, 8
        add eax, edx
        mov dword ptr ss : [esp+0x14], edx
        xor edx, edx
        mov ebx, 0x1F
        div ebx
        mov edi, ebp
        mov ebx, 5
        test edx, edx
        je public_10005b22
        mov dword ptr ds : [ecx], 0xD
        mov eax, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [esi+0x18], offset public_1000b278
        mov dword ptr ds : [eax+4], ebx
        jmp public_10005c8a
        public_10005b22 : nop
        test byte ptr ss : [esp+0x14], 0x20
        jne public_10005cad
        mov dword ptr ds : [ecx], 7
        jmp public_10005c8a
        public_10005b38 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        mov edx, dword ptr ds : [ecx+0x14]
        push edi
        push esi
        push edx
        call public_10004130
        mov edi, eax
        add esp, 0xC
        cmp edi, 0xFFFFFFFD
        jne public_10005b68
        mov eax, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [eax], 0xD
        mov ecx, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [ecx+4], 0
        jmp public_10005c8a
        public_10005b68 : nop
        test edi, edi
        jne public_10005b6e
        mov edi, ebp
        public_10005b6e : nop
        cmp edi, 1
        jne public_10005ca4
        mov eax, dword ptr ds : [esi+0x1C]
        lea edx, ds:[eax+4]
        mov eax, dword ptr ds : [eax+0x14]
        push edx
        push esi
        push eax
        mov edi, ebp
        call public_10004010
        mov eax, dword ptr ds : [esi+0x1C]
        mov ecx, dword ptr ds : [eax+0xC]
        add esp, 0xC
        test ecx, ecx
        je public_10005ba2
        mov dword ptr ds : [eax], 0xC
        jmp public_10005c8a
        public_10005ba2 : nop
        mov dword ptr ds : [eax], 8
        public_10005ba8 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_10005ca4
        mov edx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi]
        dec eax
        mov dword ptr ds : [esi+4], eax
        mov eax, dword ptr ds : [esi+0x1C]
        inc edx
        mov dword ptr ds : [esi+8], edx
        movzx edx, byte ptr ds : [ecx]
        shl edx, 0x18
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+0x1C]
        inc eax
        mov dword ptr ds : [esi], eax
        mov edi, ebp
        mov dword ptr ds : [ecx], 9
        public_10005bdc : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_10005ca4
        mov edx, dword ptr ds : [esi]
        dec eax
        mov dword ptr ds : [esi+4], eax
        inc dword ptr ds : [esi+8]
        movzx ecx, byte ptr ds : [edx]
        mov eax, dword ptr ds : [esi+0x1C]
        mov edx, dword ptr ds : [eax+8]
        shl ecx, 0x10
        add edx, ecx
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+0x1C]
        inc eax
        mov dword ptr ds : [esi], eax
        mov edi, ebp
        mov dword ptr ds : [edx], 0xA
        public_10005c11 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_10005ca4
        mov edx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi]
        dec eax
        mov dword ptr ds : [esi+4], eax
        mov eax, dword ptr ds : [esi+0x1C]
        inc edx
        mov dword ptr ds : [esi+8], edx
        movzx edx, byte ptr ds : [ecx]
        mov ecx, dword ptr ds : [eax+8]
        shl edx, 8
        add ecx, edx
        mov dword ptr ds : [eax+8], ecx
        inc dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+0x1C]
        mov edi, ebp
        mov dword ptr ds : [eax], 0xB
        public_10005c47 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_10005ca4
        mov edx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi]
        dec eax
        mov dword ptr ds : [esi+4], eax
        mov eax, dword ptr ds : [esi+0x1C]
        inc edx
        mov dword ptr ds : [esi+8], edx
        movzx edx, byte ptr ds : [ecx]
        add dword ptr ds : [eax+8], edx
        inc dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+0x1C]
        mov ecx, dword ptr ds : [eax+4]
        cmp ecx, dword ptr ds : [eax+8]
        mov edi, ebp
        je public_10005da6
        mov dword ptr ds : [eax], 0xD
        mov dword ptr ds : [esi+0x18], offset public_1000b260
        public_10005c84 : nop
        mov edx, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [edx+4], ebx
        public_10005c8a : nop
        mov eax, dword ptr ds : [esi+0x1C]
        mov eax, dword ptr ds : [eax]
        cmp eax, 0xD
        jbe public_10005a50
        public_10005c98 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFE
        pop ebx
        ret 8
        public_10005ca4 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
        public_10005cad : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [ecx], 2
        public_10005cb6 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_10005ca4
        mov edx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+0x1C]
        dec eax
        inc edx
        mov dword ptr ds : [esi+8], edx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [esi+4], eax
        movzx eax, byte ptr ds : [edx]
        shl eax, 0x18
        mov dword ptr ds : [ecx+8], eax
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+0x1C]
        inc eax
        mov dword ptr ds : [esi], eax
        mov edi, ebp
        mov dword ptr ds : [edx], 3
        public_10005ce6 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_10005ca4
        mov edx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi]
        dec eax
        mov dword ptr ds : [esi+4], eax
        mov eax, dword ptr ds : [esi+0x1C]
        inc edx
        mov dword ptr ds : [esi+8], edx
        movzx edx, byte ptr ds : [ecx]
        mov ecx, dword ptr ds : [eax+8]
        shl edx, 0x10
        add ecx, edx
        mov dword ptr ds : [eax+8], ecx
        inc dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+0x1C]
        mov edi, ebp
        mov dword ptr ds : [eax], 4
        public_10005d18 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_10005ca4
        mov ecx, dword ptr ds : [esi]
        dec eax
        mov dword ptr ds : [esi+4], eax
        inc dword ptr ds : [esi+8]
        movzx edx, byte ptr ds : [ecx]
        mov eax, dword ptr ds : [esi+0x1C]
        mov ecx, dword ptr ds : [eax+8]
        shl edx, 8
        add ecx, edx
        mov dword ptr ds : [eax+8], ecx
        inc dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+0x1C]
        mov edi, ebp
        mov dword ptr ds : [eax], ebx
        public_10005d42 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_10005ca4
        mov edx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi]
        dec eax
        mov dword ptr ds : [esi+4], eax
        mov eax, dword ptr ds : [esi+0x1C]
        inc edx
        mov dword ptr ds : [esi+8], edx
        movzx edx, byte ptr ds : [ecx]
        add dword ptr ds : [eax+8], edx
        inc dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+0x1C]
        mov ecx, dword ptr ds : [eax+8]
        pop edi
        mov dword ptr ds : [esi+0x30], ecx
        pop esi
        pop ebp
        mov dword ptr ds : [eax], 6
        mov eax, 2
        pop ebx
        ret 8
        public_10005d80 : nop
        mov edx, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [edx], 0xD
        mov eax, dword ptr ds : [esi+0x1C]
        pop edi
        mov dword ptr ds : [esi+0x18], offset public_1000b250
        pop esi
        pop ebp
        mov dword ptr ds : [eax+4], 0
        mov eax, 0xFFFFFFFE
        pop ebx
        ret 8
        public_10005da6 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [ecx], 0xC
        public_10005daf : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ret 8
        public_10005dbb : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x10005a00)
        ASM_EXPORT_ENTRY_FIRST(0x10005a57, public_10005a57)
        ASM_EXPORT_ENTRY(0x10005acd, public_10005acd)
        ASM_EXPORT_ENTRY(0x10005b38, public_10005b38)
        ASM_EXPORT_ENTRY(0x10005ba8, public_10005ba8)
        ASM_EXPORT_ENTRY(0x10005bdc, public_10005bdc)
        ASM_EXPORT_ENTRY(0x10005c11, public_10005c11)
        ASM_EXPORT_ENTRY(0x10005c47, public_10005c47)
        ASM_EXPORT_ENTRY(0x10005cb6, public_10005cb6)
        ASM_EXPORT_ENTRY(0x10005ce6, public_10005ce6)
        ASM_EXPORT_ENTRY(0x10005d18, public_10005d18)
        ASM_EXPORT_ENTRY(0x10005d42, public_10005d42)
        ASM_EXPORT_ENTRY(0x10005d80, public_10005d80)
        ASM_EXPORT_ENTRY(0x10005daf, public_10005daf)
        ASM_EXPORT_ENTRY_LAST(0x10005dbb, public_10005dbb)
    }
}

#undef public_10005a50
#undef public_10005a57
#undef public_10005aa5
#undef public_10005ac7
#undef public_10005acd
#undef public_10005b22
#undef public_10005b38
#undef public_10005b68
#undef public_10005b6e
#undef public_10005ba2
#undef public_10005ba8
#undef public_10005bdc
#undef public_10005c11
#undef public_10005c47
#undef public_10005c84
#undef public_10005c8a
#undef public_10005c98
#undef public_10005ca4
#undef public_10005cad
#undef public_10005cb6
#undef public_10005ce6
#undef public_10005d18
#undef public_10005d42
#undef public_10005d80
#undef public_10005da6
#undef public_10005daf
#undef public_10005dbb

#pragma init_seg(compiler)
extern "C" void const* const public_10005a57 = __AsmFindLabelExport(&internal_10005a00, 0x10005a57);
extern "C" void const* const public_10005acd = __AsmFindLabelExport(&internal_10005a00, 0x10005acd);
extern "C" void const* const public_10005b38 = __AsmFindLabelExport(&internal_10005a00, 0x10005b38);
extern "C" void const* const public_10005ba8 = __AsmFindLabelExport(&internal_10005a00, 0x10005ba8);
extern "C" void const* const public_10005bdc = __AsmFindLabelExport(&internal_10005a00, 0x10005bdc);
extern "C" void const* const public_10005c11 = __AsmFindLabelExport(&internal_10005a00, 0x10005c11);
extern "C" void const* const public_10005c47 = __AsmFindLabelExport(&internal_10005a00, 0x10005c47);
extern "C" void const* const public_10005cb6 = __AsmFindLabelExport(&internal_10005a00, 0x10005cb6);
extern "C" void const* const public_10005ce6 = __AsmFindLabelExport(&internal_10005a00, 0x10005ce6);
extern "C" void const* const public_10005d18 = __AsmFindLabelExport(&internal_10005a00, 0x10005d18);
extern "C" void const* const public_10005d42 = __AsmFindLabelExport(&internal_10005a00, 0x10005d42);
extern "C" void const* const public_10005d80 = __AsmFindLabelExport(&internal_10005a00, 0x10005d80);
extern "C" void const* const public_10005daf = __AsmFindLabelExport(&internal_10005a00, 0x10005daf);
extern "C" void const* const public_10005dbb = __AsmFindLabelExport(&internal_10005a00, 0x10005dbb);
