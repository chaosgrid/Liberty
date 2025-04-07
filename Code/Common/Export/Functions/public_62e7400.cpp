#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e6200);
CLANG_FORWARD_PROC_SYMBOL(public_62e7400);

#define public_62e7453 _public_62e7453
#define public_62e7481 _public_62e7481
#define public_62e748c _public_62e748c

PROC_DECLARE(0x62e7400, internal_62e7400, public_62e7400);
extern "C" NAKED register_t __cdecl internal_62e7400()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        xor ebx, ebx
        cmp esi, ebx
        push edi
        mov edi, ecx
        je public_62e7481
        push esi
        call public_62e6200
        add esp, 4
        test al, 3
        je public_62e7481
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], ebx
        call dword ptr ds : [eax+0x8C]
        mov ecx, dword ptr ds : [edi]
        lea eax, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0x18], 0x20
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx]
        mov esi, eax
        cmp esi, ebx
        je public_62e7481
        public_62e7453 : nop
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], ebx
        call dword ptr ds : [edx+0x90]
        mov ecx, dword ptr ss : [esp+0x20]
        cmp ecx, dword ptr ss : [esp+0xC]
        je public_62e748c
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x10]
        push eax
        call dword ptr ds : [edx]
        mov esi, eax
        cmp esi, ebx
        jne public_62e7453
        public_62e7481 : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0x10
        ret 4
        public_62e748c : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x62e7400)
    }
}

#undef public_62e7453
#undef public_62e7481
#undef public_62e748c
