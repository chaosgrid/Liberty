#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d006c0);

#define public_6cf0a88 _public_6cf0a88

PROC_DECLARE(0x6cf0a40, internal_6cf0a40, public_6cf0a40);
extern "C" NAKED register_t __cdecl internal_6cf0a40()
{
    __asm
    {
        push ecx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+8]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        push edi
        call public_6d006c0
        add esp, 0xC
        test al, al
        je public_6cf0a88
        mov esi, dword ptr ss : [esp+0x14]
        test esi, esi
        je public_6cf0a88
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x160]
        test al, al
        jne public_6cf0a88
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi+4]
        push edx
        xor edx, edx
        mov dl, byte ptr ds : [edi+4]
        lea ecx, ds:[esi+4]
        push edx
        call dword ptr ds : [eax+0x54]
        public_6cf0a88 : nop
        pop edi
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6cf0a40)
    }
}

#undef public_6cf0a88
