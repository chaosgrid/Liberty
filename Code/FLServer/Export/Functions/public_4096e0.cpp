#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40cdc0);
CLANG_FORWARD_PROC_SYMBOL(public_40ce70);
CLANG_FORWARD_PROC_SYMBOL(public_418936);
CLANG_FORWARD_PROC_SYMBOL(public_41893c);
CLANG_FORWARD_PROC_SYMBOL(public_418942);
CLANG_FORWARD_PROC_SYMBOL(public_41898a);

#define public_409752 _public_409752

PROC_DECLARE(0x4096e0, internal_4096e0, public_4096e0);
extern "C" NAKED register_t __cdecl internal_4096e0()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        push 0
        push 0
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x80]
        push 0xF0
        push eax
        call dword ptr ds : [public_41bbe8]
        test eax, eax
        setne bl
        mov byte ptr ss : [esp+8], bl
        call public_40cdc0
        mov eax, dword ptr ds : [esi+0x200]
        cmp byte ptr ds : [eax+0x31], bl
        jne public_409752
        mov ecx, dword ptr ds : [public_41baf8]
        add eax, 4
        push eax
        call public_418942
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [esi+0x200]
        push ecx
        mov ecx, dword ptr ds : [public_41baf8]
        add edx, 4
        push edx
        call public_41893c
        mov eax, dword ptr ds : [esi+0x200]
        mov ecx, dword ptr ds : [public_41baf8]
        add eax, 4
        push eax
        call public_418936
        public_409752 : nop
        call public_40ce70
        mov ecx, esi
        pop esi
        pop ebx
        add esp, 4
        jmp public_41898a
        UNREACHABLE_TRAP(0x4096e0)
    }
}

#undef public_409752
