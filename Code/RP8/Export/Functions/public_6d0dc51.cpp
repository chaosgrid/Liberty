#include "RP8-PCH.h"


#define public_6d0dcb5 _public_6d0dcb5
#define public_6d0dcd4 _public_6d0dcd4
#define public_6d0dcdb _public_6d0dcdb
#define public_6d0dcdd _public_6d0dcdd

PROC_DECLARE(0x6d0dc51, internal_6d0dc51, public_6d0dc51);
extern "C" NAKED register_t __cdecl internal_6d0dc51()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x130], 0
        jne public_6d0dcb5
        mov ecx, 2
        and ecx, 0xF
        mov edx, dword ptr ss : [ebp-8]
        and edx, 0xFFFFFFF0
        or edx, ecx
        mov dword ptr ss : [ebp-8], edx
        mov eax, 0x10000
        and eax, 0xFFFFFFF
        shl eax, 4
        mov ecx, dword ptr ss : [ebp-8]
        and ecx, 0xF
        or ecx, eax
        mov dword ptr ss : [ebp-8], ecx
/*FIXUP push offset public_6d67798 @0x6d0dc8e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67798
        push 0xCA0
/*FIXUP push offset public_6d677c8 @0x6d0dc98*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d677c8
/*FIXUP push offset public_6d67814 @0x6d0dc9d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67814
        mov edx, dword ptr ss : [ebp-8]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d0dcdd
        public_6d0dcb5 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-4], ecx
        cmp dword ptr ss : [ebp-4], 0
        je public_6d0dcd4
        mov edx, dword ptr ss : [ebp-4]
        xor eax, eax
        cmp dword ptr ds : [edx], 0
        setne al
        xor ecx, ecx
        mov cl, al
        test ecx, ecx
        jne public_6d0dcdb
        public_6d0dcd4 : nop
        mov eax, 0xFFFFFFFF
        jmp public_6d0dcdd
        public_6d0dcdb : nop
        xor eax, eax
        public_6d0dcdd : nop
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d0dc51)
    }
}

#undef public_6d0dcb5
#undef public_6d0dcd4
#undef public_6d0dcdb
#undef public_6d0dcdd
