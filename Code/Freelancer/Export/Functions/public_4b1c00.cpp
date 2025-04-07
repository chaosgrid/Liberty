#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_424ce0);
CLANG_FORWARD_PROC_SYMBOL(public_4af120);
CLANG_FORWARD_PROC_SYMBOL(public_4b1c00);
CLANG_FORWARD_PROC_SYMBOL(public_558d60);

#define public_4b1c38 _public_4b1c38
#define public_4b1c3f _public_4b1c3f
#define public_4b1c53 _public_4b1c53
#define public_4b1c70 _public_4b1c70
#define public_4b1cb7 _public_4b1cb7
#define public_4b1d0b _public_4b1d0b

PROC_DECLARE(0x4b1c00, internal_4b1c00, public_4b1c00);
extern "C" NAKED register_t __cdecl internal_4b1c00()
{
    __asm
    {
        sub esp, 0x2C
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov ecx, 0xA
        mov esi, offset public_679bc0
        lea edi, ss:[esp+0x10]
        rep movsd
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [ebp+0x8B8], eax
        mov eax, 0x20
        cmp ecx, eax
        jne public_4b1c38
        mov byte ptr ss : [ebp+0x8BC], 1
        jmp public_4b1c3f
        public_4b1c38 : nop
        mov byte ptr ss : [ebp+0x8BC], 0
        public_4b1c3f : nop
        mov cl, byte ptr ss : [esp+0x40]
        test cl, cl
        mov dword ptr ss : [esp+0xC], 0x10
        je public_4b1c53
        mov dword ptr ss : [esp+0xC], eax
        public_4b1c53 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        push ebx
        xor ebx, ebx
        lea edx, ss:[ebp+0x8CC]
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ecx
        mov dword ptr ss : [esp+0x44], edx
        public_4b1c70 : nop
        mov al, byte ptr ds : [ebx+ebp+0x944]
        test al, al
        je public_4b1cb7
        mov eax, dword ptr ss : [esp+0x44]
        mov esi, dword ptr ds : [eax]
        cmp dword ptr ss : [esp+0x40], esi
        mov edi, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        jne public_4b1cb7
        cmp dword ptr ss : [esp+0x10], eax
        jne public_4b1cb7
        push 0xFFFFFFFF
        push edi
        push esi
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, ebp
        call public_4af120
        mov al, byte ptr ss : [ebp+0x32D]
        test al, al
        jne public_4b1cb7
        push edi
        push esi
        call public_558d60
        add esp, 8
        public_4b1cb7 : nop
        mov ecx, dword ptr ss : [esp+0x44]
        inc ebx
        add ecx, 0xC
        cmp ebx, 0xA
        mov dword ptr ss : [esp+0x44], ecx
        jl public_4b1c70
        mov eax, dword ptr ss : [esp+0x1C]
        test eax, eax
        pop ebx
        jbe public_4b1d0b
        mov eax, dword ptr ss : [esp+0x1C]
        test eax, eax
        jbe public_4b1d0b
        mov eax, dword ptr ds : [public_67eca0]
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        call public_424ce0
        add esp, 8
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x8C0], 0
        mov dword ptr ss : [ebp+0x8C4], 0x40240000
        mov al, 1
        pop ebp
        add esp, 0x2C
        ret 8
        public_4b1d0b : nop
        pop edi
        pop esi
        xor al, al
        pop ebp
        add esp, 0x2C
        ret 8
        UNREACHABLE_TRAP(0x4b1c00)
    }
}

#undef public_4b1c38
#undef public_4b1c3f
#undef public_4b1c53
#undef public_4b1c70
#undef public_4b1cb7
#undef public_4b1d0b
