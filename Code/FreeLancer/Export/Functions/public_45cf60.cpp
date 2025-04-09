#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45cf60);
CLANG_FORWARD_PROC_SYMBOL(public_45d770);
CLANG_FORWARD_PROC_SYMBOL(public_55e280);
CLANG_FORWARD_PROC_SYMBOL(public_55e360);
CLANG_FORWARD_PROC_SYMBOL(public_55e590);
CLANG_FORWARD_PROC_SYMBOL(public_5645c0);
CLANG_FORWARD_PROC_SYMBOL(public_59da10);

#define public_45cfb7 _public_45cfb7
#define public_45cfbe _public_45cfbe
#define public_45cfc5 _public_45cfc5
#define public_45cfcc _public_45cfcc
#define public_45cfd3 _public_45cfd3
#define public_45cfda _public_45cfda
#define public_45cfe1 _public_45cfe1
#define public_45cfe6 _public_45cfe6
#define public_45d023 _public_45d023
#define public_45d02a _public_45d02a
#define public_45d031 _public_45d031
#define public_45d038 _public_45d038
#define public_45d03f _public_45d03f
#define public_45d046 _public_45d046
#define public_45d04d _public_45d04d
#define public_45d04f _public_45d04f
#define public_45d07f _public_45d07f
#define public_45d093 _public_45d093
#define public_45d0c1 _public_45d0c1
#define public_45d0e2 _public_45d0e2
#define public_45d0e9 _public_45d0e9
#define public_45d0f0 _public_45d0f0
#define public_45d0f7 _public_45d0f7
#define public_45d0fe _public_45d0fe
#define public_45d105 _public_45d105
#define public_45d10c _public_45d10c
#define public_45d10e _public_45d10e
#define public_45d12f _public_45d12f
#define public_45d13a _public_45d13a
#define public_45d167 _public_45d167
#define public_45d184 _public_45d184
#define public_45d186 _public_45d186
#define public_45d196 _public_45d196
#define public_45d19c _public_45d19c

PROC_DECLARE(0x45cf60, internal_45cf60, public_45cf60);
extern "C" NAKED register_t __cdecl internal_45cf60()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x10
        push ebx
        push esi
        mov esi, ecx
        push edi
        lea ecx, ds:[esi+0x330]
        call public_55e280
        test al, al
        jne public_45d19c
        lea ebx, ds:[esi+0x350]
        mov ecx, ebx
        call public_55e280
        test al, al
        jne public_45d19c
        mov eax, dword ptr ds : [esi+0x3A8]
        test eax, eax
        je public_45d19c
        mov eax, dword ptr ds : [esi+0x3AC]
        add eax, 0xFFFFFF9D
        cmp eax, 7
        ja public_45d19c
/*FIXUP jmp dword ptr ds : [eax*4+public_45d1a4] @0x45cfb0*/
  JMPTB cmp eax, 0
  JMPTB je public_45cfb7
  JMPTB cmp eax, 1
  JMPTB je public_45d19c
  JMPTB cmp eax, 2
  JMPTB je public_45cfcc
  JMPTB cmp eax, 3
  JMPTB je public_45cfbe
  JMPTB cmp eax, 4
  JMPTB je public_45cfc5
  JMPTB cmp eax, 5
  JMPTB je public_45cfda
  JMPTB cmp eax, 6
  JMPTB je public_45cfe1
  JMPTB cmp eax, 7
  JMPTB je public_45cfd3
  JMPTB int 3
        public_45cfb7 : nop
        mov edi, offset public_5cb130
        jmp public_45cfe6
        public_45cfbe : nop
        mov edi, offset public_5caf68
        jmp public_45cfe6
        public_45cfc5 : nop
        mov edi, offset public_5cedc4
        jmp public_45cfe6
        public_45cfcc : nop
        mov edi, offset public_5cedb4
        jmp public_45cfe6
        public_45cfd3 : nop
        mov edi, offset public_5cedac
        jmp public_45cfe6
        public_45cfda : nop
        mov edi, offset public_5ceda0
        jmp public_45cfe6
        public_45cfe1 : nop
        mov edi, offset public_5ced90
        public_45cfe6 : nop
        push 0x1B
        call public_5645c0
        mov eax, dword ptr ds : [esi+0x3A8]
        mov ecx, dword ptr ds : [esi+0x3B0]
        mov dword ptr ds : [esi+0x50C], eax
        mov eax, dword ptr ds : [esi+0x3AC]
        mov dword ptr ds : [esi+0x510], eax
        add eax, 0xFFFFFF9D
        add esp, 4
        cmp eax, 7
        mov dword ptr ds : [esi+0x514], ecx
        ja public_45d04d
/*FIXUP jmp dword ptr ds : [eax*4+public_45d1c4] @0x45d01c*/
  JMPTB cmp eax, 0
  JMPTB je public_45d04d
  JMPTB cmp eax, 1
  JMPTB je public_45d04d
  JMPTB cmp eax, 2
  JMPTB je public_45d031
  JMPTB cmp eax, 3
  JMPTB je public_45d023
  JMPTB cmp eax, 4
  JMPTB je public_45d02a
  JMPTB cmp eax, 5
  JMPTB je public_45d03f
  JMPTB cmp eax, 6
  JMPTB je public_45d046
  JMPTB cmp eax, 7
  JMPTB je public_45d038
  JMPTB int 3
        public_45d023 : nop
        mov eax, 1
        jmp public_45d04f
        public_45d02a : nop
        mov eax, 2
        jmp public_45d04f
        public_45d031 : nop
        mov eax, 3
        jmp public_45d04f
        public_45d038 : nop
        mov eax, 4
        jmp public_45d04f
        public_45d03f : nop
        mov eax, 5
        jmp public_45d04f
        public_45d046 : nop
        mov eax, 6
        jmp public_45d04f
        public_45d04d : nop
        xor eax, eax
        public_45d04f : nop
        mov cl, byte ptr ds : [esi+0x52C]
        test cl, cl
        je public_45d07f
        mov dword ptr ss : [esp+0x10], 0
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x14], 0xBD99999A
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x18], 0xBFA00000
        mov edx, dword ptr ss : [esp+0x18]
        jmp public_45d093
        public_45d07f : nop
        lea edx, ds:[eax+eax*2+0xFC]
        lea eax, ds:[esi+edx*4]
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        public_45d093 : nop
        push ebp
        lea ebp, ds:[esi+0x518]
        mov dword ptr ss : [ebp], eax
        mov dword ptr ss : [ebp+4], ecx
        push edi
        mov dword ptr ss : [ebp+8], edx
        call public_59da10
        add esp, 4
        test eax, eax
        pop ebp
        je public_45d0c1
        mov edx, dword ptr ds : [eax]
        push 0
        push 0
        push 0xEF02
        mov ecx, eax
        call dword ptr ds : [edx+0x5C]
        public_45d0c1 : nop
        push 0x3F800000
        mov ecx, esi
        call public_45d770
        mov eax, dword ptr ds : [esi+0x510]
        add eax, 0xFFFFFF9D
        cmp eax, 7
        ja public_45d10c
/*FIXUP jmp dword ptr ds : [eax*4+public_45d1e4] @0x45d0db*/
  JMPTB cmp eax, 0
  JMPTB je public_45d10c
  JMPTB cmp eax, 1
  JMPTB je public_45d10c
  JMPTB cmp eax, 2
  JMPTB je public_45d0f0
  JMPTB cmp eax, 3
  JMPTB je public_45d0e2
  JMPTB cmp eax, 4
  JMPTB je public_45d0e9
  JMPTB cmp eax, 5
  JMPTB je public_45d0fe
  JMPTB cmp eax, 6
  JMPTB je public_45d105
  JMPTB cmp eax, 7
  JMPTB je public_45d0f7
  JMPTB int 3
        public_45d0e2 : nop
        mov edi, 1
        jmp public_45d10e
        public_45d0e9 : nop
        mov edi, 2
        jmp public_45d10e
        public_45d0f0 : nop
        mov edi, 3
        jmp public_45d10e
        public_45d0f7 : nop
        mov edi, 4
        jmp public_45d10e
        public_45d0fe : nop
        mov edi, 5
        jmp public_45d10e
        public_45d105 : nop
        mov edi, 6
        jmp public_45d10e
        public_45d10c : nop
        xor edi, edi
        public_45d10e : nop
        mov eax, dword ptr ds : [public_5cea10]
        push eax
        mov ecx, ebx
        call public_55e590
        mov al, byte ptr ds : [esi+0x52C]
        test al, al
        je public_45d12f
        mov dword ptr ss : [esp+0xC], 0x3D4CCCCD
        jmp public_45d13a
        public_45d12f : nop
        fld dword ptr ds : [esi+edi*4+0x498]
        fstp dword ptr ss : [esp+0xC]
        public_45d13a : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [esi+0x508]
        push ecx
        push 0x3F800000
        push edx
        mov ecx, ebx
        call public_55e360
        mov dword ptr ds : [esi+0x3A8], 0
        lea edi, ds:[esi+0x3D4]
        mov ebx, 7
        public_45d167 : nop
        mov ecx, dword ptr ds : [edi]
        test ecx, ecx
        je public_45d196
        mov eax, dword ptr ds : [edi-0x1C]
        cmp eax, dword ptr ds : [esi+0x3A8]
        je public_45d184
        cmp eax, dword ptr ds : [esi+0x50C]
        je public_45d184
        xor al, al
        jmp public_45d186
        public_45d184 : nop
        mov al, 1
        public_45d186 : nop
        mov edx, dword ptr ds : [ecx]
        movzx eax, al
        push 0
        push eax
        push 0xC
        call dword ptr ds : [edx+0xA8]
        public_45d196 : nop
        add edi, 4
        dec ebx
        jne public_45d167
        public_45d19c : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x45cf60)
        ASM_EXPORT_ENTRY_FIRST(0x45cfd3, public_45cfd3)
        ASM_EXPORT_ENTRY(0x45d038, public_45d038)
        ASM_EXPORT_ENTRY_LAST(0x45d0f7, public_45d0f7)
    }
}

#undef public_45cfb7
#undef public_45cfbe
#undef public_45cfc5
#undef public_45cfcc
#undef public_45cfd3
#undef public_45cfda
#undef public_45cfe1
#undef public_45cfe6
#undef public_45d023
#undef public_45d02a
#undef public_45d031
#undef public_45d038
#undef public_45d03f
#undef public_45d046
#undef public_45d04d
#undef public_45d04f
#undef public_45d07f
#undef public_45d093
#undef public_45d0c1
#undef public_45d0e2
#undef public_45d0e9
#undef public_45d0f0
#undef public_45d0f7
#undef public_45d0fe
#undef public_45d105
#undef public_45d10c
#undef public_45d10e
#undef public_45d12f
#undef public_45d13a
#undef public_45d167
#undef public_45d184
#undef public_45d186
#undef public_45d196
#undef public_45d19c

#pragma init_seg(compiler)
extern "C" void const* const public_45cfd3 = __AsmFindLabelExport(&internal_45cf60, 0x45cfd3);
extern "C" void const* const public_45d038 = __AsmFindLabelExport(&internal_45cf60, 0x45d038);
extern "C" void const* const public_45d0f7 = __AsmFindLabelExport(&internal_45cf60, 0x45d0f7);
