#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0e600);

#define public_6d02537 _public_6d02537
#define public_6d02551 _public_6d02551
#define public_6d0259a _public_6d0259a
#define public_6d025b8 _public_6d025b8
#define public_6d025e4 _public_6d025e4
#define public_6d02600 _public_6d02600
#define public_6d02618 _public_6d02618
#define public_6d0261c _public_6d0261c
#define public_6d0262f _public_6d0262f
#define public_6d02633 _public_6d02633
#define public_6d02653 _public_6d02653
#define public_6d02660 _public_6d02660

PROC_DECLARE(0x6d02500, internal_6d02500, public_6d02500);
extern "C" NAKED register_t __cdecl internal_6d02500()
{
    __asm
    {
        sub esp, 0x1C
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x24]
        xor esi, esi
        cmp eax, esi
        je public_6d02660
        mov eax, dword ptr ds : [edi-4]
        lea ecx, ds:[edi-4]
        call dword ptr ds : [eax+0x160]
        test al, al
        jne public_6d02660
        cmp dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        mov dword ptr ss : [esp+0xC], esi
        jne public_6d02537
        mov dword ptr ss : [esp+0x2C], esi
        public_6d02537 : nop
        push ebx
        mov byte ptr ss : [esp+0xF], 0
        call dword ptr ds : [public_6d641c0]
        test al, al
        je public_6d02551
        cmp dword ptr ss : [esp+0x30], esi
        jne public_6d0262f
        public_6d02551 : nop
        mov eax, dword ptr ds : [edi+0xC]
        push 0x20000
        lea ecx, ds:[eax+0xE4]
        call dword ptr ds : [public_6d64024]
        mov esi, eax
        mov edx, dword ptr ds : [esi]
        mov bl, byte ptr ds : [esi+0x54]
        mov ecx, esi
        call dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [esp+0x30]
        test ecx, ecx
        jne public_6d025b8
        mov cl, byte ptr ss : [esp+0x2C]
        test cl, cl
        je public_6d025b8
        test bl, bl
        je public_6d0259a
        pop ebx
        mov dword ptr ss : [esp+0xC], 0xFFFFFFFB
        mov eax, dword ptr ss : [esp+0xC]
        pop edi
        pop esi
        add esp, 0x1C
        ret 8
        public_6d0259a : nop
        test al, al
        jne public_6d025b8
        mov edx, dword ptr ds : [edi]
        xor eax, eax
        mov ax, word ptr ds : [esi+8]
        push 0
        push 1
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], eax
        lea eax, ss:[esp+0x1C]
        push eax
        call dword ptr ds : [edx+0x4C]
        public_6d025b8 : nop
        push ebp
        push 0x400
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_6d64204]
        mov eax, dword ptr ds : [edi+0xC]
        mov ebp, dword ptr ds : [public_6d64200]
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ds:[eax+0xE4]
        call ebp
        mov esi, eax
        test esi, esi
        je public_6d02618
        public_6d025e4 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+4]
        mov ebx, dword ptr ss : [esp+0x30]
        cmp al, bl
        je public_6d02600
        mov eax, dword ptr ds : [esi]
        push ebx
        mov ecx, esi
        mov byte ptr ss : [esp+0x17], 1
        call dword ptr ds : [eax+0x30]
        public_6d02600 : nop
        mov eax, dword ptr ds : [edi+0xC]
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ds:[eax+0xE4]
        call ebp
        mov esi, eax
        test esi, esi
        jne public_6d025e4
        jmp public_6d0261c
        public_6d02618 : nop
        mov ebx, dword ptr ss : [esp+0x30]
        public_6d0261c : nop
        mov eax, dword ptr ss : [esp+0x34]
        test eax, eax
        pop ebp
        jne public_6d02633
        mov al, byte ptr ss : [esp+0xF]
        test al, al
        je public_6d02653
        jmp public_6d02633
        public_6d0262f : nop
        mov ebx, dword ptr ss : [esp+0x2C]
        public_6d02633 : nop
        mov edx, dword ptr ds : [edi-4]
        lea ecx, ds:[edi-4]
        call dword ptr ds : [edx+0x20]
        mov dword ptr ss : [esp+0x2C], eax
        lea eax, ss:[esp+0x30]
        push eax
        push ebx
        lea ecx, ss:[esp+0x34]
        push ecx
        mov ecx, dword ptr ds : [edi+0x24]
        call public_6d0e600
        public_6d02653 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop ebx
        pop edi
        pop esi
        add esp, 0x1C
        ret 8
        public_6d02660 : nop
        pop edi
        mov eax, 0xFFFFFFFB
        pop esi
        add esp, 0x1C
        ret 8
        UNREACHABLE_TRAP(0x6d02500)
    }
}

#undef public_6d02537
#undef public_6d02551
#undef public_6d0259a
#undef public_6d025b8
#undef public_6d025e4
#undef public_6d02600
#undef public_6d02618
#undef public_6d0261c
#undef public_6d0262f
#undef public_6d02633
#undef public_6d02653
#undef public_6d02660
