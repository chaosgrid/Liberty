#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6322b40);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6322b52 _public_6322b52
#define public_6322b71 _public_6322b71

PROC_DECLARE(0x6322b40, internal_6322b40, public_6322b40);
extern "C" NAKED register_t __cdecl internal_6322b40()
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
        je public_6322b71
        public_6322b52 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_6322b40
        mov esi, dword ptr ds : [esi]
        push edi
        call public_6391d5a
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6322b52
        public_6322b71 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6322b40)
    }
}

#undef public_6322b52
#undef public_6322b71
