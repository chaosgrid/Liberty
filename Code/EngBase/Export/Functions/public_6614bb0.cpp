#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66126e0);
CLANG_FORWARD_PROC_SYMBOL(public_6614580);
CLANG_FORWARD_PROC_SYMBOL(public_6616090);

#define public_6614c0f _public_6614c0f
#define public_6614c32 _public_6614c32
#define public_6614c34 _public_6614c34

PROC_DECLARE(0x6614bb0, internal_6614bb0, public_6614bb0);
extern "C" NAKED register_t __cdecl internal_6614bb0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        push ebx
        push ebp
        push esi
        lea eax, ss:[esp+0x14]
        push edi
        push eax
        push ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        or esi, 0xFFFFFFFF
        call public_6614580
        test al, al
        je public_6614c32
        mov edx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov ebx, dword ptr ss : [esp+0x28]
        mov ebp, dword ptr ss : [esp+0x1C]
        mov edi, dword ptr ss : [esp+0x18]
        push edx
        mov edx, dword ptr ss : [esp+0x28]
        push eax
        mov eax, dword ptr ss : [esp+0x28]
        push ecx
        push ebx
        push edx
        push eax
        push ebp
        mov ecx, edi
        call public_66126e0
        cmp eax, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x18], eax
        je public_6614c34
        mov esi, dword ptr ds : [edi+0xC]
        mov ecx, dword ptr ds : [edi+0x10]
        cmp esi, ecx
        je public_6614c34
        public_6614c0f : nop
        mov ecx, dword ptr ds : [esi]
        push ebp
        push ebx
        push ecx
        mov ecx, dword ptr ss : [esp+0x20]
        call public_6616090
        mov eax, dword ptr ds : [edi+0x10]
        add esi, 4
        cmp esi, eax
        jne public_6614c0f
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x24
        public_6614c32 : nop
        mov eax, esi
        public_6614c34 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x24
        UNREACHABLE_TRAP(0x6614bb0)
    }
}

#undef public_6614c0f
#undef public_6614c32
#undef public_6614c34
