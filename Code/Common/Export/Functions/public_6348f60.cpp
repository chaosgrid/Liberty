#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6348f60);
CLANG_FORWARD_PROC_SYMBOL(public_6349110);
CLANG_FORWARD_PROC_SYMBOL(public_6349490);
CLANG_FORWARD_PROC_SYMBOL(public_63494f0);

#define public_6348f7a _public_6348f7a
#define public_6348fc8 _public_6348fc8
#define public_6348fcd _public_6348fcd

PROC_DECLARE(0x6348f60, internal_6348f60, public_6348f60);
extern "C" NAKED register_t __cdecl internal_6348f60()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ebx]
        push ebp
        push edi
        mov ecx, ebx
        call dword ptr ds : [eax+8]
        xor edi, edi
        mov ebp, eax
        mov di, word ptr ss : [ebp+2]
        dec edi
        js public_6348fcd
        push esi
        public_6348f7a : nop
        mov ecx, dword ptr ss : [ebp+4]
        mov esi, dword ptr ds : [ecx+edi*4]
        push ebx
        mov ecx, esi
        call public_6349110
        dec edi
        mov ecx, dword ptr ds : [esi+0x15C]
        jns public_6348f7a
        test ecx, ecx
        pop esi
        je public_6348fcd
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ss : [esp+0x14]
        and eax, 0xFFFFFDFF
        or eax, 0x100
        test edx, edx
        mov dword ptr ds : [ecx], eax
        jne public_6348fcd
        shl eax, 0x18
        cmp eax, 0x8000000
        jl public_6348fc8
        mov edx, dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax+0xC]
        push edx
        call public_6349490
        pop edi
        pop ebp
        pop ebx
        ret 
        public_6348fc8 : nop
        call public_63494f0
        public_6348fcd : nop
        pop edi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6348f60)
    }
}

#undef public_6348f7a
#undef public_6348fc8
#undef public_6348fcd
