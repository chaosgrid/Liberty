#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2b190);
CLANG_FORWARD_PROC_SYMBOL(public_6c2b3c0);
CLANG_FORWARD_PROC_SYMBOL(public_6c2c5c0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);

#define public_6c2b1b6 _public_6c2b1b6
#define public_6c2b1cb _public_6c2b1cb
#define public_6c2b1e8 _public_6c2b1e8
#define public_6c2b20f _public_6c2b20f

PROC_DECLARE(0x6c2b190, internal_6c2b190, public_6c2b190);
extern "C" NAKED register_t __cdecl internal_6c2b190()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ds : [esi], offset public_6c36348
        mov dword ptr ds : [esi+4], offset public_6c36338
        call public_6c2b3c0
        mov ebp, dword ptr ds : [esi+0x3C]
        mov edi, dword ptr ss : [ebp]
        cmp edi, ebp
        lea ebx, ds:[esi+0x38]
        je public_6c2b1cb
        public_6c2b1b6 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, ebx
        call public_6c2c5c0
        cmp edi, ebp
        jne public_6c2b1b6
        public_6c2b1cb : nop
        mov ecx, dword ptr ds : [ebx+4]
        push ecx
        call public_6c34ea0
        xor ebp, ebp
        mov dword ptr ds : [ebx+4], ebp
        mov dword ptr ds : [ebx+8], ebp
        mov ebx, dword ptr ds : [esi+0x30]
        mov edi, dword ptr ds : [ebx]
        add esp, 4
        cmp edi, ebx
        je public_6c2b20f
        public_6c2b1e8 : nop
        mov eax, edi
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [edx+4], ecx
        call public_6c34ea0
        mov ecx, dword ptr ds : [esi+0x34]
        add esp, 4
        dec ecx
        cmp edi, ebx
        mov dword ptr ds : [esi+0x34], ecx
        jne public_6c2b1e8
        public_6c2b20f : nop
        mov edx, dword ptr ds : [esi+0x30]
        push edx
        call public_6c34ea0
        add esp, 4
        pop edi
        mov dword ptr ds : [esi+0x30], ebp
        mov dword ptr ds : [esi+0x34], ebp
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6c2b190)
    }
}

#undef public_6c2b1b6
#undef public_6c2b1cb
#undef public_6c2b1e8
#undef public_6c2b20f
