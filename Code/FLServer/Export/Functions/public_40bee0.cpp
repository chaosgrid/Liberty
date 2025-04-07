#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40bd40);
CLANG_FORWARD_PROC_SYMBOL(public_40bee0);

#define public_40bf1a _public_40bf1a
#define public_40bf35 _public_40bf35
#define public_40bf52 _public_40bf52
#define public_40bf63 _public_40bf63

PROC_DECLARE(0x40bee0, internal_40bee0, public_40bee0);
extern "C" NAKED register_t __cdecl internal_40bee0()
{
    __asm
    {
        sub esp, 8
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xBA0]
        test eax, eax
        je public_40bf63
        mov edx, dword ptr ds : [eax+0x2C]
        lea ecx, ss:[esp+8]
        push ecx
        push edx
        mov byte ptr ss : [esp+0xC], 0
        call dword ptr ds : [public_41b150]
        test eax, eax
        je public_40bf52
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0x103
        jne public_40bf1a
        xor al, al
        pop esi
        add esp, 8
        ret 
        public_40bf1a : nop
        mov ecx, dword ptr ds : [esi+0xBA0]
        cmp eax, 1
        sete al
        test ecx, ecx
        mov byte ptr ss : [esp+4], al
        je public_40bf35
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx+4]
        public_40bf35 : nop
        mov eax, dword ptr ds : [esi]
        push 0xFFFFFFFF
        mov ecx, esi
        mov dword ptr ds : [esi+0xBA0], 0
        call dword ptr ds : [eax+0x98]
        mov byte ptr ds : [esi+0xBA8], 0
        public_40bf52 : nop
        mov ecx, dword ptr ss : [esp+4]
        push ecx
        mov ecx, esi
        call public_40bd40
        pop esi
        add esp, 8
        ret 
        public_40bf63 : nop
        mov al, 1
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x40bee0)
    }
}

#undef public_40bf1a
#undef public_40bf35
#undef public_40bf52
#undef public_40bf63
