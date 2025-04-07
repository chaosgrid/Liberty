#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a15a0);

#define public_62a17c0 _public_62a17c0
#define public_62a17ce _public_62a17ce
#define public_62a17de _public_62a17de

PROC_DECLARE(0x62a17a0, internal_62a17a0, public_62a17a0);
extern "C" NAKED register_t __cdecl internal_62a17a0()
{
    __asm
    {
        sub esp, 8
        push esi
        push edi
        lea eax, ss:[esp+8]
        push eax
        mov esi, ecx
        xor edi, edi
        mov byte ptr ss : [esp+0xC], 1
        call public_62a15a0
        test eax, eax
        je public_62a17de
        lea esp, ss:[esp]
        public_62a17c0 : nop
        mov eax, dword ptr ds : [eax+0x14]
        cmp eax, 2
        je public_62a17ce
        cmp eax, 3
        je public_62a17ce
        inc edi
        public_62a17ce : nop
        lea ecx, ss:[esp+8]
        push ecx
        mov ecx, esi
        call public_62a15a0
        test eax, eax
        jne public_62a17c0
        public_62a17de : nop
        mov eax, edi
        pop edi
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x62a17a0)
    }
}

#undef public_62a17c0
#undef public_62a17ce
#undef public_62a17de
