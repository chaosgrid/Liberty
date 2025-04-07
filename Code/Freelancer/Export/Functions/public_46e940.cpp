#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46e940);

#define public_46e954 _public_46e954
#define public_46e95f _public_46e95f
#define public_46e962 _public_46e962
#define public_46e967 _public_46e967

PROC_DECLARE(0x46e940, internal_46e940, public_46e940);
extern "C" NAKED register_t __cdecl internal_46e940()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp edx, ecx
        je public_46e967
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov esi, dword ptr ds : [esi]
        public_46e954 : nop
        cmp esi, dword ptr ds : [edx+0xC]
        jbe public_46e95f
        mov eax, edx
        mov edx, dword ptr ds : [edx]
        jmp public_46e962
        public_46e95f : nop
        mov edx, dword ptr ds : [edx+8]
        public_46e962 : nop
        cmp edx, ecx
        jne public_46e954
        pop esi
        public_46e967 : nop
        ret 4
        UNREACHABLE_TRAP(0x46e940)
    }
}

#undef public_46e954
#undef public_46e95f
#undef public_46e962
#undef public_46e967
