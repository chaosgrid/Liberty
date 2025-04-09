#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f080);
CLANG_FORWARD_PROC_SYMBOL(public_503070);
CLANG_FORWARD_PROC_SYMBOL(public_503f40);
CLANG_FORWARD_PROC_SYMBOL(public_532170);

#define public_53209a _public_53209a
#define public_53214c _public_53214c
#define public_532161 _public_532161

PROC_DECLARE(0x532010, internal_532010, public_532010);
extern "C" NAKED register_t __cdecl internal_532010()
{
    __asm
    {
        sub esp, 0x3C
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x4C]
        mov eax, ecx
        sub eax, 0xB
        push edi
        mov edi, dword ptr ds : [esi+4]
        je public_53209a
        dec eax
        jne public_53214c
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x1C]
        push eax
        call public_532170
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx]
        add esp, 4
        lea eax, ss:[esp+0x10]
        push eax
        call dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx]
        mov ebx, eax
        call dword ptr ds : [edx+0x10]
        mov ecx, edi
        mov ebp, eax
        call dword ptr ds : [public_5c693c]
        mov esi, eax
        add esi, 0x94
        mov ecx, esi
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_532161
        push 0
        push ebx
        push ebp
        push esi
        call public_40f080
        add esp, 4
        push eax
        mov ecx, offset public_674c60
        call public_503f40
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x3C
        ret 8
        public_53209a : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        mov dword ptr ss : [esp+0x3C], 0x3F800000
        mov dword ptr ss : [esp+0x2C], 0x3F800000
        mov dword ptr ss : [esp+0x1C], 0x3F800000
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x40], 0
        call dword ptr ds : [eax+0x84]
        mov esi, dword ptr ds : [esi+8]
        mov ecx, edi
        mov ebx, eax
        call dword ptr ds : [public_5c693c]
        mov edi, eax
        add edi, 0x98
        mov ecx, edi
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_532161
        push 0
        lea ecx, ss:[esp+0x20]
        push ecx
        push ebx
        push esi
        push edi
        call public_40f080
        add esp, 4
        push eax
        mov ecx, offset public_674c60
        call public_503070
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x3C
        ret 8
        public_53214c : nop
        cmp ecx, 0xA
        jne public_532161
        push esi
        mov ecx, edi
        call dword ptr ds : [public_5c6938]
        mov dword ptr ds : [esi+4], 0
        public_532161 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x3C
        ret 8
        UNREACHABLE_TRAP(0x532010)
    }
}

#undef public_53209a
#undef public_53214c
#undef public_532161
