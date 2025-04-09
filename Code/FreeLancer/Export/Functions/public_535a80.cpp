#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_535a80);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_535a92 _public_535a92
#define public_535ac3 _public_535ac3

PROC_DECLARE(0x535a80, internal_535a80, public_535a80);
extern "C" NAKED register_t __cdecl internal_535a80()
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
        je public_535ac3
        push esi
        public_535a92 : nop
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
        call public_5b7e1d
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [ebx+8], ecx
        jne public_535a92
        pop esi
        public_535ac3 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], edi
        pop edi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x535a80)
    }
}

#undef public_535a92
#undef public_535ac3
