#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eceba0);

#define public_6ecebb4 _public_6ecebb4
#define public_6ecebbe _public_6ecebbe
#define public_6ecebc2 _public_6ecebc2
#define public_6ecebc7 _public_6ecebc7

PROC_DECLARE(0x6eceba0, internal_6eceba0, public_6eceba0);
extern "C" NAKED register_t __cdecl internal_6eceba0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp eax, ecx
        je public_6ecebc7
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ds : [esi]
        public_6ecebb4 : nop
        cmp dword ptr ds : [eax+0xC], esi
        jae public_6ecebbe
        mov eax, dword ptr ds : [eax+8]
        jmp public_6ecebc2
        public_6ecebbe : nop
        mov edx, eax
        mov eax, dword ptr ds : [eax]
        public_6ecebc2 : nop
        cmp eax, ecx
        jne public_6ecebb4
        pop esi
        public_6ecebc7 : nop
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], edx
        ret 8
        UNREACHABLE_TRAP(0x6eceba0)
    }
}

#undef public_6ecebb4
#undef public_6ecebbe
#undef public_6ecebc2
#undef public_6ecebc7
