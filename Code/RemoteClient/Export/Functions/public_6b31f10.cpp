#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b31f10);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b31f2d _public_6b31f2d
#define public_6b31f7d _public_6b31f7d
#define public_6b31f98 _public_6b31f98

PROC_DECLARE(0x6b31f10, internal_6b31f10, public_6b31f10);
extern "C" NAKED register_t __cdecl internal_6b31f10()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov edx, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [esi+0x2C]
        add edx, 4
        dec ecx
        push edi
        mov dword ptr ds : [esi+0xC], edx
        mov eax, edx
        mov dword ptr ds : [esi+0x2C], ecx
        je public_6b31f2d
        cmp eax, dword ptr ds : [esi+8]
        jne public_6b31f98
        public_6b31f2d : nop
        mov eax, dword ptr ds : [esi+0x10]
        lea ecx, ds:[eax+4]
        mov dword ptr ds : [esi+0x10], ecx
        mov edx, dword ptr ds : [eax]
        push edx
        call public_6b6a092
        mov eax, dword ptr ds : [esi+0x2C]
        add esp, 4
        test eax, eax
        jne public_6b31f7d
        push ebx
        xor eax, eax
        lea ebx, ds:[esi+4]
        mov dword ptr ds : [ebx], eax
        xor ecx, ecx
        mov dword ptr ds : [ebx+4], ecx
        xor edx, edx
        mov dword ptr ds : [ebx+8], edx
        xor edi, edi
        mov dword ptr ds : [ebx+0xC], edi
        lea ebx, ds:[esi+0x14]
        mov dword ptr ds : [ebx], eax
        mov eax, dword ptr ds : [esi+0x24]
        mov dword ptr ds : [ebx+4], ecx
        mov dword ptr ds : [ebx+8], edx
        push eax
        mov dword ptr ds : [ebx+0xC], edi
        call public_6b6a092
        add esp, 4
        pop ebx
        pop edi
        pop esi
        ret 
        public_6b31f7d : nop
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [eax]
        add esi, 4
        mov dword ptr ds : [esi], ecx
        lea edx, ds:[ecx+0x1000]
        mov dword ptr ds : [esi+4], edx
        mov edi, ecx
        mov dword ptr ds : [esi+8], edi
        mov dword ptr ds : [esi+0xC], eax
        public_6b31f98 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6b31f10)
    }
}

#undef public_6b31f2d
#undef public_6b31f7d
#undef public_6b31f98
