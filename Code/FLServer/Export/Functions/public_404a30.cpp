#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_404a30);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_404a42 _public_404a42
#define public_404a61 _public_404a61

PROC_DECLARE(0x404a30, internal_404a30, public_404a30);
extern "C" NAKED register_t __cdecl internal_404a30()
{
    __asm
    {
        push ebx
        push esi
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp edi, eax
        mov esi, edi
        je public_404a61
        public_404a42 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_404a30
        mov esi, dword ptr ds : [esi]
        push edi
        call public_418978
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_404a42
        public_404a61 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x404a30)
    }
}

#undef public_404a42
#undef public_404a61
