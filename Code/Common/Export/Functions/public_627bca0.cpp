#include "Common-PCH.h"


#define public_627bcee _public_627bcee

PROC_DECLARE(0x627bca0, internal_627bca0, public_627bca0);
extern "C" NAKED register_t __cdecl internal_627bca0()
{
    __asm
    {
        push ecx
        mov ecx, dword ptr ss : [esp+0xC]
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi]
        push ecx
        xor ebx, ebx
        push esi
        mov dword ptr ss : [esp+0x10], ebx
        call dword ptr ds : [eax+0x1C]
        mov edx, dword ptr ds : [esi]
        lea ecx, ss:[esp+8]
        push ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        push eax
        push esi
        call dword ptr ds : [edx+0x84]
        test eax, eax
        jne public_627bcee
        mov eax, dword ptr ss : [esp+8]
        cmp eax, ebx
        je public_627bcee
        push eax
        call dword ptr ds : [public_63992f0]
        mov edx, dword ptr ss : [esp+0x20]
        add esp, 4
        fstp dword ptr ds : [edx]
        pop esi
        mov al, 1
        pop ebx
        pop ecx
        ret 
        public_627bcee : nop
        pop esi
        mov al, bl
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x627bca0)
    }
}

#undef public_627bcee
