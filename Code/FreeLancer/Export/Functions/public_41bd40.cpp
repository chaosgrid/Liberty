#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41bd40);

#define public_41bd54 _public_41bd54
#define public_41bd5f _public_41bd5f
#define public_41bd62 _public_41bd62
#define public_41bd67 _public_41bd67

PROC_DECLARE(0x41bd40, internal_41bd40, public_41bd40);
extern "C" NAKED register_t __cdecl internal_41bd40()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp eax, ecx
        je public_41bd67
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ds : [esi]
        public_41bd54 : nop
        cmp esi, dword ptr ds : [eax+0xC]
        jae public_41bd5f
        mov edx, eax
        mov eax, dword ptr ds : [eax]
        jmp public_41bd62
        public_41bd5f : nop
        mov eax, dword ptr ds : [eax+8]
        public_41bd62 : nop
        cmp eax, ecx
        jne public_41bd54
        pop esi
        public_41bd67 : nop
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], edx
        ret 8
        UNREACHABLE_TRAP(0x41bd40)
    }
}

#undef public_41bd54
#undef public_41bd5f
#undef public_41bd62
#undef public_41bd67
