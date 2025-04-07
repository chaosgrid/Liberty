#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6273b30);
CLANG_FORWARD_PROC_SYMBOL(public_6334430);

#define public_6273b68 _public_6273b68

PROC_DECLARE(0x6273b30, internal_6273b30, public_6273b30);
extern "C" NAKED register_t __cdecl internal_6273b30()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        push esi
        call public_6334430
        lea ebp, ds:[esi+4]
        push ebp
        call public_6334430
        lea eax, ds:[esi+8]
        push eax
        call public_6334430
        lea eax, ds:[esi+0xC]
        push eax
        call public_6334430
        lea edi, ds:[esi+0x1C]
        add esp, 0x10
        mov ebx, edi
        mov dword ptr ss : [esp+0x10], 4
        public_6273b68 : nop
        push ebx
        call public_6334430
        mov eax, dword ptr ss : [esp+0x14]
        add esp, 4
        add ebx, 4
        dec eax
        mov dword ptr ss : [esp+0x10], eax
        jne public_6273b68
        xor eax, eax
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [esi+0x10], 0xFFFFFFFF
        mov dword ptr ss : [ebp], eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ds : [esi+0x14], eax
        mov dword ptr ds : [esi+0x18], eax
        mov dword ptr ds : [edi], eax
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        mov dword ptr ds : [edi+0xC], eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6273b30)
    }
}

#undef public_6273b68
