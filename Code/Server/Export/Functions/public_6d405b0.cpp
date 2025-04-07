#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d405b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d42160);
CLANG_FORWARD_PROC_SYMBOL(public_6d42a60);

#define public_6d405ca _public_6d405ca
#define public_6d405e6 _public_6d405e6

PROC_DECLARE(0x6d405b0, internal_6d405b0, public_6d405b0);
extern "C" NAKED register_t __cdecl internal_6d405b0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ecx+0x1C]
        sub eax, 0
        push esi
        je public_6d405ca
        dec eax
        je public_6d405e6
        dec eax
        jne public_6d405e6
        mov al, byte ptr ds : [ecx+0xE]
        test al, al
        je public_6d405e6
        public_6d405ca : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+8]
        push eax
        push edx
        push ecx
        push esi
        call public_6d42160
        add esp, 0x10
        mov eax, esi
        pop esi
        ret 
        public_6d405e6 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+8]
        push eax
        push edx
        push ecx
        push esi
        call public_6d42a60
        add esp, 0x10
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d405b0)
    }
}

#undef public_6d405ca
#undef public_6d405e6
