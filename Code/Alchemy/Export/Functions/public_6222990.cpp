#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6222990);

#define public_62229a3 _public_62229a3
#define public_62229bc _public_62229bc
#define public_62229ca _public_62229ca
#define public_62229e6 _public_62229e6

PROC_DECLARE(0x6222990, internal_6222990, public_6222990);
extern "C" NAKED register_t __cdecl internal_6222990()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp ebx, edi
        je public_62229e6
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        public_62229a3 : nop
        mov eax, dword ptr ds : [esi-0x10]
        sub esi, 0x10
        sub edi, 0x10
        test eax, eax
        je public_62229bc
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_62229bc : nop
        mov eax, dword ptr ds : [edi]
        test eax, eax
        mov dword ptr ds : [esi], eax
        je public_62229ca
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+4]
        public_62229ca : nop
        mov eax, dword ptr ds : [edi+4]
        cmp edi, ebx
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], ecx
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [esi+0xC], edx
        jne public_62229a3
        mov eax, esi
        pop esi
        pop edi
        pop ebx
        ret 
        public_62229e6 : nop
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6222990)
    }
}

#undef public_62229a3
#undef public_62229bc
#undef public_62229ca
#undef public_62229e6
