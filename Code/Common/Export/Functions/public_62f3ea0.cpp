#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6266790);
CLANG_FORWARD_PROC_SYMBOL(public_626daa0);
CLANG_FORWARD_PROC_SYMBOL(public_626dd20);
CLANG_FORWARD_PROC_SYMBOL(public_626df50);
CLANG_FORWARD_PROC_SYMBOL(public_626e0a0);
CLANG_FORWARD_PROC_SYMBOL(public_626e8d0);
CLANG_FORWARD_PROC_SYMBOL(public_626f3e0);
CLANG_FORWARD_PROC_SYMBOL(public_626f5f0);
CLANG_FORWARD_PROC_SYMBOL(public_626f790);
CLANG_FORWARD_PROC_SYMBOL(public_62f3ea0);

#define public_62f3ede _public_62f3ede
#define public_62f3ef8 _public_62f3ef8
#define public_62f3f05 _public_62f3f05
#define public_62f3f2a _public_62f3f2a
#define public_62f3f73 _public_62f3f73
#define public_62f3f80 _public_62f3f80
#define public_62f3fff _public_62f3fff
#define public_62f4024 _public_62f4024
#define public_62f4079 _public_62f4079
#define public_62f40a8 _public_62f40a8
#define public_62f4106 _public_62f4106
#define public_62f4113 _public_62f4113
#define public_62f412c _public_62f412c
#define public_62f414b _public_62f414b
#define public_62f4161 _public_62f4161
#define public_62f4177 _public_62f4177
#define public_62f4187 _public_62f4187
#define public_62f4191 _public_62f4191
#define public_62f419b _public_62f419b
#define public_62f41a5 _public_62f41a5
#define public_62f41af _public_62f41af
#define public_62f41b9 _public_62f41b9
#define public_62f41c3 _public_62f41c3
#define public_62f41cd _public_62f41cd
#define public_62f41d5 _public_62f41d5
#define public_62f41e8 _public_62f41e8
#define public_62f41ec _public_62f41ec

PROC_DECLARE(0x62f3ea0, internal_62f3ea0, public_62f3ea0);
extern "C" NAKED register_t __cdecl internal_62f3ea0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi]
        push edi
        mov ecx, esi
        call dword ptr ds : [eax+0x10]
        mov edi, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        mov ebx, eax
        call dword ptr ds : [edx+0x10]
        cmp ebx, eax
        jne public_62f41ec
        push ebp
        mov ebp, dword ptr ds : [esi+4]
        test ebp, ebp
        je public_62f3ede
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax]
        mov eax, dword ptr ds : [edi+4]
        mov edx, dword ptr ss : [ebp]
        push eax
        mov ecx, ebp
        call dword ptr ds : [edx+0x1C]
        public_62f3ede : nop
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ebx-8]
        cmp eax, 0x19
        mov dword ptr ss : [esp+0x14], ecx
        ja public_62f41d5
/*FIXUP jmp dword ptr ds : [eax*4+public_62f41f0] @0x62f3ef1*/
  JMPTB cmp eax, 0
  JMPTB je public_62f3ef8
  JMPTB cmp eax, 1
  JMPTB je public_62f3f73
  JMPTB cmp eax, 2
  JMPTB je public_62f412c
  JMPTB cmp eax, 3
  JMPTB je public_62f3f05
  JMPTB cmp eax, 4
  JMPTB je public_62f3f2a
  JMPTB cmp eax, 5
  JMPTB je public_62f3f73
  JMPTB cmp eax, 6
  JMPTB je public_62f3f80
  JMPTB cmp eax, 7
  JMPTB je public_62f3fff
  JMPTB cmp eax, 8
  JMPTB je public_62f4024
  JMPTB cmp eax, 9
  JMPTB je public_62f4079
  JMPTB cmp eax, 0xA
  JMPTB je public_62f4106
  JMPTB cmp eax, 0xB
  JMPTB je public_62f4113
  JMPTB cmp eax, 0xC
  JMPTB je public_62f412c
  JMPTB cmp eax, 0xD
  JMPTB je public_62f414b
  JMPTB cmp eax, 0xE
  JMPTB je public_62f4161
  JMPTB cmp eax, 0xF
  JMPTB je public_62f3ef8
  JMPTB cmp eax, 0x10
  JMPTB je public_62f4177
  JMPTB cmp eax, 0x11
  JMPTB je public_62f4191
  JMPTB cmp eax, 0x12
  JMPTB je public_62f419b
  JMPTB cmp eax, 0x13
  JMPTB je public_62f41a5
  JMPTB cmp eax, 0x14
  JMPTB je public_62f41af
  JMPTB cmp eax, 0x15
  JMPTB je public_62f4187
  JMPTB cmp eax, 0x16
  JMPTB je public_62f41d5
  JMPTB cmp eax, 0x17
  JMPTB je public_62f41b9
  JMPTB cmp eax, 0x18
  JMPTB je public_62f41c3
  JMPTB cmp eax, 0x19
  JMPTB je public_62f41cd
  JMPTB int 3
        public_62f3ef8 : nop
        push edi
        mov ecx, esi
        call public_626daa0
        jmp public_62f41d5
        public_62f3f05 : nop
        push edi
        mov ecx, esi
        call public_626daa0
        mov edx, dword ptr ds : [edi+0x70]
        mov dword ptr ds : [esi+0x70], edx
        mov eax, dword ptr ds : [edi+0x74]
        mov dword ptr ds : [esi+0x74], eax
        mov ecx, dword ptr ds : [edi+0x78]
        mov dword ptr ds : [esi+0x78], ecx
        mov edx, dword ptr ds : [edi+0x7C]
        mov dword ptr ds : [esi+0x7C], edx
        jmp public_62f41d5
        public_62f3f2a : nop
        push edi
        mov ecx, esi
        call public_626daa0
        mov eax, dword ptr ds : [edi+0x70]
        mov dword ptr ds : [esi+0x70], eax
        mov ecx, dword ptr ds : [edi+0x74]
        mov dword ptr ds : [esi+0x74], ecx
        mov edx, dword ptr ds : [edi+0x78]
        mov dword ptr ds : [esi+0x78], edx
        mov eax, dword ptr ds : [edi+0x7C]
        mov dword ptr ds : [esi+0x7C], eax
        mov ecx, dword ptr ds : [edi+0x80]
        mov dword ptr ds : [esi+0x80], ecx
        mov dl, byte ptr ds : [edi+0x84]
        mov byte ptr ds : [esi+0x84], dl
        mov eax, dword ptr ds : [edi+0x88]
        mov dword ptr ds : [esi+0x88], eax
        jmp public_62f41d5
        public_62f3f73 : nop
        push edi
        mov ecx, esi
        call public_626df50
        jmp public_62f41d5
        public_62f3f80 : nop
        push edi
        mov ecx, esi
        call public_626df50
        mov ecx, dword ptr ds : [edi+0x88]
        mov dword ptr ds : [esi+0x88], ecx
        mov edx, dword ptr ds : [edi+0x8C]
        mov dword ptr ds : [esi+0x8C], edx
        mov eax, dword ptr ds : [edi+0x90]
        mov dword ptr ds : [esi+0x90], eax
        mov ecx, dword ptr ds : [edi+0x94]
        mov dword ptr ds : [esi+0x94], ecx
        mov edx, dword ptr ds : [edi+0x98]
        mov dword ptr ds : [esi+0x98], edx
        mov eax, dword ptr ds : [edi+0x9C]
        mov dword ptr ds : [esi+0x9C], eax
        mov ecx, dword ptr ds : [edi+0xA0]
        mov dword ptr ds : [esi+0xA0], ecx
        mov edx, dword ptr ds : [edi+0xA4]
        add edi, 0xA8
        push edi
        lea ecx, ds:[esi+0xA8]
        mov dword ptr ds : [esi+0xA4], edx
        call public_6266790
        jmp public_62f41d5
        public_62f3fff : nop
        push edi
        mov ecx, esi
        call public_626df50
        mov eax, dword ptr ds : [edi+0x88]
        mov dword ptr ds : [esi+0x88], eax
        mov ecx, dword ptr ds : [edi+0x8C]
        mov dword ptr ds : [esi+0x8C], ecx
        jmp public_62f41d5
        public_62f4024 : nop
        push edi
        mov ecx, esi
        call public_626df50
        mov edx, dword ptr ds : [edi+0x88]
        mov dword ptr ds : [esi+0x88], edx
        mov eax, dword ptr ds : [edi+0x8C]
        mov dword ptr ds : [esi+0x8C], eax
        mov ecx, dword ptr ds : [edi+0x90]
        mov dword ptr ds : [esi+0x90], ecx
        mov edx, dword ptr ds : [edi+0x94]
        mov dword ptr ds : [esi+0x94], edx
        mov eax, dword ptr ds : [edi+0x98]
        mov dword ptr ds : [esi+0x98], eax
        mov ecx, dword ptr ds : [edi+0x9C]
        mov dword ptr ds : [esi+0x9C], ecx
        jmp public_62f41d5
        public_62f4079 : nop
        push edi
        mov ecx, esi
        call public_626e8d0
        mov edx, dword ptr ds : [edi+0xA0]
        mov dword ptr ds : [esi+0xA0], edx
        mov eax, dword ptr ds : [edi+0xA4]
        mov ecx, edi
        mov dword ptr ds : [esi+0xA4], eax
        lea eax, ds:[esi+0xA8]
        sub ecx, esi
        mov edx, 4
        public_62f40a8 : nop
        mov ebx, dword ptr ds : [ecx+eax]
        mov dword ptr ds : [eax], ebx
        add eax, 4
        dec edx
        jne public_62f40a8
        mov cl, byte ptr ds : [edi+0xB8]
        mov byte ptr ds : [esi+0xB8], cl
        mov dl, byte ptr ds : [edi+0xB9]
        lea ecx, ds:[edi+0xBC]
        mov byte ptr ds : [esi+0xB9], dl
        mov al, byte ptr ds : [edi+0xBA]
        push ecx
        lea ecx, ds:[esi+0xBC]
        mov byte ptr ds : [esi+0xBA], al
        call public_6266790
        mov dl, byte ptr ds : [edi+0xCC]
        mov byte ptr ds : [esi+0xCC], dl
        mov eax, dword ptr ds : [edi+0xD0]
        mov dword ptr ds : [esi+0xD0], eax
        jmp public_62f41d5
        public_62f4106 : nop
        push edi
        mov ecx, esi
        call public_626e8d0
        jmp public_62f41d5
        public_62f4113 : nop
        push edi
        mov ecx, esi
        call public_626e8d0
        mov ecx, dword ptr ds : [edi+0xA0]
        mov dword ptr ds : [esi+0xA0], ecx
        jmp public_62f41d5
        public_62f412c : nop
        push edi
        mov ecx, esi
        call public_626daa0
        mov edx, dword ptr ds : [edi+0x70]
        mov dword ptr ds : [esi+0x70], edx
        mov eax, dword ptr ds : [edi+0x74]
        mov dword ptr ds : [esi+0x74], eax
        mov ecx, dword ptr ds : [edi+0x78]
        mov dword ptr ds : [esi+0x78], ecx
        jmp public_62f41d5
        public_62f414b : nop
        push edi
        mov ecx, esi
        call public_626daa0
        mov dl, byte ptr ds : [edi+0x70]
        mov byte ptr ds : [esi+0x70], dl
        mov al, byte ptr ds : [edi+0x71]
        mov byte ptr ds : [esi+0x71], al
        jmp public_62f41d5
        public_62f4161 : nop
        push edi
        mov ecx, esi
        call public_626daa0
        mov ecx, dword ptr ds : [edi+0x70]
        mov dword ptr ds : [esi+0x70], ecx
        mov edx, dword ptr ds : [edi+0x74]
        mov dword ptr ds : [esi+0x74], edx
        jmp public_62f41d5
        public_62f4177 : nop
        push edi
        mov ecx, esi
        call public_626daa0
        mov eax, dword ptr ds : [edi+0x70]
        mov dword ptr ds : [esi+0x70], eax
        jmp public_62f41d5
        public_62f4187 : nop
        push edi
        mov ecx, esi
        call public_626daa0
        jmp public_62f41d5
        public_62f4191 : nop
        push edi
        mov ecx, esi
        call public_626dd20
        jmp public_62f41d5
        public_62f419b : nop
        push edi
        mov ecx, esi
        call public_626dd20
        jmp public_62f41d5
        public_62f41a5 : nop
        push edi
        mov ecx, esi
        call public_626dd20
        jmp public_62f41d5
        public_62f41af : nop
        push edi
        mov ecx, esi
        call public_626e0a0
        jmp public_62f41d5
        public_62f41b9 : nop
        push edi
        mov ecx, esi
        call public_626f3e0
        jmp public_62f41d5
        public_62f41c3 : nop
        push edi
        mov ecx, esi
        call public_626f5f0
        jmp public_62f41d5
        public_62f41cd : nop
        push edi
        mov ecx, esi
        call public_626f790
        public_62f41d5 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi+8], ecx
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_62f41e8
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        public_62f41e8 : nop
        mov dword ptr ds : [esi+4], ebp
        pop ebp
        public_62f41ec : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x62f3ea0)
        ASM_EXPORT_ENTRY_FIRST(0x62f3ef8, public_62f3ef8)
        ASM_EXPORT_ENTRY(0x62f3f05, public_62f3f05)
        ASM_EXPORT_ENTRY(0x62f3f2a, public_62f3f2a)
        ASM_EXPORT_ENTRY(0x62f3f73, public_62f3f73)
        ASM_EXPORT_ENTRY(0x62f3f80, public_62f3f80)
        ASM_EXPORT_ENTRY(0x62f3fff, public_62f3fff)
        ASM_EXPORT_ENTRY(0x62f4024, public_62f4024)
        ASM_EXPORT_ENTRY(0x62f4079, public_62f4079)
        ASM_EXPORT_ENTRY(0x62f4106, public_62f4106)
        ASM_EXPORT_ENTRY(0x62f4113, public_62f4113)
        ASM_EXPORT_ENTRY(0x62f412c, public_62f412c)
        ASM_EXPORT_ENTRY(0x62f414b, public_62f414b)
        ASM_EXPORT_ENTRY(0x62f4161, public_62f4161)
        ASM_EXPORT_ENTRY(0x62f4177, public_62f4177)
        ASM_EXPORT_ENTRY(0x62f4187, public_62f4187)
        ASM_EXPORT_ENTRY(0x62f4191, public_62f4191)
        ASM_EXPORT_ENTRY(0x62f419b, public_62f419b)
        ASM_EXPORT_ENTRY(0x62f41a5, public_62f41a5)
        ASM_EXPORT_ENTRY(0x62f41af, public_62f41af)
        ASM_EXPORT_ENTRY(0x62f41b9, public_62f41b9)
        ASM_EXPORT_ENTRY(0x62f41c3, public_62f41c3)
        ASM_EXPORT_ENTRY(0x62f41cd, public_62f41cd)
        ASM_EXPORT_ENTRY_LAST(0x62f41d5, public_62f41d5)
    }
}

#undef public_62f3ede
#undef public_62f3ef8
#undef public_62f3f05
#undef public_62f3f2a
#undef public_62f3f73
#undef public_62f3f80
#undef public_62f3fff
#undef public_62f4024
#undef public_62f4079
#undef public_62f40a8
#undef public_62f4106
#undef public_62f4113
#undef public_62f412c
#undef public_62f414b
#undef public_62f4161
#undef public_62f4177
#undef public_62f4187
#undef public_62f4191
#undef public_62f419b
#undef public_62f41a5
#undef public_62f41af
#undef public_62f41b9
#undef public_62f41c3
#undef public_62f41cd
#undef public_62f41d5
#undef public_62f41e8
#undef public_62f41ec

#pragma init_seg(compiler)
extern "C" void const* const public_62f3ef8 = __AsmFindLabelExport(&internal_62f3ea0, 0x62f3ef8);
extern "C" void const* const public_62f3f05 = __AsmFindLabelExport(&internal_62f3ea0, 0x62f3f05);
extern "C" void const* const public_62f3f2a = __AsmFindLabelExport(&internal_62f3ea0, 0x62f3f2a);
extern "C" void const* const public_62f3f73 = __AsmFindLabelExport(&internal_62f3ea0, 0x62f3f73);
extern "C" void const* const public_62f3f80 = __AsmFindLabelExport(&internal_62f3ea0, 0x62f3f80);
extern "C" void const* const public_62f3fff = __AsmFindLabelExport(&internal_62f3ea0, 0x62f3fff);
extern "C" void const* const public_62f4024 = __AsmFindLabelExport(&internal_62f3ea0, 0x62f4024);
extern "C" void const* const public_62f4079 = __AsmFindLabelExport(&internal_62f3ea0, 0x62f4079);
extern "C" void const* const public_62f4106 = __AsmFindLabelExport(&internal_62f3ea0, 0x62f4106);
extern "C" void const* const public_62f4113 = __AsmFindLabelExport(&internal_62f3ea0, 0x62f4113);
extern "C" void const* const public_62f412c = __AsmFindLabelExport(&internal_62f3ea0, 0x62f412c);
extern "C" void const* const public_62f414b = __AsmFindLabelExport(&internal_62f3ea0, 0x62f414b);
extern "C" void const* const public_62f4161 = __AsmFindLabelExport(&internal_62f3ea0, 0x62f4161);
extern "C" void const* const public_62f4177 = __AsmFindLabelExport(&internal_62f3ea0, 0x62f4177);
extern "C" void const* const public_62f4187 = __AsmFindLabelExport(&internal_62f3ea0, 0x62f4187);
extern "C" void const* const public_62f4191 = __AsmFindLabelExport(&internal_62f3ea0, 0x62f4191);
extern "C" void const* const public_62f419b = __AsmFindLabelExport(&internal_62f3ea0, 0x62f419b);
extern "C" void const* const public_62f41a5 = __AsmFindLabelExport(&internal_62f3ea0, 0x62f41a5);
extern "C" void const* const public_62f41af = __AsmFindLabelExport(&internal_62f3ea0, 0x62f41af);
extern "C" void const* const public_62f41b9 = __AsmFindLabelExport(&internal_62f3ea0, 0x62f41b9);
extern "C" void const* const public_62f41c3 = __AsmFindLabelExport(&internal_62f3ea0, 0x62f41c3);
extern "C" void const* const public_62f41cd = __AsmFindLabelExport(&internal_62f3ea0, 0x62f41cd);
extern "C" void const* const public_62f41d5 = __AsmFindLabelExport(&internal_62f3ea0, 0x62f41d5);
