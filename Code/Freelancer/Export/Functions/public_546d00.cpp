#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_489e80);
CLANG_FORWARD_PROC_SYMBOL(public_546d00);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_546d39 _public_546d39
#define public_546d5a _public_546d5a
#define public_546d7b _public_546d7b
#define public_546d82 _public_546d82
#define public_546d89 _public_546d89
#define public_546d95 _public_546d95
#define public_546d9c _public_546d9c
#define public_546da3 _public_546da3
#define public_546da8 _public_546da8
#define public_546db7 _public_546db7

PROC_DECLARE(0x546d00, internal_546d00, public_546d00);
extern "C" NAKED register_t __cdecl internal_546d00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0xEC]
        test ecx, ecx
        push edi
        jne public_546d39
/*FIXUP push offset public_5dfff4 @0x546d0f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dfff4
        push 0x863
/*FIXUP push offset public_5dff40 @0x546d19*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dff40
        mov eax, 0x100002
/*FIXUP push offset public_5c8bd4 @0x546d23*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8bd4
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        pop edi
        pop esi
        pop ebx
        ret 0xC
        public_546d39 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ebx
        push edi
        call dword ptr ds : [edx]
        test al, al
        jne public_546d5a
        mov dword ptr ds : [esi+0xEC], 0
        public_546d5a : nop
        call public_54baf0
        cmp esi, eax
        jne public_546db7
        mov eax, edi
        sub eax, 0
        je public_546d89
        sub eax, 2
        jne public_546db7
        cmp ebx, 5
        ja public_546db7
/*FIXUP jmp dword ptr ds : [ebx*4+public_546dc0] @0x546d74*/
  JMPTB cmp ebx, 0
  JMPTB je public_546d82
  JMPTB cmp ebx, 1
  JMPTB je public_546d82
  JMPTB cmp ebx, 2
  JMPTB je public_546d82
  JMPTB cmp ebx, 3
  JMPTB je public_546db7
  JMPTB cmp ebx, 4
  JMPTB je public_546d7b
  JMPTB cmp ebx, 5
  JMPTB je public_546d82
  JMPTB int 3
        public_546d7b : nop
        mov eax, dword ptr ds : [public_678b30]
        jmp public_546da8
        public_546d82 : nop
        mov eax, dword ptr ds : [public_678b24]
        jmp public_546da8
        public_546d89 : nop
        cmp ebx, 5
        ja public_546db7
/*FIXUP jmp dword ptr ds : [ebx*4+public_546dd8] @0x546d8e*/
  JMPTB cmp ebx, 0
  JMPTB je public_546d95
  JMPTB cmp ebx, 1
  JMPTB je public_546d9c
  JMPTB cmp ebx, 2
  JMPTB je public_546d82
  JMPTB cmp ebx, 3
  JMPTB je public_546da3
  JMPTB cmp ebx, 4
  JMPTB je public_546d7b
  JMPTB cmp ebx, 5
  JMPTB je public_546d82
  JMPTB int 3
        public_546d95 : nop
        mov eax, dword ptr ds : [public_678b2c]
        jmp public_546da8
        public_546d9c : nop
        mov eax, dword ptr ds : [public_678b28]
        jmp public_546da8
        public_546da3 : nop
        mov eax, dword ptr ds : [public_678b20]
        public_546da8 : nop
        test eax, eax
        je public_546db7
        push 0
        push eax
        call public_489e80
        add esp, 8
        public_546db7 : nop
        pop edi
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x546d00)
        ASM_EXPORT_ENTRY_SINGLE(0x546d82, public_546d82)
    }
}

#undef public_546d39
#undef public_546d5a
#undef public_546d7b
#undef public_546d82
#undef public_546d89
#undef public_546d95
#undef public_546d9c
#undef public_546da3
#undef public_546da8
#undef public_546db7

#pragma init_seg(compiler)
extern "C" void const* const public_546d82 = __AsmFindLabelExport(&internal_546d00, 0x546d82);
