#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6310b70);

#define public_6310bc1 _public_6310bc1
#define public_6310bc5 _public_6310bc5
#define public_6310be9 _public_6310be9
#define public_6310bf0 _public_6310bf0
#define public_6310bf4 _public_6310bf4
#define public_6310c07 _public_6310c07
#define public_6310c0e _public_6310c0e
#define public_6310c31 _public_6310c31
#define public_6310c3c _public_6310c3c
#define public_6310c7c _public_6310c7c
#define public_6310c81 _public_6310c81
#define public_6310c9f _public_6310c9f
#define public_6310cec _public_6310cec
#define public_6310cf6 _public_6310cf6

PROC_DECLARE(0x6310b70, internal_6310b70, public_6310b70);
extern "C" NAKED register_t __cdecl internal_6310b70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x108
        push ebx
        push ebp
        mov ebx, ecx
        mov al, byte ptr ds : [ebx+0x1564]
        test al, al
        push esi
        push edi
        je public_6310cf6
        mov eax, dword ptr ds : [ebx+0x145C]
        test eax, eax
        lea edi, ds:[ebx+0x1464]
        mov dword ptr ss : [esp+0x10], edi
        mov byte ptr ds : [edi], 0
        je public_6310cec
        movzx ecx, byte ptr ds : [eax+2]
        xor ebp, ebp
        test ecx, ecx
        jle public_6310cec
        xor esi, esi
        mov dword ptr ss : [esp+0x14], esi
        jmp public_6310bc5
        public_6310bc1 : nop
        mov esi, dword ptr ss : [esp+0x14]
        public_6310bc5 : nop
        test eax, eax
        je public_6310c7c
        cmp ebp, ecx
        jae public_6310c3c
        mov eax, dword ptr ds : [ebx+0x1460]
        movzx ecx, byte ptr ds : [eax+esi]
        add eax, esi
        cmp ecx, 3
        ja public_6310c07
/*FIXUP jmp dword ptr ds : [ecx*4+public_6310d04] @0x6310be2*/
  JMPTB cmp ecx, 0
  JMPTB je public_6310be9
  JMPTB cmp ecx, 1
  JMPTB je public_6310bf0
  JMPTB cmp ecx, 2
  JMPTB je public_6310c0e
  JMPTB cmp ecx, 3
  JMPTB je public_6310c31
  JMPTB int 3
        public_6310be9 : nop
        movzx eax, byte ptr ds : [eax+1]
        push eax
        jmp public_6310bf4
        public_6310bf0 : nop
        mov ecx, dword ptr ds : [eax+1]
        push ecx
/*FIXUP public_6310bf4 : nop
        push offset public_63a362c @0x6310bf4*/
  FIXUP public_6310bf4 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a362c
/*FIXUP push offset public_658e900 @0x6310bf9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658e900
        call dword ptr ds : [public_639931c]
        add esp, 0xC
        public_6310c07 : nop
        mov edx, offset public_658e900
        jmp public_6310c81
        public_6310c0e : nop
        fld dword ptr ds : [eax+1]
        sub esp, 8
        fstp qword ptr ss : [esp]
/*FIXUP push offset public_63a3628 @0x6310c17*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3628
/*FIXUP push offset public_658e900 @0x6310c1c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658e900
        call dword ptr ds : [public_639931c]
        add esp, 0x10
        mov edx, offset public_658e900
        jmp public_6310c81
        public_6310c31 : nop
        mov edx, dword ptr ds : [eax+1]
        add edx, dword ptr ds : [ebx+0x1450]
        jmp public_6310c81
        public_6310c3c : nop
        movzx edx, word ptr ds : [eax]
        mov ecx, dword ptr ds : [ebx+0x1450]
        mov eax, dword ptr ds : [ebx+0x1454]
        push ebp
        add edx, ecx
        push edx
        movzx edx, word ptr ds : [eax]
        add edx, ecx
        push edx
        lea eax, ss:[esp+0x24]
/*FIXUP push offset public_63a35f8 @0x6310c59*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a35f8
        push eax
        call dword ptr ds : [public_639931c]
        add esp, 0x14
        push 0
/*FIXUP push offset public_63a35f0 @0x6310c6a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a35f0
        lea ecx, ss:[esp+0x20]
        push ecx
        push 0
        call dword ptr ds : [public_6399394]
        public_6310c7c : nop
        mov edx, offset public_63997b0
        public_6310c81 : nop
        test esi, esi
        jle public_6310c9f
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        mov ax, word ptr ds : [public_63a3624]
        dec edi
        mov word ptr ds : [edi], ax
        mov cl, byte ptr ds : [public_63a3626]
        mov byte ptr ds : [edi+2], cl
        public_6310c9f : nop
        xor eax, eax
        mov edi, edx
        mov ecx, 0xFFFFFFFF
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        or ecx, 0xFFFFFFFF
        mov esi, edi
        mov edi, dword ptr ss : [esp+0x10]
        repne scasb
        dec edi
        mov ecx, edx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr ds : [ebx+0x145C]
        mov esi, dword ptr ss : [esp+0x14]
        movzx ecx, byte ptr ds : [eax+2]
        mov edi, dword ptr ss : [esp+0x10]
        inc ebp
        add esi, 5
        cmp ebp, ecx
        mov dword ptr ss : [esp+0x14], esi
        jl public_6310bc1
        public_6310cec : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_6310cf6 : nop
        pop edi
        lea eax, ds:[ebx+0x828]
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6310b70)
        ASM_EXPORT_ENTRY_FIRST(0x6310be9, public_6310be9)
        ASM_EXPORT_ENTRY(0x6310bf0, public_6310bf0)
        ASM_EXPORT_ENTRY(0x6310c0e, public_6310c0e)
        ASM_EXPORT_ENTRY_LAST(0x6310c31, public_6310c31)
    }
}

#undef public_6310bc1
#undef public_6310bc5
#undef public_6310be9
#undef public_6310bf0
#undef public_6310bf4
#undef public_6310c07
#undef public_6310c0e
#undef public_6310c31
#undef public_6310c3c
#undef public_6310c7c
#undef public_6310c81
#undef public_6310c9f
#undef public_6310cec
#undef public_6310cf6

#pragma init_seg(compiler)
extern "C" void const* const public_6310be9 = __AsmFindLabelExport(&internal_6310b70, 0x6310be9);
extern "C" void const* const public_6310bf0 = __AsmFindLabelExport(&internal_6310b70, 0x6310bf0);
extern "C" void const* const public_6310c0e = __AsmFindLabelExport(&internal_6310b70, 0x6310c0e);
extern "C" void const* const public_6310c31 = __AsmFindLabelExport(&internal_6310b70, 0x6310c31);
