#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d22f4d);
CLANG_FORWARD_PROC_SYMBOL(public_6d22f85);
CLANG_FORWARD_PROC_SYMBOL(public_6d233dd);
CLANG_FORWARD_PROC_SYMBOL(public_6d234a6);

#define public_6d23516 _public_6d23516
#define public_6d23545 _public_6d23545
#define public_6d23564 _public_6d23564
#define public_6d23579 _public_6d23579
#define public_6d23587 _public_6d23587
#define public_6d23597 _public_6d23597
#define public_6d235ac _public_6d235ac
#define public_6d235de _public_6d235de
#define public_6d235ec _public_6d235ec
#define public_6d23604 _public_6d23604
#define public_6d23635 _public_6d23635

PROC_DECLARE(0x6d234a6, internal_6d234a6, public_6d234a6);
extern "C" NAKED register_t __cdecl internal_6d234a6()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x1C
        mov dword ptr ss : [ebp-0x14], ecx
        mov ecx, dword ptr ss : [ebp-0x14]
        call public_6d22f4d
        mov eax, dword ptr ss : [ebp-0x14]
        mov ecx, dword ptr ds : [eax+8]
        movzx edx, word ptr ds : [ecx]
        cmp edx, 0x7830
        je public_6d235ac
        mov eax, dword ptr ss : [ebp-0x14]
        mov ecx, dword ptr ds : [eax+8]
        movsx edx, byte ptr ds : [ecx]
        cmp edx, 0x30
        jl public_6d23597
        mov eax, dword ptr ss : [ebp-0x14]
        mov ecx, dword ptr ds : [eax+8]
        movsx edx, byte ptr ds : [ecx]
        cmp edx, 0x39
        jg public_6d23597
        mov ecx, dword ptr ss : [ebp-0x14]
        call public_6d233dd
        mov dword ptr ss : [ebp-4], eax
        cmp dword ptr ss : [ebp-4], 0xFFFFFFFF
        jne public_6d23516
/*FIXUP push offset public_6d6bd20 @0x6d23501*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6bd20
        mov ecx, dword ptr ss : [ebp-0x14]
        call public_6d22f85
        or eax, 0xFFFFFFFF
        jmp public_6d23635
        public_6d23516 : nop
        mov eax, dword ptr ss : [ebp-0x14]
        mov ecx, dword ptr ds : [eax+8]
        movsx edx, byte ptr ds : [ecx]
        cmp edx, 0x30
        jl public_6d23587
        mov eax, dword ptr ss : [ebp-0x14]
        mov ecx, dword ptr ds : [eax+8]
        movsx edx, byte ptr ds : [ecx]
        cmp edx, 0x39
        jg public_6d23587
        mov ecx, dword ptr ss : [ebp-0x14]
        call public_6d233dd
        mov dword ptr ss : [ebp-0x10], eax
        cmp dword ptr ss : [ebp-0x10], 0xFFFFFFFF
        jne public_6d23545
        jmp public_6d23587
        public_6d23545 : nop
        mov eax, dword ptr ss : [ebp-4]
        xor ecx, ecx
        mov dword ptr ss : [ebp-0x1C], eax
        mov dword ptr ss : [ebp-0x18], ecx
        cmp dword ptr ss : [ebp-0x18], 0xE6666666
        jb public_6d23579
        ja public_6d23564
        cmp dword ptr ss : [ebp-0x1C], 0x66666668
        jb public_6d23579
/*FIXUP public_6d23564 : nop
        push offset public_6d6bd30 @0x6d23564*/
  FIXUP public_6d23564 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6bd30
        mov ecx, dword ptr ss : [ebp-0x14]
        call public_6d22f85
        or eax, 0xFFFFFFFF
        jmp public_6d23635
        public_6d23579 : nop
        mov edx, dword ptr ss : [ebp-4]
        imul edx, 0xA
        add edx, dword ptr ss : [ebp-0x10]
        mov dword ptr ss : [ebp-4], edx
        jmp public_6d23516
        public_6d23587 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        call public_6d22f4d
        mov eax, dword ptr ss : [ebp-4]
        jmp public_6d23635
/*FIXUP public_6d23597 : nop
        push offset public_6d6bd44 @0x6d23597*/
  FIXUP public_6d23597 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6bd44
        mov ecx, dword ptr ss : [ebp-0x14]
        call public_6d22f85
        or eax, 0xFFFFFFFF
        jmp public_6d23635
        public_6d235ac : nop
        mov eax, dword ptr ss : [ebp-0x14]
        mov ecx, dword ptr ds : [eax+8]
        add ecx, 2
        mov edx, dword ptr ss : [ebp-0x14]
        mov dword ptr ds : [edx+8], ecx
        mov ecx, dword ptr ss : [ebp-0x14]
        call public_6d233dd
        mov dword ptr ss : [ebp-8], eax
        cmp dword ptr ss : [ebp-8], 0xFFFFFFFF
        jne public_6d235de
/*FIXUP push offset public_6d6bd54 @0x6d235cc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6bd54
        mov ecx, dword ptr ss : [ebp-0x14]
        call public_6d22f85
        or eax, 0xFFFFFFFF
        jmp public_6d23635
        public_6d235de : nop
        mov dword ptr ss : [ebp-4], 0
        mov dword ptr ss : [ebp-0xC], 0
        public_6d235ec : nop
        cmp dword ptr ss : [ebp-0xC], 8
        jb public_6d23604
/*FIXUP push offset public_6d6bd64 @0x6d235f2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6bd64
        mov ecx, dword ptr ss : [ebp-0x14]
        call public_6d22f85
        or eax, 0xFFFFFFFF
        jmp public_6d23635
        public_6d23604 : nop
        mov eax, dword ptr ss : [ebp-4]
        shl eax, 4
        add eax, dword ptr ss : [ebp-8]
        mov dword ptr ss : [ebp-4], eax
        mov ecx, dword ptr ss : [ebp-0xC]
        add ecx, 1
        mov dword ptr ss : [ebp-0xC], ecx
        mov ecx, dword ptr ss : [ebp-0x14]
        call public_6d233dd
        mov dword ptr ss : [ebp-8], eax
        cmp dword ptr ss : [ebp-8], 0xFFFFFFFF
        jne public_6d235ec
        mov ecx, dword ptr ss : [ebp-0x14]
        call public_6d22f4d
        mov eax, dword ptr ss : [ebp-4]
        public_6d23635 : nop
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d234a6)
    }
}

#undef public_6d23516
#undef public_6d23545
#undef public_6d23564
#undef public_6d23579
#undef public_6d23587
#undef public_6d23597
#undef public_6d235ac
#undef public_6d235de
#undef public_6d235ec
#undef public_6d23604
#undef public_6d23635
