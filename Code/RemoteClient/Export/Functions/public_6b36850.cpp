#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b347e0);
CLANG_FORWARD_PROC_SYMBOL(public_6b3b480);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b368a2 _public_6b368a2
#define public_6b368be _public_6b368be
#define public_6b368c9 _public_6b368c9
#define public_6b368d1 _public_6b368d1
#define public_6b36904 _public_6b36904

PROC_DECLARE(0x6b36850, internal_6b36850, public_6b36850);
extern "C" NAKED register_t __cdecl internal_6b36850()
{
    __asm
    {
        sub esp, 8
        lea eax, ss:[esp]
        push eax
        push 0x34
        mov dword ptr ss : [esp+0xC], ecx
        mov ecx, dword ptr ds : [ecx+8]
        push 2
        call public_6b3b480
        test eax, eax
        jne public_6b36904
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp]
        mov dword ptr ds : [edx+0x20], ecx
        movzx ecx, byte ptr ds : [eax+0x20]
        mov edx, dword ptr ss : [esp]
        push ebx
        push ebp
        lea ebp, ds:[eax+4]
        push esi
        mov dword ptr ds : [edx+0x24], ecx
        mov esi, dword ptr ss : [ebp]
        test esi, esi
        mov eax, dword ptr ss : [esp+0xC]
        push edi
        lea ebx, ds:[eax+0x28]
        mov edi, 6
        je public_6b368d1
        public_6b368a2 : nop
        movzx eax, word ptr ds : [esi+8]
        cmp eax, 0x21
        je public_6b368be
        xor ecx, ecx
        cmp eax, 0x4E
        sete cl
        dec ecx
        and ecx, 0xFFFFFFF0
        add ecx, 0x17
        mov eax, ecx
        jmp public_6b368c9
        public_6b368be : nop
        mov ecx, dword ptr ds : [esi+4]
        call public_6b347e0
        add eax, 3
        public_6b368c9 : nop
        mov esi, dword ptr ds : [esi]
        add edi, eax
        test esi, esi
        jne public_6b368a2
        public_6b368d1 : nop
        push edi
        mov dword ptr ds : [ebx], edi
        call public_6b6a134
        mov edx, dword ptr ds : [ebx]
        add esp, 4
        push edx
        push eax
        mov ecx, ebp
        mov dword ptr ds : [ebx+4], eax
        call dword ptr ds : [public_6b6b090]
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx]
        push edx
        mov edx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [edx]
        push edx
        call dword ptr ds : [eax+0x24]
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_6b36904 : nop
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6b36850)
    }
}

#undef public_6b368a2
#undef public_6b368be
#undef public_6b368c9
#undef public_6b368d1
#undef public_6b36904
