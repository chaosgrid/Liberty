#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4a740);

#define public_6f4a753 _public_6f4a753
#define public_6f4a77a _public_6f4a77a

PROC_DECLARE(0x6f4a740, internal_6f4a740, public_6f4a740);
extern "C" NAKED register_t __cdecl internal_6f4a740()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        cmp ecx, edx
        mov eax, dword ptr ss : [esp+0xC]
        je public_6f4a77a
        push ebx
        push esi
        push edi
        public_6f4a753 : nop
        mov esi, ecx
        mov ebx, dword ptr ds : [esi]
        mov edi, eax
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi+4], ebx
        mov ebx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], ebx
        mov esi, dword ptr ds : [esi+0xC]
        add ecx, 0x10
        add eax, 0x10
        cmp ecx, edx
        mov dword ptr ds : [edi+0xC], esi
        jne public_6f4a753
        pop edi
        pop esi
        pop ebx
        public_6f4a77a : nop
        ret 
        UNREACHABLE_TRAP(0x6f4a740)
    }
}

#undef public_6f4a753
#undef public_6f4a77a
