#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d43650);
CLANG_FORWARD_PROC_SYMBOL(public_6d4f4e0);

#define public_6d4f4f6 _public_6d4f4f6
#define public_6d4f514 _public_6d4f514
#define public_6d4f51c _public_6d4f51c
#define public_6d4f529 _public_6d4f529
#define public_6d4f550 _public_6d4f550

PROC_DECLARE(0x6d4f4e0, internal_6d4f4e0, public_6d4f4e0);
extern "C" NAKED register_t __cdecl internal_6d4f4e0()
{
    __asm
    {
        mov al, byte ptr ss : [esp+8]
        push esi
        push edi
        test al, al
        mov eax, dword ptr ss : [esp+0xC]
        mov edi, ecx
        je public_6d4f4f6
        add dword ptr ds : [edi+0x320], eax
        public_6d4f4f6 : nop
        mov esi, dword ptr ds : [edi+0x31C]
        add esi, eax
        call dword ptr ds : [public_6d647e8]
        test al, al
        je public_6d4f514
        mov dl, byte ptr ds : [edi+0x64]
        test dl, dl
        setne al
        test al, al
        je public_6d4f550
        public_6d4f514 : nop
        test esi, esi
        jge public_6d4f51c
        xor esi, esi
        jmp public_6d4f529
        public_6d4f51c : nop
        cmp esi, 0x3B9AC9FF
        jle public_6d4f529
        mov esi, 0x3B9AC9FF
        public_6d4f529 : nop
        mov dword ptr ds : [edi+0x31C], esi
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov eax, dword ptr ds : [ecx]
        push esi
        add edi, 0x348
        push edi
        call dword ptr ds : [eax+0x134]
        push edi
        push 0
        call public_6d43650
        add esp, 8
        public_6d4f550 : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6d4f4e0)
    }
}

#undef public_6d4f4f6
#undef public_6d4f514
#undef public_6d4f51c
#undef public_6d4f529
#undef public_6d4f550
