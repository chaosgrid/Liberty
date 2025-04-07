#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f5f570);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f5f582 _public_6f5f582
#define public_6f5f591 _public_6f5f591
#define public_6f5f5b0 _public_6f5f5b0

PROC_DECLARE(0x6f5f570, internal_6f5f570, public_6f5f570);
extern "C" NAKED register_t __cdecl internal_6f5f570()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_6f5f5b0
        mov edx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [edx]
        public_6f5f582 : nop
        cmp dword ptr ds : [eax+0x28], edx
        je public_6f5f591
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_6f5f582
        pop esi
        ret 4
        public_6f5f591 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+0x14]
        add esp, 4
        dec eax
        mov dword ptr ds : [esi+0x14], eax
        public_6f5f5b0 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f5f570)
    }
}

#undef public_6f5f582
#undef public_6f5f591
#undef public_6f5f5b0
