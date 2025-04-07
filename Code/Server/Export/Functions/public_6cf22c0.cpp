#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d50920);

#define public_6cf233f _public_6cf233f
#define public_6cf234a _public_6cf234a

PROC_DECLARE(0x6cf22c0, internal_6cf22c0, public_6cf22c0);
extern "C" NAKED register_t __cdecl internal_6cf22c0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        test esi, esi
        push edi
        jbe public_6cf234a
        mov ebx, dword ptr ds : [public_6d90264]
        lea eax, ds:[esi-1]
        cmp eax, ebx
        jae public_6cf234a
        mov edx, dword ptr ds : [public_6d90260]
        imul eax, 0x418
        mov edi, dword ptr ds : [eax+edx+0x348]
        test edi, edi
        je public_6cf234a
        mov edi, dword ptr ss : [esp+0x14]
        test edi, edi
        jbe public_6cf234a
        lea eax, ds:[edi-1]
        cmp eax, ebx
        jae public_6cf234a
        imul eax, 0x418
        mov ebx, dword ptr ds : [eax+edx+0x348]
        test ebx, ebx
        je public_6cf234a
        mov eax, esi
        imul eax, 0x418
        mov ebx, dword ptr ds : [eax+edx-0x4C]
        add eax, edx
        test ebx, ebx
        jne public_6cf234a
        mov ebx, edi
        imul ebx, 0x418
        cmp dword ptr ds : [ebx+edx-0x48], esi
        push edi
        jne public_6cf233f
        mov edx, dword ptr ds : [ecx]
        push esi
        call dword ptr ds : [edx+0x13C]
        pop edi
        pop esi
        pop ebx
        ret 8
        public_6cf233f : nop
        lea ecx, ds:[eax-0x418]
        call public_6d50920
        public_6cf234a : nop
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6cf22c0)
    }
}

#undef public_6cf233f
#undef public_6cf234a
