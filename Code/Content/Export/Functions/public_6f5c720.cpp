#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f5c720);

#define public_6f5c735 _public_6f5c735
#define public_6f5c753 _public_6f5c753
#define public_6f5c75c _public_6f5c75c

PROC_DECLARE(0x6f5c720, internal_6f5c720, public_6f5c720);
extern "C" NAKED register_t __cdecl internal_6f5c720()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jbe public_6f5c75c
        mov edx, dword ptr ss : [esp+0xC]
        push ebx
        push esi
        mov ecx, eax
        mov eax, dword ptr ss : [esp+0xC]
        push edi
        public_6f5c735 : nop
        test eax, eax
        je public_6f5c753
        mov esi, edx
        mov ebx, dword ptr ds : [esi]
        mov edi, eax
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi+4], ebx
        mov ebx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], ebx
        mov esi, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [edi+0xC], esi
        public_6f5c753 : nop
        add eax, 0x10
        dec ecx
        jne public_6f5c735
        pop edi
        pop esi
        pop ebx
        public_6f5c75c : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6f5c720)
    }
}

#undef public_6f5c735
#undef public_6f5c753
#undef public_6f5c75c
