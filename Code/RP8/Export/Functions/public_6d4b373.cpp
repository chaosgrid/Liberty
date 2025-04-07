#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4abca);
CLANG_FORWARD_PROC_SYMBOL(public_6d4b373);

#define public_6d4b3a8 _public_6d4b3a8
#define public_6d4b3bb _public_6d4b3bb
#define public_6d4b3d9 _public_6d4b3d9
#define public_6d4b3fa _public_6d4b3fa
#define public_6d4b411 _public_6d4b411
#define public_6d4b424 _public_6d4b424
#define public_6d4b438 _public_6d4b438
#define public_6d4b484 _public_6d4b484

PROC_DECLARE(0x6d4b373, internal_6d4b373, public_6d4b373);
extern "C" NAKED register_t __cdecl internal_6d4b373()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xC
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+8]
        xor ebx, ebx
        cmp dword ptr ds : [esi+0x168], ebx
        push edi
        mov edi, dword ptr ds : [esi+0x194]
        jne public_6d4b3a8
        cmp dword ptr ds : [esi+0x16C], 0x3F
        jne public_6d4b3a8
        cmp dword ptr ds : [esi+0x170], ebx
        jne public_6d4b3a8
        cmp dword ptr ds : [esi+0x174], ebx
        je public_6d4b3bb
        public_6d4b3a8 : nop
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x14], 0x76
        mov eax, dword ptr ds : [esi]
        push 0xFFFFFFFF
        push esi
        call dword ptr ds : [eax+4]
        pop ecx
        pop ecx
        public_6d4b3bb : nop
        cmp dword ptr ds : [esi+0x120], ebx
        mov dword ptr ss : [ebp-8], ebx
        jle public_6d4b484
        lea eax, ds:[edi+0x20]
        mov dword ptr ss : [ebp-4], eax
        lea eax, ds:[esi+0x124]
        mov dword ptr ss : [ebp+8], eax
        public_6d4b3d9 : nop
        mov eax, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [eax]
        mov ebx, dword ptr ds : [eax+0x14]
        test ebx, ebx
        mov eax, dword ptr ds : [eax+0x18]
        mov dword ptr ss : [ebp-0xC], eax
        jl public_6d4b3fa
        cmp ebx, 4
        jge public_6d4b3fa
        cmp dword ptr ds : [esi+ebx*4+0xA0], 0
        jne public_6d4b411
        public_6d4b3fa : nop
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x14], 0x31
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x18], ebx
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax]
        mov eax, dword ptr ss : [ebp-0xC]
        pop ecx
        public_6d4b411 : nop
        test eax, eax
        jl public_6d4b424
        cmp eax, 4
        jge public_6d4b424
        cmp dword ptr ds : [esi+eax*4+0xB0], 0
        jne public_6d4b438
        public_6d4b424 : nop
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx+0x14], 0x31
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx+0x18], eax
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax]
        pop ecx
        public_6d4b438 : nop
        lea eax, ds:[edi+ebx*4+0x34]
        push eax
        push dword ptr ds : [esi+ebx*4+0xA0]
        push esi
        call public_6d4abca
        mov eax, dword ptr ss : [ebp-0xC]
        lea ecx, ds:[edi+eax*4+0x44]
        push ecx
        push dword ptr ds : [esi+eax*4+0xB0]
        push esi
        call public_6d4abca
        mov eax, dword ptr ss : [ebp-4]
        and dword ptr ds : [eax], 0
        add dword ptr ss : [ebp+8], 4
        add dword ptr ss : [ebp-4], 4
        add esp, 0x18
        inc dword ptr ss : [ebp-8]
        mov eax, dword ptr ss : [ebp-8]
        cmp eax, dword ptr ds : [esi+0x120]
        jl public_6d4b3d9
        xor ebx, ebx
        public_6d4b484 : nop
        and byte ptr ds : [edi+0x18], 0
        mov dword ptr ds : [edi+0x14], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+0xC], ebx
        mov dword ptr ds : [edi+0x10], ebx
        mov eax, dword ptr ds : [esi+0xFC]
        mov dword ptr ds : [edi+0x30], eax
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d4b373)
    }
}

#undef public_6d4b3a8
#undef public_6d4b3bb
#undef public_6d4b3d9
#undef public_6d4b3fa
#undef public_6d4b411
#undef public_6d4b424
#undef public_6d4b438
#undef public_6d4b484
