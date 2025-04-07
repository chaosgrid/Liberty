#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4af48);

#define public_6d4af89 _public_6d4af89
#define public_6d4af93 _public_6d4af93
#define public_6d4afa1 _public_6d4afa1

PROC_DECLARE(0x6d4af48, internal_6d4af48, public_6d4af48);
extern "C" NAKED register_t __cdecl internal_6d4af48()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [edi+0x194]
        mov eax, dword ptr ds : [esi+0x14]
        cdq 
        push 8
        pop ebp
        idiv ebp
        lea ecx, ds:[edi+0x190]
        mov ebx, dword ptr ds : [ecx]
        push edi
        add dword ptr ds : [ebx+0x58], eax
        xor ebx, ebx
        mov dword ptr ds : [esi+0x14], ebx
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        test al, al
        pop ecx
        je public_6d4afa1
        lea eax, ds:[edi+0x120]
        xor edx, edx
        cmp dword ptr ds : [eax], ebx
        jle public_6d4af93
        lea ecx, ds:[esi+0x20]
        public_6d4af89 : nop
        mov dword ptr ds : [ecx], ebx
        inc edx
        add ecx, 4
        cmp edx, dword ptr ds : [eax]
        jl public_6d4af89
        public_6d4af93 : nop
        mov eax, dword ptr ds : [edi+0xFC]
        mov dword ptr ds : [esi+0x30], eax
        mov byte ptr ds : [esi+0x18], bl
        mov al, 1
        public_6d4afa1 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d4af48)
    }
}

#undef public_6d4af89
#undef public_6d4af93
#undef public_6d4afa1
