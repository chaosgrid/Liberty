#include "Shading-PCH.h"


#define public_6eb1ee2 _public_6eb1ee2
#define public_6eb1f00 _public_6eb1f00
#define public_6eb1f07 _public_6eb1f07
#define public_6eb1f2c _public_6eb1f2c
#define public_6eb1f42 _public_6eb1f42
#define public_6eb1f50 _public_6eb1f50
#define public_6eb1f56 _public_6eb1f56
#define public_6eb1f62 _public_6eb1f62
#define public_6eb1f70 _public_6eb1f70
#define public_6eb1f90 _public_6eb1f90
#define public_6eb1fb5 _public_6eb1fb5
#define public_6eb1fc8 _public_6eb1fc8
#define public_6eb1fda _public_6eb1fda
#define public_6eb1fed _public_6eb1fed
#define public_6eb1ff2 _public_6eb1ff2
#define public_6eb1ffb _public_6eb1ffb

PROC_DECLARE(0x6eb1ea0, internal_6eb1ea0, public_6eb1ea0);
extern "C" NAKED register_t __cdecl internal_6eb1ea0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ebx]
        push ebp
        push esi
        push edi
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, ebx
        call dword ptr ds : [eax+0x6C]
        mov ebp, dword ptr ss : [esp+0x18]
        cmp eax, ebp
        jbe public_6eb1ffb
        mov eax, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ss : [esp+0x1C]
        mov edx, ebp
        imul edx, 0x4C
        mov edi, dword ptr ds : [edx+eax+0x10]
        mov eax, dword ptr ds : [esi]
        cmp edi, eax
        je public_6eb1f07
        sub eax, 5
        je public_6eb1ee2
        dec eax
        je public_6eb1f2c
        dec eax
        jne public_6eb1f00
        public_6eb1ee2 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6eb1f00
        push eax
        push 0
        call dword ptr ds : [public_6ed1020]
        push eax
        call dword ptr ds : [public_6ed101c]
        mov dword ptr ds : [esi+4], 0
        public_6eb1f00 : nop
        mov dword ptr ds : [esi+4], 0
        public_6eb1f07 : nop
        mov dword ptr ds : [esi], edi
        mov edx, dword ptr ds : [ebx]
        push ebp
        mov ecx, ebx
        call dword ptr ds : [edx+0x70]
        test eax, eax
        je public_6eb1ffb
        mov ecx, dword ptr ds : [esi]
        dec ecx
        cmp ecx, 9
        ja public_6eb1ff2
/*FIXUP jmp dword ptr ds : [ecx*4+public_6eb2008] @0x6eb1f25*/
  JMPTB cmp ecx, 0
  JMPTB je public_6eb1f62
  JMPTB cmp ecx, 1
  JMPTB je public_6eb1f42
  JMPTB cmp ecx, 2
  JMPTB je public_6eb1f56
  JMPTB cmp ecx, 3
  JMPTB je public_6eb1f50
  JMPTB cmp ecx, 4
  JMPTB je public_6eb1f70
  JMPTB cmp ecx, 5
  JMPTB je public_6eb1fc8
  JMPTB cmp ecx, 6
  JMPTB je public_6eb1f70
  JMPTB cmp ecx, 7
  JMPTB je public_6eb1f62
  JMPTB cmp ecx, 8
  JMPTB je public_6eb1f42
  JMPTB cmp ecx, 9
  JMPTB je public_6eb1fed
  JMPTB int 3
        public_6eb1f2c : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        mov dword ptr ds : [esi+4], 0
        je public_6eb1f00
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        jmp public_6eb1f00
        public_6eb1f42 : nop
        mov ecx, dword ptr ds : [eax]
        pop edi
        mov dword ptr ds : [esi+4], ecx
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_6eb1f50 : nop
        mov edx, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [esi+0x10], edx
        public_6eb1f56 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ds : [esi+0xC], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+8], edx
        public_6eb1f62 : nop
        mov eax, dword ptr ds : [eax]
        pop edi
        mov dword ptr ds : [esi+4], eax
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_6eb1f70 : nop
        mov ebp, dword ptr ds : [eax]
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6eb1f90
        push eax
        push 0
        call dword ptr ds : [public_6ed1020]
        push eax
        call dword ptr ds : [public_6ed101c]
        mov dword ptr ds : [esi+4], 0
        public_6eb1f90 : nop
        test ebp, ebp
        je public_6eb1ff2
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebp
        repne scasb
        not ecx
        push ecx
        push eax
        call dword ptr ds : [public_6ed1020]
        push eax
        call dword ptr ds : [public_6ed1018]
        mov dword ptr ds : [esi+4], eax
        mov ecx, ebp
        mov edx, eax
        public_6eb1fb5 : nop
        mov al, byte ptr ds : [ecx]
        inc ecx
        mov byte ptr ds : [edx], al
        inc edx
        test al, al
        jne public_6eb1fb5
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_6eb1fc8 : nop
        mov eax, dword ptr ds : [eax]
        test eax, eax
        mov edi, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+4], eax
        je public_6eb1fda
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_6eb1fda : nop
        test edi, edi
        je public_6eb1ff2
        mov edx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [edx+8]
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_6eb1fed : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [esi+4], edx
        public_6eb1ff2 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_6eb1ffb : nop
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6eb1ea0)
        ASM_EXPORT_ENTRY_FIRST(0x6eb1f42, public_6eb1f42)
        ASM_EXPORT_ENTRY(0x6eb1f50, public_6eb1f50)
        ASM_EXPORT_ENTRY(0x6eb1f56, public_6eb1f56)
        ASM_EXPORT_ENTRY(0x6eb1f62, public_6eb1f62)
        ASM_EXPORT_ENTRY(0x6eb1f70, public_6eb1f70)
        ASM_EXPORT_ENTRY(0x6eb1fc8, public_6eb1fc8)
        ASM_EXPORT_ENTRY_LAST(0x6eb1fed, public_6eb1fed)
    }
}

#undef public_6eb1ee2
#undef public_6eb1f00
#undef public_6eb1f07
#undef public_6eb1f2c
#undef public_6eb1f42
#undef public_6eb1f50
#undef public_6eb1f56
#undef public_6eb1f62
#undef public_6eb1f70
#undef public_6eb1f90
#undef public_6eb1fb5
#undef public_6eb1fc8
#undef public_6eb1fda
#undef public_6eb1fed
#undef public_6eb1ff2
#undef public_6eb1ffb

#pragma init_seg(compiler)
extern "C" void const* const public_6eb1f42 = __AsmFindLabelExport(&internal_6eb1ea0, 0x6eb1f42);
extern "C" void const* const public_6eb1f50 = __AsmFindLabelExport(&internal_6eb1ea0, 0x6eb1f50);
extern "C" void const* const public_6eb1f56 = __AsmFindLabelExport(&internal_6eb1ea0, 0x6eb1f56);
extern "C" void const* const public_6eb1f62 = __AsmFindLabelExport(&internal_6eb1ea0, 0x6eb1f62);
extern "C" void const* const public_6eb1f70 = __AsmFindLabelExport(&internal_6eb1ea0, 0x6eb1f70);
extern "C" void const* const public_6eb1fc8 = __AsmFindLabelExport(&internal_6eb1ea0, 0x6eb1fc8);
extern "C" void const* const public_6eb1fed = __AsmFindLabelExport(&internal_6eb1ea0, 0x6eb1fed);
