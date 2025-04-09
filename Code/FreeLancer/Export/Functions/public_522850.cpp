#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40fb60);
CLANG_FORWARD_PROC_SYMBOL(public_421dd0);
CLANG_FORWARD_PROC_SYMBOL(public_421ed0);
CLANG_FORWARD_PROC_SYMBOL(public_4220c0);
CLANG_FORWARD_PROC_SYMBOL(public_422190);
CLANG_FORWARD_PROC_SYMBOL(public_422950);
CLANG_FORWARD_PROC_SYMBOL(public_522850);
CLANG_FORWARD_PROC_SYMBOL(public_54d4e0);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);

#define public_52286e _public_52286e
#define public_5229bf _public_5229bf
#define public_5229d0 _public_5229d0
#define public_5229e0 _public_5229e0
#define public_5229e9 _public_5229e9
#define public_5229f1 _public_5229f1
#define public_5229f6 _public_5229f6
#define public_522a36 _public_522a36
#define public_522a4f _public_522a4f

PROC_DECLARE(0x522850, internal_522850, public_522850);
extern "C" NAKED register_t __cdecl internal_522850()
{
    __asm
    {
        sub esp, 0x40
        push ebp
        mov ebp, ecx
        mov al, byte ptr ss : [ebp+0xF8]
        test al, al
        jne public_52286e
        mov al, byte ptr ss : [ebp+0x180]
        test al, al
        je public_522a4f
        public_52286e : nop
        push 0x2C
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_522a4f
        push 0x25
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_522a4f
        push 0x2C
        call public_5792b0
        add esp, 4
        cmp eax, 3
        jge public_522a4f
        mov al, byte ptr ss : [ebp+0x234]
        test al, al
        je public_522a4f
        push ebx
        mov ebx, dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ds : [ebx]
        push esi
        push edi
        push ebx
        call dword ptr ds : [eax+0x10]
        mov esi, eax
        mov ecx, 0xC
        lea edi, ss:[esp+0x20]
        rep movsd
        mov ecx, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [ecx+0xC]
        mov ecx, dword ptr ss : [esp+0x4C]
        mov edx, dword ptr ss : [esp+0x44]
        mov eax, dword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0x1C], ecx
        mov ecx, dword ptr ss : [ebp+0x1C]
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ss : [esp+0x18], eax
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        mov eax, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [eax+0x20]
        fstp dword ptr ss : [esp+0x54]
        mov ecx, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [ecx+0x24]
        fstp dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [public_610534]
        mov esi, dword ptr ss : [esp+0x54]
        push edx
        push esi
        mov ecx, ebx
        call public_40fb60
        mov eax, dword ptr ds : [public_613850]
        test eax, eax
        je public_522a36
        push 0xB50
        call public_421ed0
        push 0xB44
        call public_421ed0
        push 0
        call public_422190
        push 0xB71
        call public_421ed0
        push 0xBE2
        call public_421dd0
        push ebx
        call public_422950
        push 6
        push 5
        call public_4220c0
        mov eax, dword ptr ds : [public_5c6de0]
        add esp, 0x20
        lea edx, ss:[esp+0x54]
        push edx
        mov dword ptr ss : [esp+0x58], 0
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0x18
        push eax
        call dword ptr ds : [ecx+0xF4]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 5
        push 0x18
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ss : [ebp+0x154]
        mov eax, dword ptr ss : [ebp+0x158]
        lea ecx, ss:[ebp+0xFC]
        add eax, edx
        mov edx, dword ptr ss : [esp+0x58]
        cmp edx, eax
        jge public_5229bf
        push edx
        lea edx, ss:[esp+0x18]
        push edx
        jmp public_5229f1
        public_5229bf : nop
        mov eax, dword ptr ss : [ebp+0x188]
        mov ebp, dword ptr ss : [ebp+0x18C]
        cmp eax, ebp
        je public_5229f6
        nop 
        public_5229d0 : nop
        mov ecx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [ecx+0x5C]
        cmp edx, edi
        jl public_5229e0
        add edi, dword ptr ds : [ecx+0x58]
        cmp edx, edi
        jl public_5229e9
        public_5229e0 : nop
        add eax, 4
        cmp eax, ebp
        jne public_5229d0
        jmp public_5229f6
        public_5229e9 : nop
        lea ecx, ss:[esp+0x14]
        push edx
        push ecx
        mov ecx, dword ptr ds : [eax]
        public_5229f1 : nop
        call public_54d4e0
        public_5229f6 : nop
        push 0xBE2
        call public_421ed0
        push 0xB71
        call public_421dd0
        push 1
        call public_422190
        push 0xB44
        call public_421dd0
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ss : [esp+0x64]
        mov ecx, dword ptr ds : [eax]
        add esp, 0x10
        push edx
        push 0x18
        push eax
        call dword ptr ds : [ecx+0xF0]
        public_522a36 : nop
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        push esi
        mov ecx, ebx
        call public_40fb60
        push ebx
        call public_422950
        add esp, 4
        pop edi
        pop esi
        pop ebx
        public_522a4f : nop
        pop ebp
        add esp, 0x40
        ret 8
        UNREACHABLE_TRAP(0x522850)
    }
}

#undef public_52286e
#undef public_5229bf
#undef public_5229d0
#undef public_5229e0
#undef public_5229e9
#undef public_5229f1
#undef public_5229f6
#undef public_522a36
#undef public_522a4f
