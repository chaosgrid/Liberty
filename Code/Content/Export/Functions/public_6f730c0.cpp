#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb70a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f672d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f730c0);

#define public_6f730e0 _public_6f730e0
#define public_6f7310b _public_6f7310b
#define public_6f73123 _public_6f73123
#define public_6f73125 _public_6f73125

PROC_DECLARE(0x6f730c0, internal_6f730c0, public_6f730c0);
extern "C" NAKED register_t __cdecl internal_6f730c0()
{
    __asm
    {
        sub esp, 0x30
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr ds : [edi+0xBC]
        mov ecx, dword ptr ds : [edi+0xC0]
        xor al, al
        cmp esi, ecx
        je public_6f73125
        mov ebp, dword ptr ss : [esp+0x48]
        mov edi, edi
        public_6f730e0 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+0x10]
        test ecx, ecx
        je public_6f7310b
        mov edx, dword ptr ss : [esp+0x44]
        push ebp
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        call public_6eb70a0
        mov ecx, dword ptr ss : [esp+0x48]
        push eax
        push ecx
        call public_6f672d0
        add esp, 0x10
        test al, al
        jne public_6f73123
        public_6f7310b : nop
        mov eax, dword ptr ds : [edi+0xC0]
        add esi, 4
        cmp esi, eax
        jne public_6f730e0
        pop edi
        pop esi
        xor al, al
        pop ebp
        add esp, 0x30
        ret 0xC
        public_6f73123 : nop
        mov al, 1
        public_6f73125 : nop
        pop edi
        pop esi
        pop ebp
        add esp, 0x30
        ret 0xC
        UNREACHABLE_TRAP(0x6f730c0)
    }
}

#undef public_6f730e0
#undef public_6f7310b
#undef public_6f73123
#undef public_6f73125
