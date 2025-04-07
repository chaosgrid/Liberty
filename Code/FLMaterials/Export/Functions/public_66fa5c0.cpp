#include "FLMaterials-PCH.h"

CLANG_FORWARD_JUMP_SYMBOL(public_6700cf8);

#define public_66fa628 _public_66fa628
#define public_66fa643 _public_66fa643
#define public_66fa6e3 _public_66fa6e3
#define public_66fa6ed _public_66fa6ed
#define public_66fa707 _public_66fa707
#define public_66fa76e _public_66fa76e
#define public_66fa7b3 _public_66fa7b3
#define public_66fa81a _public_66fa81a
#define public_66fa82e _public_66fa82e
#define public_66fa83c _public_66fa83c
#define public_66fa849 _public_66fa849
#define public_66fa85a _public_66fa85a
#define public_66fa863 _public_66fa863
#define public_66fa880 _public_66fa880
#define public_66fa893 _public_66fa893
#define public_66fa89c _public_66fa89c
#define public_66fa8a5 _public_66fa8a5
#define public_66fa8ae _public_66fa8ae
#define public_66fa8b5 _public_66fa8b5
#define public_66fa8b9 _public_66fa8b9
#define public_66fa8c7 _public_66fa8c7
#define public_66fa93d _public_66fa93d
#define public_66fa941 _public_66fa941

PROC_DECLARE(0x66fa5c0, internal_66fa5c0, public_66fa5c0);
extern "C" NAKED register_t __cdecl internal_66fa5c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_6700cf8 @0x66fa5c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6700cf8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x38]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push edi
        lea edx, ss:[esp+0x18]
        push edx
        push 0x17
        push eax
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        call dword ptr ds : [ecx+0xF4]
        mov ecx, dword ptr ds : [esi+0x68]
        mov edx, dword ptr ds : [esi+0x70]
        mov eax, 1
        cmp eax, ecx
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        sbb edi, edi
        push edx
        inc edi
        push edi
        push eax
        call dword ptr ds : [ecx+0x108]
        cmp edi, 1
        jne public_66fa643
        mov ebp, dword ptr ds : [esi+4]
        mov ebx, offset public_6702484
        mov eax, edi
        public_66fa628 : nop
        mov edx, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ss : [ebp]
        push edx
        push eax
        push 1
        push ebp
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [ebx+8]
        add ebx, 8
        test eax, eax
        jne public_66fa628
        public_66fa643 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push 3
        push 0xD
        push edi
        push eax
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        push 3
        push 0xE
        push edi
        push eax
        call dword ptr ds : [edx+0xF8]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push 0x20000
        push 0xB
        push edi
        push eax
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        push 0x103
        push 0x18
        push edi
        push eax
        call dword ptr ds : [edx+0xF8]
        mov ebx, dword ptr ss : [esp+0x40]
        mov ebp, dword ptr ss : [esp+0x54]
        xor ecx, ecx
        cmp ebx, ecx
        je public_66fa707
        mov eax, dword ptr ds : [ebx+0x1C]
        cmp eax, ecx
        je public_66fa707
        mov dword ptr ss : [esp+0x3C], ecx
        lea edx, ss:[esp+0x3C]
        push edx
/*FIXUP push offset public_67013f0 @0x66fa6ab*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67013f0
        mov dword ptr ss : [esp+0x3C], ecx
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx]
        test eax, eax
        mov edx, dword ptr ss : [esp+0x58]
        push edx
        mov edx, dword ptr ss : [esp+0x54]
        push ebp
        push edx
        mov edx, dword ptr ss : [esp+0x58]
        push edx
        mov edx, dword ptr ss : [esp+0x58]
        push edx
        mov edx, dword ptr ss : [esp+0x58]
        push edx
        push ebx
        jge public_66fa6e3
        mov eax, dword ptr ds : [ebx+0x1C]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x28]
        jmp public_66fa6ed
        public_66fa6e3 : nop
        mov eax, dword ptr ss : [esp+0x58]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x20]
        public_66fa6ed : nop
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [esp+0x3C]
        test eax, eax
        mov dword ptr ss : [esp+0x34], 0xFFFFFFFF
        je public_66fa707
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_66fa707 : nop
        cmp dword ptr ds : [esi+0x68], 1
        jbe public_66fa941
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        push 0
        push 0x89
        push eax
        call dword ptr ds : [edx+0xF0]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push 4
        push 0x17
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ss : [esp+0x58]
        test ah, 1
        je public_66fa76e
        mov eax, dword ptr ds : [esi+0x10]
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [ebx+0x18]
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ss : [esp+0x50]
        push ebp
        add ecx, eax
        mov eax, dword ptr ss : [esp+0x50]
        push ecx
        mov ecx, dword ptr ss : [esp+0x50]
        push eax
        mov eax, dword ptr ss : [esp+0x50]
        push ecx
        push eax
        mov eax, dword ptr ds : [esi+0x10]
        push eax
        call dword ptr ds : [edx+0xC]
        test eax, eax
        jge public_66fa93d
        public_66fa76e : nop
        mov ecx, dword ptr ds : [ebx+0x14]
        or eax, 0xFFFFFFFF
        test ecx, ecx
        je public_66fa7b3
        mov ecx, dword ptr ds : [ebx+0x10]
        mov eax, dword ptr ds : [esi+4]
        push 0
        push ebp
        mov ebp, dword ptr ss : [esp+0x58]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[ecx+ebp*2]
        mov ebp, dword ptr ss : [esp+0x50]
        push ecx
        mov ecx, dword ptr ss : [esp+0x58]
        push ecx
        mov ecx, dword ptr ds : [ebx+0x14]
        mov ecx, dword ptr ds : [ecx+8]
        add ecx, ebp
        push ecx
        mov ecx, dword ptr ds : [ebx+0x14]
        mov ecx, dword ptr ds : [ecx]
        push ecx
        mov ecx, dword ptr ss : [esp+0x5C]
        push ecx
        push eax
        call dword ptr ds : [edx+0x120]
        mov ebp, dword ptr ss : [esp+0x54]
        public_66fa7b3 : nop
        test eax, eax
        jge public_66fa93d
        mov ecx, dword ptr ds : [ebx+0xC]
        test ecx, ecx
        je public_66fa93d
        mov edx, dword ptr ss : [esp+0x4C]
        test edx, edx
        jbe public_66fa93d
        test ebp, ebp
        jbe public_66fa93d
        mov ecx, dword ptr ds : [ecx+0x68]
        mov eax, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [eax]
        lea ebp, ss:[esp+0x1C]
        push ebp
        mov ebp, dword ptr ss : [esp+0x50]
        push ebp
        push ecx
        push eax
        call dword ptr ds : [edx+0x14]
        xor ebp, ebp
        cmp eax, ebp
        jl public_66fa93d
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, 0xC
        mov ecx, edx
        and ecx, eax
        cmp cl, al
        mov dword ptr ss : [esp+0x40], ebp
        jne public_66fa81a
        mov dword ptr ss : [esp+0x40], 0x1C
        jmp public_66fa83c
        public_66fa81a : nop
        mov ecx, edx
        and ecx, 4
        cmp cl, 4
        jne public_66fa82e
        mov dword ptr ss : [esp+0x40], 0x10
        jmp public_66fa83c
        public_66fa82e : nop
        mov ecx, edx
        and ecx, 2
        cmp cl, 2
        jne public_66fa83c
        mov dword ptr ss : [esp+0x40], eax
        public_66fa83c : nop
        test dl, 0x10
        mov dword ptr ss : [esp+0x14], ebp
        je public_66fa849
        mov dword ptr ss : [esp+0x14], eax
        public_66fa849 : nop
        test dl, 0x40
        mov dword ptr ss : [esp+0x3C], ebp
        je public_66fa85a
        mov dword ptr ss : [esp+0x3C], 4
        public_66fa85a : nop
        test dl, dl
        jns public_66fa863
        add dword ptr ss : [esp+0x3C], 4
        public_66fa863 : nop
        mov eax, edx
        shr eax, 8
        and eax, 0xF
        mov dword ptr ss : [esp+0x58], ebp
        jle public_66fa8c7
        mov ecx, 0x10
        mov dword ptr ss : [esp+0x10], eax
        lea ebx, ds:[ebx]
        public_66fa880 : nop
        mov eax, edx
        shr eax, cl
        and eax, 3
        cmp eax, 3
        ja public_66fa8b9
/*FIXUP jmp dword ptr ds : [eax*4+public_66fa9a4] @0x66fa88c*/
  JMPTB cmp eax, 0
  JMPTB je public_66fa89c
  JMPTB cmp eax, 1
  JMPTB je public_66fa8a5
  JMPTB cmp eax, 2
  JMPTB je public_66fa8ae
  JMPTB cmp eax, 3
  JMPTB je public_66fa893
  JMPTB int 3
        public_66fa893 : nop
        mov eax, dword ptr ss : [esp+0x58]
        add eax, 4
        jmp public_66fa8b5
        public_66fa89c : nop
        mov eax, dword ptr ss : [esp+0x58]
        add eax, 8
        jmp public_66fa8b5
        public_66fa8a5 : nop
        mov eax, dword ptr ss : [esp+0x58]
        add eax, 0xC
        jmp public_66fa8b5
        public_66fa8ae : nop
        mov eax, dword ptr ss : [esp+0x58]
        add eax, 0x10
        public_66fa8b5 : nop
        mov dword ptr ss : [esp+0x58], eax
        public_66fa8b9 : nop
        mov eax, dword ptr ss : [esp+0x10]
        add ecx, 2
        dec eax
        mov dword ptr ss : [esp+0x10], eax
        jne public_66fa880
        public_66fa8c7 : nop
        mov ebp, dword ptr ss : [esp+0x4C]
        push ebp
        mov ebp, dword ptr ss : [esp+0x4C]
        push ebp
        mov ebp, dword ptr ds : [ebx+0xC]
        mov eax, dword ptr ds : [esi+0xC]
        push ebp
        mov ebp, dword ptr ss : [esp+0x48]
        push edx
        mov edx, dword ptr ss : [esp+0x68]
        mov ecx, dword ptr ds : [eax]
        add edx, ebp
        add edx, dword ptr ss : [esp+0x24]
        add edx, dword ptr ss : [esp+0x50]
        imul edx, dword ptr ss : [esp+0x58]
        mov ebp, dword ptr ss : [esp+0x38]
        sub ebp, edx
        push ebp
        push eax
        call dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x1C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x18]
        mov edx, dword ptr ss : [esp+0x54]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push 0
        push edx
        mov edx, dword ptr ds : [ebx+0x10]
        mov ebx, dword ptr ss : [esp+0x58]
        lea edx, ds:[edx+ebx*2]
        push edx
        mov edx, dword ptr ss : [esp+0x58]
        push edx
        mov edx, dword ptr ss : [esp+0x34]
        push edx
        mov edx, dword ptr ss : [esp+0x30]
        push edx
        mov edx, dword ptr ss : [esp+0x5C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x120]
        public_66fa93d : nop
        mov dword ptr ss : [esp+0x10], eax
        public_66fa941 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push edi
        push 0xB
        push edi
        push eax
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        push 0
        push 0x18
        push edi
        push eax
        call dword ptr ds : [edx+0xF8]
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push edx
        push 0x17
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov esi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        push 1
        push 0x89
        push esi
        call dword ptr ds : [eax+0xF0]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 0x20
        UNREACHABLE_TRAP(0x66fa5c0)
        ASM_EXPORT_ENTRY_FIRST(0x66fa893, public_66fa893)
        ASM_EXPORT_ENTRY(0x66fa89c, public_66fa89c)
        ASM_EXPORT_ENTRY(0x66fa8a5, public_66fa8a5)
        ASM_EXPORT_ENTRY_LAST(0x66fa8ae, public_66fa8ae)
    }
}

#undef public_66fa628
#undef public_66fa643
#undef public_66fa6e3
#undef public_66fa6ed
#undef public_66fa707
#undef public_66fa76e
#undef public_66fa7b3
#undef public_66fa81a
#undef public_66fa82e
#undef public_66fa83c
#undef public_66fa849
#undef public_66fa85a
#undef public_66fa863
#undef public_66fa880
#undef public_66fa893
#undef public_66fa89c
#undef public_66fa8a5
#undef public_66fa8ae
#undef public_66fa8b5
#undef public_66fa8b9
#undef public_66fa8c7
#undef public_66fa93d
#undef public_66fa941

#pragma init_seg(compiler)
extern "C" void const* const public_66fa893 = __AsmFindLabelExport(&internal_66fa5c0, 0x66fa893);
extern "C" void const* const public_66fa89c = __AsmFindLabelExport(&internal_66fa5c0, 0x66fa89c);
extern "C" void const* const public_66fa8a5 = __AsmFindLabelExport(&internal_66fa5c0, 0x66fa8a5);
extern "C" void const* const public_66fa8ae = __AsmFindLabelExport(&internal_66fa5c0, 0x66fa8ae);
