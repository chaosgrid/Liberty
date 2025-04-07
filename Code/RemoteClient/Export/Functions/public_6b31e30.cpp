#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b31e82 _public_6b31e82
#define public_6b31eda _public_6b31eda
#define public_6b31ef5 _public_6b31ef5
#define public_6b31efe _public_6b31efe

PROC_DECLARE(0x6b31e30, internal_6b31e30, public_6b31e30);
extern "C" NAKED register_t __cdecl internal_6b31e30()
{
    __asm
    {
        sub esp, 0x10
        push esi
        mov esi, dword ptr ds : [ecx]
        test esi, esi
        je public_6b31efe
        mov eax, dword ptr ds : [esi+0x2C]
        test eax, eax
        je public_6b31efe
        lea eax, ds:[esi+4]
        mov ecx, eax
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+8], eax
        mov eax, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [ecx+0xC]
        mov dword ptr ss : [esp+4], edx
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ds : [esi+0x2C]
        add edx, 4
        push ebx
        mov ebx, dword ptr ds : [eax]
        dec ecx
        push edi
        mov dword ptr ds : [esi+0xC], edx
        mov eax, edx
        mov dword ptr ds : [esi+0x2C], ecx
        je public_6b31e82
        cmp eax, dword ptr ds : [esi+8]
        jne public_6b31ef5
        public_6b31e82 : nop
        mov eax, dword ptr ds : [esi+0x10]
        lea edx, ds:[eax+4]
        mov dword ptr ds : [esi+0x10], edx
        mov eax, dword ptr ds : [eax]
        push eax
        call public_6b6a092
        mov eax, dword ptr ds : [esi+0x2C]
        add esp, 4
        test eax, eax
        jne public_6b31eda
        push ebp
        xor eax, eax
        xor ecx, ecx
        lea ebp, ds:[esi+4]
        mov dword ptr ss : [ebp], eax
        mov dword ptr ss : [ebp+4], ecx
        xor edx, edx
        mov dword ptr ss : [ebp+8], edx
        xor edi, edi
        mov dword ptr ss : [ebp+0xC], edi
        lea ebp, ds:[esi+0x14]
        mov dword ptr ss : [ebp], eax
        mov dword ptr ss : [ebp+4], ecx
        mov ecx, dword ptr ds : [esi+0x24]
        mov dword ptr ss : [ebp+8], edx
        push ecx
        mov dword ptr ss : [ebp+0xC], edi
        call public_6b6a092
        add esp, 4
        pop ebp
        pop edi
        mov eax, ebx
        pop ebx
        pop esi
        add esp, 0x10
        ret 
        public_6b31eda : nop
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [eax]
        add esi, 4
        mov dword ptr ds : [esi], ecx
        lea edx, ds:[ecx+0x1000]
        mov dword ptr ds : [esi+4], edx
        mov edi, ecx
        mov dword ptr ds : [esi+8], edi
        mov dword ptr ds : [esi+0xC], eax
        public_6b31ef5 : nop
        pop edi
        mov eax, ebx
        pop ebx
        pop esi
        add esp, 0x10
        ret 
        public_6b31efe : nop
        xor eax, eax
        pop esi
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6b31e30)
    }
}

#undef public_6b31e82
#undef public_6b31eda
#undef public_6b31ef5
#undef public_6b31efe
