#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6297b20);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_6297bad _public_6297bad
#define public_6297bf3 _public_6297bf3
#define public_6297c0c _public_6297c0c
#define public_6297c29 _public_6297c29
#define public_6297c31 _public_6297c31

PROC_DECLARE(0x6297b20, internal_6297b20, public_6297b20);
extern "C" NAKED register_t __cdecl internal_6297b20()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6399040]
        sub esp, 0x48
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx+0x218]
        cmp ecx, 0xFFFFFFFF
        push esi
        push edi
        je public_6297bf3
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x98]
        mov esi, eax
        mov eax, dword ptr ds : [public_6399040]
        mov ecx, 9
        lea edi, ss:[esp+0x30]
        rep movsd
        mov ecx, dword ptr ds : [ebx+0x218]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x90]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov ebx, dword ptr ds : [ebx+0x218]
        mov dword ptr ss : [esp+0xC], ecx
        mov ecx, dword ptr ds : [public_6399040]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [ecx]
        push ebx
        mov dword ptr ss : [esp+0x14], edx
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0xC4]
        mov esi, eax
        mov eax, dword ptr ds : [public_63fc184]
        test eax, eax
        jne public_6297bad
        call public_6391cf0
        mov dword ptr ds : [public_63fc184], eax
        public_6297bad : nop
        mov ecx, dword ptr ds : [eax]
        add esi, 0x10
        push esi
        lea edx, ss:[esp+0x34]
        push edx
        lea edx, ss:[esp+0x2C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        fld dword ptr ss : [esp+0xC]
        fsub dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x18]
        fsub dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x1C]
        fsub dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x20]
        jmp public_6297c31
        public_6297bf3 : nop
        mov ecx, dword ptr ds : [ebx+0x1FC]
        cmp ecx, 0xFFFFFFFF
        je public_6297c0c
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x90]
        jmp public_6297c29
        public_6297c0c : nop
        mov ecx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [edx+0x84]
        push eax
        mov eax, dword ptr ds : [public_6399040]
        mov ecx, dword ptr ds : [eax]
        push ecx
        call dword ptr ds : [esi+0x90]
        public_6297c29 : nop
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+8]
        public_6297c31 : nop
        mov esi, dword ptr ss : [esp+0x58]
        mov edi, esi
        mov dword ptr ds : [edi], ecx
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edi+8], eax
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        add esp, 0x48
        ret 4
        UNREACHABLE_TRAP(0x6297b20)
    }
}

#undef public_6297bad
#undef public_6297bf3
#undef public_6297c0c
#undef public_6297c29
#undef public_6297c31
