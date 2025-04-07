#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe40);
CLANG_FORWARD_PROC_SYMBOL(public_6c05b00);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6c05b19 _public_6c05b19
#define public_6c05b2c _public_6c05b2c
#define public_6c05b3f _public_6c05b3f
#define public_6c05b52 _public_6c05b52

PROC_DECLARE(0x6c05b00, internal_6c05b00, public_6c05b00);
extern "C" NAKED register_t __cdecl internal_6c05b00()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x60]
        test eax, eax
        mov dword ptr ds : [esi], offset public_6c0db10
        je public_6c05b19
        push eax
        call public_6c09aaa
        add esp, 4
        public_6c05b19 : nop
        mov eax, dword ptr ds : [esi+0x88]
        test eax, eax
        je public_6c05b2c
        push eax
        call public_6c09aaa
        add esp, 4
        public_6c05b2c : nop
        mov eax, dword ptr ds : [esi+0x8C]
        test eax, eax
        je public_6c05b3f
        push eax
        call public_6c09aaa
        add esp, 4
        public_6c05b3f : nop
        mov eax, dword ptr ds : [esi+0x84]
        test eax, eax
        je public_6c05b52
        push eax
        call public_6c09aaa
        add esp, 4
        public_6c05b52 : nop
        mov ecx, esi
        pop esi
        jmp public_6bebe40
        UNREACHABLE_TRAP(0x6c05b00)
    }
}

#undef public_6c05b19
#undef public_6c05b2c
#undef public_6c05b3f
#undef public_6c05b52
