#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_434720);
CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_57d980);
CLANG_FORWARD_PROC_SYMBOL(public_57d9c0);

#define public_434845 _public_434845
#define public_43486c _public_43486c

PROC_DECLARE(0x4347e0, internal_4347e0, public_4347e0);
extern "C" NAKED register_t __cdecl internal_4347e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+4]
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        push edi
        push ebx
        push eax
        push ecx
        call public_434720
        mov esi, eax
        xor ebp, ebp
        add esp, 0x10
        cmp esi, ebp
        jne public_43486c
        lea edx, ss:[esp+0x18]
        push edx
        call public_57d980
        movzx ecx, word ptr ss : [esp+0x1C]
        lea edx, ss:[esp+0x24]
        push edx
        lea edx, ss:[esp+0x24]
        push edx
        push ecx
        push eax
        mov dword ptr ss : [esp+0x34], ebp
        mov dword ptr ss : [esp+0x30], ebp
        call public_57d9c0
        add esp, 0x14
        test al, al
        je public_43486c
        mov eax, dword ptr ss : [esp+0x20]
        dec eax
        lea ecx, ds:[edi-1]
        cmp eax, ecx
        jb public_434845
        mov eax, ecx
        public_434845 : nop
        mov esi, dword ptr ss : [esp+0x1C]
        lea edx, ds:[eax+eax]
        mov ecx, edx
        mov ebp, ecx
        add esi, 2
        shr ecx, 2
        mov edi, ebx
        rep movsd
        mov ecx, ebp
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        pop ebp
        mov word ptr ds : [edx+ebx], 0
        pop ebx
        ret 
        public_43486c : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x4347e0)
    }
}

#undef public_434845
#undef public_43486c
