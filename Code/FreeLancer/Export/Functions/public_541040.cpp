#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_541040);
CLANG_FORWARD_PROC_SYMBOL(public_541200);
CLANG_FORWARD_PROC_SYMBOL(public_542390);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_541069 _public_541069
#define public_54106b _public_54106b
#define public_541078 _public_541078
#define public_541088 _public_541088
#define public_54109f _public_54109f
#define public_5410c2 _public_5410c2
#define public_5410d7 _public_5410d7
#define public_5410e5 _public_5410e5
#define public_5410f3 _public_5410f3
#define public_541101 _public_541101
#define public_54110f _public_54110f
#define public_54111d _public_54111d
#define public_541138 _public_541138
#define public_541145 _public_541145
#define public_541150 _public_541150
#define public_541162 _public_541162
#define public_54116b _public_54116b
#define public_541197 _public_541197
#define public_5411a5 _public_5411a5
#define public_5411b3 _public_5411b3
#define public_5411c1 _public_5411c1
#define public_5411cc _public_5411cc

PROC_DECLARE(0x541040, internal_541040, public_541040);
extern "C" NAKED register_t __cdecl internal_541040()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        test ebx, ebx
        push esi
        je public_541069
        lea eax, ds:[ebx+0xC]
        test eax, eax
        je public_541069
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_541069
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_54106b
        public_541069 : nop
        xor eax, eax
        public_54106b : nop
        mov ecx, dword ptr ds : [public_678a34]
        mov esi, dword ptr ds : [ecx]
        cmp esi, ecx
        push edi
        je public_5410c2
        public_541078 : nop
        mov edx, dword ptr ds : [esi+8]
        cmp dword ptr ds : [edx+8], eax
        je public_541088
        mov esi, dword ptr ds : [esi]
        cmp esi, ecx
        jne public_541078
        jmp public_5410c2
        public_541088 : nop
        mov edi, dword ptr ds : [esi+8]
        test edi, edi
        je public_54109f
        mov ecx, edi
        call public_541200
        push edi
        call public_5b7e1d
        add esp, 4
        public_54109f : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        push esi
        mov dword ptr ds : [edx+4], eax
        call public_5b7e1d
        mov eax, dword ptr ds : [public_678a38]
        add esp, 4
        dec eax
        mov dword ptr ds : [public_678a38], eax
        public_5410c2 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        dec eax
        cmp eax, 9
        pop edi
        ja public_5411cc
/*FIXUP jmp dword ptr ds : [eax*4+public_5411d0] @0x5410d0*/
  JMPTB cmp eax, 0
  JMPTB je public_5410d7
  JMPTB cmp eax, 1
  JMPTB je public_54111d
  JMPTB cmp eax, 2
  JMPTB je public_5410e5
  JMPTB cmp eax, 3
  JMPTB je public_5410f3
  JMPTB cmp eax, 4
  JMPTB je public_541101
  JMPTB cmp eax, 5
  JMPTB je public_54110f
  JMPTB cmp eax, 6
  JMPTB je public_5411a5
  JMPTB cmp eax, 7
  JMPTB je public_5411b3
  JMPTB cmp eax, 8
  JMPTB je public_5411c1
  JMPTB cmp eax, 9
  JMPTB je public_541197
  JMPTB int 3
        public_5410d7 : nop
        mov ecx, offset public_678aa8
        push ebx
        call public_542390
        pop esi
        pop ebx
        ret 
        public_5410e5 : nop
        mov ecx, offset public_678a90
        push ebx
        call public_542390
        pop esi
        pop ebx
        ret 
        public_5410f3 : nop
        mov ecx, offset public_678a9c
        push ebx
        call public_542390
        pop esi
        pop ebx
        ret 
        public_541101 : nop
        mov ecx, offset public_678a84
        push ebx
        call public_542390
        pop esi
        pop ebx
        ret 
        public_54110f : nop
        mov ecx, offset public_678a78
        push ebx
        call public_542390
        pop esi
        pop ebx
        ret 
        public_54111d : nop
        push ebx
        mov ecx, offset public_678ab4
        call public_542390
        mov ecx, dword ptr ds : [public_678ac4]
        mov edx, dword ptr ds : [public_678ac8]
        cmp ecx, edx
        jae public_54116b
        public_541138 : nop
        cmp dword ptr ds : [ecx], ebx
        je public_541145
        add ecx, 4
        cmp ecx, edx
        jb public_541138
        jmp public_54116b
        public_541145 : nop
        lea eax, ds:[ecx+4]
        cmp eax, edx
        je public_541162
        sub ecx, eax
        mov edi, edi
        public_541150 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+eax], esi
        add eax, 4
        cmp eax, edx
        jne public_541150
        mov edx, dword ptr ds : [public_678ac8]
        public_541162 : nop
        sub edx, 4
        mov dword ptr ds : [public_678ac8], edx
        public_54116b : nop
        mov edx, dword ptr ds : [ebx]
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, ebx
        call dword ptr ds : [edx+0x88]
        test eax, eax
        jne public_5411cc
        test dword ptr ss : [esp+0xC], 0xFDFF
        je public_5411cc
        mov ecx, dword ptr ds : [public_678ae0]
        mov edx, dword ptr ds : [ecx]
        push ebx
        call dword ptr ds : [edx+0xC]
        pop esi
        pop ebx
        ret 
        public_541197 : nop
        mov ecx, offset public_678a6c
        push ebx
        call public_542390
        pop esi
        pop ebx
        ret 
        public_5411a5 : nop
        mov ecx, offset public_678a60
        push ebx
        call public_542390
        pop esi
        pop ebx
        ret 
        public_5411b3 : nop
        mov ecx, offset public_678a48
        push ebx
        call public_542390
        pop esi
        pop ebx
        ret 
        public_5411c1 : nop
        mov ecx, offset public_678a3c
        push ebx
        call public_542390
        public_5411cc : nop
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x541040)
        ASM_EXPORT_ENTRY_SINGLE(0x541197, public_541197)
    }
}

#undef public_541069
#undef public_54106b
#undef public_541078
#undef public_541088
#undef public_54109f
#undef public_5410c2
#undef public_5410d7
#undef public_5410e5
#undef public_5410f3
#undef public_541101
#undef public_54110f
#undef public_54111d
#undef public_541138
#undef public_541145
#undef public_541150
#undef public_541162
#undef public_54116b
#undef public_541197
#undef public_5411a5
#undef public_5411b3
#undef public_5411c1
#undef public_5411cc

#pragma init_seg(compiler)
extern "C" void const* const public_541197 = __AsmFindLabelExport(&internal_541040, 0x541197);
