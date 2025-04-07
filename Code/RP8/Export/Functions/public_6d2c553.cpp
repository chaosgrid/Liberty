#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d168f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2c553);
CLANG_FORWARD_PROC_SYMBOL(public_6d2d520);
CLANG_FORWARD_PROC_SYMBOL(public_6d2d5b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f270);

#define public_6d2c575 _public_6d2c575
#define public_6d2c589 _public_6d2c589
#define public_6d2c5c9 _public_6d2c5c9
#define public_6d2c5de _public_6d2c5de
#define public_6d2c601 _public_6d2c601
#define public_6d2c615 _public_6d2c615
#define public_6d2c645 _public_6d2c645
#define public_6d2c65a _public_6d2c65a
#define public_6d2c66f _public_6d2c66f
#define public_6d2c6b6 _public_6d2c6b6
#define public_6d2c733 _public_6d2c733
#define public_6d2c76e _public_6d2c76e

PROC_DECLARE(0x6d2c553, internal_6d2c553, public_6d2c553);
extern "C" NAKED register_t __cdecl internal_6d2c553()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, 0x203C
        call public_6d2f270
        cmp dword ptr ds : [public_6d728e4], 0
        jne public_6d2c575
        mov dword ptr ss : [ebp-0x2030], 0
        jmp public_6d2c589
        public_6d2c575 : nop
        mov eax, dword ptr ds : [public_6d728e8]
        sub eax, dword ptr ds : [public_6d728e4]
        sar eax, 2
        mov dword ptr ss : [ebp-0x2030], eax
        public_6d2c589 : nop
        mov ecx, dword ptr ss : [ebp-0x2030]
        mov dword ptr ss : [ebp-4], ecx
        mov edx, dword ptr ds : [public_6d72908]
        cmp edx, dword ptr ss : [ebp-4]
        jb public_6d2c733
        mov dword ptr ss : [ebp-0xC], 0
        mov eax, dword ptr ss : [ebp-4]
        add eax, 0x10
        mov dword ptr ss : [ebp-0x2020], eax
        cmp dword ptr ds : [public_6d728e4], 0
        jne public_6d2c5c9
        mov dword ptr ss : [ebp-0x2034], 0
        jmp public_6d2c5de
        public_6d2c5c9 : nop
        mov ecx, dword ptr ds : [public_6d728e8]
        sub ecx, dword ptr ds : [public_6d728e4]
        sar ecx, 2
        mov dword ptr ss : [ebp-0x2034], ecx
        public_6d2c5de : nop
        mov edx, dword ptr ss : [ebp-0x2034]
        cmp edx, dword ptr ss : [ebp-0x2020]
        jae public_6d2c645
        cmp dword ptr ds : [public_6d728e4], 0
        jne public_6d2c601
        mov dword ptr ss : [ebp-0x2038], 0
        jmp public_6d2c615
        public_6d2c601 : nop
        mov eax, dword ptr ds : [public_6d728e8]
        sub eax, dword ptr ds : [public_6d728e4]
        sar eax, 2
        mov dword ptr ss : [ebp-0x2038], eax
        public_6d2c615 : nop
        mov ecx, dword ptr ds : [public_6d728e8]
        mov dword ptr ss : [ebp-0x2014], ecx
        lea edx, ss:[ebp-0xC]
        push edx
        mov eax, dword ptr ss : [ebp-0x2020]
        sub eax, dword ptr ss : [ebp-0x2038]
        push eax
        mov ecx, dword ptr ss : [ebp-0x2014]
        push ecx
        mov ecx, offset public_6d728e0
        call public_6d2d5b0
        jmp public_6d2c6b6
        public_6d2c645 : nop
        cmp dword ptr ds : [public_6d728e4], 0
        jne public_6d2c65a
        mov dword ptr ss : [ebp-0x203C], 0
        jmp public_6d2c66f
        public_6d2c65a : nop
        mov edx, dword ptr ds : [public_6d728e8]
        sub edx, dword ptr ds : [public_6d728e4]
        sar edx, 2
        mov dword ptr ss : [ebp-0x203C], edx
        public_6d2c66f : nop
        mov eax, dword ptr ss : [ebp-0x2020]
        cmp eax, dword ptr ss : [ebp-0x203C]
        jae public_6d2c6b6
        mov ecx, dword ptr ds : [public_6d728e8]
        mov dword ptr ss : [ebp-0x2018], ecx
        mov edx, dword ptr ds : [public_6d728e4]
        mov dword ptr ss : [ebp-0x201C], edx
        mov eax, dword ptr ss : [ebp-0x2018]
        push eax
        mov ecx, dword ptr ss : [ebp-0x2020]
        mov edx, dword ptr ss : [ebp-0x201C]
        lea eax, ds:[edx+ecx*4]
        push eax
        mov ecx, offset public_6d728e0
        call public_6d2d520
        public_6d2c6b6 : nop
        mov ecx, dword ptr ss : [ebp-4]
        add ecx, 0x10
        push ecx
/*FIXUP push offset public_6d6c1a8 @0x6d2c6bd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6c1a8
        lea edx, ss:[ebp-0x200C]
        push edx
        call public_6d168f0
        add esp, 0xC
        mov dword ptr ss : [ebp-0x2024], eax
        mov eax, 2
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-0x2010]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-0x2010], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-0x2010]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-0x2010], eax
        mov ecx, dword ptr ss : [ebp-0x2024]
        push ecx
        push 0x7C
/*FIXUP push offset public_6d6c1d8 @0x6d2c718*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6c1d8
/*FIXUP push offset public_6d6c224 @0x6d2c71d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6c224
        mov edx, dword ptr ss : [ebp-0x2010]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_6d2c733 : nop
        mov ecx, dword ptr ds : [public_6d72908]
        cmp ecx, dword ptr ds : [public_6d7290c]
        jb public_6d2c76e
        mov edx, dword ptr ds : [public_6d728e4]
        mov dword ptr ss : [ebp-0x2028], edx
        mov eax, dword ptr ds : [public_6d72908]
        mov ecx, dword ptr ss : [ebp-0x2028]
        mov edx, dword ptr ds : [public_6d7290c]
        mov dword ptr ds : [ecx+eax*4], edx
        mov eax, dword ptr ds : [public_6d7290c]
        add eax, 1
        mov dword ptr ds : [public_6d7290c], eax
        public_6d2c76e : nop
        mov ecx, dword ptr ds : [public_6d728e4]
        mov dword ptr ss : [ebp-0x202C], ecx
        mov edx, dword ptr ds : [public_6d72908]
        mov eax, dword ptr ss : [ebp-0x202C]
        mov ecx, dword ptr ds : [eax+edx*4]
        mov dword ptr ss : [ebp-8], ecx
        mov edx, dword ptr ds : [public_6d72908]
        add edx, 1
        mov dword ptr ds : [public_6d72908], edx
        mov eax, dword ptr ss : [ebp-8]
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d2c553)
    }
}

#undef public_6d2c575
#undef public_6d2c589
#undef public_6d2c5c9
#undef public_6d2c5de
#undef public_6d2c601
#undef public_6d2c615
#undef public_6d2c645
#undef public_6d2c65a
#undef public_6d2c66f
#undef public_6d2c6b6
#undef public_6d2c733
#undef public_6d2c76e
