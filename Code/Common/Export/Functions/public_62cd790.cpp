#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d2090);
CLANG_FORWARD_PROC_SYMBOL(public_62d5980);

#define public_62cd814 _public_62cd814
#define public_62cd824 _public_62cd824

PROC_DECLARE(0x62cd790, internal_62cd790, public_62cd790);
extern "C" NAKED register_t __cdecl internal_62cd790()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        push eax
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x14]
        push ebp
        push ecx
        mov ecx, esi
        call public_62d2090
        mov bl, al
        test bl, bl
        je public_62cd824
        mov eax, dword ptr ds : [esi+0x24]
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [esi+0x2C]
        push edi
        push ebp
        push eax
        lea edi, ds:[esi+0x2C]
        push ecx
        mov ecx, edi
        call dword ptr ds : [edx]
        push 0
        mov ecx, edi
        call public_62d5980
        mov eax, dword ptr ds : [esi+0x24]
        mov edx, dword ptr ds : [esi+0xA4]
        push ebp
        push eax
        mov eax, dword ptr ds : [esi+0x14]
        lea ecx, ds:[esi+0xA4]
        push eax
        call dword ptr ds : [edx]
        mov eax, dword ptr ds : [esi+0x24]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xBC]
        test al, al
        pop edi
        mov al, bl
        je public_62cd814
        mov dword ptr ds : [esi+0x18C], 0x41700000
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_62cd814 : nop
        mov dword ptr ds : [esi+0x18C], 0x42700000
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_62cd824 : nop
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x62cd790)
    }
}

#undef public_62cd814
#undef public_62cd824
