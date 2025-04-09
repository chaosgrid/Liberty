#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4114f0);

#define public_41159b _public_41159b

PROC_DECLARE(0x4114f0, internal_4114f0, public_4114f0);
extern "C" NAKED register_t __cdecl internal_4114f0()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ss : [esp+0x10]
        movzx edx, byte ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], edx
        movzx edx, byte ptr ds : [eax+1]
        fild dword ptr ss : [esp+0x10]
        movzx eax, byte ptr ds : [eax+2]
        fmul dword ptr ds : [public_5c7f68]
        mov dword ptr ss : [esp+0x10], edx
        push esi
        fstp dword ptr ss : [esp+4]
        mov esi, dword ptr ss : [esp+4]
        fild dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ds:[ecx+0xA4]
        mov edx, eax
        fmul dword ptr ds : [public_5c7f68]
        mov dword ptr ds : [edx], esi
        mov dword ptr ds : [ecx+0x1C], 0x3F800000
        fstp dword ptr ss : [esp+8]
        mov esi, dword ptr ss : [esp+8]
        fild dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx+4], esi
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ss : [esp+0xC]
        mov esi, dword ptr ss : [esp+0xC]
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
        jne public_41159b
        test byte ptr ds : [ecx+0xB4], 4
        je public_41159b
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        add ecx, 0xC
        push ecx
        push eax
        call dword ptr ds : [edx+0x12C]
        public_41159b : nop
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x4114f0)
    }
}

#undef public_41159b
