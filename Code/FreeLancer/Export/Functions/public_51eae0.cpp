#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_412170);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_51eb85 _public_51eb85
#define public_51ebc2 _public_51ebc2

PROC_DECLARE(0x51eae0, internal_51eae0, public_51eae0);
extern "C" NAKED register_t __cdecl internal_51eae0()
{
    __asm
    {
        sub esp, 0x6C
        push ebx
        mov ebx, ecx
        call public_54baf0
        test eax, eax
        je public_51eb85
        mov edx, dword ptr ds : [eax]
        push esi
        push edi
        mov ecx, eax
        call dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0xC], ecx
        mov ecx, dword ptr ds : [ebx]
        push ebx
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ss : [esp+0x18], eax
        call dword ptr ds : [ecx+0xC]
        fld dword ptr ss : [esp+0x14]
        fsub dword ptr ds : [eax+8]
        lea edx, ss:[esp+0x18]
        fld dword ptr ss : [esp+0x10]
        push edx
        fsub dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0x10]
        fsub dword ptr ds : [eax]
        lea eax, ss:[esp+0x28]
        push eax
        fstp dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+0x28]
        call dword ptr ds : [public_5c6280]
        mov ecx, dword ptr ds : [ebx]
        add esp, 8
        push ebx
        call dword ptr ds : [ecx+0xC]
        mov edx, dword ptr ds : [eax]
        mov ecx, 9
        lea esi, ss:[esp+0x24]
        lea edi, ss:[esp+0x48]
        rep movsd
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x6C], edx
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x70], ecx
        lea edi, ds:[ebx+4]
        mov ecx, 0xC
        lea esi, ss:[esp+0x48]
        mov dword ptr ss : [esp+0x74], edx
        rep movsd
        pop edi
        mov byte ptr ds : [ebx+0x34], 1
        pop esi
        public_51eb85 : nop
        mov al, byte ptr ds : [ebx+0xF8]
        test al, al
        je public_51ebc2
        fld dword ptr ss : [esp+0x74]
        fadd dword ptr ds : [ebx+0x100]
        fst dword ptr ds : [ebx+0x100]
        fld dword ptr ds : [ebx+0xFC]
        fsub st, st(1)
        fcomp dword ptr ds : [public_61650c]
        fnstsw ax
        fstp st(0)
        test ah, 5
        jp public_51ebc2
        mov byte ptr ds : [ebx+0xF8], 0
        call public_412170
        public_51ebc2 : nop
        pop ebx
        add esp, 0x6C
        ret 4
        UNREACHABLE_TRAP(0x51eae0)
    }
}

#undef public_51eb85
#undef public_51ebc2
