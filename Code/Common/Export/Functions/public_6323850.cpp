#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63221f0);
CLANG_FORWARD_PROC_SYMBOL(public_6323850);

#define public_6323870 _public_6323870
#define public_6323899 _public_6323899

PROC_DECLARE(0x6323850, internal_6323850, public_6323850);
extern "C" NAKED register_t __cdecl internal_6323850()
{
    __asm
    {
        push ebx
        push esi
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp edi, eax
        mov esi, edi
        je public_6323899
        push ebp
        mov ebp, dword ptr ds : [public_63990ec]
        lea esp, ss:[esp]
        public_6323870 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_6323850
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_63221f0
        mov ecx, dword ptr ds : [public_6401818]
        push edi
        push 1
        push ecx
        call ebp
        cmp esi, dword ptr ds : [ebx+8]
        mov edi, esi
        jne public_6323870
        pop ebp
        public_6323899 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6323850)
    }
}

#undef public_6323870
#undef public_6323899
