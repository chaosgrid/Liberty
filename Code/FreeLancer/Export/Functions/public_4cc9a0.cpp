#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421670);
CLANG_FORWARD_PROC_SYMBOL(public_421690);
CLANG_FORWARD_PROC_SYMBOL(public_421a70);
CLANG_FORWARD_PROC_SYMBOL(public_421ca0);
CLANG_FORWARD_PROC_SYMBOL(public_421cc0);
CLANG_FORWARD_PROC_SYMBOL(public_421dd0);
CLANG_FORWARD_PROC_SYMBOL(public_421ed0);
CLANG_FORWARD_PROC_SYMBOL(public_4220a0);
CLANG_FORWARD_PROC_SYMBOL(public_4220c0);
CLANG_FORWARD_PROC_SYMBOL(public_4225e0);
CLANG_FORWARD_PROC_SYMBOL(public_4255c0);
CLANG_FORWARD_PROC_SYMBOL(public_425640);
CLANG_FORWARD_PROC_SYMBOL(public_4cc9a0);

#define public_4cc9bb _public_4cc9bb
#define public_4cca20 _public_4cca20
#define public_4cca2e _public_4cca2e
#define public_4cca3c _public_4cca3c
#define public_4cca4a _public_4cca4a
#define public_4cca58 _public_4cca58
#define public_4cca66 _public_4cca66
#define public_4cca88 _public_4cca88
#define public_4cca9e _public_4cca9e
#define public_4ccba4 _public_4ccba4

PROC_DECLARE(0x4cc9a0, internal_4cc9a0, public_4cc9a0);
extern "C" NAKED register_t __cdecl internal_4cc9a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ds : [public_673570]
        sub esp, 8
        test eax, eax
        jne public_4cc9bb
/*FIXUP push offset public_5d7490 @0x4cc9ac*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7490
        mov ecx, offset public_673570
        call public_4255c0
        public_4cc9bb : nop
        call public_4225e0
        push 0
        mov ecx, offset public_673570
        call public_425640
        push eax
        call public_4220a0
        push 0xB71
        call public_421ed0
        push 0xB44
        call public_421ed0
        push 0xBE2
        call public_421dd0
        xor eax, eax
        mov al, byte ptr ds : [public_612378]
        xor ecx, ecx
        mov cl, al
        xor edx, edx
        mov dl, al
        push ecx
        push edx
        push eax
        call public_421a70
        mov eax, dword ptr ds : [public_612374]
        add esp, 0x1C
        dec eax
        cmp eax, 6
        ja public_4ccba4
/*FIXUP jmp dword ptr ds : [eax*4+public_4ccba8] @0x4cca19*/
  JMPTB cmp eax, 0
  JMPTB je public_4cca20
  JMPTB cmp eax, 1
  JMPTB je public_4cca2e
  JMPTB cmp eax, 2
  JMPTB je public_4cca3c
  JMPTB cmp eax, 3
  JMPTB je public_4cca4a
  JMPTB cmp eax, 4
  JMPTB je public_4cca58
  JMPTB cmp eax, 5
  JMPTB je public_4cca66
  JMPTB cmp eax, 6
  JMPTB je public_4cca88
  JMPTB int 3
        public_4cca20 : nop
        push 6
        push 5
        call public_4220c0
        add esp, 8
        jmp public_4cca9e
        public_4cca2e : nop
        push 2
        push 5
        call public_4220c0
        add esp, 8
        jmp public_4cca9e
        public_4cca3c : nop
        push 6
        push 3
        call public_4220c0
        add esp, 8
        jmp public_4cca9e
        public_4cca4a : nop
        push 2
        push 3
        call public_4220c0
        add esp, 8
        jmp public_4cca9e
        public_4cca58 : nop
        push 6
        push 2
        call public_4220c0
        add esp, 8
        jmp public_4cca9e
        public_4cca66 : nop
        push 0x80
        push 0x80
        push 0x80
        call public_421a70
        push 2
        push 2
        call public_4220c0
        add esp, 0x14
        jmp public_4cca9e
        public_4cca88 : nop
        push 0xBE2
        call public_421ed0
        push 4
        push 3
        call public_4220c0
        add esp, 0xC
        public_4cca9e : nop
        push ebx
        push ebp
        push esi
        push edi
        call dword ptr ds : [public_5c71dc]
        mov ecx, eax
        and ecx, 0xFF
        mov dword ptr ss : [esp+0x14], ecx
        fild dword ptr ss : [esp+0x14]
        sar eax, 4
        and eax, 0xFC
        mov dword ptr ss : [esp+0x14], eax
        fmul dword ptr ds : [public_5d748c]
        push 8
        fstp dword ptr ss : [esp+0x14]
        fild dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_5d748c]
        fstp dword ptr ss : [esp+0x18]
        call public_421670
        mov edi, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ss : [esp+0x14]
        push edi
        push ebx
        call public_421ca0
        mov esi, dword ptr ss : [esp+0x28]
        fild dword ptr ds : [esi+4]
        add esp, 0xC
        push 0
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        fild dword ptr ds : [esi]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ds : [public_5c75dc]
        push edi
        fstp dword ptr ss : [esp+0x2C]
        mov edi, dword ptr ss : [esp+0x2C]
        push edi
        call public_421ca0
        fild dword ptr ds : [esi+4]
        add esp, 0x14
        push 0
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        fild dword ptr ds : [esi+8]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ds : [public_5c75dc]
        fstp dword ptr ss : [esp+0x28]
        mov ebp, dword ptr ss : [esp+0x28]
        push ebp
        push edi
        call public_421ca0
        fild dword ptr ds : [esi+0xC]
        add esp, 0x14
        push 0
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        fild dword ptr ds : [esi+8]
        fstp dword ptr ss : [esp]
        call public_421cc0
        push ebp
        push ebx
        call public_421ca0
        fild dword ptr ds : [esi+0xC]
        add esp, 0x14
        push 0
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        fild dword ptr ds : [esi]
        fstp dword ptr ss : [esp]
        call public_421cc0
        add esp, 0xC
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        jmp public_421690
        public_4ccba4 : nop
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x4cc9a0)
        ASM_EXPORT_ENTRY_SINGLE(0x4cca88, public_4cca88)
    }
}

#undef public_4cc9bb
#undef public_4cca20
#undef public_4cca2e
#undef public_4cca3c
#undef public_4cca4a
#undef public_4cca58
#undef public_4cca66
#undef public_4cca88
#undef public_4cca9e
#undef public_4ccba4

#pragma init_seg(compiler)
extern "C" void const* const public_4cca88 = __AsmFindLabelExport(&internal_4cc9a0, 0x4cca88);
