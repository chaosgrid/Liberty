#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6284370);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_62ad9a4 _public_62ad9a4
#define public_62ad9e1 _public_62ad9e1

PROC_DECLARE(0x62ad980, internal_62ad980, public_62ad980);
extern "C" NAKED register_t __cdecl internal_62ad980()
{
    __asm
    {
        sub esp, 0x10
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x54]
        test eax, eax
        je public_62ad9a4
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        push 0
        push edi
        call public_6284370
        add esp, 0xC
        pop edi
        add esp, 0x10
        ret 4
        public_62ad9a4 : nop
        mov ecx, dword ptr ds : [public_6399040]
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+8], 0
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        push esi
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, dword ptr ds : [edi+4]
        push 0
        push ecx
        push eax
        call dword ptr ds : [edx+0x88]
        mov eax, dword ptr ds : [public_63fc41c]
        test eax, eax
        jne public_62ad9e1
        call public_6391cf0
        mov dword ptr ds : [public_63fc41c], eax
        public_62ad9e1 : nop
        mov edx, dword ptr ds : [eax]
        push esi
        add edi, 8
        push edi
        lea ecx, ss:[esp+0x14]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        fld dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], ecx
        pop esi
        pop edi
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x62ad980)
    }
}

#undef public_62ad9a4
#undef public_62ad9e1
