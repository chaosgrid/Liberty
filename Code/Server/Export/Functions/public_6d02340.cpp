#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0e670);

#define public_6d02371 _public_6d02371
#define public_6d0238b _public_6d0238b
#define public_6d023aa _public_6d023aa
#define public_6d023c2 _public_6d023c2
#define public_6d023cf _public_6d023cf
#define public_6d023fb _public_6d023fb
#define public_6d02403 _public_6d02403

PROC_DECLARE(0x6d02340, internal_6d02340, public_6d02340);
extern "C" NAKED register_t __cdecl internal_6d02340()
{
    __asm
    {
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0x24]
        test eax, eax
        je public_6d02403
        mov eax, dword ptr ss : [ebp-4]
        lea ecx, ss:[ebp-4]
        call dword ptr ds : [eax+0x160]
        test al, al
        jne public_6d02403
        cmp dword ptr ss : [esp+0x10], 0xFFFFFFFF
        jne public_6d02371
        mov dword ptr ss : [esp+0x10], 0
        public_6d02371 : nop
        push ebx
        push edi
        xor bl, bl
        call dword ptr ds : [public_6d641c0]
        test al, al
        mov edi, dword ptr ss : [esp+0x10]
        je public_6d0238b
        mov eax, dword ptr ss : [esp+0x18]
        test eax, eax
        jne public_6d023cf
        public_6d0238b : nop
        push esi
        mov esi, dword ptr ss : [ebp+0xC]
        mov ecx, esi
        call dword ptr ds : [public_6d6448c]
        cmp eax, edi
        jne public_6d023aa
        mov ecx, esi
        call dword ptr ds : [public_6d64488]
        cmp ax, word ptr ss : [esp+0x18]
        je public_6d023c2
        public_6d023aa : nop
        push edi
        mov ecx, esi
        mov bl, 1
        call dword ptr ds : [public_6d645dc]
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        mov ecx, esi
        call dword ptr ds : [public_6d645d8]
        public_6d023c2 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        test eax, eax
        pop esi
        jne public_6d023cf
        test bl, bl
        je public_6d023fb
        public_6d023cf : nop
        mov edx, dword ptr ss : [ebp-4]
        lea ecx, ss:[ebp-4]
        call dword ptr ds : [edx+0x20]
        mov edx, dword ptr ds : [public_6d6402c]
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, dword ptr ss : [ebp+0x24]
        push edi
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        call public_6d0e670
        public_6d023fb : nop
        pop edi
        pop ebx
        xor eax, eax
        pop ebp
        ret 0xC
        public_6d02403 : nop
        mov eax, 0xFFFFFFFB
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d02340)
    }
}

#undef public_6d02371
#undef public_6d0238b
#undef public_6d023aa
#undef public_6d023c2
#undef public_6d023cf
#undef public_6d023fb
#undef public_6d02403
