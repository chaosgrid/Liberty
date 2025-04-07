#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6348c10);
CLANG_FORWARD_PROC_SYMBOL(public_6348ec0);
CLANG_FORWARD_PROC_SYMBOL(public_6349460);

#define public_6348c24 _public_6348c24
#define public_6348c47 _public_6348c47

PROC_DECLARE(0x6348c10, internal_6348c10, public_6348c10);
extern "C" NAKED register_t __cdecl internal_6348c10()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push ebp
        push edi
        xor edi, edi
        xor eax, eax
        cmp word ptr ds : [ebx+0xE], di
        mov ebp, ecx
        jbe public_6348c47
        push esi
        public_6348c24 : nop
        mov eax, dword ptr ds : [ebx+0x10]
        mov esi, dword ptr ds : [eax+edi*4]
        push esi
        mov ecx, ebp
        call public_6348ec0
        mov eax, dword ptr ds : [esi+0xC]
        xor ecx, ecx
        mov dword ptr ds : [esi+0x15C], ebp
        mov cx, word ptr ds : [ebx+0xE]
        inc edi
        cmp edi, ecx
        jl public_6348c24
        pop esi
        public_6348c47 : nop
        mov ecx, dword ptr ds : [eax+8]
        push ebx
        call public_6349460
        pop edi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6348c10)
    }
}

#undef public_6348c24
#undef public_6348c47
