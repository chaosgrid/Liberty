#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6614580);

#define public_6616f01 _public_6616f01
#define public_6616f1a _public_6616f1a
#define public_6616f22 _public_6616f22
#define public_6616f24 _public_6616f24

PROC_DECLARE(0x6616ed0, internal_6616ed0, public_6616ed0);
extern "C" NAKED register_t __cdecl internal_6616ed0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+0xC]
        push ebx
        push esi
        lea eax, ss:[esp+0x14]
        push edi
        push eax
        push ecx
        mov ecx, dword ptr ss : [esp+0x18]
        or esi, 0xFFFFFFFF
        call public_6614580
        test al, al
        je public_6616f22
        mov edi, dword ptr ss : [esp+0x18]
        xor eax, eax
        mov esi, dword ptr ds : [edi+0xC]
        mov ecx, dword ptr ds : [edi+0x10]
        cmp esi, ecx
        je public_6616f24
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6616f01 : nop
        mov edx, dword ptr ds : [esi]
        push ebx
        push edx
        call dword ptr ss : [esp+0x1C]
        add esp, 8
        test al, al
        je public_6616f1a
        mov eax, dword ptr ds : [edi+0x10]
        add esi, 4
        cmp esi, eax
        jne public_6616f01
        public_6616f1a : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 0x10
        public_6616f22 : nop
        mov eax, esi
        public_6616f24 : nop
        pop edi
        pop esi
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6616ed0)
    }
}

#undef public_6616f01
#undef public_6616f1a
#undef public_6616f22
#undef public_6616f24
