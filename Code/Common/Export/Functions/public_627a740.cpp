#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6301640);
CLANG_FORWARD_PROC_SYMBOL(public_630d3f0);

#define public_627a783 _public_627a783
#define public_627a7b2 _public_627a7b2
#define public_627a7c9 _public_627a7c9
#define public_627a801 _public_627a801
#define public_627a830 _public_627a830
#define public_627a845 _public_627a845
#define public_627a84f _public_627a84f
#define public_627a866 _public_627a866
#define public_627a86e _public_627a86e
#define public_627a883 _public_627a883

PROC_DECLARE(0x627a740, internal_627a740, public_627a740);
extern "C" NAKED register_t __cdecl internal_627a740()
{
    __asm
    {
        sub esp, 0x14
/*FIXUP push offset public_639b220 @0x627a743*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b220
        mov dword ptr ss : [esp+4], 0x43480000
        call public_630d3f0
        add esp, 4
        mov dword ptr ss : [esp+4], eax
        lea eax, ss:[esp+4]
        push eax
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, offset public_63fbbc8
        call public_6301640
        mov eax, dword ptr ss : [esp+8]
        cmp eax, dword ptr ds : [public_63fbbcc]
        je public_627a783
        add eax, 0x10
        test eax, eax
        jne public_627a7b2
        public_627a783 : nop
        mov edx, dword ptr ds : [public_6399028]
/*FIXUP push offset public_639b220 @0x627a789*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b220
        push 0xE1
/*FIXUP push offset public_639b130 @0x627a793*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b130
        mov eax, 0x100002
/*FIXUP push offset public_639b1c0 @0x627a79d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b1c0
        push eax
        call dword ptr ds : [edx]
        fld dword ptr ds : [public_639b21c]
        add esp, 0x14
        add esp, 0x14
        ret 
        public_627a7b2 : nop
        mov ecx, dword ptr ds : [eax+8]
        test ecx, ecx
        jne public_627a830
        fld dword ptr ds : [public_63fbbc4]
        fcomp dword ptr ds : [eax+4]
        fnstsw ax
        test ah, 1
        je public_627a845
/*FIXUP public_627a7c9 : nop
        push offset public_639b210 @0x627a7c9*/
  FIXUP public_627a7c9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b210
        call public_630d3f0
        add esp, 4
        mov dword ptr ss : [esp+0xC], eax
        lea eax, ss:[esp+0xC]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, offset public_63fbbc8
        call public_6301640
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [public_63fbbcc]
        je public_627a801
        add eax, 0x10
        test eax, eax
        jne public_627a84f
        public_627a801 : nop
        mov edx, dword ptr ds : [public_6399028]
/*FIXUP push offset public_639b210 @0x627a807*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b210
        push 0xE1
/*FIXUP push offset public_639b130 @0x627a811*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b130
        mov eax, 0x100002
/*FIXUP push offset public_639b1c0 @0x627a81b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b1c0
        push eax
        call dword ptr ds : [edx]
        fld dword ptr ds : [public_639b20c]
        add esp, 0x14
        add esp, 0x14
        ret 
        public_627a830 : nop
        cmp ecx, 1
        jne public_627a7c9
        fld dword ptr ds : [public_63fbbc4]
        fcomp dword ptr ds : [eax+4]
        fnstsw ax
        test ah, 5
        jp public_627a7c9
        public_627a845 : nop
        fld dword ptr ds : [public_639b21c]
        add esp, 0x14
        ret 
        public_627a84f : nop
        mov ecx, dword ptr ds : [eax+8]
        test ecx, ecx
        jne public_627a86e
        fld dword ptr ds : [public_63fbbc4]
        fcomp dword ptr ds : [eax+4]
        fnstsw ax
        test ah, 1
        je public_627a883
        public_627a866 : nop
        fld dword ptr ss : [esp]
        add esp, 0x14
        ret 
        public_627a86e : nop
        cmp ecx, 1
        jne public_627a866
        fld dword ptr ds : [public_63fbbc4]
        fcomp dword ptr ds : [eax+4]
        fnstsw ax
        test ah, 5
        jp public_627a866
        public_627a883 : nop
        fld dword ptr ds : [public_639b20c]
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x627a740)
    }
}

#undef public_627a783
#undef public_627a7b2
#undef public_627a7c9
#undef public_627a801
#undef public_627a830
#undef public_627a845
#undef public_627a84f
#undef public_627a866
#undef public_627a86e
#undef public_627a883
