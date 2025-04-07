#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4115b0);

#define public_411664 _public_411664

PROC_DECLARE(0x4115b0, internal_4115b0, public_4115b0);
extern "C" NAKED register_t __cdecl internal_4115b0()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ss : [esp+0x10]
        mov dl, byte ptr ds : [eax]
        movzx edx, dl
        mov dword ptr ss : [esp+0x10], edx
        xor edx, edx
        push ebx
        mov bl, byte ptr ds : [eax+1]
        fild dword ptr ss : [esp+0x14]
        mov al, byte ptr ds : [eax+2]
        mov dl, bl
        fmul dword ptr ds : [public_5c7f68]
        movzx eax, al
        push esi
        fstp dword ptr ss : [esp+8]
        mov esi, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+0x1C], 0x3F800000
        mov dword ptr ss : [esp+0x18], edx
        fild dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ds:[ecx+0xA4]
        mov edx, eax
        fmul dword ptr ds : [public_5c7f68]
        mov dword ptr ds : [edx], esi
        fstp dword ptr ss : [esp+0xC]
        fild dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edx+4], esi
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx+8], esi
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+0xA8]
        mov dword ptr ds : [ecx+0x10], eax
        mov eax, dword ptr ds : [ecx+0xAC]
        mov dword ptr ds : [ecx+0x14], edx
        mov dword ptr ds : [ecx+0x18], eax
        mov eax, dword ptr ds : [public_610588]
        test eax, eax
        pop esi
        pop ebx
        jne public_411664
        test byte ptr ds : [ecx+0xB4], 4
        je public_411664
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        add ecx, 0xC
        push ecx
        push eax
        call dword ptr ds : [edx+0x12C]
        public_411664 : nop
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x4115b0)
    }
}

#undef public_411664
