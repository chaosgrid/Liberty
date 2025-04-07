#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f6f760);

#define public_6f6f775 _public_6f6f775
#define public_6f6f78d _public_6f6f78d
#define public_6f6f796 _public_6f6f796

PROC_DECLARE(0x6f6f760, internal_6f6f760, public_6f6f760);
extern "C" NAKED register_t __cdecl internal_6f6f760()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jbe public_6f6f796
        mov edx, dword ptr ss : [esp+0xC]
        push ebx
        push esi
        mov ecx, eax
        mov eax, dword ptr ss : [esp+0xC]
        push edi
        public_6f6f775 : nop
        test eax, eax
        je public_6f6f78d
        mov esi, edx
        mov ebx, dword ptr ds : [esi]
        mov edi, eax
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi+4], ebx
        mov esi, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], esi
        public_6f6f78d : nop
        add eax, 0xC
        dec ecx
        jne public_6f6f775
        pop edi
        pop esi
        pop ebx
        public_6f6f796 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6f6f760)
    }
}

#undef public_6f6f775
#undef public_6f6f78d
#undef public_6f6f796
