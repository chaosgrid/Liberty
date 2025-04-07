#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eea860);
CLANG_FORWARD_PROC_SYMBOL(public_6f73930);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f0ac35 _public_6f0ac35
#define public_6f0ac3c _public_6f0ac3c
#define public_6f0ac50 _public_6f0ac50
#define public_6f0ac5e _public_6f0ac5e
#define public_6f0ac70 _public_6f0ac70
#define public_6f0ac7f _public_6f0ac7f
#define public_6f0ac90 _public_6f0ac90
#define public_6f0acb7 _public_6f0acb7
#define public_6f0acce _public_6f0acce

PROC_DECLARE(0x6f0ac10, internal_6f0ac10, public_6f0ac10);
extern "C" NAKED register_t __cdecl internal_6f0ac10()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x20]
        test eax, eax
        je public_6f0ac3c
        mov ecx, dword ptr ds : [esi+4]
        push eax
        call public_6eea860
        mov ecx, eax
        call public_6f73930
        test eax, eax
        je public_6f0ac35
        mov byte ptr ds : [eax+0x11D], 0
        public_6f0ac35 : nop
        mov dword ptr ds : [esi+0x20], 0
        public_6f0ac3c : nop
        mov edx, dword ptr ds : [esi+0x48]
        mov ecx, dword ptr ds : [esi+0x44]
        mov eax, edx
        cmp eax, edx
        push ebp
        push edi
        je public_6f0ac5e
        lea ebx, ds:[ebx]
        public_6f0ac50 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edi
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6f0ac50
        public_6f0ac5e : nop
        mov dword ptr ds : [esi+0x48], ecx
        mov eax, dword ptr ds : [esi+0xC]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_6f0ac7f
        lea ebx, ds:[ebx]
        public_6f0ac70 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [esi+0xC]
        jne public_6f0ac70
        public_6f0ac7f : nop
        mov ebp, dword ptr ds : [esi+0xC]
        mov edi, dword ptr ss : [ebp]
        cmp edi, ebp
        je public_6f0acb7
        lea esp, ss:[esp]
        public_6f0ac90 : nop
        mov eax, edi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6fa8fe0
        mov ecx, dword ptr ds : [esi+0x10]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [esi+0x10], ecx
        jne public_6f0ac90
        public_6f0acb7 : nop
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        pop edi
        pop ebp
        mov dword ptr ds : [esi+0x5C], 0xBF800000
        je public_6f0acce
        mov dword ptr ds : [esi+0x14], 1
        public_6f0acce : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f0ac10)
    }
}

#undef public_6f0ac35
#undef public_6f0ac3c
#undef public_6f0ac50
#undef public_6f0ac5e
#undef public_6f0ac70
#undef public_6f0ac7f
#undef public_6f0ac90
#undef public_6f0acb7
#undef public_6f0acce
