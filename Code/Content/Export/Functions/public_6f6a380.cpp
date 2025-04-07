#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f6a380);

#define public_6f6a393 _public_6f6a393
#define public_6f6a3aa _public_6f6a3aa

PROC_DECLARE(0x6f6a380, internal_6f6a380, public_6f6a380);
extern "C" NAKED register_t __cdecl internal_6f6a380()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        cmp edx, ebx
        je public_6f6a3aa
        push esi
        push edi
        public_6f6a393 : nop
        mov esi, edx
        mov edi, eax
        add edx, 0x44
        mov ecx, 0x11
        add eax, 0x44
        cmp edx, ebx
        rep movsd
        jne public_6f6a393
        pop edi
        pop esi
        public_6f6a3aa : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f6a380)
    }
}

#undef public_6f6a393
#undef public_6f6a3aa
