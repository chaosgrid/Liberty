#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f33160);

#define public_6f33175 _public_6f33175
#define public_6f33195 _public_6f33195

PROC_DECLARE(0x6f33160, internal_6f33160, public_6f33160);
extern "C" NAKED register_t __cdecl internal_6f33160()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp edx, esi
        je public_6f33195
        mov ecx, dword ptr ss : [esp+0x10]
        lea eax, ds:[edx+8]
        push edi
        public_6f33175 : nop
        mov edi, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax-4], edi
        mov edi, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edi
        mov edi, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+4], edi
        add edx, 0x10
        add eax, 0x10
        cmp edx, esi
        jne public_6f33175
        pop edi
        public_6f33195 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f33160)
    }
}

#undef public_6f33175
#undef public_6f33195
