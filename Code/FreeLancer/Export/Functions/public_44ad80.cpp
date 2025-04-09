#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_556cd0);
CLANG_FORWARD_PROC_SYMBOL(public_556ce0);
CLANG_FORWARD_PROC_SYMBOL(public_556e00);
CLANG_FORWARD_PROC_SYMBOL(public_556f10);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_44adc2 _public_44adc2
#define public_44ae6d _public_44ae6d
#define public_44ae76 _public_44ae76

PROC_DECLARE(0x44ad80, internal_44ad80, public_44ad80);
extern "C" NAKED register_t __cdecl internal_44ad80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x54
        cmp eax, 0xF
        push ebp
        mov ebp, ecx
        jne public_44ae76
        mov al, byte ptr ss : [ebp+0x1308]
        test al, al
        je public_44ae76
        mov byte ptr ss : [ebp+0x1308], 0
        mov eax, dword ptr ds : [public_668ac0]
        test eax, eax
        mov byte ptr ds : [public_66d359], 0
        jne public_44adc2
        call public_5b73e0
        mov dword ptr ds : [public_668ac0], eax
        public_44adc2 : nop
        mov ecx, dword ptr ds : [eax]
        push esi
        push edi
        lea edx, ss:[ebp+0x1318]
        push edx
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        call dword ptr ds : [ecx+0x54]
        mov ecx, 9
        lea esi, ss:[esp+0xC]
        lea edi, ss:[esp+0x30]
        rep movsd
        lea eax, ss:[ebp+0x1328]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x54], ecx
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x58], edx
        mov edx, dword ptr ss : [ebp+0x4D0]
        push ecx
        push edx
        mov dword ptr ss : [esp+0x64], eax
        call public_556cd0
        mov eax, dword ptr ss : [ebp+0x1334]
        mov ecx, dword ptr ss : [ebp+0x4D0]
        push eax
        push ecx
        call public_556ce0
        mov edx, dword ptr ss : [ebp+0x1338]
        mov eax, dword ptr ss : [ebp+0x4D0]
        push edx
        push eax
        call public_556e00
        mov ecx, dword ptr ss : [ebp+0x133C]
        mov edx, dword ptr ss : [ebp+0x4D0]
        push ecx
        push edx
        call public_556f10
        mov eax, dword ptr ss : [ebp+0x1368]
        add esp, 0x20
        test eax, eax
        pop edi
        pop esi
        je public_44ae6d
        mov ecx, dword ptr ss : [ebp+0x1370]
        mov edx, dword ptr ss : [ebp+0x136C]
        push 0
        push ecx
        push edx
        call eax
        add esp, 0xC
        public_44ae6d : nop
        mov al, 1
        pop ebp
        add esp, 0x54
        ret 4
        public_44ae76 : nop
        xor al, al
        pop ebp
        add esp, 0x54
        ret 4
        UNREACHABLE_TRAP(0x44ad80)
    }
}

#undef public_44adc2
#undef public_44ae6d
#undef public_44ae76
