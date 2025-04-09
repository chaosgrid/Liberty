#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b75dc);

#define public_5b75ed _public_5b75ed
#define public_5b75f4 _public_5b75f4
#define public_5b7603 _public_5b7603
#define public_5b7610 _public_5b7610
#define public_5b7613 _public_5b7613

PROC_DECLARE(0x5b75dc, internal_5b75dc, public_5b75dc);
extern "C" NAKED register_t __cdecl internal_5b75dc()
{
    __asm
    {
        push ebp
        mov ebp, esp
        xor eax, eax
        cmp dword ptr ss : [ebp+0xC], eax
        jne public_5b75ed
        mov eax, 0x80070057
        jmp public_5b7613
        public_5b75ed : nop
        mov edx, dword ptr ss : [ebp+8]
        push esi
        mov esi, dword ptr ss : [ebp+0x10]
        public_5b75f4 : nop
        mov cl, byte ptr ds : [esi]
        test cl, cl
        je public_5b7603
        mov byte ptr ds : [edx], cl
        inc edx
        inc esi
        dec dword ptr ss : [ebp+0xC]
        jne public_5b75f4
        public_5b7603 : nop
        cmp dword ptr ss : [ebp+0xC], 0
        pop esi
        jne public_5b7610
        dec edx
        mov eax, 0x8007007A
        public_5b7610 : nop
        mov byte ptr ds : [edx], 0
        public_5b7613 : nop
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x5b75dc)
    }
}

#undef public_5b75ed
#undef public_5b75f4
#undef public_5b7603
#undef public_5b7610
#undef public_5b7613
