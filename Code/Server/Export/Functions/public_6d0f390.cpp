#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0f390);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d0f3a2 _public_6d0f3a2
#define public_6d0f3d3 _public_6d0f3d3

PROC_DECLARE(0x6d0f390, internal_6d0f390, public_6d0f390);
extern "C" NAKED register_t __cdecl internal_6d0f390()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        cmp edi, ebp
        mov ebx, ecx
        je public_6d0f3d3
        push esi
        public_6d0f3a2 : nop
        mov esi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx+4], eax
        mov edx, dword ptr ds : [ecx]
        push 0
        call dword ptr ds : [edx]
        push esi
        call public_6d5ffb0
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [ebx+8], ecx
        jne public_6d0f3a2
        pop esi
        public_6d0f3d3 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], edi
        pop edi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6d0f390)
    }
}

#undef public_6d0f3a2
#undef public_6d0f3d3
