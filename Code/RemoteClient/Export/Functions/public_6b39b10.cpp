#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b39b10);
CLANG_FORWARD_PROC_SYMBOL(public_6b69d3e);

#define public_6b39b30 _public_6b39b30
#define public_6b39b6a _public_6b39b6a

PROC_DECLARE(0x6b39b10, internal_6b39b10, public_6b39b10);
extern "C" NAKED register_t __cdecl internal_6b39b10()
{
    __asm
    {
        sub esp, 0x5C
        mov eax, dword ptr ss : [esp+0x60]
        push ebx
        push esi
        push edi
        xor ebx, ebx
        lea esi, ds:[eax+0x6C]
        lea edi, ds:[ecx+0x10]
        mov dword ptr ss : [esp+0x6C], 0x80
        lea ebx, ds:[ebx]
        public_6b39b30 : nop
        mov ecx, dword ptr ds : [edi]
        test ecx, ecx
        je public_6b39b6a
        lea edx, ss:[esp+0xC]
        push edx
        call public_6b69d3e
        cmp al, 1
        jne public_6b39b6a
        mov eax, dword ptr ss : [esp+0x58]
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x54]
        mov dword ptr ds : [esi+4], eax
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi-4], edx
        mov dword ptr ds : [esi-8], eax
        mov dword ptr ds : [esi+8], ecx
        inc ebx
        add esi, 0x78
        public_6b39b6a : nop
        mov eax, dword ptr ss : [esp+0x6C]
        add edi, 4
        dec eax
        mov dword ptr ss : [esp+0x6C], eax
        jne public_6b39b30
        mov edx, dword ptr ss : [esp+0x70]
        pop edi
        pop esi
        mov dword ptr ds : [edx], ebx
        mov eax, ebx
        pop ebx
        add esp, 0x5C
        ret 8
        UNREACHABLE_TRAP(0x6b39b10)
    }
}

#undef public_6b39b30
#undef public_6b39b6a
