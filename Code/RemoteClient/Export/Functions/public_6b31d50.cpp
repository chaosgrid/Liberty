#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b31da3 _public_6b31da3
#define public_6b31dfb _public_6b31dfb
#define public_6b31e16 _public_6b31e16
#define public_6b31e1f _public_6b31e1f

PROC_DECLARE(0x6b31d50, internal_6b31d50, public_6b31d50);
extern "C" NAKED register_t __cdecl internal_6b31d50()
{
    __asm
    {
        sub esp, 0x10
        push esi
        mov esi, dword ptr ds : [ecx+8]
        test esi, esi
        je public_6b31e1f
        mov eax, dword ptr ds : [esi+0x2C]
        test eax, eax
        je public_6b31e1f
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
        je public_6b31da3
        cmp eax, dword ptr ds : [esi+8]
        jne public_6b31e16
        public_6b31da3 : nop
        mov eax, dword ptr ds : [esi+0x10]
        lea edx, ds:[eax+4]
        mov dword ptr ds : [esi+0x10], edx
        mov eax, dword ptr ds : [eax]
        push eax
        call public_6b6a092
        mov eax, dword ptr ds : [esi+0x2C]
        add esp, 4
        test eax, eax
        jne public_6b31dfb
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
        public_6b31dfb : nop
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [eax]
        add esi, 4
        mov dword ptr ds : [esi], ecx
        lea edx, ds:[ecx+0x1000]
        mov dword ptr ds : [esi+4], edx
        mov edi, ecx
        mov dword ptr ds : [esi+8], edi
        mov dword ptr ds : [esi+0xC], eax
        public_6b31e16 : nop
        pop edi
        mov eax, ebx
        pop ebx
        pop esi
        add esp, 0x10
        ret 
        public_6b31e1f : nop
        xor eax, eax
        pop esi
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6b31d50)
    }
}

#undef public_6b31da3
#undef public_6b31dfb
#undef public_6b31e16
#undef public_6b31e1f
