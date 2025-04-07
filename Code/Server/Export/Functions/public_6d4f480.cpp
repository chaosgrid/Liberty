#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d43650);
CLANG_FORWARD_PROC_SYMBOL(public_6d4f480);

#define public_6d4f499 _public_6d4f499
#define public_6d4f4a5 _public_6d4f4a5
#define public_6d4f4b1 _public_6d4f4b1
#define public_6d4f4d8 _public_6d4f4d8

PROC_DECLARE(0x6d4f480, internal_6d4f480, public_6d4f480);
extern "C" NAKED register_t __cdecl internal_6d4f480()
{
    __asm
    {
        push esi
        mov esi, ecx
        call dword ptr ds : [public_6d647e8]
        test al, al
        je public_6d4f499
        mov dl, byte ptr ds : [esi+0x64]
        test dl, dl
        setne al
        test al, al
        je public_6d4f4d8
        public_6d4f499 : nop
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jge public_6d4f4a5
        xor eax, eax
        jmp public_6d4f4b1
        public_6d4f4a5 : nop
        cmp eax, 0x3B9AC9FF
        jle public_6d4f4b1
        mov eax, 0x3B9AC9FF
        public_6d4f4b1 : nop
        mov dword ptr ds : [esi+0x31C], eax
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        push eax
        add esi, 0x348
        push esi
        call dword ptr ds : [edx+0x134]
        push esi
        push 0
        call public_6d43650
        add esp, 8
        public_6d4f4d8 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d4f480)
    }
}

#undef public_6d4f499
#undef public_6d4f4a5
#undef public_6d4f4b1
#undef public_6d4f4d8
