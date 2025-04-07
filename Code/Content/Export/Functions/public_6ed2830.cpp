#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed2830);

#define public_6ed2845 _public_6ed2845
#define public_6ed2854 _public_6ed2854
#define public_6ed285d _public_6ed285d

PROC_DECLARE(0x6ed2830, internal_6ed2830, public_6ed2830);
extern "C" NAKED register_t __cdecl internal_6ed2830()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jbe public_6ed285d
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        mov edx, eax
        mov eax, dword ptr ss : [esp+0xC]
        push edi
        public_6ed2845 : nop
        test eax, eax
        je public_6ed2854
        mov ecx, 0xD
        mov esi, ebx
        mov edi, eax
        rep movsd
        public_6ed2854 : nop
        add eax, 0x34
        dec edx
        jne public_6ed2845
        pop edi
        pop esi
        pop ebx
        public_6ed285d : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6ed2830)
    }
}

#undef public_6ed2845
#undef public_6ed2854
#undef public_6ed285d
