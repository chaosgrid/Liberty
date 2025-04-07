#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_428de0);
CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_4ca910);
CLANG_FORWARD_PROC_SYMBOL(public_4caae0);
CLANG_FORWARD_PROC_SYMBOL(public_4cad10);
CLANG_FORWARD_PROC_SYMBOL(public_4cae10);

#define public_4cad30 _public_4cad30
#define public_4cad42 _public_4cad42
#define public_4cad59 _public_4cad59
#define public_4cad71 _public_4cad71
#define public_4cada0 _public_4cada0
#define public_4cada3 _public_4cada3
#define public_4cadb8 _public_4cadb8

PROC_DECLARE(0x4cad10, internal_4cad10, public_4cad10);
extern "C" NAKED register_t __cdecl internal_4cad10()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ebp, dword ptr ds : [esi+0x1BC]
        xor ebx, ebx
        cmp ebp, ebx
        push edi
        je public_4cad59
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, ebx
        je public_4cad42
        lea esp, ss:[esp]
        public_4cad30 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        cmp edi, ebx
        mov eax, edi
        jne public_4cad30
        public_4cad42 : nop
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ss : [ebp]
        push 1
        mov ecx, ebp
        call dword ptr ds : [edx]
        mov dword ptr ds : [esi+0x1BC], ebx
        public_4cad59 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        cmp ecx, ebx
        je public_4cad71
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x60]
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0xC], ebx
        public_4cad71 : nop
        mov ecx, esi
        call public_4caae0
        cmp byte ptr ds : [esi+0x14], bl
        je public_4cada3
        call public_428de0
        dec dword ptr ds : [public_6735b0]
        jne public_4cada0
        mov edx, dword ptr ds : [public_6108f8]
        mov dword ptr ds : [public_6735a4], 0
        mov dword ptr ds : [public_6735ac], edx
        public_4cada0 : nop
        mov byte ptr ds : [esi+0x14], bl
        public_4cada3 : nop
        mov ecx, esi
        call public_4ca910
        cmp dword ptr ds : [esi+0x170], ebx
        je public_4cadb8
        mov dword ptr ds : [esi+0x170], ebx
        public_4cadb8 : nop
        mov edi, dword ptr ss : [esp+0x14]
        lea edx, ds:[esi+0x1CC]
        push edx
        lea ecx, ds:[esi+0x1C8]
        push ecx
        lea eax, ds:[esi+0x1C4]
        push eax
        mov dword ptr ds : [eax], ebx
        mov eax, dword ptr ss : [esp+0x24]
        push eax
        push ebx
        push ebx
        mov dword ptr ds : [ecx], ebx
        push edi
        mov ecx, esi
        mov byte ptr ds : [esi+0x174], bl
        mov dword ptr ds : [esi+0x1C0], ebx
        mov dword ptr ds : [edx], ebx
        call public_4cae10
        mov ecx, dword ptr ds : [edi+0x90]
        pop edi
        mov dword ptr ds : [esi+0x1B8], ecx
        pop esi
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x4cad10)
    }
}

#undef public_4cad30
#undef public_4cad42
#undef public_4cad59
#undef public_4cad71
#undef public_4cada0
#undef public_4cada3
#undef public_4cadb8
