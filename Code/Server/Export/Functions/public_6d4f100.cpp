#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d43650);
CLANG_FORWARD_PROC_SYMBOL(public_6d4f100);

#define public_6d4f119 _public_6d4f119
#define public_6d4f14e _public_6d4f14e
#define public_6d4f161 _public_6d4f161

PROC_DECLARE(0x6d4f100, internal_6d4f100, public_6d4f100);
extern "C" NAKED register_t __cdecl internal_6d4f100()
{
    __asm
    {
        push esi
        mov esi, ecx
        call dword ptr ds : [public_6d647e8]
        test al, al
        je public_6d4f119
        mov dl, byte ptr ds : [esi+0x64]
        test dl, dl
        setne al
        test al, al
        je public_6d4f161
        public_6d4f119 : nop
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        push edi
        push ebx
        lea ecx, ds:[esi+0x278]
        call dword ptr ds : [public_6d64400]
        mov cl, byte ptr ss : [esp+0x18]
        test cl, cl
        je public_6d4f14e
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        push edi
        push ebx
        push eax
        mov eax, dword ptr ds : [esi+0x348]
        push eax
        call dword ptr ds : [edx+0x6C]
        public_6d4f14e : nop
        add esi, 0x348
        push esi
        push 0
        call public_6d43650
        add esp, 8
        pop edi
        pop ebx
        public_6d4f161 : nop
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6d4f100)
    }
}

#undef public_6d4f119
#undef public_6d4f14e
#undef public_6d4f161
