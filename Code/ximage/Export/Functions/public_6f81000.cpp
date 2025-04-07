#include "ximage-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f81000);
CLANG_FORWARD_PROC_SYMBOL(public_6f81180);
CLANG_FORWARD_PROC_SYMBOL(public_6f81a70);
CLANG_FORWARD_PROC_SYMBOL(public_6f82900);
CLANG_FORWARD_PROC_SYMBOL(public_6f82920);

#define public_6f81038 _public_6f81038
#define public_6f81058 _public_6f81058
#define public_6f810dd _public_6f810dd
#define public_6f81135 _public_6f81135
#define public_6f8114d _public_6f8114d
#define public_6f81167 _public_6f81167

PROC_DECLARE(0x6f81000, internal_6f81000, public_6f81000);
extern "C" NAKED register_t __cdecl internal_6f81000()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        push edi
        push 0
        mov dword ptr ss : [esp+0x20], ecx
        call public_6f82900
        mov esi, dword ptr ss : [esp+0x2C]
        add esp, 4
        lea ecx, ss:[esp+0x18]
        push ecx
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+0x18]
        test eax, eax
        je public_6f81038
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 8
        public_6f81038 : nop
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        push esi
        call dword ptr ds : [edx+0x14]
        test eax, eax
        je public_6f81058
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 8
        public_6f81058 : nop
        mov ebp, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [ebp]
        push edx
        call public_6f82920
        mov esi, dword ptr ds : [eax+4]
        mov eax, dword ptr ss : [esp+0x1C]
        add esi, 7
        push eax
        shr esi, 3
        call public_6f82920
        mov edi, dword ptr ds : [eax+4]
        mov ecx, esi
        imul ecx, dword ptr ss : [esp+0x18]
        imul ecx, dword ptr ss : [esp+0x1C]
        add edi, 7
        push ecx
        shr edi, 3
        call dword ptr ds : [public_6f83018]
        mov edx, dword ptr ss : [esp+0x34]
        mov ecx, esi
        imul ecx, dword ptr ss : [esp+0x1C]
        add esp, 0xC
        push 0
        push ecx
        mov ebx, eax
        mov eax, dword ptr ds : [edx]
        push ebx
        push ecx
        mov ecx, esp
        push ebp
        mov dword ptr ss : [esp+0x34], eax
        call public_6f81a70
        mov ebp, dword ptr ss : [esp+0x38]
        mov eax, dword ptr ss : [esp+0x30]
        push ebp
        call dword ptr ds : [eax+0xC]
        test eax, eax
        jne public_6f810dd
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        imul esi, eax
        push esi
        push edx
        push eax
        mov eax, dword ptr ss : [esp+0x38]
        push ebx
        push eax
        jmp public_6f8114d
        public_6f810dd : nop
        push ebx
        call dword ptr ds : [public_6f83014]
        mov eax, edi
        imul eax, dword ptr ss : [esp+0x14]
        imul eax, dword ptr ss : [esp+0x18]
        push eax
        call dword ptr ds : [public_6f83018]
        mov esi, dword ptr ss : [ebp]
        mov ecx, edi
        imul ecx, dword ptr ss : [esp+0x18]
        add esp, 8
        push 0
        push ecx
        mov ebx, eax
        push ebx
        push ecx
        lea edx, ss:[esp+0x28]
        mov ecx, esp
        push edx
        call public_6f81a70
        push ebp
        call dword ptr ds : [esi+0xC]
        test eax, eax
        je public_6f81135
        push ebx
        call dword ptr ds : [public_6f83014]
        add esp, 4
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 8
        public_6f81135 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        imul edi, eax
        push edi
        push ecx
        push eax
        mov eax, dword ptr ss : [esp+0x38]
        push ebx
        lea edx, ss:[esp+0x28]
        push edx
        public_6f8114d : nop
        mov ecx, dword ptr ss : [esp+0x30]
        push eax
        call public_6f81180
        test ebx, ebx
        mov esi, eax
        je public_6f81167
        push ebx
        call dword ptr ds : [public_6f83014]
        add esp, 4
        public_6f81167 : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 8
        UNREACHABLE_TRAP(0x6f81000)
    }
}

#undef public_6f81038
#undef public_6f81058
#undef public_6f810dd
#undef public_6f81135
#undef public_6f8114d
#undef public_6f81167
