#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d168f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2b964);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f270);

#define public_6d0d254 _public_6d0d254
#define public_6d0d307 _public_6d0d307
#define public_6d0d30a _public_6d0d30a

PROC_DECLARE(0x6d0d1dc, internal_6d0d1dc, public_6d0d1dc);
extern "C" NAKED register_t __cdecl internal_6d0d1dc()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, 0x2010
        call public_6d2f270
        mov eax, dword ptr ss : [ebp+8]
        mov cl, byte ptr ds : [eax+0x184]
        and cl, 1
        xor edx, edx
        mov dl, cl
        test edx, edx
        jne public_6d0d254
        mov eax, 2
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-8]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-8], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-8]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-8], eax
/*FIXUP push offset public_6d671a8 @0x6d0d229*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d671a8
        push 0xBCC
/*FIXUP push offset public_6d671e8 @0x6d0d233*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d671e8
/*FIXUP push offset public_6d67234 @0x6d0d238*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67234
        mov ecx, dword ptr ss : [ebp-8]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d0d30a
        public_6d0d254 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        push eax
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x130]
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x130]
        mov edx, dword ptr ds : [edx]
        push ecx
        call dword ptr ds : [edx+0xA8]
        mov dword ptr ss : [ebp-4], eax
        cmp dword ptr ss : [ebp-4], 0
        jge public_6d0d307
        mov eax, dword ptr ss : [ebp-4]
        push eax
        call public_6d2b964
        add esp, 4
        push eax
/*FIXUP push offset public_6d67250 @0x6d0d28d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67250
        lea ecx, ss:[ebp-0x2008]
        push ecx
        call public_6d168f0
        add esp, 0xC
        mov dword ptr ss : [ebp-0x2010], eax
        mov edx, 2
        and edx, 0xF
        mov eax, dword ptr ss : [ebp-0x200C]
        and eax, 0xFFFFFFF0
        or eax, edx
        mov dword ptr ss : [ebp-0x200C], eax
        mov ecx, 0x10000
        and ecx, 0xFFFFFFF
        shl ecx, 4
        mov edx, dword ptr ss : [ebp-0x200C]
        and edx, 0xF
        or edx, ecx
        mov dword ptr ss : [ebp-0x200C], edx
        mov eax, dword ptr ss : [ebp-0x2010]
        push eax
        push 0xBD0
/*FIXUP push offset public_6d67268 @0x6d0d2eb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67268
/*FIXUP push offset public_6d672b4 @0x6d0d2f0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d672b4
        mov ecx, dword ptr ss : [ebp-0x200C]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        public_6d0d307 : nop
        mov eax, dword ptr ss : [ebp-4]
        public_6d0d30a : nop
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d0d1dc)
    }
}

#undef public_6d0d254
#undef public_6d0d307
#undef public_6d0d30a
