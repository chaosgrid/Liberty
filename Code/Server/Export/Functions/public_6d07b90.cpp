#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d07b90);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ff70);

#define public_6d07bf4 _public_6d07bf4
#define public_6d07c1d _public_6d07c1d

PROC_DECLARE(0x6d07b90, internal_6d07b90, public_6d07b90);
extern "C" NAKED register_t __cdecl internal_6d07b90()
{
    __asm
    {
        sub esp, 0x10
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [esi+0xB0]
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ds : [esi+0xEC]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+4], edx
        fld dword ptr ds : [esi+0xF4]
        fstp dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [esi+0xF0]
        mov ecx, esi
        mov dword ptr ds : [edi+0xC], eax
        call dword ptr ds : [public_6d6419c]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ds : [edi+0x10], ecx
        mov ecx, esi
        call dword ptr ds : [public_6d641f4]
        fstp dword ptr ds : [edi+0x14]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x88]
        mov ecx, dword ptr ds : [esi+0xEC]
        cmp eax, dword ptr ds : [ecx+0x14]
        je public_6d07bf4
        mov dword ptr ds : [edi+0x18], eax
        public_6d07bf4 : nop
        lea edx, ds:[esi+0x2C]
        mov ecx, dword ptr ds : [edx]
        lea eax, ds:[edi+0x1C]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ds : [public_6d8da08]
        test eax, eax
        jne public_6d07c1d
        call public_6d5ff70
        mov dword ptr ds : [public_6d8da08], eax
        public_6d07c1d : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+8]
        push edx
        lea edx, ss:[esp+0xC]
        push edx
        push eax
        call dword ptr ds : [ecx+0x50]
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+0xC]
        lea eax, ds:[edi+0x28]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+8], ecx
        lea ecx, ss:[esp+8]
        mov dword ptr ds : [eax+0xC], edx
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x54]
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[edi+0x38]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+8], eax
        mov cl, byte ptr ds : [esi+0xFD]
        mov byte ptr ds : [edi+0x45], cl
        pop edi
        pop esi
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6d07b90)
    }
}

#undef public_6d07bf4
#undef public_6d07c1d
