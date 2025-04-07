#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f5abc0);

#define public_6f5abd4 _public_6f5abd4
#define public_6f5abfb _public_6f5abfb

PROC_DECLARE(0x6f5abc0, internal_6f5abc0, public_6f5abc0);
extern "C" NAKED register_t __cdecl internal_6f5abc0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6fd0e5c]
        mov ecx, dword ptr ds : [public_6fd0e58]
        mov edx, eax
        cmp eax, edx
        je public_6f5abfb
        push ebx
        push esi
        push edi
        public_6f5abd4 : nop
        mov esi, eax
        mov ebx, dword ptr ds : [esi]
        mov edi, ecx
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi+4], ebx
        mov ebx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], ebx
        mov esi, dword ptr ds : [esi+0xC]
        add eax, 0x10
        add ecx, 0x10
        cmp eax, edx
        mov dword ptr ds : [edi+0xC], esi
        jne public_6f5abd4
        pop edi
        pop esi
        pop ebx
        public_6f5abfb : nop
        mov dword ptr ds : [public_6fd0e5c], ecx
        ret 
        UNREACHABLE_TRAP(0x6f5abc0)
    }
}

#undef public_6f5abd4
#undef public_6f5abfb
