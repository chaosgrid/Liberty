#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b4b10);
CLANG_FORWARD_PROC_SYMBOL(public_62d3420);
CLANG_FORWARD_PROC_SYMBOL(public_62e6990);
CLANG_FORWARD_PROC_SYMBOL(public_62e86d0);
CLANG_FORWARD_PROC_SYMBOL(public_62e8720);
CLANG_FORWARD_PROC_SYMBOL(public_62e9c00);
CLANG_FORWARD_PROC_SYMBOL(public_62ec590);
CLANG_FORWARD_PROC_SYMBOL(public_62ec5d0);
CLANG_FORWARD_PROC_SYMBOL(public_62ec650);
CLANG_FORWARD_PROC_SYMBOL(public_62ec6a0);
CLANG_FORWARD_PROC_SYMBOL(public_62ecaf0);
CLANG_FORWARD_PROC_SYMBOL(public_62ed730);

#define public_62d3fbd _public_62d3fbd
#define public_62d3fdd _public_62d3fdd
#define public_62d3fdf _public_62d3fdf
#define public_62d4007 _public_62d4007
#define public_62d4031 _public_62d4031
#define public_62d4050 _public_62d4050
#define public_62d405f _public_62d405f
#define public_62d4085 _public_62d4085
#define public_62d40b3 _public_62d40b3
#define public_62d40b5 _public_62d40b5
#define public_62d40dc _public_62d40dc
#define public_62d40f3 _public_62d40f3
#define public_62d4165 _public_62d4165
#define public_62d41a5 _public_62d41a5
#define public_62d41eb _public_62d41eb
#define public_62d4205 _public_62d4205
#define public_62d4259 _public_62d4259
#define public_62d4271 _public_62d4271
#define public_62d4287 _public_62d4287
#define public_62d429d _public_62d429d
#define public_62d42d9 _public_62d42d9
#define public_62d42e7 _public_62d42e7

PROC_DECLARE(0x62d3f90, internal_62d3f90, public_62d3f90);
extern "C" NAKED register_t __cdecl internal_62d3f90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xC0]
        or edx, 0xFFFFFFFF
        cmp eax, edx
        push edi
        je public_62d42e7
        mov ebx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ebx]
        cmp eax, 7
        ja public_62d42e7
/*FIXUP jmp dword ptr ds : [eax*4+public_62d42f0] @0x62d3fb6*/
  JMPTB cmp eax, 0
  JMPTB je public_62d4271
  JMPTB cmp eax, 1
  JMPTB je public_62d4259
  JMPTB cmp eax, 2
  JMPTB je public_62d4165
  JMPTB cmp eax, 3
  JMPTB je public_62d3fbd
  JMPTB cmp eax, 4
  JMPTB je public_62d41a5
  JMPTB cmp eax, 5
  JMPTB je public_62d4205
  JMPTB cmp eax, 6
  JMPTB je public_62d4287
  JMPTB cmp eax, 7
  JMPTB je public_62d429d
  JMPTB int 3
        public_62d3fbd : nop
        mov ecx, dword ptr ds : [esi+8]
        mov ebx, dword ptr ds : [ebx+4]
        add ecx, 0x12C
        call public_62e9c00
        mov eax, dword ptr ds : [esi+0xF0]
        test eax, eax
        je public_62d3fdd
        lea ecx, ds:[eax-8]
        jmp public_62d3fdf
        public_62d3fdd : nop
        xor ecx, ecx
        public_62d3fdf : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x150]
        test eax, eax
        je public_62d4007
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        jne public_62d4007
        lea edx, ds:[ebx+8]
        push edx
        mov ecx, eax
        call public_62b4b10
        public_62d4007 : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x20]
        cmp dword ptr ds : [ebx+8], eax
        jne public_62d4031
        mov ecx, dword ptr ds : [esi+8]
        push 0
        add ecx, 0x1364
        call public_62ec650
        public_62d4031 : nop
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [esi+8]
        push ebp
        push eax
        call public_62e6990
        lea edi, ds:[esi+0x174]
        mov ebp, 0x15
        lea esp, ss:[esp]
        public_62d4050 : nop
        mov ecx, dword ptr ds : [edi]
        test ecx, ecx
        je public_62d405f
        mov eax, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x54]
        public_62d405f : nop
        add edi, 4
        dec ebp
        jne public_62d4050
        test dword ptr ds : [ebx+4], 0xC40
        je public_62d40f3
        mov eax, dword ptr ds : [esi+0xF0]
        xor ecx, ecx
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], ecx
        je public_62d4085
        lea ecx, ds:[eax-8]
        public_62d4085 : nop
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x10]
        push eax
        call dword ptr ds : [edx+0xB0]
        mov ecx, dword ptr ss : [esp+0x10]
        test ecx, ecx
        je public_62d40dc
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        cmp eax, dword ptr ds : [ebx+8]
        jne public_62d40dc
        mov eax, dword ptr ds : [esi+0xF0]
        test eax, eax
        je public_62d40b3
        lea edi, ds:[eax-8]
        jmp public_62d40b5
        public_62d40b3 : nop
        xor edi, edi
        public_62d40b5 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x20]
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        mov ebp, eax
        call dword ptr ds : [edx+0x20]
        cmp ebp, eax
        je public_62d40dc
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [esi+8]
        push eax
        add ecx, 0x1364
        call public_62ec650
        public_62d40dc : nop
        mov ecx, dword ptr ds : [esi+0xC0]
        mov ecx, dword ptr ds : [esi+ecx*4+0x174]
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x58]
        public_62d40f3 : nop
        test dword ptr ds : [ebx+4], 0x840
        pop ebp
        je public_62d42e7
        mov eax, dword ptr ds : [esi+8]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xBC]
        test al, al
        je public_62d42e7
        cmp dword ptr ds : [esi+0xC0], 0xA
        jne public_62d42e7
        mov eax, dword ptr ds : [esi+8]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x20]
        cmp dword ptr ds : [ebx+8], eax
        jne public_62d42e7
        mov eax, dword ptr ds : [esi+0x120]
        push 0
        push 1
        push eax
        mov ecx, esi
        call public_62d3420
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 4
        public_62d4165 : nop
        cmp dword ptr ds : [esi+0xC4], 2
        jne public_62d42e7
        mov ecx, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [esi+0xCC]
        cmp dword ptr ds : [ecx+8], eax
        jne public_62d42e7
        xor ecx, ecx
        pop edi
        mov dword ptr ds : [esi+0xC4], ecx
        mov dword ptr ds : [esi+0xCC], edx
        mov dword ptr ds : [esi+0x118], ecx
        mov dword ptr ds : [esi+0x11C], eax
        pop esi
        pop ebx
        pop ecx
        ret 4
        public_62d41a5 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov edi, dword ptr ds : [ebx+4]
        add ecx, 0x1364
        call public_62ecaf0
        test eax, eax
        je public_62d41eb
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x20]
        cmp eax, dword ptr ds : [edi+0xC]
        jne public_62d41eb
        mov eax, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [edi+0x14]
        xor ecx, ecx
        mov cl, byte ptr ds : [edi+2]
        push eax
        mov eax, dword ptr ds : [edi+0x10]
        push ecx
        xor ecx, ecx
        mov cl, byte ptr ds : [edi]
        push edx
        push eax
        push ecx
        mov ecx, dword ptr ds : [esi+8]
        add ecx, 0x1364
        call public_62ec5d0
        public_62d41eb : nop
        mov edx, dword ptr ds : [esi+0xC0]
        mov ecx, dword ptr ds : [esi+edx*4+0x174]
        mov eax, dword ptr ds : [ecx]
        push ebx
        call dword ptr ds : [eax+0x58]
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 4
        public_62d4205 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov edi, dword ptr ds : [ebx+4]
        add ecx, 0x1364
        call public_62ecaf0
        test eax, eax
        je public_62d42e7
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x20]
        cmp eax, dword ptr ds : [edi+8]
        jne public_62d42e7
        test dword ptr ds : [edi+4], 0x120
        je public_62d42e7
        mov ecx, dword ptr ds : [edi]
        xor eax, eax
        mov al, byte ptr ds : [edi+0xC]
        push eax
        push ecx
        mov ecx, dword ptr ds : [esi+8]
        add ecx, 0x1364
        call public_62ec590
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 4
        public_62d4259 : nop
        mov edx, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [esi+8]
        push eax
        add ecx, 0x34
        call public_62ed730
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 4
        public_62d4271 : nop
        mov ecx, dword ptr ds : [ebx+4]
        push ecx
        mov ecx, dword ptr ds : [esi+8]
        add ecx, 0x34
        call public_62e86d0
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 4
        public_62d4287 : nop
        mov edx, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [esi+8]
        push edx
        add ecx, 0x34
        call public_62e8720
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 4
        public_62d429d : nop
        mov eax, dword ptr ds : [esi+8]
        mov edi, dword ptr ds : [ebx+4]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x20]
        cmp dword ptr ds : [edi], eax
        jne public_62d42d9
        mov eax, dword ptr ds : [esi+0x120]
        push 0
        push 0
        push eax
        mov ecx, esi
        call public_62d3420
        pop edi
        mov byte ptr ds : [esi+0x170], 1
        pop esi
        pop ebx
        pop ecx
        ret 4
        public_62d42d9 : nop
        mov ecx, dword ptr ds : [esi+8]
        add ecx, 0x1364
        call public_62ec6a0
        public_62d42e7 : nop
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x62d3f90)
        ASM_EXPORT_ENTRY_FIRST(0x62d3fbd, public_62d3fbd)
        ASM_EXPORT_ENTRY(0x62d4165, public_62d4165)
        ASM_EXPORT_ENTRY(0x62d41a5, public_62d41a5)
        ASM_EXPORT_ENTRY(0x62d4205, public_62d4205)
        ASM_EXPORT_ENTRY(0x62d4259, public_62d4259)
        ASM_EXPORT_ENTRY(0x62d4271, public_62d4271)
        ASM_EXPORT_ENTRY(0x62d4287, public_62d4287)
        ASM_EXPORT_ENTRY_LAST(0x62d429d, public_62d429d)
    }
}

#undef public_62d3fbd
#undef public_62d3fdd
#undef public_62d3fdf
#undef public_62d4007
#undef public_62d4031
#undef public_62d4050
#undef public_62d405f
#undef public_62d4085
#undef public_62d40b3
#undef public_62d40b5
#undef public_62d40dc
#undef public_62d40f3
#undef public_62d4165
#undef public_62d41a5
#undef public_62d41eb
#undef public_62d4205
#undef public_62d4259
#undef public_62d4271
#undef public_62d4287
#undef public_62d429d
#undef public_62d42d9
#undef public_62d42e7

#pragma init_seg(compiler)
extern "C" void const* const public_62d3fbd = __AsmFindLabelExport(&internal_62d3f90, 0x62d3fbd);
extern "C" void const* const public_62d4165 = __AsmFindLabelExport(&internal_62d3f90, 0x62d4165);
extern "C" void const* const public_62d41a5 = __AsmFindLabelExport(&internal_62d3f90, 0x62d41a5);
extern "C" void const* const public_62d4205 = __AsmFindLabelExport(&internal_62d3f90, 0x62d4205);
extern "C" void const* const public_62d4259 = __AsmFindLabelExport(&internal_62d3f90, 0x62d4259);
extern "C" void const* const public_62d4271 = __AsmFindLabelExport(&internal_62d3f90, 0x62d4271);
extern "C" void const* const public_62d4287 = __AsmFindLabelExport(&internal_62d3f90, 0x62d4287);
extern "C" void const* const public_62d429d = __AsmFindLabelExport(&internal_62d3f90, 0x62d429d);
