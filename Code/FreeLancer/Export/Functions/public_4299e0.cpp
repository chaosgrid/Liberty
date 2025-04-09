#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4299e0);

#define public_429a23 _public_429a23
#define public_429a4f _public_429a4f
#define public_429a6a _public_429a6a
#define public_429a7b _public_429a7b
#define public_429a85 _public_429a85
#define public_429a9f _public_429a9f
#define public_429aa7 _public_429aa7
#define public_429ab1 _public_429ab1
#define public_429abb _public_429abb
#define public_429ade _public_429ade
#define public_429af0 _public_429af0
#define public_429af6 _public_429af6
#define public_429afc _public_429afc
#define public_429b02 _public_429b02
#define public_429b29 _public_429b29
#define public_429b3e _public_429b3e
#define public_429b4a _public_429b4a

PROC_DECLARE(0x4299e0, internal_4299e0, public_4299e0);
extern "C" NAKED register_t __cdecl internal_4299e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [esi+0x18]
        test ecx, ecx
        je public_429b4a
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x18]
        mov dword ptr ss : [esp+8], eax
        fild dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+4]
        cmp eax, 5
        fadd dword ptr ds : [esi+0x1C]
        fld dword ptr ds : [public_5c7474]
        fld dword ptr ds : [public_5c7474]
        fst dword ptr ss : [esp+8]
        ja public_429b02
/*FIXUP jmp dword ptr ds : [eax*4+public_429b60] @0x429a1c*/
  JMPTB cmp eax, 0
  JMPTB je public_429a23
  JMPTB cmp eax, 1
  JMPTB je public_429a85
  JMPTB cmp eax, 2
  JMPTB je public_429aa7
  JMPTB cmp eax, 3
  JMPTB je public_429ab1
  JMPTB cmp eax, 4
  JMPTB je public_429abb
  JMPTB cmp eax, 5
  JMPTB je public_429a7b
  JMPTB int 3
        public_429a23 : nop
        mov eax, dword ptr ds : [public_667cac]
        fstp st(0)
        test eax, eax
        fstp st(0)
        je public_429a6a
        mov ecx, 2
        cmp eax, ecx
        jne public_429a4f
        test byte ptr ds : [esi+0xC], cl
        jne public_429a6a
        fld dword ptr ds : [public_667c9c]
        fld dword ptr ds : [public_667c80]
        jmp public_429afc
        public_429a4f : nop
        cmp eax, 1
        jne public_429a6a
        test byte ptr ds : [esi+0xC], cl
        je public_429a6a
        fld dword ptr ds : [public_5ca238]
        fld dword ptr ds : [public_667c80]
        jmp public_429afc
        public_429a6a : nop
        fld dword ptr ds : [public_5c7474]
        fld dword ptr ds : [public_667c80]
        jmp public_429afc
        public_429a7b : nop
        fstp st(0)
        fld dword ptr ds : [public_667c78]
        jmp public_429afc
        public_429a85 : nop
        mov eax, dword ptr ds : [public_667cac]
        fstp st(0)
        cmp eax, 1
        jne public_429a9f
        fstp st(0)
        fld dword ptr ds : [public_5ca238]
        fld dword ptr ss : [esp+8]
        jmp public_429b02
        public_429a9f : nop
        fld dword ptr ds : [public_667c7c]
        jmp public_429b02
        public_429aa7 : nop
        fstp st(0)
        fld dword ptr ds : [public_667c78]
        jmp public_429b02
        public_429ab1 : nop
        fstp st(0)
        fld dword ptr ds : [public_667c88]
        jmp public_429afc
        public_429abb : nop
        mov eax, dword ptr ds : [public_667cac]
        fstp st(0)
        test eax, eax
        fstp st(0)
        je public_429af0
        mov ecx, 2
        cmp eax, ecx
        jne public_429ade
        test byte ptr ds : [esi+0xC], cl
        jne public_429af0
        fld dword ptr ds : [public_667c9c]
        jmp public_429af6
        public_429ade : nop
        cmp eax, 1
        jne public_429af0
        test byte ptr ds : [esi+0xC], cl
        je public_429af0
        fld dword ptr ds : [public_5ca238]
        jmp public_429af6
        public_429af0 : nop
        fld dword ptr ds : [public_5c7474]
        public_429af6 : nop
        fld dword ptr ds : [public_667c84]
        public_429afc : nop
        fadd dword ptr ds : [public_667ca4]
        public_429b02 : nop
        fadd st, st(1)
        faddp st(2), st
        fstp st(0)
        fcom dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_429b29
        mov ecx, dword ptr ss : [esp+0xC]
        fstp st(0)
        fld dword ptr ds : [public_5c7474]
        xor eax, eax
        fstp dword ptr ds : [ecx]
        pop esi
        ret 8
        public_429b29 : nop
        fcom dword ptr ds : [public_5ca16c]
        fnstsw ax
        test ah, 5
        jp public_429b3e
        fstp st(0)
        fld dword ptr ds : [public_5ca16c]
        public_429b3e : nop
        mov ecx, dword ptr ss : [esp+0xC]
        fstp dword ptr ds : [ecx]
        xor eax, eax
        pop esi
        ret 8
        public_429b4a : nop
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFF9
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x4299e0)
        ASM_EXPORT_ENTRY_SINGLE(0x429a7b, public_429a7b)
    }
}

#undef public_429a23
#undef public_429a4f
#undef public_429a6a
#undef public_429a7b
#undef public_429a85
#undef public_429a9f
#undef public_429aa7
#undef public_429ab1
#undef public_429abb
#undef public_429ade
#undef public_429af0
#undef public_429af6
#undef public_429afc
#undef public_429b02
#undef public_429b29
#undef public_429b3e
#undef public_429b4a

#pragma init_seg(compiler)
extern "C" void const* const public_429a7b = __AsmFindLabelExport(&internal_4299e0, 0x429a7b);
