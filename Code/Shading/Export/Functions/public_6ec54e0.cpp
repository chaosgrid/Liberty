#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec54e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ec69e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);

#define public_6ec54f8 _public_6ec54f8
#define public_6ec5500 _public_6ec5500
#define public_6ec5528 _public_6ec5528
#define public_6ec5538 _public_6ec5538
#define public_6ec5564 _public_6ec5564

PROC_DECLARE(0x6ec54e0, internal_6ec54e0, public_6ec54e0);
extern "C" NAKED register_t __cdecl internal_6ec54e0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [ecx+8]
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        cmp esi, eax
        mov dword ptr ss : [esp+8], ecx
        mov ebx, esi
        je public_6ec5564
        push ebp
        push edi
        jmp public_6ec5500
        public_6ec54f8 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        lea esp, ss:[esp]
        public_6ec5500 : nop
        mov eax, dword ptr ds : [ebx+8]
        push eax
        call public_6ec54e0
        mov ecx, dword ptr ds : [esi+0x10]
        mov ebx, dword ptr ds : [ebx]
        push ecx
        call public_6ed0c50
        mov dword ptr ds : [esi+0x10], 0
        mov ebp, dword ptr ds : [esi+0x1C]
        mov edi, dword ptr ds : [esi+0x18]
        add esp, 4
        cmp edi, ebp
        je public_6ec5538
        public_6ec5528 : nop
        push edi
        call public_6ec69e0
        add edi, 4
        add esp, 4
        cmp edi, ebp
        jne public_6ec5528
        public_6ec5538 : nop
        mov edx, dword ptr ds : [esi+0x18]
        push edx
        call public_6ed0c50
        xor eax, eax
        push esi
        mov dword ptr ds : [esi+0x18], eax
        mov dword ptr ds : [esi+0x1C], eax
        mov dword ptr ds : [esi+0x20], eax
        call public_6ed0c50
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax+8]
        add esp, 8
        cmp ebx, ecx
        mov esi, ebx
        jne public_6ec54f8
        pop edi
        pop ebp
        public_6ec5564 : nop
        pop esi
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6ec54e0)
    }
}

#undef public_6ec54f8
#undef public_6ec5500
#undef public_6ec5528
#undef public_6ec5538
#undef public_6ec5564
