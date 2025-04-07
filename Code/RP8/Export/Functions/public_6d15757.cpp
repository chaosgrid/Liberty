#include "RP8-PCH.h"


#define public_6d157d2 _public_6d157d2
#define public_6d157e8 _public_6d157e8
#define public_6d1582d _public_6d1582d
#define public_6d15842 _public_6d15842
#define public_6d15854 _public_6d15854
#define public_6d15866 _public_6d15866
#define public_6d158c9 _public_6d158c9
#define public_6d158cb _public_6d158cb

PROC_DECLARE(0x6d15757, internal_6d15757, public_6d15757);
extern "C" NAKED register_t __cdecl internal_6d15757()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x60C
        push esi
        push edi
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x194], 0xFFFFFFFF
        jne public_6d157d2
        mov ecx, 2
        and ecx, 0xF
        mov edx, dword ptr ss : [ebp-0x604]
        and edx, 0xFFFFFFF0
        or edx, ecx
        mov dword ptr ss : [ebp-0x604], edx
        mov eax, 0x10000
        and eax, 0xFFFFFFF
        shl eax, 4
        mov ecx, dword ptr ss : [ebp-0x604]
        and ecx, 0xF
        or ecx, eax
        mov dword ptr ss : [ebp-0x604], ecx
/*FIXUP push offset public_6d6abb8 @0x6d157a5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6abb8
        push 0x1324
/*FIXUP push offset public_6d6abf0 @0x6d157af*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6abf0
/*FIXUP push offset public_6d6ac3c @0x6d157b4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ac3c
        mov edx, dword ptr ss : [ebp-0x604]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d158cb
        public_6d157d2 : nop
        mov ecx, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [ecx+0x3EC], 0
        jne public_6d157e8
        mov eax, 0xFFFFFFFD
        jmp public_6d158cb
        public_6d157e8 : nop
        lea edx, ss:[ebp-0x600]
        push edx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x11C]
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x11C]
        mov ecx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [ecx+0x4C]
        mov edx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-0x60C], edx
        cmp dword ptr ss : [ebp-0x60C], 1
        je public_6d1582d
        cmp dword ptr ss : [ebp-0x60C], 2
        je public_6d15842
        cmp dword ptr ss : [ebp-0x60C], 4
        je public_6d15854
        jmp public_6d15866
        public_6d1582d : nop
        mov ecx, 0x80
        lea esi, ss:[ebp-0x600]
        mov edi, dword ptr ss : [ebp+0x10]
        rep movsd
        jmp public_6d158c9
        public_6d15842 : nop
        mov ecx, 0x80
        lea esi, ss:[ebp-0x400]
        mov edi, dword ptr ss : [ebp+0x10]
        rep movsd
        jmp public_6d158c9
        public_6d15854 : nop
        mov ecx, 0x80
        lea esi, ss:[ebp-0x200]
        mov edi, dword ptr ss : [ebp+0x10]
        rep movsd
        jmp public_6d158c9
        public_6d15866 : nop
        mov eax, 2
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-0x608]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-0x608], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-0x608]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-0x608], eax
/*FIXUP push offset public_6d6ac58 @0x6d1589e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ac58
        push 0x1334
/*FIXUP push offset public_6d6ac88 @0x6d158a8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ac88
/*FIXUP push offset public_6d6acd4 @0x6d158ad*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6acd4
        mov ecx, dword ptr ss : [ebp-0x608]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d158cb
        public_6d158c9 : nop
        xor eax, eax
        public_6d158cb : nop
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d15757)
    }
}

#undef public_6d157d2
#undef public_6d157e8
#undef public_6d1582d
#undef public_6d15842
#undef public_6d15854
#undef public_6d15866
#undef public_6d158c9
#undef public_6d158cb
