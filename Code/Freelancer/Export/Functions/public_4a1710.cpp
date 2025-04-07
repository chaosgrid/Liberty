#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42d680);
CLANG_FORWARD_PROC_SYMBOL(public_4a1710);
CLANG_FORWARD_PROC_SYMBOL(public_4a1ab0);
CLANG_FORWARD_PROC_SYMBOL(public_4a1ad0);
CLANG_FORWARD_PROC_SYMBOL(public_4a1af0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_4a179d _public_4a179d
#define public_4a17b6 _public_4a17b6
#define public_4a17e7 _public_4a17e7
#define public_4a17ff _public_4a17ff
#define public_4a1801 _public_4a1801
#define public_4a1816 _public_4a1816
#define public_4a181f _public_4a181f
#define public_4a1852 _public_4a1852
#define public_4a1872 _public_4a1872
#define public_4a1885 _public_4a1885
#define public_4a18be _public_4a18be
#define public_4a18f7 _public_4a18f7
#define public_4a192f _public_4a192f
#define public_4a1969 _public_4a1969
#define public_4a19e0 _public_4a19e0
#define public_4a1a54 _public_4a1a54
#define public_4a1a6a _public_4a1a6a
#define public_4a1a84 _public_4a1a84

PROC_DECLARE(0x4a1710, internal_4a1710, public_4a1710);
extern "C" NAKED register_t __cdecl internal_4a1710()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x1C
        push ebp
        push esi
        push edi
        mov ebp, ecx
        call public_42d680
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [ebp+0xBC4]
        fsub dword ptr ss : [esp+0x10]
        fst dword ptr ss : [ebp+0xBC4]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jp public_4a179d
        mov esi, dword ptr ds : [public_5c71dc]
        call esi
        imul eax, 0x7D0
        mov edi, dword ptr ss : [ebp+0x404]
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        add eax, 0x64
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], 0
        fild qword ptr ss : [esp+0x20]
        fmul dword ptr ds : [public_5d1494]
        fadd dword ptr ss : [ebp+0xBC4]
        fstp dword ptr ss : [ebp+0xBC4]
        call esi
        imul eax, edi
        lea eax, ds:[eax+eax*2]
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        mov dword ptr ss : [ebp+0xBC8], eax
        public_4a179d : nop
        mov eax, dword ptr ss : [ebp+0x400]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        mov dword ptr ss : [esp+0xC], 0
        je public_4a1a84
        push ebx
        public_4a17b6 : nop
        mov esi, dword ptr ds : [edi+8]
        mov al, byte ptr ds : [esi+0x48]
        test al, al
        je public_4a1a6a
        cmp dword ptr ds : [esi], 0
        jne public_4a1a6a
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [esi+0x68]
        fadd dword ptr ds : [esi+0x6C]
        fcom dword ptr ds : [public_5c75dc]
        fst dword ptr ds : [esi+0x6C]
        fnstsw ax
        test ah, 0x41
        jne public_4a17ff
        public_4a17e7 : nop
        fsub dword ptr ds : [public_5c75dc]
        fcom dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 0x41
        je public_4a17e7
        fstp dword ptr ds : [esi+0x6C]
        jmp public_4a1801
        public_4a17ff : nop
        fstp st(0)
        public_4a1801 : nop
        fld dword ptr ds : [esi+0x6C]
        fcomp dword ptr ds : [public_5c75e0]
        fnstsw ax
        test ah, 5
        jp public_4a1816
        fld dword ptr ds : [esi+0x6C]
        jmp public_4a181f
        public_4a1816 : nop
        fld dword ptr ds : [public_5c75dc]
        fsub dword ptr ds : [esi+0x6C]
        public_4a181f : nop
        fadd st(0), st
        fld qword ptr ds : [public_5d3f50]
        fmul st, st(1)
        fadd dword ptr ds : [esi+0x40]
        fstp dword ptr ds : [esi+0x3C]
        fmul dword ptr ds : [public_5d3f08]
        call public_5b7ec0
        lea ebx, ds:[eax*4]
        cmp ebx, 0xFF
        mov dword ptr ss : [esp+0x20], eax
        jle public_4a1852
        mov ebx, 0xFF
        public_4a1852 : nop
        fild dword ptr ss : [esp+0x20]
        fadd dword ptr ds : [public_5d3f0c]
        call public_5b7ec0
        mov ecx, dword ptr ss : [esp+0x10]
        cmp dword ptr ss : [ebp+0xBC8], ecx
        je public_4a1872
        mov ebx, 0xFF
        public_4a1872 : nop
        mov ecx, dword ptr ds : [esi+0x54]
        cmp ecx, 6
        ja public_4a1a6a
/*FIXUP jmp dword ptr ds : [ecx*4+public_4a1a8c] @0x4a187e*/
  JMPTB cmp ecx, 0
  JMPTB je public_4a1885
  JMPTB cmp ecx, 1
  JMPTB je public_4a18be
  JMPTB cmp ecx, 2
  JMPTB je public_4a18f7
  JMPTB cmp ecx, 3
  JMPTB je public_4a192f
  JMPTB cmp ecx, 4
  JMPTB je public_4a1969
  JMPTB cmp ecx, 5
  JMPTB je public_4a19e0
  JMPTB cmp ecx, 6
  JMPTB je public_4a1a54
  JMPTB int 3
        public_4a1885 : nop
        xor edx, edx
        mov dl, al
        xor eax, eax
        mov al, bl
        mov dword ptr ds : [esi+0x1C], 0x3F800000
        mov dword ptr ss : [esp+0x20], edx
        fild dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x20], eax
        fmul dword ptr ds : [public_5c7f68]
        fst dword ptr ds : [esi+0x20]
        fstp dword ptr ds : [esi+0x24]
        fild dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ds : [esi+0x2C]
        jmp public_4a1a6a
        public_4a18be : nop
        xor ecx, ecx
        mov cl, al
        xor edx, edx
        mov dl, bl
        mov dword ptr ds : [esi+0x20], 0x3F800000
        mov dword ptr ss : [esp+0x20], ecx
        fild dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x20], edx
        fmul dword ptr ds : [public_5c7f68]
        fst dword ptr ds : [esi+0x1C]
        fstp dword ptr ds : [esi+0x24]
        fild dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ds : [esi+0x2C]
        jmp public_4a1a6a
        public_4a18f7 : nop
        movzx eax, al
        mov dword ptr ss : [esp+0x20], eax
        xor ecx, ecx
        mov cl, bl
        fild dword ptr ss : [esp+0x20]
        mov dword ptr ds : [esi+0x24], 0x3F800000
        fmul dword ptr ds : [public_5c7f68]
        fst dword ptr ds : [esi+0x1C]
        fstp dword ptr ds : [esi+0x20]
        mov dword ptr ss : [esp+0x20], ecx
        fild dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ds : [esi+0x2C]
        jmp public_4a1a6a
        public_4a192f : nop
        xor edx, edx
        mov dl, al
        mov eax, 0x3F800000
        mov dword ptr ds : [esi+0x20], eax
        mov dword ptr ds : [esi+0x24], eax
        xor eax, eax
        mov al, bl
        mov dword ptr ss : [esp+0x20], edx
        fild dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [public_5c7f68]
        mov dword ptr ss : [esp+0x20], eax
        fstp dword ptr ds : [esi+0x1C]
        fild dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ds : [esi+0x2C]
        jmp public_4a1a6a
        public_4a1969 : nop
        push ebx
        push 0xFF
        push eax
        push 0xFF
        lea ecx, ss:[esp+0x28]
        call public_4a1ad0
        mov eax, dword ptr ss : [esp+0x18]
        xor ecx, ecx
        mov cl, al
        xor edx, edx
        mov dl, ah
        mov ax, word ptr ss : [esp+0x1A]
        mov dword ptr ss : [esp+0x20], ecx
        fild dword ptr ss : [esp+0x20]
        xor ecx, ecx
        mov dword ptr ss : [esp+0x20], edx
        mov cl, al
        fmul dword ptr ds : [public_5c7f68]
        xor edx, edx
        mov dl, ah
        fstp dword ptr ds : [esi+0x1C]
        fild dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x20], ecx
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ds : [esi+0x20]
        fild dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x20], edx
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ds : [esi+0x24]
        fild dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ds : [esi+0x2C]
        jmp public_4a1a6a
        public_4a19e0 : nop
        push ebx
        push eax
        push 0xFF
        push 0xFF
        lea ecx, ss:[esp+0x2C]
        call public_4a1ad0
        mov eax, dword ptr ss : [esp+0x1C]
        xor ecx, ecx
        mov cl, al
        xor edx, edx
        mov dl, ah
        mov ax, word ptr ss : [esp+0x1E]
        mov dword ptr ss : [esp+0x20], ecx
        fild dword ptr ss : [esp+0x20]
        xor ecx, ecx
        mov dword ptr ss : [esp+0x20], edx
        mov cl, al
        fmul dword ptr ds : [public_5c7f68]
        xor edx, edx
        mov dl, ah
        fstp dword ptr ds : [esi+0x1C]
        fild dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x20], ecx
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ds : [esi+0x20]
        fild dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x20], edx
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ds : [esi+0x24]
        fild dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ds : [esi+0x2C]
        jmp public_4a1a6a
        public_4a1a54 : nop
        push ebx
        push eax
        push eax
        push eax
        lea ecx, ss:[esp+0x34]
        call public_4a1ab0
        push eax
        lea ecx, ds:[esi+8]
        call public_4a1af0
        public_4a1a6a : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ds : [edi]
        mov eax, dword ptr ss : [ebp+0x400]
        inc ecx
        cmp edi, eax
        mov dword ptr ss : [esp+0x10], ecx
        jne public_4a17b6
        pop ebx
        public_4a1a84 : nop
        pop edi
        pop esi
        pop ebp
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x4a1710)
        ASM_EXPORT_ENTRY_SINGLE(0x4a1a54, public_4a1a54)
    }
}

#undef public_4a179d
#undef public_4a17b6
#undef public_4a17e7
#undef public_4a17ff
#undef public_4a1801
#undef public_4a1816
#undef public_4a181f
#undef public_4a1852
#undef public_4a1872
#undef public_4a1885
#undef public_4a18be
#undef public_4a18f7
#undef public_4a192f
#undef public_4a1969
#undef public_4a19e0
#undef public_4a1a54
#undef public_4a1a6a
#undef public_4a1a84

#pragma init_seg(compiler)
extern "C" void const* const public_4a1a54 = __AsmFindLabelExport(&internal_4a1710, 0x4a1a54);
