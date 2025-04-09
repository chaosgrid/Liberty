#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42a420);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_42a473 _public_42a473
#define public_42a49f _public_42a49f
#define public_42a4ba _public_42a4ba
#define public_42a4cb _public_42a4cb
#define public_42a4d5 _public_42a4d5
#define public_42a4ef _public_42a4ef
#define public_42a4f7 _public_42a4f7
#define public_42a501 _public_42a501
#define public_42a50b _public_42a50b
#define public_42a52e _public_42a52e
#define public_42a540 _public_42a540
#define public_42a546 _public_42a546
#define public_42a54c _public_42a54c
#define public_42a552 _public_42a552
#define public_42a580 _public_42a580
#define public_42a595 _public_42a595
#define public_42a59e _public_42a59e
#define public_42a5b1 _public_42a5b1

PROC_DECLARE(0x42a420, internal_42a420, public_42a420);
extern "C" NAKED register_t __cdecl internal_42a420()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 8
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x30]
        test eax, eax
        je public_42a5b1
        mov ecx, dword ptr ds : [esi+0x18]
        test ecx, ecx
        mov eax, dword ptr ds : [esi+0x1C]
        mov dword ptr ss : [esp+8], eax
        je public_42a5b1
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x18]
        mov dword ptr ss : [esp+4], eax
        fild dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [esi+4]
        cmp eax, 5
        fld dword ptr ds : [public_5c7474]
        fld dword ptr ds : [public_5c7474]
        fst dword ptr ss : [esp+4]
        ja public_42a552
/*FIXUP jmp dword ptr ds : [eax*4+public_42a5b8] @0x42a46c*/
  JMPTB cmp eax, 0
  JMPTB je public_42a473
  JMPTB cmp eax, 1
  JMPTB je public_42a4d5
  JMPTB cmp eax, 2
  JMPTB je public_42a4f7
  JMPTB cmp eax, 3
  JMPTB je public_42a501
  JMPTB cmp eax, 4
  JMPTB je public_42a50b
  JMPTB cmp eax, 5
  JMPTB je public_42a4cb
  JMPTB int 3
        public_42a473 : nop
        mov eax, dword ptr ds : [public_667cac]
        fstp st(0)
        test eax, eax
        fstp st(0)
        je public_42a4ba
        mov ecx, 2
        cmp eax, ecx
        jne public_42a49f
        test byte ptr ds : [esi+0xC], cl
        jne public_42a4ba
        fld dword ptr ds : [public_667c9c]
        fld dword ptr ds : [public_667c80]
        jmp public_42a54c
        public_42a49f : nop
        cmp eax, 1
        jne public_42a4ba
        test byte ptr ds : [esi+0xC], cl
        je public_42a4ba
        fld dword ptr ds : [public_5ca238]
        fld dword ptr ds : [public_667c80]
        jmp public_42a54c
        public_42a4ba : nop
        fld dword ptr ds : [public_5c7474]
        fld dword ptr ds : [public_667c80]
        jmp public_42a54c
        public_42a4cb : nop
        fstp st(0)
        fld dword ptr ds : [public_667c78]
        jmp public_42a54c
        public_42a4d5 : nop
        mov eax, dword ptr ds : [public_667cac]
        fstp st(0)
        cmp eax, 1
        jne public_42a4ef
        fstp st(0)
        fld dword ptr ds : [public_5ca238]
        fld dword ptr ss : [esp+4]
        jmp public_42a552
        public_42a4ef : nop
        fld dword ptr ds : [public_667c7c]
        jmp public_42a552
        public_42a4f7 : nop
        fstp st(0)
        fld dword ptr ds : [public_667c78]
        jmp public_42a552
        public_42a501 : nop
        fstp st(0)
        fld dword ptr ds : [public_667c88]
        jmp public_42a54c
        public_42a50b : nop
        mov eax, dword ptr ds : [public_667cac]
        fstp st(0)
        test eax, eax
        fstp st(0)
        je public_42a540
        mov ecx, 2
        cmp eax, ecx
        jne public_42a52e
        test byte ptr ds : [esi+0xC], cl
        jne public_42a540
        fld dword ptr ds : [public_667c9c]
        jmp public_42a546
        public_42a52e : nop
        cmp eax, 1
        jne public_42a540
        test byte ptr ds : [esi+0xC], cl
        je public_42a540
        fld dword ptr ds : [public_5ca238]
        jmp public_42a546
        public_42a540 : nop
        fld dword ptr ds : [public_5c7474]
        public_42a546 : nop
        fld dword ptr ds : [public_667c84]
        public_42a54c : nop
        fadd dword ptr ds : [public_667ca4]
        public_42a552 : nop
        fadd st, st(1)
        fadd st, st(2)
        fadd dword ptr ss : [esp+8]
        fmul qword ptr ds : [public_5ca320]
        fstp dword ptr ss : [esp+4]
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [esp+4]
        fcomp dword ptr ds : [public_5ca31c]
        fnstsw ax
        test ah, 5
        jp public_42a580
        mov eax, 0xFFFFD8F1
        jmp public_42a59e
        public_42a580 : nop
        fld dword ptr ss : [esp+4]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_42a595
        xor eax, eax
        jmp public_42a59e
        public_42a595 : nop
        fld dword ptr ss : [esp+4]
        call public_5b7ec0
        public_42a59e : nop
        mov ecx, dword ptr ds : [public_5c6d48]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        push eax
        mov eax, dword ptr ds : [esi+0x30]
        push eax
        push ecx
        call dword ptr ds : [edx+0x20]
        public_42a5b1 : nop
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x42a420)
        ASM_EXPORT_ENTRY_SINGLE(0x42a4cb, public_42a4cb)
    }
}

#undef public_42a473
#undef public_42a49f
#undef public_42a4ba
#undef public_42a4cb
#undef public_42a4d5
#undef public_42a4ef
#undef public_42a4f7
#undef public_42a501
#undef public_42a50b
#undef public_42a52e
#undef public_42a540
#undef public_42a546
#undef public_42a54c
#undef public_42a552
#undef public_42a580
#undef public_42a595
#undef public_42a59e
#undef public_42a5b1

#pragma init_seg(compiler)
extern "C" void const* const public_42a4cb = __AsmFindLabelExport(&internal_42a420, 0x42a4cb);
