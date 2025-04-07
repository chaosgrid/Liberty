#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40da10);

#define public_40da3b _public_40da3b
#define public_40da61 _public_40da61

PROC_DECLARE(0x40da10, internal_40da10, public_40da10);
extern "C" NAKED register_t __cdecl internal_40da10()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0xF4]
        test eax, eax
        push esi
        push edi
        je public_40da61
        push 0
        push eax
        call dword ptr ds : [public_41b1b4]
        test eax, eax
        je public_40da3b
        cmp eax, 0x80
        je public_40da3b
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 4
        public_40da3b : nop
        mov eax, dword ptr ds : [ebx+0xF4]
        mov esi, dword ptr ss : [esp+0x10]
        lea edi, ds:[ebx+0x208]
        mov ecx, 0xB
        push eax
        rep movsd
        call dword ptr ds : [public_41b1a4]
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
        public_40da61 : nop
        mov esi, dword ptr ss : [esp+0x10]
        lea edi, ds:[ebx+0x208]
        mov ecx, 0xB
        rep movsd
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x40da10)
    }
}

#undef public_40da3b
#undef public_40da61
