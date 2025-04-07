#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62afac0);
CLANG_FORWARD_PROC_SYMBOL(public_62f7be0);
CLANG_FORWARD_PROC_SYMBOL(public_6333e50);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);

#define public_62accd0 _public_62accd0
#define public_62accd2 _public_62accd2
#define public_62accdc _public_62accdc
#define public_62acd26 _public_62acd26

PROC_DECLARE(0x62accb0, internal_62accb0, public_62accb0);
extern "C" NAKED register_t __cdecl internal_62accb0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        mov esi, ecx
        call public_62afac0
        mov eax, dword ptr ds : [edi+0x60]
        test eax, eax
        lea ecx, ds:[esi+0xF0]
        je public_62accd0
        add eax, 8
        jmp public_62accd2
        public_62accd0 : nop
        xor eax, eax
        public_62accd2 : nop
        cmp eax, dword ptr ds : [ecx]
        je public_62accdc
        push eax
        call public_6341610
        public_62accdc : nop
        mov ax, word ptr ds : [edi+0x64]
        mov word ptr ds : [esi+0xF8], ax
        mov eax, dword ptr ds : [esi+0x88]
        lea ecx, ds:[eax+0x8C]
        mov dword ptr ds : [esi+0x100], 0
        call public_6333e50
        test al, al
        jne public_62acd26
        mov ecx, dword ptr ds : [esi+0x88]
        mov eax, dword ptr ds : [ecx+0x8C]
        push eax
        call public_62f7be0
        add esp, 4
        pop edi
        mov dword ptr ds : [esi+0xFC], eax
        pop esi
        ret 4
        public_62acd26 : nop
        xor eax, eax
        pop edi
        mov dword ptr ds : [esi+0xFC], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62accb0)
    }
}

#undef public_62accd0
#undef public_62accd2
#undef public_62accdc
#undef public_62acd26
