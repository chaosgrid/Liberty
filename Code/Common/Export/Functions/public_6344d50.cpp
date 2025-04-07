#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6344d50);
CLANG_FORWARD_PROC_SYMBOL(public_6345550);
CLANG_FORWARD_PROC_SYMBOL(public_634f180);

#define public_6344d85 _public_6344d85
#define public_6344d9b _public_6344d9b
#define public_6344db5 _public_6344db5

PROC_DECLARE(0x6344d50, internal_6344d50, public_6344d50);
extern "C" NAKED register_t __cdecl internal_6344d50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        test eax, eax
        mov eax, dword ptr ds : [esi+0x78]
        je public_6344d85
        test ah, 3
        jne public_6344db5
        mov eax, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [eax+0x10]
        push esi
        call public_634f180
        mov ecx, dword ptr ds : [esi+0x78]
        and ecx, 0xFFFFFDFF
        or ecx, 0x100
        mov dword ptr ds : [esi+0x78], ecx
        pop esi
        ret 4
        public_6344d85 : nop
        test ah, 3
        je public_6344db5
        mov ecx, dword ptr ds : [esi+0x90]
        test ecx, ecx
        je public_6344d9b
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx+0x10]
        public_6344d9b : nop
        and dword ptr ds : [esi+0x78], 0xFFFFFCFF
        push 1
        mov ecx, esi
        mov dword ptr ds : [esi+0x90], 0
        call public_6345550
        public_6344db5 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6344d50)
    }
}

#undef public_6344d85
#undef public_6344d9b
#undef public_6344db5
