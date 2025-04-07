#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfec0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f57840);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6f6eca0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8370);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6facf60);

#define public_6f07282 _public_6f07282
#define public_6f07291 _public_6f07291
#define public_6f072d2 _public_6f072d2
#define public_6f072e2 _public_6f072e2
#define public_6f07300 _public_6f07300
#define public_6f07321 _public_6f07321
#define public_6f07342 _public_6f07342
#define public_6f07377 _public_6f07377
#define public_6f07387 _public_6f07387
#define public_6f07393 _public_6f07393
#define public_6f073a4 _public_6f073a4
#define public_6f073d0 _public_6f073d0
#define public_6f073ec _public_6f073ec

PROC_DECLARE(0x6f07240, internal_6f07240, public_6f07240);
extern "C" NAKED register_t __cdecl internal_6f07240()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_6facf60 @0x6f07242*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6facf60
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x30
        mov al, byte ptr ss : [esp+3]
        push ebx
        push esi
        push edi
        push 0xC
        mov esi, ecx
        mov byte ptr ss : [esp+0x34], al
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        xor edi, edi
        mov dword ptr ss : [esp+0x34], eax
        mov dword ptr ss : [esp+0x38], edi
        mov dword ptr ss : [esp+0x44], edi
        public_6f07282 : nop
        mov eax, dword ptr ds : [esi+0x24]
        cmp eax, 3
        ja public_6f07282
/*FIXUP jmp dword ptr ds : [eax*4+public_6f07438] @0x6f0728a*/
  JMPTB cmp eax, 0
  JMPTB je public_6f07291
  JMPTB cmp eax, 1
  JMPTB je public_6f07377
  JMPTB cmp eax, 2
  JMPTB je public_6f07342
  JMPTB cmp eax, 3
  JMPTB je public_6f07393
  JMPTB int 3
        public_6f07291 : nop
        mov cl, byte ptr ss : [esp+0xF]
        push 0xC
        mov byte ptr ss : [esp+0x28], cl
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0x2C], edi
        mov ecx, dword ptr ds : [esi+0x28]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x24]
        push eax
        mov byte ptr ss : [esp+0x48], 1
        call dword ptr ds : [edx+0x10]
        cmp eax, 3
        jne public_6f072d2
        mov dword ptr ds : [esi+0x24], 1
        xor bl, bl
        jmp public_6f072e2
        public_6f072d2 : nop
        push edi
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, dword ptr ds : [esi+8]
        call public_6f57840
        mov bl, 1
        public_6f072e2 : nop
        lea edx, ss:[esp+0x10]
        push edx
        lea ecx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0x48], 2
        call public_6f1df30
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ss : [esp+0x28]
        je public_6f07321
        nop 
        public_6f07300 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        push edi
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ss:[esp+0x18]
        call public_6f68e30
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ss : [esp+0x28]
        jne public_6f07300
        public_6f07321 : nop
        lea ecx, ss:[esp+0x24]
        call public_6ecfec0
        lea ecx, ss:[esp+0x24]
        mov byte ptr ss : [esp+0x44], 0
        call public_6f15350
        test bl, bl
        je public_6f07282
        jmp public_6f073a4
        public_6f07342 : nop
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x14], eax
        push edi
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        call public_6f6eca0
        add esp, 0x10
        test al, al
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        jne public_6f07387
        call dword ptr ds : [eax+0x3C]
        mov dword ptr ds : [esi+0x24], edi
        jmp public_6f07282
        public_6f07377 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x48]
        mov dword ptr ds : [esi+0x24], 2
        jmp public_6f073a4
        public_6f07387 : nop
        call dword ptr ds : [eax+0x40]
        mov dword ptr ds : [esi+0x24], 3
        jmp public_6f073a4
        public_6f07393 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x44]
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x3C]
        mov dword ptr ds : [esi+0x24], edi
        public_6f073a4 : nop
        lea ecx, ss:[esp+0x10]
        push ecx
        lea ecx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x48], 3
        call public_6f1df30
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x34]
        cmp eax, ecx
        pop edi
        pop esi
        pop ebx
        je public_6f073ec
        lea esp, ss:[esp]
        public_6f073d0 : nop
        mov eax, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+4]
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0x28]
        cmp eax, ecx
        mov dword ptr ss : [esp+4], eax
        jne public_6f073d0
        public_6f073ec : nop
        mov eax, dword ptr ds : [ecx]
        push ecx
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ss:[esp+0x30]
        call public_6fa8370
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x44], 0xFFFFFFFF
        call public_6fa8370
        mov eax, dword ptr ss : [esp+0x28]
        push eax
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr fs : [0], ecx
        add esp, 0x40
        ret 
        UNREACHABLE_TRAP(0x6f07240)
        ASM_EXPORT_ENTRY_FIRST(0x6f07291, public_6f07291)
        ASM_EXPORT_ENTRY(0x6f07342, public_6f07342)
        ASM_EXPORT_ENTRY(0x6f07377, public_6f07377)
        ASM_EXPORT_ENTRY_LAST(0x6f07393, public_6f07393)
    }
}

#undef public_6f07282
#undef public_6f07291
#undef public_6f072d2
#undef public_6f072e2
#undef public_6f07300
#undef public_6f07321
#undef public_6f07342
#undef public_6f07377
#undef public_6f07387
#undef public_6f07393
#undef public_6f073a4
#undef public_6f073d0
#undef public_6f073ec

#pragma init_seg(compiler)
extern "C" void const* const public_6f07291 = __AsmFindLabelExport(&internal_6f07240, 0x6f07291);
extern "C" void const* const public_6f07342 = __AsmFindLabelExport(&internal_6f07240, 0x6f07342);
extern "C" void const* const public_6f07377 = __AsmFindLabelExport(&internal_6f07240, 0x6f07377);
extern "C" void const* const public_6f07393 = __AsmFindLabelExport(&internal_6f07240, 0x6f07393);
