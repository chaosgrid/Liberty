#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46e610);

#define public_46e624 _public_46e624
#define public_46e62e _public_46e62e
#define public_46e632 _public_46e632
#define public_46e637 _public_46e637

PROC_DECLARE(0x46e610, internal_46e610, public_46e610);
extern "C" NAKED register_t __cdecl internal_46e610()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp edx, ecx
        je public_46e637
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov esi, dword ptr ds : [esi]
        public_46e624 : nop
        cmp dword ptr ds : [edx+0xC], esi
        jbe public_46e62e
        mov edx, dword ptr ds : [edx+8]
        jmp public_46e632
        public_46e62e : nop
        mov eax, edx
        mov edx, dword ptr ds : [edx]
        public_46e632 : nop
        cmp edx, ecx
        jne public_46e624
        pop esi
        public_46e637 : nop
        ret 4
        UNREACHABLE_TRAP(0x46e610)
    }
}

#undef public_46e624
#undef public_46e62e
#undef public_46e632
#undef public_46e637
