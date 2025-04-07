#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c31160);
CLANG_FORWARD_PROC_SYMBOL(public_6c31500);

#define public_6c30c7b _public_6c30c7b
#define public_6c30c99 _public_6c30c99

PROC_DECLARE(0x6c30c60, internal_6c30c60, public_6c30c60);
extern "C" NAKED register_t __cdecl internal_6c30c60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0xC]
        sub esp, 0x14
        test ecx, ecx
        push esi
        push edi
        jge public_6c30c7b
        pop edi
        or eax, 0xFFFFFFFF
        pop esi
        add esp, 0x14
        ret 0x18
        public_6c30c7b : nop
        mov edi, dword ptr ss : [esp+0x24]
        lea esi, ds:[eax-4]
        push edi
        mov ecx, esi
        call public_6c31160
        test al, al
        jne public_6c30c99
        pop edi
        or eax, 0xFFFFFFFF
        pop esi
        add esp, 0x14
        ret 0x18
        public_6c30c99 : nop
        lea eax, ss:[esp+8]
        push eax
        push edi
        mov ecx, esi
        call public_6c31500
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [eax], ecx
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ss : [esp+0xC]
        pop edi
        mov dword ptr ds : [ecx], edx
        xor eax, eax
        pop esi
        add esp, 0x14
        ret 0x18
        UNREACHABLE_TRAP(0x6c30c60)
    }
}

#undef public_6c30c7b
#undef public_6c30c99
