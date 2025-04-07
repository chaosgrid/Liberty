#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c25e30);
CLANG_FORWARD_PROC_SYMBOL(public_6c29000);
CLANG_FORWARD_PROC_SYMBOL(public_6c34eac);

#define public_6c25e5c _public_6c25e5c
#define public_6c25e6a _public_6c25e6a
#define public_6c25e78 _public_6c25e78
#define public_6c25e86 _public_6c25e86
#define public_6c25e94 _public_6c25e94
#define public_6c25ea2 _public_6c25ea2
#define public_6c25ece _public_6c25ece
#define public_6c25edc _public_6c25edc
#define public_6c25eea _public_6c25eea
#define public_6c25ef8 _public_6c25ef8
#define public_6c25f06 _public_6c25f06
#define public_6c25f14 _public_6c25f14
#define public_6c25f2e _public_6c25f2e
#define public_6c25f3a _public_6c25f3a
#define public_6c25f78 _public_6c25f78
#define public_6c25fb0 _public_6c25fb0
#define public_6c25fb7 _public_6c25fb7
#define public_6c25fcb _public_6c25fcb
#define public_6c25fd3 _public_6c25fd3

PROC_DECLARE(0x6c25e30, internal_6c25e30, public_6c25e30);
extern "C" NAKED register_t __cdecl internal_6c25e30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x1E8]
        mov ecx, dword ptr ss : [esp+0xC]
        cmp ecx, 0x10
        push edi
        mov edi, dword ptr ds : [eax]
        mov eax, dword ptr ds : [edi+0x2C]
        ja public_6c25ea2
        je public_6c25e94
        dec ecx
        cmp ecx, 7
        ja public_6c25fd3
/*FIXUP jmp dword ptr ds : [ecx*4+public_6c25fdc] @0x6c25e55*/
  JMPTB cmp ecx, 0
  JMPTB je public_6c25e5c
  JMPTB cmp ecx, 1
  JMPTB je public_6c25e78
  JMPTB cmp ecx, 2
  JMPTB je public_6c25fd3
  JMPTB cmp ecx, 3
  JMPTB je public_6c25e86
  JMPTB cmp ecx, 4
  JMPTB je public_6c25fd3
  JMPTB cmp ecx, 5
  JMPTB je public_6c25fd3
  JMPTB cmp ecx, 6
  JMPTB je public_6c25fd3
  JMPTB cmp ecx, 7
  JMPTB je public_6c25e6a
  JMPTB int 3
        public_6c25e5c : nop
        mov edi, dword ptr ds : [eax+0x10]
        lea ebx, ds:[esi+0x1F0]
        jmp public_6c25f3a
        public_6c25e6a : nop
        mov edi, dword ptr ds : [eax+0x24]
        lea ebx, ds:[esi+0x1F4]
        jmp public_6c25f3a
        public_6c25e78 : nop
        mov edi, dword ptr ds : [eax+0x4C]
        lea ebx, ds:[esi+0x1F8]
        jmp public_6c25f3a
        public_6c25e86 : nop
        mov edi, dword ptr ds : [eax+0x60]
        lea ebx, ds:[esi+0x1FC]
        jmp public_6c25f3a
        public_6c25e94 : nop
        mov edi, dword ptr ds : [eax+0x38]
        lea ebx, ds:[esi+0x200]
        jmp public_6c25f3a
        public_6c25ea2 : nop
        cmp ecx, 0x10000
        ja public_6c25f14
        je public_6c25ef8
        cmp ecx, 0x4000
        je public_6c25edc
        cmp ecx, 0x8000
        jne public_6c25fd3
        mov eax, dword ptr ds : [edi+0x38]
        test eax, eax
        jne public_6c25ece
        mov ecx, edi
        call public_6c29000
        public_6c25ece : nop
        mov ecx, dword ptr ds : [edi+0x38]
        mov edi, dword ptr ds : [ecx+0x20]
        lea ebx, ds:[esi+0x20C]
        jmp public_6c25f3a
        public_6c25edc : nop
        mov eax, dword ptr ds : [edi+0x38]
        test eax, eax
        jne public_6c25eea
        mov ecx, edi
        call public_6c29000
        public_6c25eea : nop
        mov edx, dword ptr ds : [edi+0x38]
        mov edi, dword ptr ds : [edx+0xC]
        lea ebx, ds:[esi+0x208]
        jmp public_6c25f3a
        public_6c25ef8 : nop
        mov eax, dword ptr ds : [edi+0x38]
        test eax, eax
        jne public_6c25f06
        mov ecx, edi
        call public_6c29000
        public_6c25f06 : nop
        mov eax, dword ptr ds : [edi+0x38]
        mov edi, dword ptr ds : [eax+0x34]
        lea ebx, ds:[esi+0x210]
        jmp public_6c25f3a
        public_6c25f14 : nop
        cmp ecx, 0x20000
        jne public_6c25fd3
        mov eax, dword ptr ds : [edi+0x38]
        test eax, eax
        jne public_6c25f2e
        mov ecx, edi
        call public_6c29000
        public_6c25f2e : nop
        mov ecx, dword ptr ds : [edi+0x38]
        mov edi, dword ptr ds : [ecx+0x48]
        lea ebx, ds:[esi+0x214]
        public_6c25f3a : nop
        test edi, edi
        je public_6c25fd3
        mov edx, dword ptr ds : [esi+0x1E8]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax+0x1C]
        shl ecx, 1
        push ecx
        call public_6c34eac
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi+0x1E8]
        mov esi, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [esi+0x10]
        lea edx, ds:[edi+ecx*4]
        mov ecx, eax
        mov eax, dword ptr ds : [esi+0x18]
        mov esi, dword ptr ds : [esi+0x1C]
        lea esi, ds:[eax+esi*2-6]
        add esp, 4
        cmp eax, esi
        jae public_6c25fb0
        public_6c25f78 : nop
        movzx edi, word ptr ds : [eax]
        mov di, word ptr ds : [edx+edi*4]
        mov word ptr ds : [ecx], di
        movzx edi, word ptr ds : [eax+2]
        mov di, word ptr ds : [edx+edi*4]
        mov word ptr ds : [ecx+2], di
        movzx edi, word ptr ds : [eax+4]
        mov di, word ptr ds : [edx+edi*4]
        mov word ptr ds : [ecx+4], di
        movzx edi, word ptr ds : [eax+6]
        mov di, word ptr ds : [edx+edi*4]
        mov word ptr ds : [ecx+6], di
        add eax, 8
        add ecx, 8
        cmp eax, esi
        jb public_6c25f78
        public_6c25fb0 : nop
        add esi, 6
        cmp eax, esi
        jae public_6c25fcb
        public_6c25fb7 : nop
        movzx edi, word ptr ds : [eax]
        mov di, word ptr ds : [edx+edi*4]
        mov word ptr ds : [ecx], di
        add eax, 2
        add ecx, 2
        cmp eax, esi
        jb public_6c25fb7
        public_6c25fcb : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 4
        public_6c25fd3 : nop
        pop edi
        pop esi
        or eax, 0xFFFFFFFF
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6c25e30)
        ASM_EXPORT_ENTRY_FIRST(0x6c25e5c, public_6c25e5c)
        ASM_EXPORT_ENTRY(0x6c25e6a, public_6c25e6a)
        ASM_EXPORT_ENTRY(0x6c25e78, public_6c25e78)
        ASM_EXPORT_ENTRY(0x6c25e86, public_6c25e86)
        ASM_EXPORT_ENTRY_LAST(0x6c25fd3, public_6c25fd3)
    }
}

#undef public_6c25e5c
#undef public_6c25e6a
#undef public_6c25e78
#undef public_6c25e86
#undef public_6c25e94
#undef public_6c25ea2
#undef public_6c25ece
#undef public_6c25edc
#undef public_6c25eea
#undef public_6c25ef8
#undef public_6c25f06
#undef public_6c25f14
#undef public_6c25f2e
#undef public_6c25f3a
#undef public_6c25f78
#undef public_6c25fb0
#undef public_6c25fb7
#undef public_6c25fcb
#undef public_6c25fd3

#pragma init_seg(compiler)
extern "C" void const* const public_6c25e5c = __AsmFindLabelExport(&internal_6c25e30, 0x6c25e5c);
extern "C" void const* const public_6c25e6a = __AsmFindLabelExport(&internal_6c25e30, 0x6c25e6a);
extern "C" void const* const public_6c25e78 = __AsmFindLabelExport(&internal_6c25e30, 0x6c25e78);
extern "C" void const* const public_6c25e86 = __AsmFindLabelExport(&internal_6c25e30, 0x6c25e86);
extern "C" void const* const public_6c25fd3 = __AsmFindLabelExport(&internal_6c25e30, 0x6c25fd3);
