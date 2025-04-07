#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac4db0);
CLANG_FORWARD_PROC_SYMBOL(public_6acb290);

#define public_6ac4dc4 _public_6ac4dc4
#define public_6ac4ddb _public_6ac4ddb

PROC_DECLARE(0x6ac4db0, internal_6ac4db0, public_6ac4db0);
extern "C" NAKED register_t __cdecl internal_6ac4db0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push edi
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        mov edi, ecx
        ja public_6ac4dc4
        mov edi, eax
        public_6ac4dc4 : nop
        sub eax, edi
        mov ebx, eax
        cmp ebx, ecx
        jbe public_6ac4ddb
        pop edi
        mov dword ptr ds : [public_6ae097c], 0x38
        pop ebx
        ret 0x10
        public_6ac4ddb : nop
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        push edx
        lea eax, ds:[esi+0x1B4]
        push eax
        push esi
        push edi
        push ebp
        call public_6acb290
        lea edx, ds:[esi+0x378]
        add esi, 0x1C4
        mov ecx, dword ptr ss : [esp+0x20]
        lea eax, ss:[ebp+edi*4]
        push ecx
        push edx
        push esi
        push ebx
        push eax
        call public_6acb290
        pop esi
        pop ebp
        pop edi
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6ac4db0)
    }
}

#undef public_6ac4dc4
#undef public_6ac4ddb
