#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_631fad0);
CLANG_FORWARD_PROC_SYMBOL(public_6323e50);

#define public_6323e67 _public_6323e67
#define public_6323e80 _public_6323e80

PROC_DECLARE(0x6323e50, internal_6323e50, public_6323e50);
extern "C" NAKED register_t __cdecl internal_6323e50()
{
    __asm
    {
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, ebp
        je public_6323e80
        push ebx
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        lea ebx, ds:[edi+4]
        public_6323e67 : nop
        mov eax, dword ptr ds : [edi]
        push ebx
        lea ecx, ds:[esi+4]
        mov dword ptr ds : [esi], eax
        call public_631fad0
        add esi, 0x90
        cmp esi, ebp
        jne public_6323e67
        pop edi
        pop ebx
        public_6323e80 : nop
        pop esi
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6323e50)
    }
}

#undef public_6323e67
#undef public_6323e80
