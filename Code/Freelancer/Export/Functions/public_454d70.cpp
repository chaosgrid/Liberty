#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44eb20);
CLANG_FORWARD_PROC_SYMBOL(public_44ed00);
CLANG_FORWARD_PROC_SYMBOL(public_454d70);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_454d86 _public_454d86
#define public_454db9 _public_454db9

PROC_DECLARE(0x454d70, internal_454d70, public_454d70);
extern "C" NAKED register_t __cdecl internal_454d70()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi]
        push edi
        xor edi, edi
        cmp ecx, edi
        je public_454d86
        call public_44ed00
        public_454d86 : nop
        lea ebx, ds:[esi+8]
        push ebx
        call dword ptr ds : [public_5c60c8]
        lea ebp, ds:[esi+4]
        push ebp
        call dword ptr ds : [public_5c6284]
        mov ecx, dword ptr ds : [esi]
        add esp, 8
        cmp ecx, edi
        mov dword ptr ss : [esp+0x10], ecx
        je public_454db9
        call public_44eb20
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        call public_5b7e1d
        add esp, 4
        public_454db9 : nop
        mov dword ptr ds : [esi], edi
        mov dword ptr ss : [ebp], edi
        mov dword ptr ds : [ebx], edi
        lea eax, ds:[esi+0xC]
        mov dword ptr ss : [esp+0x14], 0
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, eax
        mov dword ptr ds : [ecx], edx
        mov dword ptr ss : [esp+0x18], 0
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx+4], edx
        mov dword ptr ss : [esp+0x1C], 0
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx+8], edx
        mov ecx, 0x3F800000
        mov dword ptr ds : [eax+0x28], edi
        mov dword ptr ds : [eax+0x24], edi
        mov dword ptr ds : [eax+0x20], edi
        mov dword ptr ds : [eax+0x18], edi
        mov dword ptr ds : [eax+0x14], edi
        mov dword ptr ds : [eax+0x10], edi
        mov dword ptr ds : [eax+0x2C], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [esi+0x3C], edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x454d70)
    }
}

#undef public_454d86
#undef public_454db9
