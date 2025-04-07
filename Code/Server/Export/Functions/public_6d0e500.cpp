#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf7370);
CLANG_FORWARD_PROC_SYMBOL(public_6d0e500);

#define public_6d0e520 _public_6d0e520
#define public_6d0e564 _public_6d0e564
#define public_6d0e571 _public_6d0e571

PROC_DECLARE(0x6d0e500, internal_6d0e500, public_6d0e500);
extern "C" NAKED register_t __cdecl internal_6d0e500()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ds : [ecx+0xC]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+4], ecx
        je public_6d0e571
        push ebx
        mov bl, byte ptr ss : [esp+0x20]
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        nop 
        lea esp, ss:[esp]
        public_6d0e520 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [esi+0x40]
        cmp eax, dword ptr ds : [ecx]
        je public_6d0e564
        mov edx, dword ptr ds : [edi]
        push edx
        lea ecx, ds:[esi+8]
        call public_6cf7370
        test al, al
        je public_6d0e564
        mov ecx, dword ptr ss : [esp+0x20]
        mov dx, word ptr ds : [ecx]
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov word ptr ss : [esp+0x14], dx
        lea edx, ss:[esp+0x10]
        push edx
        mov edx, dword ptr ds : [esi+0x40]
        mov dword ptr ss : [esp+0x14], eax
        mov byte ptr ss : [esp+0x1A], bl
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+4]
        public_6d0e564 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [eax+0xC]
        jne public_6d0e520
        pop edi
        pop ebx
        public_6d0e571 : nop
        pop esi
        add esp, 0xC
        ret 0x10
        UNREACHABLE_TRAP(0x6d0e500)
    }
}

#undef public_6d0e520
#undef public_6d0e564
#undef public_6d0e571
