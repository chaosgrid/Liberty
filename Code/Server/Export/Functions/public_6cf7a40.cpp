#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf7a40);

#define public_6cf7a54 _public_6cf7a54
#define public_6cf7a5f _public_6cf7a5f
#define public_6cf7a62 _public_6cf7a62
#define public_6cf7a67 _public_6cf7a67

PROC_DECLARE(0x6cf7a40, internal_6cf7a40, public_6cf7a40);
extern "C" NAKED register_t __cdecl internal_6cf7a40()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp edx, ecx
        je public_6cf7a67
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov esi, dword ptr ds : [esi]
        public_6cf7a54 : nop
        cmp esi, dword ptr ds : [edx+0xC]
        jae public_6cf7a5f
        mov eax, edx
        mov edx, dword ptr ds : [edx]
        jmp public_6cf7a62
        public_6cf7a5f : nop
        mov edx, dword ptr ds : [edx+8]
        public_6cf7a62 : nop
        cmp edx, ecx
        jne public_6cf7a54
        pop esi
        public_6cf7a67 : nop
        ret 4
        UNREACHABLE_TRAP(0x6cf7a40)
    }
}

#undef public_6cf7a54
#undef public_6cf7a5f
#undef public_6cf7a62
#undef public_6cf7a67
