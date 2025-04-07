#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63105b0);
CLANG_FORWARD_PROC_SYMBOL(public_631be30);

#define public_6310604 _public_6310604
#define public_6310616 _public_6310616
#define public_631062d _public_631062d
#define public_631063d _public_631063d
#define public_631063f _public_631063f
#define public_631064e _public_631064e
#define public_631067d _public_631067d
#define public_631068e _public_631068e
#define public_63106b5 _public_63106b5
#define public_6310704 _public_6310704
#define public_6310779 _public_6310779

PROC_DECLARE(0x63105b0, internal_63105b0, public_63105b0);
extern "C" NAKED register_t __cdecl internal_63105b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x100
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x1564]
        xor bl, bl
        test al, al
        push edi
        je public_6310704
        mov ecx, dword ptr ds : [esi+0x145C]
        test ecx, ecx
        je public_631063f
        movzx eax, byte ptr ds : [ecx+2]
        mov edi, dword ptr ss : [esp+0x114]
        cmp edi, eax
        jae public_63106b5
        mov edx, dword ptr ds : [esi+0x1460]
        lea edi, ds:[edi+edi*4]
        movzx eax, byte ptr ds : [edi+edx]
        add edi, edx
        cmp eax, 3
        ja public_631063f
/*FIXUP jmp dword ptr ds : [eax*4+public_63107ac] @0x63105fd*/
  JMPTB cmp eax, 0
  JMPTB je public_6310604
  JMPTB cmp eax, 1
  JMPTB je public_6310616
  JMPTB cmp eax, 2
  JMPTB je public_631062d
  JMPTB cmp eax, 3
  JMPTB je public_631064e
  JMPTB int 3
        public_6310604 : nop
        mov bl, byte ptr ds : [edi+1]
        pop edi
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        add esp, 0x100
        ret 4
        public_6310616 : nop
        mov eax, dword ptr ds : [edi+1]
        pop edi
        test eax, eax
        pop esi
        setne bl
        pop ebp
        mov al, bl
        pop ebx
        add esp, 0x100
        ret 4
        public_631062d : nop
        fld dword ptr ds : [edi+1]
        fcomp qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 0x44
        jnp public_631067d
        public_631063d : nop
        mov bl, 1
        public_631063f : nop
        pop edi
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        add esp, 0x100
        ret 4
        public_631064e : nop
        mov ebx, dword ptr ds : [edi+1]
        mov ecx, dword ptr ds : [esi+0x1450]
        mov ebp, dword ptr ds : [public_639902c]
        add ebx, ecx
/*FIXUP push offset public_63a36a0 @0x631065f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a36a0
        push ebx
        call ebp
        add esp, 8
        test eax, eax
        je public_631063d
/*FIXUP push offset public_63a3698 @0x631066e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3698
        push ebx
        call ebp
        add esp, 8
        test eax, eax
        jne public_631068e
        public_631067d : nop
        pop edi
        pop esi
        xor bl, bl
        pop ebp
        mov al, bl
        pop ebx
        add esp, 0x100
        ret 4
        public_631068e : nop
        mov ecx, dword ptr ds : [edi+1]
        add ecx, dword ptr ds : [esi+0x1450]
        push ecx
        call dword ptr ds : [public_6399254]
        add esp, 4
        pop edi
        test eax, eax
        pop esi
        setne bl
        pop ebp
        mov al, bl
        pop ebx
        add esp, 0x100
        ret 4
        public_63106b5 : nop
        movzx edx, word ptr ds : [ecx]
        mov eax, dword ptr ds : [esi+0x1450]
        mov ecx, dword ptr ds : [esi+0x1454]
        add edx, eax
        push edi
        push edx
        movzx edx, word ptr ds : [ecx]
        add edx, eax
        push edx
        lea eax, ss:[esp+0x1C]
/*FIXUP push offset public_63a35f8 @0x63106d2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a35f8
        push eax
        call dword ptr ds : [public_639931c]
        add esp, 0x14
        push 0
/*FIXUP push offset public_63a35f0 @0x63106e3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a35f0
        lea ecx, ss:[esp+0x18]
        push ecx
        push 0
        call dword ptr ds : [public_6399394]
        pop edi
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        add esp, 0x100
        ret 4
        public_6310704 : nop
        mov edx, dword ptr ss : [esp+0x114]
        push edx
        lea eax, ds:[esi+0x828]
        push eax
        call public_631be30
        mov ebp, dword ptr ds : [public_639902c]
        mov edi, eax
/*FIXUP push offset public_63a36a0 @0x6310720*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a36a0
        push edi
        call ebp
        add esp, 0x10
        test eax, eax
        je public_631063d
/*FIXUP push offset public_63a3694 @0x6310733*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3694
        push edi
        call ebp
        add esp, 8
        test eax, eax
        je public_631063d
/*FIXUP push offset public_63a3698 @0x6310746*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3698
        push edi
        call ebp
        add esp, 8
        test eax, eax
        je public_631067d
/*FIXUP push offset public_63a3690 @0x6310759*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3690
        push edi
        call ebp
        add esp, 8
        test eax, eax
        je public_631067d
        mov esi, dword ptr ds : [esi+4]
        test esi, esi
        jne public_6310779
        mov esi, dword ptr ds : [public_63991d0]
        public_6310779 : nop
        mov ecx, dword ptr ds : [public_6399028]
        push esi
        push edi
        push 0x126
/*FIXUP push offset public_63a366c @0x6310786*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a366c
        mov eax, 0x100001
/*FIXUP push offset public_63a3630 @0x6310790*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3630
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x18
        pop edi
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        add esp, 0x100
        ret 4
        UNREACHABLE_TRAP(0x63105b0)
        ASM_EXPORT_ENTRY_FIRST(0x6310604, public_6310604)
        ASM_EXPORT_ENTRY(0x6310616, public_6310616)
        ASM_EXPORT_ENTRY(0x631062d, public_631062d)
        ASM_EXPORT_ENTRY_LAST(0x631064e, public_631064e)
    }
}

#undef public_6310604
#undef public_6310616
#undef public_631062d
#undef public_631063d
#undef public_631063f
#undef public_631064e
#undef public_631067d
#undef public_631068e
#undef public_63106b5
#undef public_6310704
#undef public_6310779

#pragma init_seg(compiler)
extern "C" void const* const public_6310604 = __AsmFindLabelExport(&internal_63105b0, 0x6310604);
extern "C" void const* const public_6310616 = __AsmFindLabelExport(&internal_63105b0, 0x6310616);
extern "C" void const* const public_631062d = __AsmFindLabelExport(&internal_63105b0, 0x631062d);
extern "C" void const* const public_631064e = __AsmFindLabelExport(&internal_63105b0, 0x631064e);
