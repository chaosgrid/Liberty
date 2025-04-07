#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5a180);

#define public_6d5a192 _public_6d5a192
#define public_6d5a1ad _public_6d5a1ad
#define public_6d5a1b1 _public_6d5a1b1
#define public_6d5a1b6 _public_6d5a1b6

PROC_DECLARE(0x6d5a180, internal_6d5a180, public_6d5a180);
extern "C" NAKED register_t __cdecl internal_6d5a180()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [eax+4]
        mov ebx, eax
        cmp esi, dword ptr ds : [edi+8]
        je public_6d5a1b6
        public_6d5a192 : nop
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        lea ecx, ds:[esi+0xC]
        push ecx
        call dword ptr ds : [public_6d648d8]
        add esp, 8
        test al, al
        je public_6d5a1ad
        mov esi, dword ptr ds : [esi+8]
        jmp public_6d5a1b1
        public_6d5a1ad : nop
        mov ebx, esi
        mov esi, dword ptr ds : [esi]
        public_6d5a1b1 : nop
        cmp esi, dword ptr ds : [edi+8]
        jne public_6d5a192
        public_6d5a1b6 : nop
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d5a180)
    }
}

#undef public_6d5a192
#undef public_6d5a1ad
#undef public_6d5a1b1
#undef public_6d5a1b6
