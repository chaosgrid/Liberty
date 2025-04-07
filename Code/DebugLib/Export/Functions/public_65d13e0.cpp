#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d11b0);
CLANG_FORWARD_PROC_SYMBOL(public_65d1330);
CLANG_FORWARD_PROC_SYMBOL(public_65d13e0);
CLANG_FORWARD_PROC_SYMBOL(public_65d2630);
CLANG_FORWARD_PROC_SYMBOL(public_65d6c4c);
CLANG_FORWARD_PROC_SYMBOL(public_65d6cb8);

#define public_65d13ff _public_65d13ff
#define public_65d1408 _public_65d1408
#define public_65d141e _public_65d141e
#define public_65d1429 _public_65d1429
#define public_65d1459 _public_65d1459

PROC_DECLARE(0x65d13e0, internal_65d13e0, public_65d13e0);
extern "C" NAKED register_t __cdecl internal_65d13e0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push ebp
        push edi
        mov eax, dword ptr ds : [ebx+8]
        cmp eax, 0xFFFFFFFF
        je public_65d1459
        push eax
        call public_65d6c4c
        cmp eax, 0xFFFFFFFF
        jne public_65d13ff
        call public_65d1330
        public_65d13ff : nop
        mov ecx, dword ptr ds : [ebx+0x10]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_65d141e
        public_65d1408 : nop
        push eax
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, ebx
        call public_65d11b0
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [ebx+0x10]
        cmp eax, ecx
        jne public_65d1408
        public_65d141e : nop
        mov ebp, dword ptr ds : [ebx+0x24]
        mov edi, dword ptr ss : [ebp]
        cmp edi, ebp
        je public_65d1459
        push esi
        public_65d1429 : nop
        mov esi, edi
        mov edi, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+4], ecx
        lea ecx, ds:[esi+8]
        call public_65d2630
        push esi
        call public_65d6cb8
        mov ecx, dword ptr ds : [ebx+0x28]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [ebx+0x28], ecx
        jne public_65d1429
        pop esi
        public_65d1459 : nop
        pop edi
        pop ebp
        xor eax, eax
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x65d13e0)
    }
}

#undef public_65d13ff
#undef public_65d1408
#undef public_65d141e
#undef public_65d1429
#undef public_65d1459
