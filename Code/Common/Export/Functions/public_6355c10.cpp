#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6355490);
CLANG_FORWARD_PROC_SYMBOL(public_6355c10);
CLANG_FORWARD_PROC_SYMBOL(public_6358c50);
CLANG_FORWARD_PROC_SYMBOL(public_635a1e0);

#define public_6355c28 _public_6355c28
#define public_6355c2c _public_6355c2c
#define public_6355c60 _public_6355c60
#define public_6355c6d _public_6355c6d

PROC_DECLARE(0x6355c10, internal_6355c10, public_6355c10);
extern "C" NAKED register_t __cdecl internal_6355c10()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        xor ebp, ebp
        mov bp, word ptr ds : [ecx+2]
        mov dword ptr ss : [esp+8], ecx
        lea ebx, ss:[ebp-1]
        test ebx, ebx
        jl public_6355c6d
        push esi
        push edi
        jmp public_6355c2c
        public_6355c28 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        public_6355c2c : nop
        mov eax, dword ptr ds : [ecx+4]
        mov esi, dword ptr ds : [eax+ebx*4]
        mov ecx, esi
        call public_635a1e0
        mov edi, dword ptr ds : [esi+0x40]
        push edi
        mov ecx, esi
        call public_6358c50
        mov ecx, dword ptr ds : [edi+0x54]
        and ecx, 0x300
        cmp ecx, 0x100
        jne public_6355c60
        mov ecx, dword ptr ss : [esp+0x18]
        push esi
        dec ebp
        call public_6355490
        public_6355c60 : nop
        dec ebx
        jns public_6355c28
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_6355c6d : nop
        mov eax, ebp
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6355c10)
    }
}

#undef public_6355c28
#undef public_6355c2c
#undef public_6355c60
#undef public_6355c6d
