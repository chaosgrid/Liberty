#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630e870);

#define public_630e88f _public_630e88f
#define public_630e898 _public_630e898
#define public_630e8ef _public_630e8ef
#define public_630e8f2 _public_630e8f2

PROC_DECLARE(0x630e870, internal_630e870, public_630e870);
extern "C" NAKED register_t __cdecl internal_630e870()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6399040]
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        sub esp, 8
        push ebp
        push esi
        push edi
        push edx
        push eax
        call dword ptr ds : [ecx+0x64]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        jne public_630e898
        public_630e88f : nop
        pop edi
        pop esi
        xor al, al
        pop ebp
        add esp, 8
        ret 
        public_630e898 : nop
        mov edi, dword ptr ss : [esp+0x1C]
        push ebx
        push edi
        mov dword ptr ss : [esp+0x14], edi
        call dword ptr ds : [public_6399024]
        mov ebp, dword ptr ss : [esp+0x2C]
        add esp, 4
        push ebp
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [public_6399064]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x14]
        push edx
        push esi
        push eax
        call dword ptr ds : [ecx+0xC]
        mov bl, al
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0x3C]
        test bl, bl
        pop ebx
        je public_630e8ef
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        mov dword ptr ds : [edx], eax
        mov al, 1
        pop ebp
        add esp, 8
        ret 
        public_630e8ef : nop
        or esi, 0xFFFFFFFF
        public_630e8f2 : nop
        mov ecx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [eax]
        push esi
        push 1
        push ecx
        push eax
        call dword ptr ds : [edx+0xD8]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        je public_630e88f
        mov edx, dword ptr ss : [esp+0x20]
        push ebp
        push edx
        push edi
        push esi
        call public_630e870
        add esp, 0x10
        test al, al
        je public_630e8f2
        pop edi
        pop esi
        mov al, 1
        pop ebp
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x630e870)
    }
}

#undef public_630e88f
#undef public_630e898
#undef public_630e8ef
#undef public_630e8f2
