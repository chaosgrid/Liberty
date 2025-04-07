#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f056a0);

#define public_6f056b5 _public_6f056b5
#define public_6f056c4 _public_6f056c4
#define public_6f056cd _public_6f056cd

PROC_DECLARE(0x6f056a0, internal_6f056a0, public_6f056a0);
extern "C" NAKED register_t __cdecl internal_6f056a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jbe public_6f056cd
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        mov edx, eax
        mov eax, dword ptr ss : [esp+0xC]
        push edi
        public_6f056b5 : nop
        test eax, eax
        je public_6f056c4
        mov ecx, 7
        mov esi, ebx
        mov edi, eax
        rep movsd
        public_6f056c4 : nop
        add eax, 0x1C
        dec edx
        jne public_6f056b5
        pop edi
        pop esi
        pop ebx
        public_6f056cd : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6f056a0)
    }
}

#undef public_6f056b5
#undef public_6f056c4
#undef public_6f056cd
