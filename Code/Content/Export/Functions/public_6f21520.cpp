#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f21520);

#define public_6f21535 _public_6f21535
#define public_6f21544 _public_6f21544
#define public_6f2154d _public_6f2154d

PROC_DECLARE(0x6f21520, internal_6f21520, public_6f21520);
extern "C" NAKED register_t __cdecl internal_6f21520()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jbe public_6f2154d
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        mov edx, eax
        mov eax, dword ptr ss : [esp+0xC]
        push edi
        public_6f21535 : nop
        test eax, eax
        je public_6f21544
        mov ecx, 0x1D
        mov esi, ebx
        mov edi, eax
        rep movsd
        public_6f21544 : nop
        add eax, 0x74
        dec edx
        jne public_6f21535
        pop edi
        pop esi
        pop ebx
        public_6f2154d : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6f21520)
    }
}

#undef public_6f21535
#undef public_6f21544
#undef public_6f2154d
