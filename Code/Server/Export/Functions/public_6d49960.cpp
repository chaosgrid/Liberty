#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d49960);

#define public_6d4997c _public_6d4997c
#define public_6d49990 _public_6d49990
#define public_6d499ab _public_6d499ab

PROC_DECLARE(0x6d49960, internal_6d49960, public_6d49960);
extern "C" NAKED register_t __cdecl internal_6d49960()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov dl, byte ptr ds : [eax+0x200]
        cmp dl, byte ptr ds : [ecx+0x200]
        je public_6d4997c
        test dl, dl
        setne al
        ret 
        public_6d4997c : nop
        mov dl, byte ptr ds : [eax+0x201]
        cmp dl, byte ptr ds : [ecx+0x201]
        je public_6d49990
        test dl, dl
        setne al
        ret 
        public_6d49990 : nop
        add ecx, 0x228
        push ecx
        add eax, 0x228
        push eax
        call dword ptr ds : [public_6d64aa0]
        cmp eax, 0xFFFFFFFF
        jne public_6d499ab
        xor al, al
        ret 
        public_6d499ab : nop
        cmp eax, 1
        sete al
        ret 
        UNREACHABLE_TRAP(0x6d49960)
    }
}

#undef public_6d4997c
#undef public_6d49990
#undef public_6d499ab
