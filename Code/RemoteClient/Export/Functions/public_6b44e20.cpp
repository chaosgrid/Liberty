#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b44e20);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b44e46 _public_6b44e46
#define public_6b44e5c _public_6b44e5c
#define public_6b44e62 _public_6b44e62

PROC_DECLARE(0x6b44e20, internal_6b44e20, public_6b44e20);
extern "C" NAKED register_t __cdecl internal_6b44e20()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        test ebp, ebp
        mov ebx, ecx
        je public_6b44e62
        push esi
        mov esi, dword ptr ds : [ebx+0x40]
        push edi
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        call public_6b6a134
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6b44e46
        mov edi, eax
        public_6b44e46 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        pop edi
        pop esi
        je public_6b44e5c
        mov dword ptr ds : [eax], ebp
        public_6b44e5c : nop
        inc dword ptr ds : [ebx+0x44]
        inc dword ptr ds : [ebx+0x38]
        public_6b44e62 : nop
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6b44e20)
    }
}

#undef public_6b44e46
#undef public_6b44e5c
#undef public_6b44e62
