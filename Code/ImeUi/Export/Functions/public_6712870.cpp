#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6712b80);

#define public_6712891 _public_6712891
#define public_67128a0 _public_67128a0
#define public_67128ae _public_67128ae
#define public_67128bc _public_67128bc
#define public_67128ce _public_67128ce
#define public_67128e0 _public_67128e0
#define public_67128f2 _public_67128f2
#define public_67128ff _public_67128ff

PROC_DECLARE(0x6712870, internal_6712870, public_6712870);
extern "C" NAKED register_t __cdecl internal_6712870()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+4]
        push ebx
        add eax, 0xFFFFFFF8
        xor bl, bl
        push esi
        cmp eax, 0x26
        mov esi, ecx
        ja public_67128ff
/*FIXUP xor ecx, ecx @0x6712882*/
/*FIXUP mov cl, byte ptr ds : [eax+public_6712928] @0x6712884*/
/*FIXUP jmp dword ptr ds : [ecx*4+public_6712908] @0x671288a*/
  JMPTB cmp eax, 0
  JMPTB mov ecx, 0
  JMPTB je public_6712891
  JMPTB cmp eax, 1
  JMPTB mov ecx, 7
  JMPTB je public_67128ff
  JMPTB cmp eax, 2
  JMPTB mov ecx, 7
  JMPTB je public_67128ff
  JMPTB cmp eax, 3
  JMPTB mov ecx, 7
  JMPTB je public_67128ff
  JMPTB cmp eax, 4
  JMPTB mov ecx, 7
  JMPTB je public_67128ff
  JMPTB cmp eax, 5
  JMPTB mov ecx, 7
  JMPTB je public_67128ff
  JMPTB cmp eax, 6
  JMPTB mov ecx, 7
  JMPTB je public_67128ff
  JMPTB cmp eax, 7
  JMPTB mov ecx, 7
  JMPTB je public_67128ff
  JMPTB cmp eax, 8
  JMPTB mov ecx, 7
  JMPTB je public_67128ff
  JMPTB cmp eax, 9
  JMPTB mov ecx, 7
  JMPTB je public_67128ff
  JMPTB cmp eax, 0xA
  JMPTB mov ecx, 7
  JMPTB je public_67128ff
  JMPTB cmp eax, 0xB
  JMPTB mov ecx, 7
  JMPTB je public_67128ff
  JMPTB cmp eax, 0xC
  JMPTB mov ecx, 7
  JMPTB je public_67128ff
  JMPTB cmp eax, 0xD
  JMPTB mov ecx, 7
  JMPTB je public_67128ff
  JMPTB cmp eax, 0xE
  JMPTB mov ecx, 7
  JMPTB je public_67128ff
  JMPTB cmp eax, 0xF
  JMPTB mov ecx, 7
  JMPTB je public_67128ff
  JMPTB cmp eax, 0x10
  JMPTB mov ecx, 7
  JMPTB je public_67128ff
  JMPTB cmp eax, 0x11
  JMPTB mov ecx, 7
  JMPTB je public_67128ff
  JMPTB cmp eax, 0x12
  JMPTB mov ecx, 7
  JMPTB je public_67128ff
  JMPTB cmp eax, 0x13
  JMPTB mov ecx, 7
  JMPTB je public_67128ff
  JMPTB cmp eax, 0x14
  JMPTB mov ecx, 7
  JMPTB je public_67128ff
  JMPTB cmp eax, 0x15
  JMPTB mov ecx, 7
  JMPTB je public_67128ff
  JMPTB cmp eax, 0x16
  JMPTB mov ecx, 7
  JMPTB je public_67128ff
  JMPTB cmp eax, 0x17
  JMPTB mov ecx, 7
  JMPTB je public_67128ff
  JMPTB cmp eax, 0x18
  JMPTB mov ecx, 7
  JMPTB je public_67128ff
  JMPTB cmp eax, 0x19
  JMPTB mov ecx, 7
  JMPTB je public_67128ff
  JMPTB cmp eax, 0x1A
  JMPTB mov ecx, 7
  JMPTB je public_67128ff
  JMPTB cmp eax, 0x1B
  JMPTB mov ecx, 1
  JMPTB je public_67128f2
  JMPTB cmp eax, 0x1C
  JMPTB mov ecx, 2
  JMPTB je public_67128e0
  JMPTB cmp eax, 0x1D
  JMPTB mov ecx, 3
  JMPTB je public_67128ce
  JMPTB cmp eax, 0x1E
  JMPTB mov ecx, 7
  JMPTB je public_67128ff
  JMPTB cmp eax, 0x1F
  JMPTB mov ecx, 4
  JMPTB je public_67128bc
  JMPTB cmp eax, 0x20
  JMPTB mov ecx, 7
  JMPTB je public_67128ff
  JMPTB cmp eax, 0x21
  JMPTB mov ecx, 7
  JMPTB je public_67128ff
  JMPTB cmp eax, 0x22
  JMPTB mov ecx, 7
  JMPTB je public_67128ff
  JMPTB cmp eax, 0x23
  JMPTB mov ecx, 7
  JMPTB je public_67128ff
  JMPTB cmp eax, 0x24
  JMPTB mov ecx, 7
  JMPTB je public_67128ff
  JMPTB cmp eax, 0x25
  JMPTB mov ecx, 5
  JMPTB je public_67128ae
  JMPTB cmp eax, 0x26
  JMPTB mov ecx, 6
  JMPTB je public_67128a0
  JMPTB int 3
        public_6712891 : nop
        mov edx, dword ptr ds : [esi]
        push 0
        push 0
        mov ecx, esi
        call dword ptr ds : [edx+0x20]
        test al, al
        je public_67128ff
        public_67128a0 : nop
        mov ecx, esi
        call public_6712b80
        mov bl, al
        pop esi
        pop ebx
        ret 4
        public_67128ae : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x1C]
        mov al, bl
        pop esi
        pop ebx
        ret 4
        public_67128bc : nop
        mov edx, dword ptr ds : [esi]
        push 0
        push 1
        mov ecx, esi
        call dword ptr ds : [edx+0x20]
        mov bl, al
        pop esi
        pop ebx
        ret 4
        public_67128ce : nop
        mov eax, dword ptr ds : [esi]
        push 0
        push 0
        mov ecx, esi
        call dword ptr ds : [eax+0x20]
        mov bl, al
        pop esi
        pop ebx
        ret 4
        public_67128e0 : nop
        mov edx, dword ptr ds : [esi]
        push 1
        push 0
        mov ecx, esi
        call dword ptr ds : [edx+0x20]
        mov bl, al
        pop esi
        pop ebx
        ret 4
        public_67128f2 : nop
        mov eax, dword ptr ds : [esi]
        push 1
        push 1
        mov ecx, esi
        call dword ptr ds : [eax+0x20]
        mov bl, al
        public_67128ff : nop
        mov al, bl
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6712870)
        ASM_EXPORT_ENTRY_FIRST(0x6712891, public_6712891)
        ASM_EXPORT_ENTRY(0x67128a0, public_67128a0)
        ASM_EXPORT_ENTRY(0x67128ae, public_67128ae)
        ASM_EXPORT_ENTRY(0x67128bc, public_67128bc)
        ASM_EXPORT_ENTRY(0x67128ce, public_67128ce)
        ASM_EXPORT_ENTRY(0x67128e0, public_67128e0)
        ASM_EXPORT_ENTRY(0x67128f2, public_67128f2)
        ASM_EXPORT_ENTRY_LAST(0x67128ff, public_67128ff)
    }
}

#undef public_6712891
#undef public_67128a0
#undef public_67128ae
#undef public_67128bc
#undef public_67128ce
#undef public_67128e0
#undef public_67128f2
#undef public_67128ff

#pragma init_seg(compiler)
extern "C" void const* const public_6712891 = __AsmFindLabelExport(&internal_6712870, 0x6712891);
extern "C" void const* const public_67128a0 = __AsmFindLabelExport(&internal_6712870, 0x67128a0);
extern "C" void const* const public_67128ae = __AsmFindLabelExport(&internal_6712870, 0x67128ae);
extern "C" void const* const public_67128bc = __AsmFindLabelExport(&internal_6712870, 0x67128bc);
extern "C" void const* const public_67128ce = __AsmFindLabelExport(&internal_6712870, 0x67128ce);
extern "C" void const* const public_67128e0 = __AsmFindLabelExport(&internal_6712870, 0x67128e0);
extern "C" void const* const public_67128f2 = __AsmFindLabelExport(&internal_6712870, 0x67128f2);
extern "C" void const* const public_67128ff = __AsmFindLabelExport(&internal_6712870, 0x67128ff);
