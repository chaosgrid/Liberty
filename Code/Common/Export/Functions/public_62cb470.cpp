#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d2090);
CLANG_FORWARD_PROC_SYMBOL(public_62d6720);
CLANG_FORWARD_PROC_SYMBOL(public_62d6730);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);

#define public_62cb4a6 _public_62cb4a6
#define public_62cb529 _public_62cb529

PROC_DECLARE(0x62cb470, internal_62cb470, public_62cb470);
extern "C" NAKED register_t __cdecl internal_62cb470()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x14]
        push edi
        push ecx
        mov ecx, esi
        call public_62d2090
        mov bl, al
        test bl, bl
        je public_62cb529
        mov eax, dword ptr ds : [esi+0x2C]
        test eax, eax
        lea ecx, ds:[esi+0x2C]
        je public_62cb4a6
        push 0
        call public_6341610
        public_62cb4a6 : nop
        mov eax, dword ptr ds : [esi+0x24]
        mov edx, dword ptr ds : [esi+0x90]
        push ebp
        push edi
        push eax
        mov eax, dword ptr ds : [esi+0x14]
        lea ecx, ds:[esi+0x90]
        push eax
        call dword ptr ds : [edx]
        mov eax, dword ptr ds : [esi+0x24]
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [esi+0x34]
        push edi
        push eax
        lea ebp, ds:[esi+0x34]
        push ecx
        mov ecx, ebp
        call dword ptr ds : [edx]
        push 1
        mov ecx, ebp
        call public_62d6720
        push 1
        mov ecx, ebp
        call public_62d6730
        mov eax, dword ptr ds : [esi+0x24]
        mov edx, dword ptr ds : [esi+0x150]
        push edi
        push eax
        mov eax, dword ptr ds : [esi+0x14]
        lea ecx, ds:[esi+0x150]
        push eax
        call dword ptr ds : [edx]
        mov eax, dword ptr ds : [esi+0x24]
        mov edx, dword ptr ds : [esi+0x1C8]
        push edi
        push eax
        mov eax, dword ptr ds : [esi+0x14]
        lea ecx, ds:[esi+0x1C8]
        push eax
        call dword ptr ds : [edx]
        mov eax, dword ptr ds : [esi+0x24]
        mov edx, dword ptr ds : [esi+0x264]
        push edi
        push eax
        mov eax, dword ptr ds : [esi+0x14]
        lea ecx, ds:[esi+0x264]
        push eax
        call dword ptr ds : [edx]
        pop ebp
        public_62cb529 : nop
        pop edi
        pop esi
        mov al, bl
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x62cb470)
    }
}

#undef public_62cb4a6
#undef public_62cb529
