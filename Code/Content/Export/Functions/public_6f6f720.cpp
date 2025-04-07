#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f6f720);

#define public_6f6f733 _public_6f6f733
#define public_6f6f74b _public_6f6f74b
#define public_6f6f758 _public_6f6f758

PROC_DECLARE(0x6f6f720, internal_6f6f720, public_6f6f720);
extern "C" NAKED register_t __cdecl internal_6f6f720()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        cmp ecx, edx
        mov eax, dword ptr ss : [esp+0xC]
        je public_6f6f758
        push ebx
        push esi
        push edi
        public_6f6f733 : nop
        test eax, eax
        je public_6f6f74b
        mov esi, ecx
        mov ebx, dword ptr ds : [esi]
        mov edi, eax
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi+4], ebx
        mov esi, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], esi
        public_6f6f74b : nop
        add ecx, 0xC
        add eax, 0xC
        cmp ecx, edx
        jne public_6f6f733
        pop edi
        pop esi
        pop ebx
        public_6f6f758 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6f6f720)
    }
}

#undef public_6f6f733
#undef public_6f6f74b
#undef public_6f6f758
