#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d190d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d19180);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c530);

#define public_6d5bde0 _public_6d5bde0
#define public_6d5be20 _public_6d5be20
#define public_6d5be2b _public_6d5be2b
#define public_6d5be33 _public_6d5be33
#define public_6d5be41 _public_6d5be41
#define public_6d5be48 _public_6d5be48
#define public_6d5be4c _public_6d5be4c
#define public_6d5be51 _public_6d5be51

PROC_DECLARE(0x6d5bdc0, internal_6d5bdc0, public_6d5bdc0);
extern "C" NAKED register_t __cdecl internal_6d5bdc0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        je public_6d5be51
        mov esi, dword ptr ss : [esp+0x1C]
        mov edi, dword ptr ss : [esp+0x18]
        xor bl, bl
        mov edi, edi
        public_6d5bde0 : nop
        push ecx
        mov eax, esp
        lea ecx, ss:[esp+0x14]
        mov word ptr ds : [eax], si
        mov byte ptr ds : [eax+2], bl
        mov byte ptr ds : [eax+3], bl
        call public_6d5c530
        mov eax, dword ptr ds : [eax]
        push edi
        push ecx
        mov ecx, esp
        push eax
        call public_6d19180
        call public_6d190d0
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [eax+8]
        mov dl, byte ptr ds : [ecx+0x11]
        add esp, 0xC
        cmp dl, bl
        jne public_6d5be2b
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        cmp byte ptr ds : [ecx+0x11], bl
        jne public_6d5be48
        public_6d5be20 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        cmp byte ptr ds : [ecx+0x11], bl
        je public_6d5be20
        jmp public_6d5be48
        public_6d5be2b : nop
        mov ecx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6d5be41
        public_6d5be33 : nop
        mov eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        mov ecx, dword ptr ds : [ecx+4]
        cmp eax, dword ptr ds : [ecx+8]
        je public_6d5be33
        public_6d5be41 : nop
        cmp dword ptr ds : [eax+8], ecx
        je public_6d5be4c
        mov eax, ecx
        public_6d5be48 : nop
        mov dword ptr ss : [esp+0x10], eax
        public_6d5be4c : nop
        cmp eax, dword ptr ss : [ebp+0xC]
        jne public_6d5bde0
        public_6d5be51 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d5bdc0)
    }
}

#undef public_6d5bde0
#undef public_6d5be20
#undef public_6d5be2b
#undef public_6d5be33
#undef public_6d5be41
#undef public_6d5be48
#undef public_6d5be4c
#undef public_6d5be51
