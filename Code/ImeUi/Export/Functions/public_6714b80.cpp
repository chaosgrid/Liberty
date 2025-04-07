#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6714b80);

#define public_6714bbb _public_6714bbb

PROC_DECLARE(0x6714b80, internal_6714b80, public_6714b80);
extern "C" NAKED register_t __cdecl internal_6714b80()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        push 0
        push 0
        push edi
        push ebx
        call dword ptr ds : [public_671b9c0]
        mov esi, eax
        test esi, esi
        je public_6714bbb
        push esi
        call dword ptr ds : [public_671b408]
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        push esi
        push eax
        push edi
        push ebx
        mov dword ptr ds : [ecx], eax
        call dword ptr ds : [public_671b9c0]
        pop edi
        pop esi
        pop ebx
        ret 
        public_6714bbb : nop
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6714b80)
    }
}

#undef public_6714bbb
