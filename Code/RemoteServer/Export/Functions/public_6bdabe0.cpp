#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6bdac06 _public_6bdac06
#define public_6bdac1c _public_6bdac1c
#define public_6bdac22 _public_6bdac22

PROC_DECLARE(0x6bdabe0, internal_6bdabe0, public_6bdabe0);
extern "C" NAKED register_t __cdecl internal_6bdabe0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        test ebp, ebp
        mov ebx, ecx
        je public_6bdac22
        push esi
        mov esi, dword ptr ds : [ebx+0x40]
        push edi
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        call public_6c09d26
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6bdac06
        mov edi, eax
        public_6bdac06 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        pop edi
        pop esi
        je public_6bdac1c
        mov dword ptr ds : [eax], ebp
        public_6bdac1c : nop
        inc dword ptr ds : [ebx+0x44]
        inc dword ptr ds : [ebx+0x38]
        public_6bdac22 : nop
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6bdabe0)
    }
}

#undef public_6bdac06
#undef public_6bdac1c
#undef public_6bdac22
