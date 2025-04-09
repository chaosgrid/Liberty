#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_410e20);

#define public_537728 _public_537728
#define public_537730 _public_537730
#define public_53774b _public_53774b
#define public_537763 _public_537763
#define public_537790 _public_537790

PROC_DECLARE(0x5376f0, internal_5376f0, public_5376f0);
extern "C" NAKED register_t __cdecl internal_5376f0()
{
    __asm
    {
        push esi
        mov esi, ecx
        test byte ptr ds : [esi+0xB4], 8
        je public_537790
        call public_410e20
        mov eax, dword ptr ds : [esi+0xCC]
        xor edx, edx
        cmp eax, edx
        jne public_537730
        mov eax, dword ptr ds : [esi+0xC8]
        cmp eax, edx
        mov dword ptr ds : [public_675570], eax
        je public_537728
        mov dword ptr ds : [eax+0xCC], edx
        jmp public_537763
        public_537728 : nop
        mov dword ptr ds : [public_675574], edx
        jmp public_537763
        public_537730 : nop
        mov ecx, dword ptr ds : [esi+0xC8]
        cmp ecx, edx
        jne public_53774b
        cmp eax, edx
        mov dword ptr ds : [public_675574], eax
        je public_537763
        mov dword ptr ds : [eax+0xC8], edx
        jmp public_537763
        public_53774b : nop
        mov dword ptr ds : [eax+0xC8], ecx
        mov eax, dword ptr ds : [esi+0xC8]
        mov ecx, dword ptr ds : [esi+0xCC]
        mov dword ptr ds : [eax+0xCC], ecx
        public_537763 : nop
        mov dword ptr ds : [esi+0xCC], edx
        mov dword ptr ds : [esi+0xC8], edx
        dec dword ptr ds : [public_67556c]
        mov ecx, dword ptr ds : [esi+0xD0]
        dec ecx
        mov eax, ecx
        cmp eax, edx
        mov dword ptr ds : [esi+0xD0], ecx
        jg public_537790
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx]
        public_537790 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x5376f0)
    }
}

#undef public_537728
#undef public_537730
#undef public_53774b
#undef public_537763
#undef public_537790
