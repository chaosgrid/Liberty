#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_422910);
CLANG_FORWARD_PROC_SYMBOL(public_51f810);

#define public_51f840 _public_51f840
#define public_51f86d _public_51f86d
#define public_51f88a _public_51f88a
#define public_51f8cb _public_51f8cb

PROC_DECLARE(0x51f810, internal_51f810, public_51f810);
extern "C" NAKED register_t __cdecl internal_51f810()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        push edi
        push ebp
        call public_422910
        mov eax, dword ptr ss : [esp+0x1C]
        mov bl, byte ptr ss : [esp+0x20]
        shl eax, 4
        mov esi, dword ptr ds : [eax+public_6752f4]
        mov edi, dword ptr ds : [eax+public_6752f8]
        add esp, 4
        cmp esi, edi
        je public_51f88a
        lea esp, ss:[esp]
        public_51f840 : nop
        test bl, bl
        je public_51f86d
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 7
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0xE
        push eax
        call dword ptr ds : [ecx+0xF0]
        public_51f86d : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx]
        push ebp
        call dword ptr ds : [edx]
        mov eax, dword ptr ds : [public_5c6dcc]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 1
        push eax
        call dword ptr ds : [ecx+0x28]
        add esi, 4
        cmp esi, edi
        jne public_51f840
        public_51f88a : nop
        pop edi
        pop esi
        pop ebp
        test bl, bl
        pop ebx
        je public_51f8cb
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 7
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0xC], 1
        mov dword ptr ss : [esp+8], 0xE
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+0xF0]
        public_51f8cb : nop
        ret 0xC
        UNREACHABLE_TRAP(0x51f810)
    }
}

#undef public_51f840
#undef public_51f86d
#undef public_51f88a
#undef public_51f8cb
