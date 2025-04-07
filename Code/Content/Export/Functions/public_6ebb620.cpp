#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebb620);
CLANG_FORWARD_PROC_SYMBOL(public_6f324d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3e020);

#define public_6ebb6c0 _public_6ebb6c0
#define public_6ebb6cc _public_6ebb6cc
#define public_6ebb741 _public_6ebb741
#define public_6ebb77b _public_6ebb77b
#define public_6ebb7e4 _public_6ebb7e4

PROC_DECLARE(0x6ebb620, internal_6ebb620, public_6ebb620);
extern "C" NAKED register_t __cdecl internal_6ebb620()
{
    __asm
    {
        sub esp, 0xBA8
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xBB4]
        xor ebx, ebx
        cmp ebp, ebx
        push esi
        je public_6ebb7e4
        mov esi, dword ptr ds : [public_6fb309c]
        lea ecx, ss:[esp+0x10]
        call esi
        mov eax, dword ptr ss : [ebp+4]
        lea ecx, ss:[esp+0x10]
        push ecx
        push eax
        call dword ptr ds : [public_6fb3634]
        add esp, 8
        test al, al
        je public_6ebb7e4
        mov eax, dword ptr ss : [esp+0xBBC]
        sub eax, ebx
        je public_6ebb741
        dec eax
        jne public_6ebb77b
        lea ecx, ss:[esp+0x3E8]
        call esi
        mov edx, dword ptr ss : [ebp+0x1CC]
        lea ecx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0xC], edx
        call dword ptr ds : [public_6fb3050]
        test al, al
        je public_6ebb6c0
        mov eax, dword ptr ss : [ebp+0x138]
/*FIXUP push offset public_6fd0830 @0x6ebb69d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd0830
        push eax
        call public_6f324d0
        add esp, 8
        cmp eax, ebx
        je public_6ebb77b
        lea ecx, ss:[esp+0x3E8]
        push ecx
        add eax, 0xC
        jmp public_6ebb6cc
        public_6ebb6c0 : nop
        lea edx, ss:[esp+0x3E8]
        push edx
        lea eax, ss:[esp+0x10]
        public_6ebb6cc : nop
        push eax
        call public_6f3e020
        add esp, 8
        cmp al, 1
        jne public_6ebb77b
        mov ecx, dword ptr ss : [esp+0x7AC]
        mov edx, dword ptr ss : [esp+0x7B0]
        mov al, byte ptr ss : [esp+0x7B4]
        mov dword ptr ss : [esp+0x3D4], ecx
        mov cl, byte ptr ss : [esp+0x7B5]
        mov dword ptr ss : [esp+0x3D8], edx
        mov edx, dword ptr ss : [esp+0x68C]
        mov byte ptr ss : [esp+0x3DC], al
        mov eax, dword ptr ss : [esp+0x688]
        mov byte ptr ss : [esp+0x3DD], cl
        mov ecx, dword ptr ss : [esp+0x760]
        mov dword ptr ss : [esp+0x2B4], edx
        mov dword ptr ss : [esp+0x2B0], eax
        mov dword ptr ss : [esp+0x388], ecx
        jmp public_6ebb77b
        public_6ebb741 : nop
        mov eax, 4
        mov dword ptr ss : [esp+0x3D4], eax
        mov dword ptr ss : [esp+0x3D8], 0
        mov byte ptr ss : [esp+0x3DC], bl
        mov byte ptr ss : [esp+0x3DD], bl
        mov dword ptr ss : [esp+0x2B4], eax
        mov dword ptr ss : [esp+0x2B0], ebx
        mov dword ptr ss : [esp+0x388], ebx
        public_6ebb77b : nop
        push edi
        lea ecx, ss:[esp+0x7C4]
        call dword ptr ds : [public_6fb3098]
        mov eax, dword ptr ss : [ebp+4]
        mov byte ptr ss : [esp+0x7DC], 1
        mov ecx, 0xF6
        lea esi, ss:[esp+0x14]
        lea edi, ss:[esp+0x7E0]
        push eax
        rep movsd
        call dword ptr ds : [public_6fb3638]
        lea edx, ss:[ebp+0x174]
        lea ecx, ss:[esp+0x7C8]
        mov dword ptr ss : [esp+0x7D8], edx
        mov edx, dword ptr ss : [ebp+4]
        mov dword ptr ss : [esp+0x7D4], eax
        push ecx
        lea eax, ss:[ebp+0x118]
        push edx
        mov dword ptr ss : [esp+0x7E4], eax
        call dword ptr ds : [public_6fb363c]
        add esp, 0xC
        pop edi
        public_6ebb7e4 : nop
        pop esi
        pop ebp
        pop ebx
        add esp, 0xBA8
        ret 8
        UNREACHABLE_TRAP(0x6ebb620)
    }
}

#undef public_6ebb6c0
#undef public_6ebb6cc
#undef public_6ebb741
#undef public_6ebb77b
#undef public_6ebb7e4
