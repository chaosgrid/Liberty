#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a0690);
CLANG_FORWARD_PROC_SYMBOL(public_62a1600);
CLANG_FORWARD_PROC_SYMBOL(public_63429f0);

#define public_62a1627 _public_62a1627
#define public_62a1656 _public_62a1656
#define public_62a1667 _public_62a1667

PROC_DECLARE(0x62a1600, internal_62a1600, public_62a1600);
extern "C" NAKED register_t __cdecl internal_62a1600()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        cmp ebx, 0xFFFFFFFF
        push ebp
        mov bp, word ptr ds : [public_63a4aa4]
        push esi
        push edi
        je public_62a1667
        mov edi, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [edi]
        cmp eax, edi
        mov esi, 0x7FFF
        mov dword ptr ss : [esp+0x18], eax
        je public_62a1667
        public_62a1627 : nop
        test esi, esi
        jle public_62a1667
        mov ecx, dword ptr ds : [eax+0x10]
        push ebx
        call public_62a0690
        cmp eax, 0xFFFFFFFF
        je public_62a1656
        cmp eax, esi
        jge public_62a1656
        mov esi, eax
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [ecx+4]
        xor eax, eax
        mov ax, word ptr ds : [edx+4]
        mov bp, ax
        mov dword ptr ss : [esp+0x10], eax
        public_62a1656 : nop
        lea ecx, ss:[esp+0x18]
        call public_63429f0
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, edi
        jne public_62a1627
        public_62a1667 : nop
        pop edi
        pop esi
        mov ax, bp
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x62a1600)
    }
}

#undef public_62a1627
#undef public_62a1656
#undef public_62a1667
