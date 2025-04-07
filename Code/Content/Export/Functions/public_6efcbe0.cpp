#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efcbe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fa0);

#define public_6efcc2c _public_6efcc2c
#define public_6efcc91 _public_6efcc91
#define public_6efccbd _public_6efccbd

PROC_DECLARE(0x6efcbe0, internal_6efcbe0, public_6efcbe0);
extern "C" NAKED register_t __cdecl internal_6efcbe0()
{
    __asm
    {
        sub esp, 0x3C
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x38]
        test eax, eax
        push edi
        je public_6efccbd
        mov ecx, dword ptr ds : [esi+0x3C]
        mov edi, dword ptr ss : [esp+0x48]
        sub ecx, eax
        mov eax, 0x4EC4EC4F
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edi, edx
        jae public_6efccbd
        mov eax, dword ptr ds : [public_6fcf3a0]
        test eax, eax
        push ebx
        push ebp
        mov ebp, dword ptr ds : [esi+0x38]
        jne public_6efcc2c
        call public_6fa8fa0
        mov dword ptr ds : [public_6fcf3a0], eax
        public_6efcc2c : nop
        mov ecx, dword ptr ds : [eax]
        imul edi, 0x34
        lea edx, ds:[edi+ebp]
        push edx
        lea ebx, ds:[esi+0x10]
        push ebx
        lea edx, ss:[esp+0x24]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        mov eax, dword ptr ss : [esp+0x54]
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [esi+8]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x14]
        fadd dword ptr ds : [esi+0xC]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], edx
        fstp dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+8], ecx
        mov eax, dword ptr ds : [public_6fcf3a0]
        test eax, eax
        mov esi, dword ptr ds : [esi+0x38]
        jne public_6efcc91
        call public_6fa8fa0
        mov dword ptr ds : [public_6fcf3a0], eax
        public_6efcc91 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[edi+esi+0xC]
        push ecx
        push ebx
        lea ecx, ss:[esp+0x30]
        push ecx
        push eax
        call dword ptr ds : [edx+0x20]
        mov edi, dword ptr ss : [esp+0x58]
        pop ebp
        mov ecx, 9
        lea esi, ss:[esp+0x24]
        pop ebx
        rep movsd
        pop edi
        mov al, 1
        pop esi
        add esp, 0x3C
        ret 0xC
        public_6efccbd : nop
        pop edi
        xor al, al
        pop esi
        add esp, 0x3C
        ret 0xC
        UNREACHABLE_TRAP(0x6efcbe0)
    }
}

#undef public_6efcc2c
#undef public_6efcc91
#undef public_6efccbd
