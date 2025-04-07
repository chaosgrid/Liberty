#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41fa10);
CLANG_FORWARD_PROC_SYMBOL(public_41fd00);
CLANG_FORWARD_PROC_SYMBOL(public_4207b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_41fa60 _public_41fa60
#define public_41fa83 _public_41fa83
#define public_41faa9 _public_41faa9
#define public_41faaf _public_41faaf
#define public_41facc _public_41facc
#define public_41fb1e _public_41fb1e
#define public_41fb22 _public_41fb22
#define public_41fb54 _public_41fb54
#define public_41fb5b _public_41fb5b
#define public_41fba1 _public_41fba1
#define public_41fbcf _public_41fbcf
#define public_41fc15 _public_41fc15
#define public_41fc40 _public_41fc40
#define public_41fc71 _public_41fc71
#define public_41fca0 _public_41fca0
#define public_41fca2 _public_41fca2
#define public_41fcc3 _public_41fcc3

PROC_DECLARE(0x41fa10, internal_41fa10, public_41fa10);
extern "C" NAKED register_t __cdecl internal_41fa10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x44
        push ebx
        push esi
        push edi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x24]
        xor edi, edi
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov edx, dword ptr ds : [esi+0x28]
        push edx
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [eax]
        push 0x14
        push eax
        call dword ptr ds : [ecx+0x28]
        test eax, eax
        setge bl
        test bl, bl
        mov byte ptr ss : [esp+0xF], bl
        je public_41fcc3
        cmp dword ptr ss : [esp+0x18], edi
        mov dword ptr ss : [esp+0x1C], edi
        jbe public_41fcc3
        push ebp
        mov dword ptr ss : [esp+0x18], edi
        lea ebx, ds:[ebx]
        public_41fa60 : nop
        mov eax, dword ptr ds : [esi+0x28]
        mov edi, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax+edi]
        add eax, edi
        cmp ecx, 0x13
        ja public_41fca2
/*FIXUP movzx edx, byte ptr ds : [ecx+public_41fce0] @0x41fa75*/
/*FIXUP jmp dword ptr ds : [edx*4+public_41fccc] @0x41fa7c*/
  JMPTB cmp ecx, 0
  JMPTB mov edx, 0
  JMPTB je public_41fb5b
  JMPTB cmp ecx, 1
  JMPTB mov edx, 4
  JMPTB je public_41fca2
  JMPTB cmp ecx, 2
  JMPTB mov edx, 4
  JMPTB je public_41fca2
  JMPTB cmp ecx, 3
  JMPTB mov edx, 4
  JMPTB je public_41fca2
  JMPTB cmp ecx, 4
  JMPTB mov edx, 1
  JMPTB je public_41fbcf
  JMPTB cmp ecx, 5
  JMPTB mov edx, 4
  JMPTB je public_41fca2
  JMPTB cmp ecx, 6
  JMPTB mov edx, 4
  JMPTB je public_41fca2
  JMPTB cmp ecx, 7
  JMPTB mov edx, 4
  JMPTB je public_41fca2
  JMPTB cmp ecx, 8
  JMPTB mov edx, 2
  JMPTB je public_41fc40
  JMPTB cmp ecx, 9
  JMPTB mov edx, 4
  JMPTB je public_41fca2
  JMPTB cmp ecx, 0xA
  JMPTB mov edx, 4
  JMPTB je public_41fca2
  JMPTB cmp ecx, 0xB
  JMPTB mov edx, 4
  JMPTB je public_41fca2
  JMPTB cmp ecx, 0xC
  JMPTB mov edx, 3
  JMPTB je public_41fa83
  JMPTB cmp ecx, 0xD
  JMPTB mov edx, 3
  JMPTB je public_41fa83
  JMPTB cmp ecx, 0xE
  JMPTB mov edx, 3
  JMPTB je public_41fa83
  JMPTB cmp ecx, 0xF
  JMPTB mov edx, 3
  JMPTB je public_41fa83
  JMPTB cmp ecx, 0x10
  JMPTB mov edx, 3
  JMPTB je public_41fa83
  JMPTB cmp ecx, 0x11
  JMPTB mov edx, 3
  JMPTB je public_41fa83
  JMPTB cmp ecx, 0x12
  JMPTB mov edx, 3
  JMPTB je public_41fa83
  JMPTB cmp ecx, 0x13
  JMPTB mov edx, 3
  JMPTB je public_41fa83
  JMPTB int 3
        public_41fa83 : nop
        mov edx, dword ptr ds : [eax+4]
        mov ebp, dword ptr ds : [eax+8]
        mov edi, dword ptr ds : [public_616850]
        shr edx, 7
        add ecx, 0xFFFFFFF4
        and dl, 1
        mov byte ptr ss : [esp+0x24], dl
        mov eax, 1
        je public_41faa9
        shl eax, cl
        or edi, eax
        jmp public_41faaf
        public_41faa9 : nop
        shl eax, cl
        not eax
        and edi, eax
        public_41faaf : nop
        test dl, dl
        mov dword ptr ds : [public_616850], edi
        mov byte ptr ss : [esp+0x14], 0
        je public_41fb22
        mov eax, dword ptr ds : [esi+ecx*4+0x44]
        xor edx, edx
        cmp ebp, eax
        jbe public_41facc
        mov edx, ebp
        sub edx, eax
        public_41facc : nop
        mov ebx, dword ptr ds : [public_616840]
        mov edi, dword ptr ds : [public_6107d4]
        mov eax, ebx
        sub eax, edi
        mov edi, dword ptr ds : [public_616844]
        sub edi, dword ptr ds : [public_6107d8]
        mov dword ptr ds : [public_6107d4], ebx
        mov ebx, dword ptr ds : [public_616844]
        mov dword ptr ds : [public_6107d8], ebx
        mov ebx, dword ptr ds : [esi+0x40]
        cmp edx, ebx
        jae public_41fb54
        cdq 
        xor eax, edx
        sub eax, edx
        cmp eax, 4
        jg public_41fb54
        mov eax, edi
        cdq 
        xor eax, edx
        sub eax, edx
        cmp eax, 4
        jg public_41fb54
        mov byte ptr ss : [esp+0x14], 1
        sub ebp, ebx
        public_41fb1e : nop
        mov dword ptr ds : [esi+ecx*4+0x44], ebp
        public_41fb22 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x24]
        push edx
        push eax
        push ecx
        lea ecx, ss:[esp+0x3C]
        call public_41fd00
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x30]
        push ecx
        push eax
        lea edx, ss:[esp+0x34]
        push edx
        mov ecx, esi
        call public_4207b0
        mov bl, byte ptr ss : [esp+0x13]
        jmp public_41fca2
        public_41fb54 : nop
        mov byte ptr ss : [esp+0x14], 0
        jmp public_41fb1e
        public_41fb5b : nop
        mov cl, byte ptr ds : [esi+0x14]
        test cl, 0x40
        jne public_41fca2
        test cl, 2
        fild dword ptr ds : [public_610850]
        mov eax, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x28], eax
        fmul qword ptr ds : [public_5c9680]
        fmul dword ptr ds : [public_6107d0]
        je public_41fba1
        sub eax, dword ptr ds : [esi+0x18]
        mov dword ptr ss : [esp+0x28], eax
        fild dword ptr ss : [esp+0x28]
        fmul st, st(1)
        call public_5b7ec0
        mov dword ptr ds : [public_616840], eax
        jmp public_41fca0
        public_41fba1 : nop
        fimul dword ptr ss : [esp+0x28]
        fadd dword ptr ds : [esi+0x64]
        fld st(0)
        call public_5b7ec0
        mov dword ptr ss : [esp+0x28], eax
        fild dword ptr ss : [esp+0x28]
        fsubr st, st(1)
        fstp dword ptr ds : [esi+0x64]
        mov ecx, dword ptr ds : [public_616840]
        add ecx, eax
        mov dword ptr ds : [public_616840], ecx
        jmp public_41fca0
        public_41fbcf : nop
        mov cl, byte ptr ds : [esi+0x14]
        test cl, 0x40
        jne public_41fca2
        test cl, 2
        fild dword ptr ds : [public_610850]
        mov eax, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x28], eax
        fmul qword ptr ds : [public_5c9680]
        fmul dword ptr ds : [public_6107d0]
        je public_41fc15
        sub eax, dword ptr ds : [esi+0x1C]
        mov dword ptr ss : [esp+0x28], eax
        fild dword ptr ss : [esp+0x28]
        fmul st, st(1)
        call public_5b7ec0
        mov dword ptr ds : [public_616844], eax
        jmp public_41fca0
        public_41fc15 : nop
        fimul dword ptr ss : [esp+0x28]
        fadd dword ptr ds : [esi+0x68]
        fld st(0)
        call public_5b7ec0
        mov dword ptr ss : [esp+0x28], eax
        fild dword ptr ss : [esp+0x28]
        fsubr st, st(1)
        fstp dword ptr ds : [esi+0x68]
        mov ecx, dword ptr ds : [public_616844]
        add ecx, eax
        mov dword ptr ds : [public_616844], ecx
        jmp public_41fca0
        public_41fc40 : nop
        mov cl, byte ptr ds : [esi+0x14]
        test cl, 0x40
        jne public_41fca2
        test cl, 2
        mov eax, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x28], eax
        je public_41fc71
        sub eax, dword ptr ds : [esi+0x20]
        mov dword ptr ss : [esp+0x28], eax
        fild dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [public_5c967c]
        call public_5b7ec0
        mov dword ptr ds : [public_616848], eax
        jmp public_41fca2
        public_41fc71 : nop
        fild dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [public_5c967c]
        fadd dword ptr ds : [esi+0x6C]
        fld st(0)
        call public_5b7ec0
        mov dword ptr ss : [esp+0x28], eax
        fild dword ptr ss : [esp+0x28]
        fsubr st, st(1)
        fstp dword ptr ds : [esi+0x6C]
        mov ecx, dword ptr ds : [public_616848]
        add ecx, eax
        mov dword ptr ds : [public_616848], ecx
        public_41fca0 : nop
        fstp st(0)
        public_41fca2 : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        inc eax
        add edx, 0x14
        cmp eax, ecx
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x18], edx
        jb public_41fa60
        pop ebp
        public_41fcc3 : nop
        pop edi
        pop esi
        mov al, bl
        pop ebx
        add esp, 0x44
        ret 
        UNREACHABLE_TRAP(0x41fa10)
        ASM_EXPORT_ENTRY_SINGLE(0x41fca2, public_41fca2)
    }
}

#undef public_41fa60
#undef public_41fa83
#undef public_41faa9
#undef public_41faaf
#undef public_41facc
#undef public_41fb1e
#undef public_41fb22
#undef public_41fb54
#undef public_41fb5b
#undef public_41fba1
#undef public_41fbcf
#undef public_41fc15
#undef public_41fc40
#undef public_41fc71
#undef public_41fca0
#undef public_41fca2
#undef public_41fcc3

#pragma init_seg(compiler)
extern "C" void const* const public_41fca2 = __AsmFindLabelExport(&internal_41fa10, 0x41fca2);
