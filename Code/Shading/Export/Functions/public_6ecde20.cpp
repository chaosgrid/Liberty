#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecde20);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);

#define public_6ecde58 _public_6ecde58
#define public_6ecde6c _public_6ecde6c
#define public_6ecde80 _public_6ecde80

PROC_DECLARE(0x6ecde20, internal_6ecde20, public_6ecde20);
extern "C" NAKED register_t __cdecl internal_6ecde20()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi]
        mov ebx, ecx
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+4], ecx
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        push edi
        mov edi, dword ptr ds : [public_6ed1054]
        je public_6ecde58
        push eax
        call edi
        add esp, 4
        mov dword ptr ds : [esi+8], 0
        public_6ecde58 : nop
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_6ecde6c
        push eax
        call edi
        add esp, 4
        mov dword ptr ds : [esi+0x10], 0
        public_6ecde6c : nop
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        je public_6ecde80
        push eax
        call edi
        add esp, 4
        mov dword ptr ds : [esi+0x14], 0
        public_6ecde80 : nop
        push esi
        call public_6ed0c50
        mov eax, dword ptr ds : [ebx+8]
        mov edx, dword ptr ss : [esp+0x18]
        add esp, 4
        dec eax
        mov dword ptr ds : [ebx+8], eax
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], edx
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6ecde20)
    }
}

#undef public_6ecde58
#undef public_6ecde6c
#undef public_6ecde80
