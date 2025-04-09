#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4e5a70);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4e5a82 _public_4e5a82
#define public_4e5aa1 _public_4e5aa1

PROC_DECLARE(0x4e5a70, internal_4e5a70, public_4e5a70);
extern "C" NAKED register_t __cdecl internal_4e5a70()
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
        je public_4e5aa1
        public_4e5a82 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_4e5a70
        mov esi, dword ptr ds : [esi]
        push edi
        call public_5b7e1d
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_4e5a82
        public_4e5aa1 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x4e5a70)
    }
}

#undef public_4e5a82
#undef public_4e5aa1
