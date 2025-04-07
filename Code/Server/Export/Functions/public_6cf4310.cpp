#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d06cd0);

#define public_6cf4323 _public_6cf4323
#define public_6cf4325 _public_6cf4325
#define public_6cf4446 _public_6cf4446

PROC_DECLARE(0x6cf4310, internal_6cf4310, public_6cf4310);
extern "C" NAKED register_t __cdecl internal_6cf4310()
{
    __asm
    {
        sub esp, 0x44
        push ebx
        push ebp
        push esi
        mov esi, ecx
        xor ebx, ebx
        cmp esi, ebx
        je public_6cf4323
        lea eax, ds:[esi+0x60]
        jmp public_6cf4325
        public_6cf4323 : nop
        xor eax, eax
        public_6cf4325 : nop
        mov ecx, dword ptr ds : [esi+0x10]
        push ecx
        push eax
        call dword ptr ds : [public_6d6444c]
        mov ecx, dword ptr ds : [esi+0x10]
        mov ebp, dword ptr ds : [public_6d6419c]
        add esp, 8
        call ebp
        fld dword ptr ds : [eax+0xA4]
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x41
        jne public_6cf4446
        mov ecx, dword ptr ds : [esi+0x28]
        push edi
        mov dword ptr ss : [esp+0x10], ebx
        mov byte ptr ss : [esp+0x14], bl
        mov byte ptr ss : [esp+0x15], bl
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x50], ebx
        mov dword ptr ss : [esp+0x4C], 0x3F800000
        mov dword ptr ss : [esp+0x3C], 0x3F800000
        mov dword ptr ss : [esp+0x2C], 0x3F800000
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x30], 0
        mov byte ptr ss : [esp+0x16], bl
        call public_6d06cd0
        mov edx, dword ptr ds : [esi+0x10]
        push edx
        mov dword ptr ss : [esp+0x14], eax
        call dword ptr ds : [public_6d64234]
        push eax
        lea eax, ss:[esp+0x1E]
        push eax
        call dword ptr ds : [public_6d64c74]
        mov edx, dword ptr ds : [esi]
        add esp, 0xC
        mov ecx, esi
        call dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x20], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x24], edx
        mov eax, dword ptr ds : [eax+8]
        lea ecx, ds:[esi+0x70]
        mov dword ptr ss : [esp+0x50], ecx
        mov ecx, dword ptr ds : [esi+0x10]
        lea edi, ds:[esi+0x74]
        push edi
        mov dword ptr ss : [esp+0x2C], eax
        mov byte ptr ss : [esp+0x19], 1
        call ebp
        fld dword ptr ds : [eax+0xA4]
        fsqrt 
        push ecx
        lea edx, ss:[esp+0x18]
        fstp dword ptr ss : [esp]
        push edx
        call dword ptr ds : [public_6d64448]
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [esi+0x10]
        push eax
        push ecx
        call dword ptr ds : [public_6d64444]
        add esp, 0x14
        pop edi
        public_6cf4446 : nop
        pop esi
        pop ebp
        pop ebx
        add esp, 0x44
        ret 
        UNREACHABLE_TRAP(0x6cf4310)
    }
}

#undef public_6cf4323
#undef public_6cf4325
#undef public_6cf4446
