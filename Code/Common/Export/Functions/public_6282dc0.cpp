#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6282dc0);

#define public_6282dd3 _public_6282dd3
#define public_6282deb _public_6282deb
#define public_6282df8 _public_6282df8

PROC_DECLARE(0x6282dc0, internal_6282dc0, public_6282dc0);
extern "C" NAKED register_t __cdecl internal_6282dc0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        cmp ecx, edx
        mov eax, dword ptr ss : [esp+0xC]
        je public_6282df8
        push ebx
        push esi
        push edi
        public_6282dd3 : nop
        test eax, eax
        je public_6282deb
        mov esi, ecx
        mov ebx, dword ptr ds : [esi]
        mov edi, eax
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi+4], ebx
        mov esi, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], esi
        public_6282deb : nop
        add ecx, 0xC
        add eax, 0xC
        cmp ecx, edx
        jne public_6282dd3
        pop edi
        pop esi
        pop ebx
        public_6282df8 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6282dc0)
    }
}

#undef public_6282dd3
#undef public_6282deb
#undef public_6282df8
