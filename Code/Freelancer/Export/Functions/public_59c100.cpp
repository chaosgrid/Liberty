#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5868c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_59c144 _public_59c144

PROC_DECLARE(0x59c100, internal_59c100, public_59c100);
extern "C" NAKED register_t __cdecl internal_59c100()
{
    __asm
    {
        sub esp, 0x54
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x60]
        push esi
        mov ebx, ecx
        push edi
        mov ecx, 0xC
        mov esi, ebp
        lea edi, ss:[esp+0x34]
        lea eax, ss:[ebp+0x24]
        rep movsd
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [public_67dbc0]
        test eax, eax
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], edx
        jne public_59c144
        call public_5b73e0
        mov dword ptr ds : [public_67dbc0], eax
        public_59c144 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[ebx+0x570]
        push edx
        push ebp
        lea edx, ss:[esp+0x24]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x2C], ecx
        fld dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x28], eax
        fadd dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x30], edx
        mov dword ptr ss : [esp+0x58], eax
        mov eax, dword ptr ds : [ebx]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x14]
        fadd dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x5C], ecx
        lea ecx, ss:[esp+0x34]
        push ecx
        fstp dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, ebx
        mov dword ptr ss : [esp+0x64], edx
        call dword ptr ds : [eax+0x1C]
        mov edx, dword ptr ds : [ebx]
        lea eax, ss:[esp+0x58]
        push eax
        mov ecx, ebx
        call dword ptr ds : [edx+0x14]
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, ebx
        call public_5868c0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x54
        ret 4
        UNREACHABLE_TRAP(0x59c100)
    }
}

#undef public_59c144
