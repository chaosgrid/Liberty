#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62785e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62785e6 _public_62785e6
#define public_6278609 _public_6278609
#define public_6278616 _public_6278616
#define public_6278622 _public_6278622
#define public_6278630 _public_6278630

PROC_DECLARE(0x62785e0, internal_62785e0, public_62785e0);
extern "C" NAKED register_t __cdecl internal_62785e0()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        xor esi, esi
        public_62785e6 : nop
        mov ecx, dword ptr ds : [edi+4]
        test ecx, ecx
        je public_6278616
        mov eax, dword ptr ds : [edi+8]
        sub eax, ecx
        sar eax, 2
        cmp esi, eax
        jae public_6278616
        mov ecx, dword ptr ds : [ecx+esi*4]
        test ecx, ecx
        je public_6278609
        push ecx
        call public_6391d5a
        add esp, 4
        public_6278609 : nop
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [eax+esi*4], 0
        inc esi
        jmp public_62785e6
        public_6278616 : nop
        mov edx, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [edi+4]
        mov eax, edx
        cmp eax, edx
        je public_6278630
        public_6278622 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6278622
        public_6278630 : nop
        mov dword ptr ds : [edi+8], ecx
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62785e0)
    }
}

#undef public_62785e6
#undef public_6278609
#undef public_6278616
#undef public_6278622
#undef public_6278630
