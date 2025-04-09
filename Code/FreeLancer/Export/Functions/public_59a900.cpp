#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_59a96e _public_59a96e
#define public_59aa03 _public_59aa03
#define public_59aa5f _public_59aa5f

PROC_DECLARE(0x59a900, internal_59a900, public_59a900);
extern "C" NAKED register_t __cdecl internal_59a900()
{
    __asm
    {
        sub esp, 0x6C
        push ebx
        mov ebx, ecx
        fld dword ptr ds : [ebx+0xAC]
        push ebp
        fmul dword ptr ds : [public_5c75e0]
        mov ebp, dword ptr ss : [esp+0x78]
        push esi
        push edi
        lea edi, ds:[ebx+0xB8]
        mov ecx, 0xC
        mov esi, ebp
        rep movsd
        lea eax, ss:[ebp+0x24]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [public_67dbc0]
        fstp dword ptr ss : [esp+0x1C]
        test eax, eax
        fld dword ptr ds : [ebx+0xB0]
        fmul dword ptr ds : [public_5cef60]
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], edx
        fstp dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x24], 0
        jne public_59a96e
        call public_5b73e0
        mov dword ptr ds : [public_67dbc0], eax
        public_59a96e : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x1C]
        push edx
        push ebp
        lea edx, ss:[esp+0x30]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        fld dword ptr ss : [esp+0x30]
        fadd dword ptr ss : [esp+0x18]
        sub esp, 0xC
        lea ecx, ss:[esp+0x4C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x38]
        fadd dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x34]
        fadd dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ds : [ebx+0xB4]
        mov eax, dword ptr ds : [ebx+0xB4]
        fdiv dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [public_67dbc0]
        test eax, eax
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x30], 0
        fld dword ptr ss : [esp+0x40]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x44]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fstp st(0)
        jne public_59aa03
        call public_5b73e0
        mov dword ptr ds : [public_67dbc0], eax
        public_59aa03 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x28]
        push edx
        push ebp
        lea edx, ss:[esp+0x3C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        fld dword ptr ds : [ebx+0xAC]
        mov ecx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x38]
        lea eax, ds:[ebx+0xE8]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [eax+4], edx
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ds : [ebx+0xB0]
        mov dword ptr ds : [eax+8], ecx
        mov eax, dword ptr ds : [public_67dbc0]
        fchs 
        test eax, eax
        fstp dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x3C], 0
        jne public_59aa5f
        call public_5b73e0
        mov dword ptr ds : [public_67dbc0], eax
        public_59aa5f : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x34]
        push ecx
        push ebp
        lea ecx, ss:[esp+0x30]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x2C]
        lea edx, ds:[ebx+0xF4]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx+8], eax
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x78], eax
        lea eax, ss:[esp+0x4C]
        mov dword ptr ss : [esp+0x70], ecx
        mov dword ptr ss : [esp+0x74], edx
        mov edx, dword ptr ds : [ebx]
        push eax
        mov ecx, ebx
        mov dword ptr ss : [esp+0x70], 0x3F800000
        mov dword ptr ss : [esp+0x60], 0x3F800000
        mov dword ptr ss : [esp+0x50], 0x3F800000
        mov dword ptr ss : [esp+0x6C], 0
        mov dword ptr ss : [esp+0x68], 0
        mov dword ptr ss : [esp+0x64], 0
        mov dword ptr ss : [esp+0x5C], 0
        mov dword ptr ss : [esp+0x58], 0
        mov dword ptr ss : [esp+0x54], 0
        call dword ptr ds : [edx+0x1C]
        mov edx, dword ptr ds : [ebx]
        lea eax, ss:[esp+0x70]
        push eax
        mov ecx, ebx
        call dword ptr ds : [edx+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x6C
        ret 4
        UNREACHABLE_TRAP(0x59a900)
    }
}

#undef public_59a96e
#undef public_59aa03
#undef public_59aa5f
