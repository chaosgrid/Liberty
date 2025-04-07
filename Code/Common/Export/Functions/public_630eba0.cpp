#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_630ebfe _public_630ebfe

PROC_DECLARE(0x630eba0, internal_630eba0, public_630eba0);
extern "C" NAKED register_t __cdecl internal_630eba0()
{
    __asm
    {
        sub esp, 0x60
        mov eax, dword ptr ss : [esp+0x68]
        push ebx
        push esi
        lea ebx, ds:[eax+0x10]
        push edi
        mov ecx, 9
        mov esi, ebx
        lea edi, ss:[esp+0xC]
        rep movsd
        lea esi, ds:[eax+4]
        mov eax, esi
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x30], ecx
        mov ecx, dword ptr ds : [public_6399040]
        mov dword ptr ss : [esp+0x34], edx
        mov dword ptr ss : [esp+0x38], eax
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp+0x70]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0xA0]
        mov edi, eax
        mov eax, dword ptr ds : [public_63fcf94]
        test eax, eax
        jne public_630ebfe
        call public_6391cf0
        mov dword ptr ds : [public_63fcf94], eax
        public_630ebfe : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0xC]
        push ecx
        push edi
        lea ecx, ss:[esp+0x44]
        push ecx
        push eax
        call dword ptr ds : [edx+0x1C]
        mov edx, dword ptr ss : [esp+0x60]
        mov eax, dword ptr ss : [esp+0x64]
        mov ecx, dword ptr ss : [esp+0x68]
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], ecx
        mov edi, ebx
        mov ecx, 9
        lea esi, ss:[esp+0x3C]
        rep movsd
        pop edi
        pop esi
        pop ebx
        add esp, 0x60
        ret 
        UNREACHABLE_TRAP(0x630eba0)
    }
}

#undef public_630ebfe
