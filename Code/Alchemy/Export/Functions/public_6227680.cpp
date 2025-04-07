#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62029c0);
CLANG_FORWARD_PROC_SYMBOL(public_6227680);
CLANG_FORWARD_PROC_SYMBOL(public_6229e00);
CLANG_FORWARD_PROC_SYMBOL(public_622a1c0);

#define public_62276b8 _public_62276b8
#define public_62276c0 _public_62276c0
#define public_62276f7 _public_62276f7

PROC_DECLARE(0x6227680, internal_6227680, public_6227680);
extern "C" NAKED register_t __cdecl internal_6227680()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        lea eax, ss:[esp+0x14]
        push edi
        lea ecx, ss:[esp+0x14]
        lea esi, ds:[ebx+8]
        push eax
        push ecx
        mov ecx, esi
        call public_622a1c0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, eax
        je public_62276b8
        mov edx, dword ptr ss : [esp+0x18]
        mov edi, dword ptr ds : [ecx+0xC]
        cmp edx, edi
        jb public_62276b8
        lea eax, ss:[esp+0x14]
        jmp public_62276c0
        public_62276b8 : nop
        mov dword ptr ss : [esp+0xC], eax
        lea eax, ss:[esp+0xC]
        public_62276c0 : nop
        mov edi, dword ptr ds : [eax]
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        je public_62276f7
        mov eax, dword ptr ds : [edi+0x10]
        lea ecx, ss:[esp+0x14]
        push eax
        push ecx
        lea ecx, ds:[ebx+0x1C]
        call public_6229e00
        lea edx, ss:[esp+0x14]
        push edi
        push edx
        mov ecx, esi
        call public_62029c0
        mov eax, dword ptr ds : [ebx+4]
        pop edi
        dec eax
        pop esi
        mov dword ptr ds : [ebx+4], eax
        xor eax, eax
        pop ebx
        pop ecx
        ret 8
        public_62276f7 : nop
        pop edi
        pop esi
        or eax, 0xFFFFFFFF
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6227680)
    }
}

#undef public_62276b8
#undef public_62276c0
#undef public_62276f7
