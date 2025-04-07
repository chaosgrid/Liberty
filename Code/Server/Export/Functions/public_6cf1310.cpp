#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d006c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d50af0);

#define public_6cf1379 _public_6cf1379

PROC_DECLARE(0x6cf1310, internal_6cf1310, public_6cf1310);
extern "C" NAKED register_t __cdecl internal_6cf1310()
{
    __asm
    {
        push ecx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        lea eax, ss:[esp+8]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        push edi
        call public_6d006c0
        add esp, 0xC
        test al, al
        je public_6cf1379
        mov esi, dword ptr ss : [esp+0x10]
        test esi, esi
        je public_6cf1379
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x160]
        test al, al
        jne public_6cf1379
        movzx edx, word ptr ds : [edi+6]
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+4]
        mov esi, dword ptr ss : [esp+0x14]
        push esi
        push edx
        xor edx, edx
        mov dx, word ptr ds : [edi+4]
        push edx
        call dword ptr ds : [eax+0x58]
        test eax, eax
        jne public_6cf1379
        mov eax, dword ptr ds : [public_6d90260]
        imul esi, 0x418
        lea ecx, ds:[esi+eax-0x418]
        call public_6d50af0
        public_6cf1379 : nop
        pop edi
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6cf1310)
    }
}

#undef public_6cf1379
