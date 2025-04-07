#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661a260);

#define public_6616be7 _public_6616be7
#define public_6616bef _public_6616bef
#define public_6616bfd _public_6616bfd

PROC_DECLARE(0x6616b90, internal_6616b90, public_6616b90);
extern "C" NAKED register_t __cdecl internal_6616b90()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        or ebx, 0xFFFFFFFF
        cmp esi, 0xFFFFFFFF
        je public_6616bfd
        test esi, esi
        je public_6616bfd
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        je public_6616bfd
        push edi
        push eax
        call dword ptr ds : [public_662900c]
        mov edi, dword ptr ds : [esi+8]
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        add esi, 4
        lea eax, ss:[esp+0x14]
        mov ecx, esi
        push eax
        call public_661a260
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0x18], eax
        je public_6616be7
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [eax+0xC]
        cmp ecx, edx
        jb public_6616be7
        lea eax, ss:[esp+0x18]
        jmp public_6616bef
        public_6616be7 : nop
        mov dword ptr ss : [esp+0x14], esi
        lea eax, ss:[esp+0x14]
        public_6616bef : nop
        mov ecx, dword ptr ds : [eax]
        cmp ecx, edi
        pop edi
        je public_6616bfd
        pop esi
        xor eax, eax
        pop ebx
        ret 0xC
        public_6616bfd : nop
        mov eax, ebx
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6616b90)
    }
}

#undef public_6616be7
#undef public_6616bef
#undef public_6616bfd
