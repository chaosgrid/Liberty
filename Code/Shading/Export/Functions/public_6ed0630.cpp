#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0630);
CLANG_FORWARD_PROC_SYMBOL(public_6ed06a0);

#define public_6ed0660 _public_6ed0660
#define public_6ed0698 _public_6ed0698

PROC_DECLARE(0x6ed0630, internal_6ed0630, public_6ed0630);
extern "C" NAKED register_t __cdecl internal_6ed0630()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        lea edi, ds:[esi+0x28]
        mov dword ptr ds : [public_6ed5830], ebx
        mov dword ptr ds : [public_6ed5844], esi
        mov dword ptr ds : [public_6ed5848], edi
        mov eax, esi
        mov ecx, edi
        mov edx, 0xA
        lea esp, ss:[esp]
        public_6ed0660 : nop
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [ecx], 0
        add eax, 4
        add ecx, 4
        dec edx
        jne public_6ed0660
        lea eax, ds:[esi+0x5D]
        push eax
        call public_6ed06a0
        add esp, 4
        test eax, eax
        je public_6ed0698
        mov dword ptr ds : [esi], ebx
        mov ecx, dword ptr ds : [public_6ed5830]
        mov dword ptr ds : [edi], ecx
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        ret 
        public_6ed0698 : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ed0630)
    }
}

#undef public_6ed0660
#undef public_6ed0698
