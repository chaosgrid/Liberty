#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343670);
CLANG_FORWARD_PROC_SYMBOL(public_6348f50);

#define public_63436c8 _public_63436c8
#define public_63436cf _public_63436cf

PROC_DECLARE(0x6343670, internal_6343670, public_6343670);
extern "C" NAKED register_t __cdecl internal_6343670()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ds : [edx]
        lea eax, ds:[ecx+0x7C]
        mov dword ptr ds : [eax], esi
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], esi
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], esi
        mov edx, dword ptr ds : [edx+0xC]
        mov dword ptr ds : [eax+0xC], edx
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        je public_63436c8
        fld dword ptr ds : [public_63a53d0]
        mov esi, dword ptr ds : [eax]
        fdiv dword ptr ss : [esp+0x14]
        lea edx, ds:[ecx+0x8C]
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+8], esi
        mov eax, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [edx+0xC], eax
        mov dword ptr ds : [ecx+0x78], 1
        fstp dword ptr ds : [ecx+0x74]
        jmp public_63436cf
        public_63436c8 : nop
        mov dword ptr ds : [ecx+0x78], 0
        public_63436cf : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+0x6C], edx
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+0x5C]
        mov dword ptr ds : [ecx+0x70], eax
        mov eax, dword ptr ds : [ecx+0x54]
        mov ecx, dword ptr ds : [eax+0x90]
        push edx
        call public_6348f50
        pop esi
        ret 0x10
        UNREACHABLE_TRAP(0x6343670)
    }
}

#undef public_63436c8
#undef public_63436cf
