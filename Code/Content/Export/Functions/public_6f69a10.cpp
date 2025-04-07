#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f69a10);

#define public_6f69a25 _public_6f69a25
#define public_6f69a33 _public_6f69a33

PROC_DECLARE(0x6f69a10, internal_6f69a10, public_6f69a10);
extern "C" NAKED register_t __cdecl internal_6f69a10()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ds : [ecx+8]
        lea edx, ds:[eax+4]
        cmp edx, esi
        je public_6f69a33
        push ebx
        push edi
        mov edi, eax
        sub edi, edx
        public_6f69a25 : nop
        mov ebx, dword ptr ds : [edx]
        mov dword ptr ds : [edi+edx], ebx
        add edx, 4
        cmp edx, esi
        jne public_6f69a25
        pop edi
        pop ebx
        public_6f69a33 : nop
        add dword ptr ds : [ecx+8], 0xFFFFFFFC
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f69a10)
    }
}

#undef public_6f69a25
#undef public_6f69a33
