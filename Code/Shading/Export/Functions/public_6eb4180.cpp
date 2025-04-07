#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0b10);

#define public_6eb4199 _public_6eb4199
#define public_6eb41e1 _public_6eb41e1
#define public_6eb41fd _public_6eb41fd

PROC_DECLARE(0x6eb4180, internal_6eb4180, public_6eb4180);
extern "C" NAKED register_t __cdecl internal_6eb4180()
{
    __asm
    {
        sub esp, 0xC
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [ebp+0x10]
        test eax, eax
        jne public_6eb4199
        or eax, 0xFFFFFFFF
        pop ebp
        add esp, 0xC
        ret 0x20
        public_6eb4199 : nop
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [ebp+0x14]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push edi
        push edx
        push eax
        call dword ptr ds : [ecx+0x18]
        mov ebx, dword ptr ss : [esp+0x38]
        test bl, 0x40
        mov edi, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x1C], 0
        je public_6eb41fd
        mov eax, dword ptr ds : [edi+8]
        push esi
        mov esi, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ds : [public_6ed56c8]
        or ebx, 0x20
        add esi, 0x24
        test eax, eax
        jne public_6eb41e1
        call public_6ed0b10
        mov dword ptr ds : [public_6ed56c8], eax
        public_6eb41e1 : nop
        mov edx, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [eax]
        push esi
        push edx
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        fld dword ptr ss : [esp+0x18]
        fchs 
        fstp dword ptr ss : [esp+0x20]
        pop esi
        public_6eb41fd : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [ebp+0x14]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push edx
        mov edx, dword ptr ss : [esp+0x3C]
        push edx
        mov edx, dword ptr ss : [esp+0x3C]
        push edx
        mov edx, dword ptr ss : [esp+0x3C]
        push edx
        mov edx, dword ptr ss : [esp+0x3C]
        push edx
        mov edx, dword ptr ss : [esp+0x3C]
        push edx
        mov edx, dword ptr ss : [ebp+0x10]
        push edi
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        pop edi
        pop ebx
        pop ebp
        add esp, 0xC
        ret 0x20
        UNREACHABLE_TRAP(0x6eb4180)
    }
}

#undef public_6eb4199
#undef public_6eb41e1
#undef public_6eb41fd
