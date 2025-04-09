#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a2e80);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5a2e99 _public_5a2e99
#define public_5a2eac _public_5a2eac
#define public_5a2eba _public_5a2eba
#define public_5a2eca _public_5a2eca
#define public_5a2eda _public_5a2eda

PROC_DECLARE(0x5a2e80, internal_5a2e80, public_5a2e80);
extern "C" NAKED register_t __cdecl internal_5a2e80()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xC]
        push edi
        xor edi, edi
        cmp eax, edi
        je public_5a2e99
        push eax
        call public_5b7e1d
        add esp, 4
        mov dword ptr ds : [esi+0xC], edi
        public_5a2e99 : nop
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, edi
        je public_5a2eac
        push eax
        call public_5b7e1d
        add esp, 4
        mov dword ptr ds : [esi+0x10], edi
        public_5a2eac : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, edi
        je public_5a2eba
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], edi
        public_5a2eba : nop
        mov eax, dword ptr ds : [esi+4]
        cmp eax, edi
        je public_5a2eca
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+4], edi
        public_5a2eca : nop
        mov eax, dword ptr ds : [esi+8]
        cmp eax, edi
        je public_5a2eda
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], edi
        public_5a2eda : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x5a2e80)
    }
}

#undef public_5a2e99
#undef public_5a2eac
#undef public_5a2eba
#undef public_5a2eca
#undef public_5a2eda
