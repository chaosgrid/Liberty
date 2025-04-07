#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d53360);
CLANG_FORWARD_PROC_SYMBOL(public_6d5e1e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60150);

#define public_6d5f62e _public_6d5f62e
#define public_6d5f668 _public_6d5f668
#define public_6d5f690 _public_6d5f690
#define public_6d5f698 _public_6d5f698

PROC_DECLARE(0x6d5f5e0, internal_6d5f5e0, public_6d5f5e0);
extern "C" NAKED register_t __cdecl internal_6d5f5e0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov ebp, 0xFFFFFFFE
        xor edi, edi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call public_6d5e1e0
        test al, al
        mov esi, dword ptr ss : [esp+0x18]
        jne public_6d5f62e
        mov eax, dword ptr ds : [esi]
        push eax
        call dword ptr ds : [public_6d64a20]
        mov edi, eax
        add esp, 4
        test edi, 0x3FFFFFFF
        je public_6d5f62e
        lea ecx, ss:[esp+0x10]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        mov dword ptr ss : [esp+0x20], edi
        call dword ptr ds : [public_6d643a0]
        add esp, 8
        public_6d5f62e : nop
        fld dword ptr ss : [esp+0x1C]
        call public_6d60150
        mov ebx, eax
        push ebx
        push esi
        call dword ptr ds : [public_6d64a28]
        add esp, 8
        test eax, eax
        jne public_6d5f698
        test edi, 0x3FFFFFFF
        je public_6d5f690
        cmp ebx, dword ptr ss : [esp+0x10]
        je public_6d5f690
        push 0
        mov ecx, offset public_6d90260
        call public_6d53360
        mov esi, eax
        test esi, esi
        je public_6d5f690
        public_6d5f668 : nop
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [esi+0x348]
        mov eax, dword ptr ds : [ecx]
        push ebx
        push edi
        push edx
        call dword ptr ds : [eax+0x1D4]
        push esi
        mov ecx, offset public_6d90260
        call public_6d53360
        mov esi, eax
        test esi, esi
        jne public_6d5f668
        public_6d5f690 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        pop ecx
        ret 
        public_6d5f698 : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6d5f5e0)
    }
}

#undef public_6d5f62e
#undef public_6d5f668
#undef public_6d5f690
#undef public_6d5f698
