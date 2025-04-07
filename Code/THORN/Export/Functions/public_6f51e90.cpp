#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4f510);
CLANG_FORWARD_PROC_SYMBOL(public_6f51170);
CLANG_FORWARD_PROC_SYMBOL(public_6f51e90);
CLANG_FORWARD_PROC_SYMBOL(public_6f52100);
CLANG_FORWARD_PROC_SYMBOL(public_6f52140);
CLANG_FORWARD_PROC_SYMBOL(public_6f521c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f52270);

#define public_6f51eb2 _public_6f51eb2
#define public_6f51eb9 _public_6f51eb9
#define public_6f51ef6 _public_6f51ef6
#define public_6f51efd _public_6f51efd
#define public_6f51f2c _public_6f51f2c
#define public_6f51f45 _public_6f51f45
#define public_6f51f5b _public_6f51f5b
#define public_6f51f71 _public_6f51f71
#define public_6f51f91 _public_6f51f91
#define public_6f51f96 _public_6f51f96
#define public_6f51faf _public_6f51faf
#define public_6f51fe9 _public_6f51fe9
#define public_6f51feb _public_6f51feb
#define public_6f52015 _public_6f52015
#define public_6f52026 _public_6f52026
#define public_6f52048 _public_6f52048
#define public_6f52077 _public_6f52077
#define public_6f52081 _public_6f52081
#define public_6f5208b _public_6f5208b
#define public_6f52094 _public_6f52094
#define public_6f520bd _public_6f520bd
#define public_6f520d5 _public_6f520d5
#define public_6f520de _public_6f520de

PROC_DECLARE(0x6f51e90, internal_6f51e90, public_6f51e90);
extern "C" NAKED register_t __cdecl internal_6f51e90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x54
        push esi
        mov esi, dword ptr ss : [esp+0x5C]
        mov eax, dword ptr ds : [esi+0x18]
        dec dword ptr ds : [eax]
        mov ecx, dword ptr ds : [esi+0x18]
        cmp dword ptr ds : [ecx], 0
        jl public_6f51eb2
        mov edx, dword ptr ds : [ecx+4]
        xor eax, eax
        mov al, byte ptr ds : [edx]
        inc edx
        mov dword ptr ds : [ecx+4], edx
        jmp public_6f51eb9
        public_6f51eb2 : nop
        push ecx
        call dword ptr ds : [ecx+8]
        add esp, 4
        public_6f51eb9 : nop
        mov edx, dword ptr ds : [esi+0x1C]
        inc edx
        cmp eax, 0x24
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [esi+0x1C], edx
        jne public_6f520de
        mov eax, dword ptr ds : [esi+0x20]
        push ebp
        lea eax, ds:[eax+eax*2]
        push edi
        mov edi, dword ptr ds : [esi+eax*4+0x2C]
        mov eax, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [eax]
        xor ebp, ebp
        dec ecx
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [esi+0x18]
        cmp dword ptr ds : [ecx], 0
        jl public_6f51ef6
        mov edx, dword ptr ds : [ecx+4]
        xor eax, eax
        mov al, byte ptr ds : [edx]
        inc edx
        mov dword ptr ds : [ecx+4], edx
        jmp public_6f51efd
        public_6f51ef6 : nop
        push ecx
        call dword ptr ds : [ecx+8]
        add esp, 4
        public_6f51efd : nop
        lea ecx, ss:[esp+0xC]
        push ecx
        push esi
        mov dword ptr ds : [esi], eax
        call public_6f521c0
        lea edx, ss:[esp+0x14]
/*FIXUP push offset public_6f60eac @0x6f51f0e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60eac
        push edx
        call public_6f4f510
        add esp, 0x10
        cmp eax, 6
        ja public_6f52081
/*FIXUP jmp dword ptr ds : [eax*4+public_6f520e4] @0x6f51f25*/
  JMPTB cmp eax, 0
  JMPTB je public_6f51f2c
  JMPTB cmp eax, 1
  JMPTB je public_6f51f45
  JMPTB cmp eax, 2
  JMPTB je public_6f51f5b
  JMPTB cmp eax, 3
  JMPTB je public_6f51f71
  JMPTB cmp eax, 4
  JMPTB je public_6f51f91
  JMPTB cmp eax, 5
  JMPTB je public_6f51f96
  JMPTB cmp eax, 6
  JMPTB je public_6f52026
  JMPTB int 3
        public_6f51f2c : nop
        test edi, edi
        jne public_6f52094
        mov eax, dword ptr ds : [public_6f61e28]
        mov dword ptr ds : [eax+0x34], 1
        jmp public_6f52094
        public_6f51f45 : nop
        test edi, edi
        jne public_6f52094
        mov ecx, dword ptr ds : [public_6f61e28]
        mov dword ptr ds : [ecx+0x34], edi
        jmp public_6f52094
        public_6f51f5b : nop
        test edi, edi
        jne public_6f52094
        mov dword ptr ds : [esi], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x20], edi
        jmp public_6f52094
        public_6f51f71 : nop
        mov eax, dword ptr ds : [esi+0x20]
        test eax, eax
        lea edx, ds:[eax-1]
        mov dword ptr ds : [esi+0x20], edx
        jne public_6f52094
/*FIXUP push offset public_6f610b0 @0x6f51f82*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f610b0
/*FIXUP push offset public_6f610a0 @0x6f51f87*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f610a0
        jmp public_6f5208b
        public_6f51f91 : nop
        mov ebp, 1
        public_6f51f96 : nop
        cmp dword ptr ds : [esi+0x20], 4
        jne public_6f51faf
/*FIXUP push offset public_6f6109c @0x6f51f9c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f6109c
/*FIXUP push offset public_6f61084 @0x6f51fa1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f61084
        push esi
        call public_6f51170
        add esp, 0xC
        public_6f51faf : nop
        lea eax, ss:[esp+0xC]
        push eax
        push esi
        call public_6f521c0
        mov edx, dword ptr ds : [esi+0x20]
        inc edx
        mov dword ptr ds : [esi+0x20], edx
        mov eax, edx
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ds:[eax+eax*2+9]
        push esi
        mov dword ptr ds : [esi+ecx*4], 0
        call public_6f52140
        add esp, 0x10
        test eax, eax
        je public_6f51fe9
        xor ecx, ecx
        test ebp, ebp
        sete cl
        jmp public_6f51feb
        public_6f51fe9 : nop
        mov ecx, ebp
        public_6f51feb : nop
        test edi, edi
        mov eax, dword ptr ds : [esi+0x20]
        lea eax, ds:[eax+eax*2]
        mov dword ptr ds : [esi+eax*4+0x28], ecx
        jne public_6f52015
        mov eax, dword ptr ds : [esi+0x20]
        lea ecx, ds:[eax+eax*2]
        mov eax, dword ptr ds : [esi+ecx*4+0x28]
        test eax, eax
        je public_6f52015
        mov eax, dword ptr ds : [esi+0x20]
        xor ecx, ecx
        lea edx, ds:[eax+eax*2]
        mov dword ptr ds : [esi+edx*4+0x2C], ecx
        jmp public_6f52094
        public_6f52015 : nop
        mov eax, dword ptr ds : [esi+0x20]
        mov ecx, 1
        lea edx, ds:[eax+eax*2]
        mov dword ptr ds : [esi+edx*4+0x2C], ecx
        jmp public_6f52094
        public_6f52026 : nop
        mov eax, dword ptr ds : [esi+0x20]
        add eax, 3
        lea eax, ds:[eax+eax*2]
        cmp dword ptr ds : [esi+eax*4], 0
        je public_6f52048
/*FIXUP push offset public_6f6107c @0x6f52035*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f6107c
/*FIXUP push offset public_6f6106c @0x6f5203a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f6106c
        push esi
        call public_6f51170
        add esp, 0xC
        public_6f52048 : nop
        mov eax, dword ptr ds : [esi+0x20]
        add eax, 3
        lea ecx, ds:[eax+eax*2]
        mov dword ptr ds : [esi+ecx*4], 1
        mov eax, dword ptr ds : [esi+0x20]
        lea edx, ds:[eax+eax*2]
        mov ecx, dword ptr ds : [esi+edx*4+0x20]
        test ecx, ecx
        lea eax, ds:[esi+edx*4]
        jne public_6f52077
        mov ecx, dword ptr ds : [eax+0x28]
        test ecx, ecx
        jne public_6f52077
        xor ecx, ecx
        mov dword ptr ds : [eax+0x2C], ecx
        jmp public_6f52094
        public_6f52077 : nop
        mov ecx, 1
        mov dword ptr ds : [eax+0x2C], ecx
        jmp public_6f52094
        public_6f52081 : nop
        lea eax, ss:[esp+0xC]
        push eax
/*FIXUP push offset public_6f6105c @0x6f52086*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f6105c
        public_6f5208b : nop
        push esi
        call public_6f51170
        add esp, 0xC
        public_6f52094 : nop
        push esi
        call public_6f52100
        mov eax, dword ptr ds : [esi]
        add esp, 4
        cmp eax, 0xA
        pop edi
        pop ebp
        jne public_6f520bd
        push esi
        call public_6f51e90
        add esp, 4
        push esi
        call public_6f52270
        add esp, 4
        pop esi
        add esp, 0x54
        ret 
        public_6f520bd : nop
        cmp eax, 0xFFFFFFFF
        je public_6f520d5
        lea ecx, ss:[esp+4]
        push ecx
/*FIXUP push offset public_6f61044 @0x6f520c7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f61044
        push esi
        call public_6f51170
        add esp, 0xC
        public_6f520d5 : nop
        push esi
        call public_6f52270
        add esp, 4
        public_6f520de : nop
        pop esi
        add esp, 0x54
        ret 
        UNREACHABLE_TRAP(0x6f51e90)
        ASM_EXPORT_ENTRY_FIRST(0x6f51f2c, public_6f51f2c)
        ASM_EXPORT_ENTRY(0x6f51f45, public_6f51f45)
        ASM_EXPORT_ENTRY(0x6f51f5b, public_6f51f5b)
        ASM_EXPORT_ENTRY(0x6f51f71, public_6f51f71)
        ASM_EXPORT_ENTRY(0x6f51f91, public_6f51f91)
        ASM_EXPORT_ENTRY(0x6f51f96, public_6f51f96)
        ASM_EXPORT_ENTRY_LAST(0x6f52026, public_6f52026)
    }
}

#undef public_6f51eb2
#undef public_6f51eb9
#undef public_6f51ef6
#undef public_6f51efd
#undef public_6f51f2c
#undef public_6f51f45
#undef public_6f51f5b
#undef public_6f51f71
#undef public_6f51f91
#undef public_6f51f96
#undef public_6f51faf
#undef public_6f51fe9
#undef public_6f51feb
#undef public_6f52015
#undef public_6f52026
#undef public_6f52048
#undef public_6f52077
#undef public_6f52081
#undef public_6f5208b
#undef public_6f52094
#undef public_6f520bd
#undef public_6f520d5
#undef public_6f520de

#pragma init_seg(compiler)
extern "C" void const* const public_6f51f2c = __AsmFindLabelExport(&internal_6f51e90, 0x6f51f2c);
extern "C" void const* const public_6f51f45 = __AsmFindLabelExport(&internal_6f51e90, 0x6f51f45);
extern "C" void const* const public_6f51f5b = __AsmFindLabelExport(&internal_6f51e90, 0x6f51f5b);
extern "C" void const* const public_6f51f71 = __AsmFindLabelExport(&internal_6f51e90, 0x6f51f71);
extern "C" void const* const public_6f51f91 = __AsmFindLabelExport(&internal_6f51e90, 0x6f51f91);
extern "C" void const* const public_6f51f96 = __AsmFindLabelExport(&internal_6f51e90, 0x6f51f96);
extern "C" void const* const public_6f52026 = __AsmFindLabelExport(&internal_6f51e90, 0x6f52026);
