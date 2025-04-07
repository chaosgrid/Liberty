#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629b430);
CLANG_FORWARD_PROC_SYMBOL(public_629b990);

#define public_62bf4f0 _public_62bf4f0
#define public_62bf525 _public_62bf525
#define public_62bf52a _public_62bf52a

PROC_DECLARE(0x62bf480, internal_62bf480, public_62bf480);
extern "C" NAKED register_t __cdecl internal_62bf480()
{
    __asm
    {
        sub esp, 0x10
        push ebp
        mov ebp, dword ptr ds : [ecx+0x10]
        test ebp, ebp
        mov eax, 0xFFFFFFFD
        je public_62bf52a
        mov ecx, dword ptr ss : [ebp+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        jne public_62bf52a
        mov edx, dword ptr ss : [esp+0x20]
        push ebx
        mov ebx, dword ptr ss : [esp+0x20]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [edi], 0
        mov dword ptr ds : [ebx], 0
        push 0x100
        lea ecx, ss:[esp+0x14]
        mov byte ptr ds : [edx], 0
        call public_629b990
        lea eax, ss:[esp+0x10]
        add ebp, 0xE4
        push eax
        mov ecx, ebp
        call public_629b430
        mov esi, eax
        test esi, esi
        je public_62bf525
        lea ecx, ds:[ecx]
        public_62bf4f0 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x3C]
        fadd dword ptr ds : [edi]
        mov ecx, esi
        fstp dword ptr ds : [edi]
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+0x38]
        fadd dword ptr ds : [ebx]
        mov ecx, esi
        fstp dword ptr ds : [ebx]
        mov edx, dword ptr ds : [esi]
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ss : [esp+0x2C]
        lea edx, ss:[esp+0x10]
        mov byte ptr ds : [ecx], al
        push edx
        mov ecx, ebp
        call public_629b430
        mov esi, eax
        test esi, esi
        jne public_62bf4f0
        public_62bf525 : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        public_62bf52a : nop
        pop ebp
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x62bf480)
    }
}

#undef public_62bf4f0
#undef public_62bf525
#undef public_62bf52a
