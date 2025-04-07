#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf5020);
CLANG_FORWARD_PROC_SYMBOL(public_6d0bcd0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60160);

#define public_6d0bd23 _public_6d0bd23
#define public_6d0bdb0 _public_6d0bdb0
#define public_6d0bdc2 _public_6d0bdc2
#define public_6d0bdc4 _public_6d0bdc4
#define public_6d0bdf6 _public_6d0bdf6
#define public_6d0be11 _public_6d0be11
#define public_6d0be33 _public_6d0be33

PROC_DECLARE(0x6d0bcd0, internal_6d0bcd0, public_6d0bcd0);
extern "C" NAKED register_t __cdecl internal_6d0bcd0()
{
    __asm
    {
        mov eax, 0x201C
        call public_6d60160
        push ebx
        mov ebx, dword ptr ss : [esp+0x202C]
        push ebp
        mov ebp, dword ptr ss : [esp+0x2034]
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x2040]
        xor esi, esi
        test ecx, 0x7F0000
        je public_6d0bd23
        mov eax, dword ptr ss : [esp+0x2034]
        push ecx
        mov ecx, dword ptr ss : [esp+0x2034]
        push ebp
        push ebx
        push eax
        push ecx
        lea ecx, ds:[edi+0x34]
        call public_6cf5020
        mov ecx, dword ptr ss : [esp+0x2040]
        mov esi, eax
        public_6d0bd23 : nop
        test ecx, 0xFDFF
        je public_6d0be33
        fld dword ptr ss : [esp+0x203C]
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x41
        jne public_6d0be11
        mov edx, dword ptr ds : [edi]
        push 0xFDFF
        mov ecx, edi
        call dword ptr ds : [edx+0xC]
        test eax, eax
        je public_6d0be33
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0x14], ecx
        mov ecx, dword ptr ds : [ebx+8]
        mov dword ptr ss : [esp+0x1C], ecx
        lea ecx, ss:[esp+0x24]
        push ecx
        mov dword ptr ss : [esp+0x1C], edx
        mov edx, dword ptr ss : [esp+0x2040]
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x24], edx
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x2C], 0x800
        call dword ptr ds : [edx+0x1C]
        mov eax, dword ptr ss : [esp+0x28]
        xor ebx, ebx
        test eax, eax
        jbe public_6d0be33
        lea ebp, ss:[esp+0x2C]
        lea ecx, ds:[ecx]
        public_6d0bdb0 : nop
        cmp esi, dword ptr ss : [esp+0x2034]
        jae public_6d0be33
        cmp ebx, eax
        jae public_6d0bdc2
        mov edi, dword ptr ss : [ebp]
        jmp public_6d0bdc4
        public_6d0bdc2 : nop
        xor edi, edi
        public_6d0bdc4 : nop
        mov edx, dword ptr ds : [edi]
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+0x88]
        test eax, eax
        jne public_6d0bdf6
        mov ecx, dword ptr ss : [esp+0x2040]
        test dword ptr ss : [esp+0x10], ecx
        je public_6d0bdf6
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ss : [esp+0x2030]
        mov dword ptr ds : [ecx+esi*4], eax
        inc esi
        public_6d0bdf6 : nop
        mov eax, dword ptr ss : [esp+0x28]
        inc ebx
        add ebp, 4
        cmp ebx, eax
        jb public_6d0bdb0
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x201C
        ret 0x14
        public_6d0be11 : nop
        mov eax, dword ptr ss : [esp+0x2034]
        mov edx, dword ptr ss : [esp+0x2030]
        push ecx
        push ebp
        push ebx
        sub eax, esi
        push eax
        lea eax, ds:[edx+esi*4]
        push eax
        lea ecx, ds:[edi+0x5C]
        call public_6cf5020
        add esi, eax
        public_6d0be33 : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x201C
        ret 0x14
        UNREACHABLE_TRAP(0x6d0bcd0)
    }
}

#undef public_6d0bd23
#undef public_6d0bdb0
#undef public_6d0bdc2
#undef public_6d0bdc4
#undef public_6d0bdf6
#undef public_6d0be11
#undef public_6d0be33
