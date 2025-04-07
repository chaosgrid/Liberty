#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eee050);

#define public_6eee065 _public_6eee065
#define public_6eee074 _public_6eee074
#define public_6eee07d _public_6eee07d

PROC_DECLARE(0x6eee050, internal_6eee050, public_6eee050);
extern "C" NAKED register_t __cdecl internal_6eee050()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jbe public_6eee07d
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        mov edx, eax
        mov eax, dword ptr ss : [esp+0xC]
        push edi
        public_6eee065 : nop
        test eax, eax
        je public_6eee074
        mov ecx, 6
        mov esi, ebx
        mov edi, eax
        rep movsd
        public_6eee074 : nop
        add eax, 0x18
        dec edx
        jne public_6eee065
        pop edi
        pop esi
        pop ebx
        public_6eee07d : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6eee050)
    }
}

#undef public_6eee065
#undef public_6eee074
#undef public_6eee07d
