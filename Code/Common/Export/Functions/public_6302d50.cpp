#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6302d50);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6302d62 _public_6302d62
#define public_6302d81 _public_6302d81

PROC_DECLARE(0x6302d50, internal_6302d50, public_6302d50);
extern "C" NAKED register_t __cdecl internal_6302d50()
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
        je public_6302d81
        public_6302d62 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_6302d50
        mov esi, dword ptr ds : [esi]
        push edi
        call public_6391d5a
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6302d62
        public_6302d81 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6302d50)
    }
}

#undef public_6302d62
#undef public_6302d81
