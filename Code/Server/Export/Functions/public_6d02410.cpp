#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0e580);

#define public_6d02445 _public_6d02445
#define public_6d02461 _public_6d02461
#define public_6d024a5 _public_6d024a5
#define public_6d024b3 _public_6d024b3
#define public_6d024c4 _public_6d024c4
#define public_6d024e8 _public_6d024e8
#define public_6d024f1 _public_6d024f1

PROC_DECLARE(0x6d02410, internal_6d02410, public_6d02410);
extern "C" NAKED register_t __cdecl internal_6d02410()
{
    __asm
    {
        push ecx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x24]
        test eax, eax
        je public_6d024f1
        mov eax, dword ptr ds : [esi-4]
        lea ebp, ds:[esi-4]
        mov ecx, ebp
        call dword ptr ds : [eax+0x160]
        test al, al
        jne public_6d024f1
        cmp dword ptr ss : [esp+0x18], 0xFFFFFFFF
        jne public_6d02445
        mov dword ptr ss : [esp+0x18], 0
        public_6d02445 : nop
        push ebx
        mov byte ptr ss : [esp+0xF], 0
        call dword ptr ds : [public_6d641c0]
        test al, al
        mov ebx, dword ptr ss : [esp+0x14]
        je public_6d02461
        mov eax, dword ptr ss : [esp+0x1C]
        test eax, eax
        jne public_6d024c4
        public_6d02461 : nop
        mov eax, dword ptr ds : [esi+0xC]
        push edi
        push 0x20000
        lea ecx, ds:[eax+0xE4]
        call dword ptr ds : [public_6d64024]
        push eax
        call dword ptr ds : [public_6d645e4]
        mov edi, eax
        mov al, byte ptr ds : [edi+0x54]
        add esp, 4
        cmp al, bl
        je public_6d024b3
        test bl, bl
        mov byte ptr ss : [esp+0x13], 1
        je public_6d024a5
        mov eax, dword ptr ss : [esp+0x20]
        test eax, eax
        jne public_6d024a5
        mov edx, dword ptr ds : [esi]
        push 0
        push 0
        mov ecx, esi
        call dword ptr ds : [edx+0x54]
        public_6d024a5 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        push ebx
        mov ecx, edi
        call dword ptr ds : [public_6d645e0]
        public_6d024b3 : nop
        mov eax, dword ptr ss : [esp+0x20]
        test eax, eax
        pop edi
        jne public_6d024c4
        mov al, byte ptr ss : [esp+0xF]
        test al, al
        je public_6d024e8
        public_6d024c4 : nop
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x1C]
        push eax
        push ecx
        mov ecx, dword ptr ds : [esi+0x24]
        push ebx
        lea edx, ss:[esp+0x20]
        push edx
        call public_6d0e580
        public_6d024e8 : nop
        pop ebx
        pop esi
        xor eax, eax
        pop ebp
        pop ecx
        ret 0xC
        public_6d024f1 : nop
        pop esi
        mov eax, 0xFFFFFFFB
        pop ebp
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6d02410)
    }
}

#undef public_6d02445
#undef public_6d02461
#undef public_6d024a5
#undef public_6d024b3
#undef public_6d024c4
#undef public_6d024e8
#undef public_6d024f1
