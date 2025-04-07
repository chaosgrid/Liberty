#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed2330);
CLANG_FORWARD_PROC_SYMBOL(public_6ed3880);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6ed2342 _public_6ed2342
#define public_6ed2369 _public_6ed2369

PROC_DECLARE(0x6ed2330, internal_6ed2330, public_6ed2330);
extern "C" NAKED register_t __cdecl internal_6ed2330()
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
        je public_6ed2369
        public_6ed2342 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_6ed2330
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_6ed3880
        push edi
        call public_6fa8fe0
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6ed2342
        public_6ed2369 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ed2330)
    }
}

#undef public_6ed2342
#undef public_6ed2369
