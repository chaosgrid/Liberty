#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63272c0);
CLANG_FORWARD_PROC_SYMBOL(public_63286a0);
CLANG_FORWARD_PROC_SYMBOL(public_6328ba0);
CLANG_FORWARD_PROC_SYMBOL(public_632c490);
CLANG_FORWARD_JUMP_SYMBOL(public_63972a1);

#define public_632a5a7 _public_632a5a7
#define public_632a5c5 _public_632a5c5
#define public_632a643 _public_632a643
#define public_632a6eb _public_632a6eb
#define public_632a76c _public_632a76c
#define public_632a7c8 _public_632a7c8
#define public_632a7d1 _public_632a7d1
#define public_632a836 _public_632a836
#define public_632a843 _public_632a843
#define public_632a848 _public_632a848
#define public_632a86d _public_632a86d

PROC_DECLARE(0x632a560, internal_632a560, public_632a560);
extern "C" NAKED register_t __cdecl internal_632a560()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_63972a1 @0x632a562*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63972a1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x78
        mov ecx, dword ptr ss : [esp+0x90]
        test ecx, ecx
        mov al, 1
        push edi
        mov edi, dword ptr ss : [esp+0x90]
        mov byte ptr ss : [esp+6], al
        je public_632a86d
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x98]
        or ebx, 0xFFFFFFFF
        mov ebp, offset public_63a3e54
        public_632a5a7 : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        je public_632a848
        mov eax, dword ptr ds : [edi]
        dec eax
        cmp eax, 5
        ja public_632a843
/*FIXUP jmp dword ptr ds : [eax*4+public_632a884] @0x632a5be*/
  JMPTB cmp eax, 0
  JMPTB je public_632a5c5
  JMPTB cmp eax, 1
  JMPTB je public_632a643
  JMPTB cmp eax, 2
  JMPTB je public_632a843
  JMPTB cmp eax, 3
  JMPTB je public_632a6eb
  JMPTB cmp eax, 4
  JMPTB je public_632a76c
  JMPTB cmp eax, 5
  JMPTB je public_632a7d1
  JMPTB int 3
        public_632a5c5 : nop
        mov eax, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x48], eax
        mov eax, dword ptr ds : [edi+0xC]
        push eax
        lea ecx, ss:[esp+0x4C]
        push ecx
        lea ecx, ss:[esp+0x7C]
        mov dword ptr ss : [esp+0x7C], offset public_63a3f64
        call public_63286a0
        xor eax, eax
        mov dword ptr ss : [esp+0x84], eax
        mov edx, dword ptr ss : [esp+0x74]
        lea ecx, ss:[esp+0x74]
        mov dword ptr ss : [esp+0x90], eax
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x1C]
        push ecx
        push eax
        lea edx, ss:[esp+0x34]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x9C], 1
        call public_632c490
        lea ecx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0x90], 0
        call public_63272c0
        mov dword ptr ss : [esp+0x90], ebx
        mov dword ptr ss : [esp+0x74], ebp
        jmp public_632a848
        public_632a643 : nop
        mov dword ptr ss : [esp+0x60], ebp
        lea eax, ss:[esp+0x13]
        push eax
        lea ecx, ss:[esp+0x68]
        mov dword ptr ss : [esp+0x94], 2
        call dword ptr ds : [public_63991cc]
        push ebx
        lea ecx, ds:[edi+8]
        push ecx
        lea ecx, ss:[esp+0x68]
        mov byte ptr ss : [esp+0x98], 3
        mov dword ptr ss : [esp+0x68], offset public_63a3fec
        call public_6328ba0
        mov edx, dword ptr ss : [esp+0x60]
        lea ecx, ss:[esp+0x60]
        mov dword ptr ss : [esp+0x90], 4
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x20]
        push ecx
        push eax
        lea edx, ss:[esp+0x38]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x9C], 5
        call public_632c490
        lea ecx, ss:[esp+0x20]
        mov byte ptr ss : [esp+0x90], 4
        call public_63272c0
        push 1
        lea ecx, ss:[esp+0x68]
        mov dword ptr ss : [esp+0x94], ebx
        mov dword ptr ss : [esp+0x64], offset public_63a3fec
        call dword ptr ds : [public_6399160]
        mov dword ptr ss : [esp+0x60], ebp
        jmp public_632a848
        public_632a6eb : nop
        fld dword ptr ds : [edi+9]
        mov al, byte ptr ds : [edi+8]
        fld dword ptr ds : [edi+0xD]
        mov dword ptr ss : [esp+0x50], offset public_63a420c
        fstp dword ptr ss : [esp+0x5C]
        mov cl, al
        and cl, 1
        fstp dword ptr ss : [esp+0x58]
        shr al, 1
        mov byte ptr ss : [esp+0x54], cl
        and al, 1
        lea ecx, ss:[esp+0x50]
        mov dword ptr ss : [esp+0x90], 6
        mov byte ptr ss : [esp+0x55], al
        call dword ptr ds : [public_63a4228]
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0x24]
        push edx
        push eax
        lea eax, ss:[esp+0x3C]
        push eax
        mov ecx, esi
        mov byte ptr ss : [esp+0x9C], 7
        call public_632c490
        lea ecx, ss:[esp+0x24]
        mov byte ptr ss : [esp+0x90], 6
        call public_63272c0
        mov dword ptr ss : [esp+0x90], ebx
        mov dword ptr ss : [esp+0x50], ebp
        jmp public_632a848
        public_632a76c : nop
        mov dword ptr ss : [esp+0x28], offset public_63a4294
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x90], 8
        call dword ptr ds : [public_63a42b0]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x14]
        push ecx
        push eax
        lea edx, ss:[esp+0x40]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x9C], 9
        call public_632c490
        mov ecx, dword ptr ss : [esp+0x14]
        test ecx, ecx
        mov byte ptr ss : [esp+0x90], 8
        je public_632a7c8
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x14], 0
        public_632a7c8 : nop
        mov dword ptr ss : [esp+0x90], ebx
        jmp public_632a848
        public_632a7d1 : nop
        mov ax, word ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x40], offset public_63a442c
        lea ecx, ss:[esp+0x40]
        mov dword ptr ss : [esp+0x90], 0xA
        mov word ptr ss : [esp+0x44], ax
        call dword ptr ds : [public_63a4448]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x18]
        push ecx
        push eax
        lea edx, ss:[esp+0x44]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x9C], 0xB
        call public_632c490
        mov ecx, dword ptr ss : [esp+0x18]
        test ecx, ecx
        mov byte ptr ss : [esp+0x90], 0xA
        je public_632a836
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x18], 0
        public_632a836 : nop
        mov dword ptr ss : [esp+0x90], ebx
        mov dword ptr ss : [esp+0x40], ebp
        jmp public_632a848
        public_632a843 : nop
        mov byte ptr ss : [esp+0x12], 0
        public_632a848 : nop
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ss : [esp+0xA0]
        add eax, 8
        add edi, eax
        sub ecx, eax
        mov dword ptr ss : [esp+0xA0], ecx
        jne public_632a5a7
        mov al, byte ptr ss : [esp+0x12]
        pop esi
        pop ebp
        pop ebx
        public_632a86d : nop
        mov ecx, dword ptr ss : [esp+0x7C]
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0x84
        ret 0xC
        UNREACHABLE_TRAP(0x632a560)
        ASM_EXPORT_ENTRY_FIRST(0x632a5c5, public_632a5c5)
        ASM_EXPORT_ENTRY(0x632a643, public_632a643)
        ASM_EXPORT_ENTRY(0x632a6eb, public_632a6eb)
        ASM_EXPORT_ENTRY(0x632a76c, public_632a76c)
        ASM_EXPORT_ENTRY(0x632a7d1, public_632a7d1)
        ASM_EXPORT_ENTRY_LAST(0x632a843, public_632a843)
    }
}

#undef public_632a5a7
#undef public_632a5c5
#undef public_632a643
#undef public_632a6eb
#undef public_632a76c
#undef public_632a7c8
#undef public_632a7d1
#undef public_632a836
#undef public_632a843
#undef public_632a848
#undef public_632a86d

#pragma init_seg(compiler)
extern "C" void const* const public_632a5c5 = __AsmFindLabelExport(&internal_632a560, 0x632a5c5);
extern "C" void const* const public_632a643 = __AsmFindLabelExport(&internal_632a560, 0x632a643);
extern "C" void const* const public_632a6eb = __AsmFindLabelExport(&internal_632a560, 0x632a6eb);
extern "C" void const* const public_632a76c = __AsmFindLabelExport(&internal_632a560, 0x632a76c);
extern "C" void const* const public_632a7d1 = __AsmFindLabelExport(&internal_632a560, 0x632a7d1);
extern "C" void const* const public_632a843 = __AsmFindLabelExport(&internal_632a560, 0x632a843);
