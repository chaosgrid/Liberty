#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6290450);

#define public_6290464 _public_6290464
#define public_629046f _public_629046f
#define public_6290472 _public_6290472
#define public_6290477 _public_6290477

PROC_DECLARE(0x6290450, internal_6290450, public_6290450);
extern "C" NAKED register_t __cdecl internal_6290450()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp edx, ecx
        je public_6290477
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov esi, dword ptr ds : [esi]
        public_6290464 : nop
        cmp esi, dword ptr ds : [edx+0xC]
        jae public_629046f
        mov eax, edx
        mov edx, dword ptr ds : [edx]
        jmp public_6290472
        public_629046f : nop
        mov edx, dword ptr ds : [edx+8]
        public_6290472 : nop
        cmp edx, ecx
        jne public_6290464
        pop esi
        public_6290477 : nop
        ret 4
        UNREACHABLE_TRAP(0x6290450)
    }
}

#undef public_6290464
#undef public_629046f
#undef public_6290472
#undef public_6290477
