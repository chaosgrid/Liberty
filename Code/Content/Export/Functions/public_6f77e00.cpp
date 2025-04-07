#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f77e00);
CLANG_FORWARD_PROC_SYMBOL(public_6fa7200);

#define public_6f77e34 _public_6f77e34
#define public_6f77e3c _public_6f77e3c
#define public_6f77e59 _public_6f77e59

PROC_DECLARE(0x6f77e00, internal_6f77e00, public_6f77e00);
extern "C" NAKED register_t __cdecl internal_6f77e00()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        push edi
        mov edi, ecx
        lea esi, ds:[edi+0xF8]
        push ebp
        mov ecx, esi
        xor bl, bl
        call public_6fa7200
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0x18], eax
        je public_6f77e34
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_6f77e34
        lea eax, ss:[esp+0x18]
        jmp public_6f77e3c
        public_6f77e34 : nop
        mov dword ptr ss : [esp+0x10], esi
        lea eax, ss:[esp+0x10]
        public_6f77e3c : nop
        mov ecx, dword ptr ds : [eax]
        cmp ecx, dword ptr ds : [edi+0xFC]
        je public_6f77e59
        mov edx, dword ptr ds : [ecx+0x10]
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        mov dword ptr ds : [ecx], edx
        pop ebx
        pop ecx
        ret 8
        public_6f77e59 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov al, bl
        mov dword ptr ds : [edx], 0
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f77e00)
    }
}

#undef public_6f77e34
#undef public_6f77e3c
#undef public_6f77e59
