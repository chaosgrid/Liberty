#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_555810);

#define public_555831 _public_555831
#define public_555839 _public_555839
#define public_555857 _public_555857

PROC_DECLARE(0x555810, internal_555810, public_555810);
extern "C" NAKED register_t __cdecl internal_555810()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x18]
        test ecx, ecx
        je public_555857
        mov eax, dword ptr ds : [esi+0x1C]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        je public_555857
        mov eax, ecx
        test eax, eax
        push edi
        jne public_555831
        xor edi, edi
        jmp public_555839
        public_555831 : nop
        mov edi, dword ptr ds : [esi+0x1C]
        sub edi, eax
        sar edi, 2
        public_555839 : nop
        call dword ptr ds : [public_5c71dc]
        imul eax, edi
        mov ecx, dword ptr ds : [esi+0x18]
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        mov eax, dword ptr ds : [ecx+eax*4]
        pop edi
        pop esi
        ret 
        public_555857 : nop
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x555810)
    }
}

#undef public_555831
#undef public_555839
#undef public_555857
