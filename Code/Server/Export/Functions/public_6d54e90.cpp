#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d006c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d0e8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d4efc0);

#define public_6d54f5a _public_6d54f5a
#define public_6d54f62 _public_6d54f62
#define public_6d54f9f _public_6d54f9f
#define public_6d54fa4 _public_6d54fa4

PROC_DECLARE(0x6d54e90, internal_6d54e90, public_6d54e90);
extern "C" NAKED register_t __cdecl internal_6d54e90()
{
    __asm
    {
        push ecx
        mov ecx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [ecx]
        test ecx, ecx
        push esi
        mov eax, 0xFFFFFFFE
        jbe public_6d54fa4
        mov esi, dword ptr ds : [public_6d90264]
        lea edx, ds:[ecx-1]
        cmp edx, esi
        jae public_6d54fa4
        mov esi, dword ptr ds : [public_6d90260]
        imul edx, 0x418
        push edi
        mov edi, dword ptr ds : [edx+esi+0x348]
        test edi, edi
        pop edi
        je public_6d54fa4
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 1
        jne public_6d54f9f
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_6d65520]
        fnstsw ax
        test ah, 0x41
        jp public_6d54f9f
        imul ecx, 0x418
        lea eax, ds:[ecx+esi]
        mov edx, dword ptr ds : [eax-0x34]
        test edx, edx
        lea ecx, ds:[eax-0x34]
        je public_6d54f62
        lea edx, ss:[esp+4]
        push edx
        lea eax, ss:[esp+0x10]
        push eax
        push ecx
        call public_6d006c0
        add esp, 0xC
        test al, al
        je public_6d54f5a
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x14]
        push ecx
        mov ecx, dword ptr ss : [esp+0x14]
        push edx
        mov edx, dword ptr ds : [ecx]
        push eax
        push edx
        call dword ptr ds : [public_6d644d4]
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 4
        push eax
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        call public_6d0e8d0
        xor eax, eax
        pop esi
        pop ecx
        ret 
        public_6d54f5a : nop
        mov eax, 0xFFFFFFFE
        pop esi
        pop ecx
        ret 
        public_6d54f62 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx]
        push edx
        lea esi, ds:[eax-0x418]
        call dword ptr ds : [public_6d644d4]
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x1C]
        add esp, 4
        push 1
        push ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        push 0
        push edx
        mov edx, dword ptr ds : [public_6d64948]
        push ecx
        push edx
        push eax
        mov ecx, esi
        call public_6d4efc0
        xor eax, eax
        pop esi
        pop ecx
        ret 
        public_6d54f9f : nop
        mov eax, 0xFFFFFFFC
        public_6d54fa4 : nop
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6d54e90)
    }
}

#undef public_6d54f5a
#undef public_6d54f62
#undef public_6d54f9f
#undef public_6d54fa4
