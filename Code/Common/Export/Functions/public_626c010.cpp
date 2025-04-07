#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626c010);

#define public_626c030 _public_626c030
#define public_626c03c _public_626c03c
#define public_626c040 _public_626c040
#define public_626c058 _public_626c058

PROC_DECLARE(0x626c010, internal_626c010, public_626c010);
extern "C" NAKED register_t __cdecl internal_626c010()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ds : [ecx+0x18]
        test edi, edi
        mov esi, 0xC
        je public_626c03c
        mov eax, dword ptr ds : [ecx+0x20]
        mov edx, dword ptr ds : [ecx+0x1C]
        cmp eax, edx
        jae public_626c03c
        sub edx, eax
        cmp edx, esi
        jae public_626c030
        mov esi, edx
        public_626c030 : nop
        lea edx, ds:[eax+edi]
        add eax, esi
        mov dword ptr ds : [ecx+0x20], eax
        mov eax, edx
        jmp public_626c040
        public_626c03c : nop
        xor esi, esi
        xor eax, eax
        public_626c040 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        cmp esi, 0xC
        mov dword ptr ds : [ecx], eax
        pop esi
        je public_626c058
        mov dword ptr ds : [ecx], 0
        xor al, al
        ret 4
        public_626c058 : nop
        mov al, 1
        ret 4
        UNREACHABLE_TRAP(0x626c010)
    }
}

#undef public_626c030
#undef public_626c03c
#undef public_626c040
#undef public_626c058
