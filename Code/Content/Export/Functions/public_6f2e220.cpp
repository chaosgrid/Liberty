#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2e220);

#define public_6f2e234 _public_6f2e234
#define public_6f2e23e _public_6f2e23e
#define public_6f2e242 _public_6f2e242
#define public_6f2e247 _public_6f2e247

PROC_DECLARE(0x6f2e220, internal_6f2e220, public_6f2e220);
extern "C" NAKED register_t __cdecl internal_6f2e220()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp eax, ecx
        je public_6f2e247
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ds : [esi]
        public_6f2e234 : nop
        cmp dword ptr ds : [eax+0xC], esi
        jae public_6f2e23e
        mov eax, dword ptr ds : [eax+8]
        jmp public_6f2e242
        public_6f2e23e : nop
        mov edx, eax
        mov eax, dword ptr ds : [eax]
        public_6f2e242 : nop
        cmp eax, ecx
        jne public_6f2e234
        pop esi
        public_6f2e247 : nop
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], edx
        ret 8
        UNREACHABLE_TRAP(0x6f2e220)
    }
}

#undef public_6f2e234
#undef public_6f2e23e
#undef public_6f2e242
#undef public_6f2e247
