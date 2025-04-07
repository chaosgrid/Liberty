#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6313590);

#define public_6313640 _public_6313640
#define public_631366e _public_631366e

PROC_DECLARE(0x6313590, internal_6313590, public_6313590);
extern "C" NAKED register_t __cdecl internal_6313590()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], edx
        mov esi, dword ptr ds : [ecx+8]
        mov ebp, dword ptr ds : [ecx+0xC]
        push edi
        mov edi, dword ptr ds : [ecx+0x10]
        mov edx, 4
        add edi, edx
        mov dword ptr ds : [ecx+0x10], edi
        add esi, edx
        mov dword ptr ds : [ecx+8], esi
        mov ebx, 0xFFFFFFFC
        add ebp, ebx
        mov dword ptr ds : [ecx+0xC], ebp
        mov edi, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi], edi
        mov esi, dword ptr ds : [ecx+8]
        mov ebp, dword ptr ds : [ecx+0xC]
        add dword ptr ds : [ecx+0x10], edx
        add esi, edx
        mov dword ptr ds : [ecx+8], esi
        add ebp, ebx
        mov dword ptr ds : [ecx+0xC], ebp
        mov edi, dword ptr ds : [eax+8]
        mov dword ptr ds : [esi], edi
        mov esi, dword ptr ds : [ecx+8]
        mov ebp, dword ptr ds : [ecx+0xC]
        add dword ptr ds : [ecx+0x10], edx
        add esi, edx
        mov dword ptr ds : [ecx+8], esi
        add ebp, ebx
        mov dword ptr ds : [ecx+0xC], ebp
        mov edi, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [esi], edi
        mov esi, dword ptr ds : [ecx+8]
        mov ebp, dword ptr ds : [ecx+0xC]
        mov edi, dword ptr ds : [ecx+0x10]
        add edi, edx
        add esi, edx
        add ebp, ebx
        mov dword ptr ds : [ecx+0x10], edi
        mov dword ptr ds : [ecx+8], esi
        mov dword ptr ds : [ecx+0xC], ebp
        mov edi, dword ptr ds : [eax+0x30]
        mov dword ptr ds : [esi], edi
        mov esi, dword ptr ds : [ecx+8]
        mov ebp, dword ptr ds : [ecx+0xC]
        mov edi, dword ptr ds : [ecx+0x10]
        add ebp, ebx
        add edi, edx
        add esi, edx
        mov dword ptr ds : [ecx+0x10], edi
        mov dword ptr ds : [ecx+8], esi
        mov dword ptr ds : [ecx+0xC], ebp
        mov ebp, dword ptr ds : [eax+0x30]
        xor edi, edi
        test ebp, ebp
        jle public_631366e
        lea ebp, ds:[eax+0x10]
        mov dword ptr ss : [esp+0x14], ebp
        nop 
        lea esp, ss:[esp]
        public_6313640 : nop
        mov ebp, dword ptr ss : [esp+0x14]
        mov ebp, dword ptr ss : [ebp]
        mov dword ptr ds : [esi], ebp
        mov ebp, dword ptr ds : [ecx+0xC]
        mov esi, dword ptr ds : [ecx+8]
        add ebp, ebx
        mov dword ptr ds : [ecx+0xC], ebp
        add dword ptr ds : [ecx+0x10], edx
        mov ebp, dword ptr ss : [esp+0x14]
        add esi, edx
        add ebp, edx
        mov dword ptr ds : [ecx+8], esi
        mov dword ptr ss : [esp+0x14], ebp
        mov ebp, dword ptr ds : [eax+0x30]
        inc edi
        cmp edi, ebp
        jl public_6313640
        public_631366e : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6313590)
    }
}

#undef public_6313640
#undef public_631366e
