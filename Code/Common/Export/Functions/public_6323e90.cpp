#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_631fad0);
CLANG_FORWARD_PROC_SYMBOL(public_6323e90);

#define public_6323ea3 _public_6323ea3
#define public_6323ecd _public_6323ecd

PROC_DECLARE(0x6323e90, internal_6323e90, public_6323e90);
extern "C" NAKED register_t __cdecl internal_6323e90()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        cmp ebx, esi
        je public_6323ecd
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        public_6323ea3 : nop
        mov eax, dword ptr ds : [esi-0x90]
        sub esi, 0x90
        lea ecx, ds:[esi+4]
        sub edi, 0x90
        push ecx
        lea ecx, ds:[edi+4]
        mov dword ptr ds : [edi], eax
        call public_631fad0
        cmp esi, ebx
        jne public_6323ea3
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 
        public_6323ecd : nop
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6323e90)
    }
}

#undef public_6323ea3
#undef public_6323ecd
