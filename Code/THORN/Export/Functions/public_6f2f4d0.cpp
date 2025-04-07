#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f31860);

#define public_6f2f505 _public_6f2f505
#define public_6f2f50d _public_6f2f50d
#define public_6f2f520 _public_6f2f520

PROC_DECLARE(0x6f2f4d0, internal_6f2f4d0, public_6f2f4d0);
extern "C" NAKED register_t __cdecl internal_6f2f4d0()
{
    __asm
    {
        sub esp, 8
        push esi
        push edi
        mov edi, ecx
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0xC]
        lea esi, ds:[edi+0x10]
        push ecx
        mov ecx, esi
        call public_6f31860
        mov esi, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+8]
        cmp eax, esi
        je public_6f2f505
        mov edx, dword ptr ss : [esp+0x14]
        cmp edx, dword ptr ds : [eax+0xC]
        jl public_6f2f505
        lea eax, ss:[esp+8]
        jmp public_6f2f50d
        public_6f2f505 : nop
        mov dword ptr ss : [esp+0xC], esi
        lea eax, ss:[esp+0xC]
        public_6f2f50d : nop
        mov ecx, dword ptr ds : [edi+0x14]
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        pop edi
        pop esi
        jne public_6f2f520
        xor al, al
        add esp, 8
        ret 0x14
        public_6f2f520 : nop
        mov ecx, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], eax
        mov al, 1
        add esp, 8
        ret 0x14
        UNREACHABLE_TRAP(0x6f2f4d0)
    }
}

#undef public_6f2f505
#undef public_6f2f50d
#undef public_6f2f520
