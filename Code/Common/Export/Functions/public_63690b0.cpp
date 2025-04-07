#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6346800);
CLANG_FORWARD_PROC_SYMBOL(public_63690b0);

#define public_63690cc _public_63690cc
#define public_6369157 _public_6369157

PROC_DECLARE(0x63690b0, internal_63690b0, public_63690b0);
extern "C" NAKED register_t __cdecl internal_63690b0()
{
    __asm
    {
        sub esp, 0x28
        push esi
        push edi
        xor esi, esi
        mov edi, ecx
        mov si, word ptr ds : [edi+0x26]
        mov dword ptr ss : [esp+8], 0
        dec esi
        js public_6369157
        public_63690cc : nop
        mov eax, dword ptr ds : [edi+0x28]
        mov ecx, dword ptr ds : [eax+esi*4]
        fld dword ptr ds : [ecx+0xA8]
        fadd dword ptr ds : [ecx+0x88]
        fld dword ptr ds : [ecx+0xAC]
        fadd dword ptr ds : [ecx+0x8C]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [ecx+0xA4]
        mov edx, dword ptr ss : [esp+0xC]
        fadd dword ptr ds : [ecx+0x84]
        mov dword ptr ss : [esp+0x28], edx
        lea edx, ss:[esp+0x10]
        push edx
        fstp dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ds : [ecx+0x98]
        fadd dword ptr ds : [ecx+0x78]
        fld dword ptr ds : [ecx+0x9C]
        fadd dword ptr ds : [ecx+0x7C]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [ecx+0x94]
        mov eax, dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [ecx+0x74]
        mov dword ptr ss : [esp+0x1C], eax
        lea eax, ss:[esp+0x24]
        push eax
        fstp dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x1C]
        call public_6346800
        dec esi
        fadd dword ptr ss : [esp+8]
        fstp dword ptr ss : [esp+8]
        jns public_63690cc
        public_6369157 : nop
        fld dword ptr ss : [esp+8]
        pop edi
        pop esi
        add esp, 0x28
        ret 
        UNREACHABLE_TRAP(0x63690b0)
    }
}

#undef public_63690cc
#undef public_6369157
