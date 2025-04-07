#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f7f720);

#define public_6f7f733 _public_6f7f733
#define public_6f7f754 _public_6f7f754

PROC_DECLARE(0x6f7f720, internal_6f7f720, public_6f7f720);
extern "C" NAKED register_t __cdecl internal_6f7f720()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        cmp ecx, edx
        mov eax, dword ptr ss : [esp+0xC]
        je public_6f7f754
        push ebx
        push esi
        push edi
        public_6f7f733 : nop
        mov esi, ecx
        mov ebx, dword ptr ds : [esi]
        mov edi, eax
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi+4], ebx
        mov esi, dword ptr ds : [esi+8]
        add ecx, 0xC
        add eax, 0xC
        cmp ecx, edx
        mov dword ptr ds : [edi+8], esi
        jne public_6f7f733
        pop edi
        pop esi
        pop ebx
        public_6f7f754 : nop
        ret 
        UNREACHABLE_TRAP(0x6f7f720)
    }
}

#undef public_6f7f733
#undef public_6f7f754
