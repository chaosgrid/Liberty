#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c4840);
CLANG_FORWARD_PROC_SYMBOL(public_4c4910);
CLANG_FORWARD_PROC_SYMBOL(public_4c4a10);
CLANG_FORWARD_PROC_SYMBOL(public_54a940);
CLANG_FORWARD_PROC_SYMBOL(public_5545a0);
CLANG_FORWARD_PROC_SYMBOL(public_554ab0);

#define public_54a97c _public_54a97c
#define public_54a97e _public_54a97e
#define public_54aa0c _public_54aa0c
#define public_54aa24 _public_54aa24
#define public_54aa66 _public_54aa66
#define public_54aa85 _public_54aa85
#define public_54aa87 _public_54aa87
#define public_54aaea _public_54aaea
#define public_54ab15 _public_54ab15

PROC_DECLARE(0x54a940, internal_54a940, public_54a940);
extern "C" NAKED register_t __cdecl internal_54a940()
{
    __asm
    {
        mov eax, dword ptr ds : [public_67977c]
        sub esp, 0x40
        push ebx
        xor ebx, ebx
        cmp eax, ebx
        je public_54aaea
        mov eax, dword ptr ds : [public_679744]
        cmp eax, ebx
        push esi
        je public_54a97c
        add eax, 0xFFFFFFF8
        cmp eax, ebx
        je public_54a97c
        add eax, 0xC
        cmp eax, ebx
        je public_54a97c
        mov esi, dword ptr ds : [eax+4]
        cmp esi, ebx
        je public_54a97c
        mov eax, dword ptr ds : [esi+0x4C]
        and eax, 1
        cmp al, 1
        je public_54a97e
        public_54a97c : nop
        xor esi, esi
        public_54a97e : nop
        call dword ptr ds : [public_5c60f8]
        mov ecx, dword ptr ds : [public_5c692c]
        mov eax, dword ptr ds : [public_5c6928]
        mov dword ptr ss : [esp+0x14], 0x3F800000
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x18], edx
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x1C], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x20], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], 2
        mov byte ptr ss : [esp+0x30], bl
        mov byte ptr ss : [esp+0x31], 1
        mov byte ptr ss : [esp+0x3A], bl
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x44], 0
        mov byte ptr ss : [esp+0x32], bl
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x6C]
        fstp dword ptr ss : [esp+0x14]
        mov byte ptr ss : [esp+0x3A], 1
        cmp dword ptr ds : [esi+0x54], ebx
        je public_54aa0c
        lea eax, ss:[esp+8]
        push esi
        push eax
        call dword ptr ds : [public_5c6920]
        add esp, 8
        jmp public_54aa24
        public_54aa0c : nop
        mov dword ptr ss : [esp+8], 0
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+0x10], 0
        public_54aa24 : nop
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+0x10]
        push esi
        mov dword ptr ss : [esp+0x40], ecx
        mov dword ptr ss : [esp+0x44], edx
        mov dword ptr ss : [esp+0x48], eax
        call dword ptr ds : [public_5c65b8]
        lea ecx, ss:[esp+0x20]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        push esi
        mov byte ptr ss : [esp+0x41], al
        call dword ptr ds : [public_5c6b3c]
        push esi
        call dword ptr ds : [public_5c69d0]
        add esp, 0x14
        lea edx, ss:[esp+0x32]
        public_54aa66 : nop
        mov cl, byte ptr ds : [eax]
        inc eax
        mov byte ptr ds : [edx], cl
        inc edx
        cmp cl, bl
        jne public_54aa66
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x74]
        mov eax, dword ptr ds : [public_679744]
        cmp eax, ebx
        je public_54aa85
        add eax, 0xFFFFFFF8
        jmp public_54aa87
        public_54aa85 : nop
        xor eax, eax
        public_54aa87 : nop
        push eax
        call public_554ab0
        mov ecx, dword ptr ds : [public_67977c]
        push ecx
        call public_4c4840
        mov edx, dword ptr ds : [public_67977c]
        push edx
        call public_5545a0
        mov eax, dword ptr ds : [public_67977c]
        add esp, 0xC
        mov dword ptr ss : [esp+0x28], eax
        mov edx, dword ptr ds : [esi]
        push ebx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x78]
        mov eax, dword ptr ds : [public_673344]
        mov ecx, dword ptr ds : [public_67ecd0]
        mov edx, dword ptr ds : [ecx]
        push eax
        mov eax, dword ptr ds : [public_679774]
        push eax
        call dword ptr ds : [edx+0xBC]
        pop esi
        mov dword ptr ds : [public_679780], ebx
        mov dword ptr ds : [public_67977c], ebx
        pop ebx
        add esp, 0x40
        ret 
        public_54aaea : nop
        cmp dword ptr ds : [public_679784], ebx
        je public_54ab15
/*FIXUP push offset public_679784 @0x54aaf2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_679784
        call public_4c4910
        push ebx
        call public_4c4a10
        add esp, 8
        mov dword ptr ds : [public_679778], 3
        mov dword ptr ds : [public_679784], ebx
        public_54ab15 : nop
        pop ebx
        add esp, 0x40
        ret 
        UNREACHABLE_TRAP(0x54a940)
    }
}

#undef public_54a97c
#undef public_54a97e
#undef public_54aa0c
#undef public_54aa24
#undef public_54aa66
#undef public_54aa85
#undef public_54aa87
#undef public_54aaea
#undef public_54ab15
