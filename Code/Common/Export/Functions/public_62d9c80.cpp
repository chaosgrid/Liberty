#include "Common-PCH.h"


#define public_62d9ce9 _public_62d9ce9

PROC_DECLARE(0x62d9c80, internal_62d9c80, public_62d9c80);
extern "C" NAKED register_t __cdecl internal_62d9c80()
{
    __asm
    {
        push ebp
        mov ebp, dword ptr ss : [esp+8]
        test ebp, ebp
        push esi
        push edi
        mov esi, ecx
        je public_62d9ce9
        mov edi, dword ptr ss : [esp+0x14]
        test edi, edi
        je public_62d9ce9
        push ebx
        mov ebx, dword ptr ss : [esp+0x1C]
        push ebx
        mov al, 1
        lea ecx, ds:[esi+0x14]
        push edi
        mov byte ptr ds : [esi+0x10], al
        mov byte ptr ss : [esp+0x1C], al
        mov eax, dword ptr ds : [ecx]
        push ebp
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], edi
        mov dword ptr ds : [esi+0xC], ebx
        call dword ptr ds : [eax]
        mov edx, dword ptr ds : [esi+0x8C]
        push ebx
        lea ecx, ds:[esi+0x8C]
        push edi
        push ebp
        call dword ptr ds : [edx]
        mov ecx, dword ptr ds : [esi+0xC]
        xor eax, eax
        mov dword ptr ds : [esi+0x14C], eax
        mov edx, dword ptr ds : [ecx+0xC]
        pop ebx
        mov dword ptr ds : [edx+0x64], eax
        pop edi
        mov dword ptr ds : [esi+0x170], eax
        mov al, byte ptr ss : [esp+0xC]
        pop esi
        pop ebp
        ret 0xC
        public_62d9ce9 : nop
        pop edi
        pop esi
        xor al, al
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x62d9c80)
    }
}

#undef public_62d9ce9
