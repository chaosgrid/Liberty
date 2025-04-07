#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6624f20);

#define public_6624f34 _public_6624f34
#define public_6624f3f _public_6624f3f
#define public_6624f42 _public_6624f42
#define public_6624f47 _public_6624f47

PROC_DECLARE(0x6624f20, internal_6624f20, public_6624f20);
extern "C" NAKED register_t __cdecl internal_6624f20()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [edx+4]
        cmp eax, ecx
        je public_6624f47
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ds : [esi]
        public_6624f34 : nop
        cmp esi, dword ptr ds : [eax+0xC]
        jae public_6624f3f
        mov edx, eax
        mov eax, dword ptr ds : [eax]
        jmp public_6624f42
        public_6624f3f : nop
        mov eax, dword ptr ds : [eax+8]
        public_6624f42 : nop
        cmp eax, ecx
        jne public_6624f34
        pop esi
        public_6624f47 : nop
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], edx
        ret 8
        UNREACHABLE_TRAP(0x6624f20)
    }
}

#undef public_6624f34
#undef public_6624f3f
#undef public_6624f42
#undef public_6624f47
