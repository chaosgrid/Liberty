#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d006c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d0df40);

#define public_6cf0ae4 _public_6cf0ae4

PROC_DECLARE(0x6cf0a90, internal_6cf0a90, public_6cf0a90);
extern "C" NAKED register_t __cdecl internal_6cf0a90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [public_6d90260]
        imul eax, 0x418
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [eax+edx-0x34]
        jne public_6cf0ae4
        lea eax, ss:[esp+8]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        push esi
        call public_6d006c0
        add esp, 0xC
        test al, al
        je public_6cf0ae4
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_6cf0ae4
        mov eax, dword ptr ds : [esi+8]
        xor edx, edx
        mov dl, byte ptr ds : [esi+0xC]
        push 0
        push edx
        mov edx, dword ptr ds : [esi+4]
        push eax
        mov eax, dword ptr ds : [esi]
        push edx
        push eax
        call public_6d0df40
        public_6cf0ae4 : nop
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6cf0a90)
    }
}

#undef public_6cf0ae4
