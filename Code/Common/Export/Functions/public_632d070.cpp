#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632c340);
CLANG_FORWARD_PROC_SYMBOL(public_632d070);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_632d082 _public_632d082
#define public_632d0a9 _public_632d0a9

PROC_DECLARE(0x632d070, internal_632d070, public_632d070);
extern "C" NAKED register_t __cdecl internal_632d070()
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
        je public_632d0a9
        public_632d082 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_632d070
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_632c340
        push edi
        call public_6391d5a
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_632d082
        public_632d0a9 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x632d070)
    }
}

#undef public_632d082
#undef public_632d0a9
