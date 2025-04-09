#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f7ef0);
CLANG_FORWARD_PROC_SYMBOL(public_4f8a20);

#define public_50c3d7 _public_50c3d7

PROC_DECLARE(0x50c380, internal_50c380, public_50c380);
extern "C" NAKED register_t __cdecl internal_50c380()
{
    __asm
    {
        sub esp, 0x60
        push ebx
        mov ebx, ecx
        cmp dword ptr ds : [ebx+0x40], 0xFFFFFFFF
        push ebp
        mov ebp, dword ptr ss : [esp+0x70]
        jne public_50c3d7
        push esi
        push edi
        lea eax, ss:[esp+0x40]
        push eax
        call public_4f7ef0
        mov ecx, dword ptr ss : [ebp]
        push ebp
        call dword ptr ds : [ecx+0xC]
        mov edx, dword ptr ds : [eax]
        mov ecx, 9
        lea esi, ss:[esp+0x40]
        lea edi, ss:[esp+0x10]
        rep movsd
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x34], edx
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x38], ecx
        lea edi, ds:[ebx+0x10]
        mov ecx, 0xC
        lea esi, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x3C], edx
        rep movsd
        pop edi
        pop esi
        public_50c3d7 : nop
        mov eax, dword ptr ss : [esp+0x6C]
        push ebp
        push eax
        mov ecx, ebx
        call public_4f8a20
        pop ebp
        pop ebx
        add esp, 0x60
        ret 8
        UNREACHABLE_TRAP(0x50c380)
    }
}

#undef public_50c3d7
