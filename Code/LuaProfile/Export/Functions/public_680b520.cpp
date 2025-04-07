#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6805d20);
CLANG_FORWARD_PROC_SYMBOL(public_680a800);
CLANG_FORWARD_PROC_SYMBOL(public_680b520);
CLANG_FORWARD_PROC_SYMBOL(public_680b790);
CLANG_FORWARD_PROC_SYMBOL(public_680b7d0);
CLANG_FORWARD_PROC_SYMBOL(public_680b850);
CLANG_FORWARD_PROC_SYMBOL(public_680b900);

#define public_680b542 _public_680b542
#define public_680b549 _public_680b549
#define public_680b586 _public_680b586
#define public_680b58d _public_680b58d
#define public_680b5bc _public_680b5bc
#define public_680b5d5 _public_680b5d5
#define public_680b5eb _public_680b5eb
#define public_680b601 _public_680b601
#define public_680b621 _public_680b621
#define public_680b626 _public_680b626
#define public_680b63f _public_680b63f
#define public_680b679 _public_680b679
#define public_680b67b _public_680b67b
#define public_680b6a5 _public_680b6a5
#define public_680b6b6 _public_680b6b6
#define public_680b6d8 _public_680b6d8
#define public_680b707 _public_680b707
#define public_680b711 _public_680b711
#define public_680b71b _public_680b71b
#define public_680b724 _public_680b724
#define public_680b74d _public_680b74d
#define public_680b765 _public_680b765
#define public_680b76e _public_680b76e

PROC_DECLARE(0x680b520, internal_680b520, public_680b520);
extern "C" NAKED register_t __cdecl internal_680b520()
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
        jl public_680b542
        mov edx, dword ptr ds : [ecx+4]
        xor eax, eax
        mov al, byte ptr ds : [edx]
        inc edx
        mov dword ptr ds : [ecx+4], edx
        jmp public_680b549
        public_680b542 : nop
        push ecx
        call dword ptr ds : [ecx+8]
        add esp, 4
        public_680b549 : nop
        mov edx, dword ptr ds : [esi+0x1C]
        inc edx
        cmp eax, 0x24
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [esi+0x1C], edx
        jne public_680b76e
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
        jl public_680b586
        mov edx, dword ptr ds : [ecx+4]
        xor eax, eax
        mov al, byte ptr ds : [edx]
        inc edx
        mov dword ptr ds : [ecx+4], edx
        jmp public_680b58d
        public_680b586 : nop
        push ecx
        call dword ptr ds : [ecx+8]
        add esp, 4
        public_680b58d : nop
        lea ecx, ss:[esp+0xC]
        push ecx
        push esi
        mov dword ptr ds : [esi], eax
        call public_680b850
        lea edx, ss:[esp+0x14]
/*FIXUP push offset public_680e3b4 @0x680b59e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680e3b4
        push edx
        call public_6805d20
        add esp, 0x10
        cmp eax, 6
        ja public_680b711
/*FIXUP jmp dword ptr ds : [eax*4+public_680b774] @0x680b5b5*/
  JMPTB cmp eax, 0
  JMPTB je public_680b5bc
  JMPTB cmp eax, 1
  JMPTB je public_680b5d5
  JMPTB cmp eax, 2
  JMPTB je public_680b5eb
  JMPTB cmp eax, 3
  JMPTB je public_680b601
  JMPTB cmp eax, 4
  JMPTB je public_680b621
  JMPTB cmp eax, 5
  JMPTB je public_680b626
  JMPTB cmp eax, 6
  JMPTB je public_680b6b6
  JMPTB int 3
        public_680b5bc : nop
        test edi, edi
        jne public_680b724
        mov eax, dword ptr ds : [public_680e604]
        mov dword ptr ds : [eax+0x34], 1
        jmp public_680b724
        public_680b5d5 : nop
        test edi, edi
        jne public_680b724
        mov ecx, dword ptr ds : [public_680e604]
        mov dword ptr ds : [ecx+0x34], edi
        jmp public_680b724
        public_680b5eb : nop
        test edi, edi
        jne public_680b724
        mov dword ptr ds : [esi], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x20], edi
        jmp public_680b724
        public_680b601 : nop
        mov eax, dword ptr ds : [esi+0x20]
        test eax, eax
        lea edx, ds:[eax-1]
        mov dword ptr ds : [esi+0x20], edx
        jne public_680b724
/*FIXUP push offset public_680e5b8 @0x680b612*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680e5b8
/*FIXUP push offset public_680e5a8 @0x680b617*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680e5a8
        jmp public_680b71b
        public_680b621 : nop
        mov ebp, 1
        public_680b626 : nop
        cmp dword ptr ds : [esi+0x20], 4
        jne public_680b63f
/*FIXUP push offset public_680e5a4 @0x680b62c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680e5a4
/*FIXUP push offset public_680e58c @0x680b631*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680e58c
        push esi
        call public_680a800
        add esp, 0xC
        public_680b63f : nop
        lea eax, ss:[esp+0xC]
        push eax
        push esi
        call public_680b850
        mov edx, dword ptr ds : [esi+0x20]
        inc edx
        mov dword ptr ds : [esi+0x20], edx
        mov eax, edx
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ds:[eax+eax*2+9]
        push esi
        mov dword ptr ds : [esi+ecx*4], 0
        call public_680b7d0
        add esp, 0x10
        test eax, eax
        je public_680b679
        xor ecx, ecx
        test ebp, ebp
        sete cl
        jmp public_680b67b
        public_680b679 : nop
        mov ecx, ebp
        public_680b67b : nop
        test edi, edi
        mov eax, dword ptr ds : [esi+0x20]
        lea eax, ds:[eax+eax*2]
        mov dword ptr ds : [esi+eax*4+0x28], ecx
        jne public_680b6a5
        mov eax, dword ptr ds : [esi+0x20]
        lea ecx, ds:[eax+eax*2]
        mov eax, dword ptr ds : [esi+ecx*4+0x28]
        test eax, eax
        je public_680b6a5
        mov eax, dword ptr ds : [esi+0x20]
        xor ecx, ecx
        lea edx, ds:[eax+eax*2]
        mov dword ptr ds : [esi+edx*4+0x2C], ecx
        jmp public_680b724
        public_680b6a5 : nop
        mov eax, dword ptr ds : [esi+0x20]
        mov ecx, 1
        lea edx, ds:[eax+eax*2]
        mov dword ptr ds : [esi+edx*4+0x2C], ecx
        jmp public_680b724
        public_680b6b6 : nop
        mov eax, dword ptr ds : [esi+0x20]
        add eax, 3
        lea eax, ds:[eax+eax*2]
        cmp dword ptr ds : [esi+eax*4], 0
        je public_680b6d8
/*FIXUP push offset public_680e584 @0x680b6c5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680e584
/*FIXUP push offset public_680e574 @0x680b6ca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680e574
        push esi
        call public_680a800
        add esp, 0xC
        public_680b6d8 : nop
        mov eax, dword ptr ds : [esi+0x20]
        add eax, 3
        lea ecx, ds:[eax+eax*2]
        mov dword ptr ds : [esi+ecx*4], 1
        mov eax, dword ptr ds : [esi+0x20]
        lea edx, ds:[eax+eax*2]
        mov ecx, dword ptr ds : [esi+edx*4+0x20]
        test ecx, ecx
        lea eax, ds:[esi+edx*4]
        jne public_680b707
        mov ecx, dword ptr ds : [eax+0x28]
        test ecx, ecx
        jne public_680b707
        xor ecx, ecx
        mov dword ptr ds : [eax+0x2C], ecx
        jmp public_680b724
        public_680b707 : nop
        mov ecx, 1
        mov dword ptr ds : [eax+0x2C], ecx
        jmp public_680b724
        public_680b711 : nop
        lea eax, ss:[esp+0xC]
        push eax
/*FIXUP push offset public_680e564 @0x680b716*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680e564
        public_680b71b : nop
        push esi
        call public_680a800
        add esp, 0xC
        public_680b724 : nop
        push esi
        call public_680b790
        mov eax, dword ptr ds : [esi]
        add esp, 4
        cmp eax, 0xA
        pop edi
        pop ebp
        jne public_680b74d
        push esi
        call public_680b520
        add esp, 4
        push esi
        call public_680b900
        add esp, 4
        pop esi
        add esp, 0x54
        ret 
        public_680b74d : nop
        cmp eax, 0xFFFFFFFF
        je public_680b765
        lea ecx, ss:[esp+4]
        push ecx
/*FIXUP push offset public_680e54c @0x680b757*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680e54c
        push esi
        call public_680a800
        add esp, 0xC
        public_680b765 : nop
        push esi
        call public_680b900
        add esp, 4
        public_680b76e : nop
        pop esi
        add esp, 0x54
        ret 
        UNREACHABLE_TRAP(0x680b520)
        ASM_EXPORT_ENTRY_FIRST(0x680b5bc, public_680b5bc)
        ASM_EXPORT_ENTRY(0x680b5d5, public_680b5d5)
        ASM_EXPORT_ENTRY(0x680b5eb, public_680b5eb)
        ASM_EXPORT_ENTRY(0x680b601, public_680b601)
        ASM_EXPORT_ENTRY(0x680b621, public_680b621)
        ASM_EXPORT_ENTRY(0x680b626, public_680b626)
        ASM_EXPORT_ENTRY_LAST(0x680b6b6, public_680b6b6)
    }
}

#undef public_680b542
#undef public_680b549
#undef public_680b586
#undef public_680b58d
#undef public_680b5bc
#undef public_680b5d5
#undef public_680b5eb
#undef public_680b601
#undef public_680b621
#undef public_680b626
#undef public_680b63f
#undef public_680b679
#undef public_680b67b
#undef public_680b6a5
#undef public_680b6b6
#undef public_680b6d8
#undef public_680b707
#undef public_680b711
#undef public_680b71b
#undef public_680b724
#undef public_680b74d
#undef public_680b765
#undef public_680b76e

#pragma init_seg(compiler)
extern "C" void const* const public_680b5bc = __AsmFindLabelExport(&internal_680b520, 0x680b5bc);
extern "C" void const* const public_680b5d5 = __AsmFindLabelExport(&internal_680b520, 0x680b5d5);
extern "C" void const* const public_680b5eb = __AsmFindLabelExport(&internal_680b520, 0x680b5eb);
extern "C" void const* const public_680b601 = __AsmFindLabelExport(&internal_680b520, 0x680b601);
extern "C" void const* const public_680b621 = __AsmFindLabelExport(&internal_680b520, 0x680b621);
extern "C" void const* const public_680b626 = __AsmFindLabelExport(&internal_680b520, 0x680b626);
extern "C" void const* const public_680b6b6 = __AsmFindLabelExport(&internal_680b520, 0x680b6b6);
