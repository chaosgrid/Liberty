#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d10ad0);

#define public_6d10ae3 _public_6d10ae3
#define public_6d10afb _public_6d10afb
#define public_6d10b08 _public_6d10b08

PROC_DECLARE(0x6d10ad0, internal_6d10ad0, public_6d10ad0);
extern "C" NAKED register_t __cdecl internal_6d10ad0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        cmp ecx, edx
        mov eax, dword ptr ss : [esp+0xC]
        je public_6d10b08
        push ebx
        push esi
        push edi
        public_6d10ae3 : nop
        test eax, eax
        je public_6d10afb
        mov esi, ecx
        mov ebx, dword ptr ds : [esi]
        mov edi, eax
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi+4], ebx
        mov esi, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], esi
        public_6d10afb : nop
        add ecx, 0xC
        add eax, 0xC
        cmp ecx, edx
        jne public_6d10ae3
        pop edi
        pop esi
        pop ebx
        public_6d10b08 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6d10ad0)
    }
}

#undef public_6d10ae3
#undef public_6d10afb
#undef public_6d10b08
