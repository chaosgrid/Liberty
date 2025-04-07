#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a1b50);
CLANG_FORWARD_PROC_SYMBOL(public_4c4da0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);

#define public_4a1be0 _public_4a1be0
#define public_4a1be8 _public_4a1be8
#define public_4a1bea _public_4a1bea
#define public_4a1c07 _public_4a1c07
#define public_4a1c24 _public_4a1c24
#define public_4a1c72 _public_4a1c72
#define public_4a1ca3 _public_4a1ca3
#define public_4a1ca5 _public_4a1ca5
#define public_4a1cca _public_4a1cca

PROC_DECLARE(0x4a1b50, internal_4a1b50, public_4a1b50);
extern "C" NAKED register_t __cdecl internal_4a1b50()
{
    __asm
    {
        mov eax, 0x2028
        call public_5b7e90
        mov ecx, dword ptr ss : [esp+0x202C]
        mov eax, dword ptr ds : [ecx]
        push esi
        push edi
        call dword ptr ds : [eax+0x1C]
        xor esi, esi
        test eax, eax
        mov dword ptr ss : [esp+0x14], esi
        je public_4a1cca
        mov ecx, dword ptr ss : [esp+0x2038]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x18], edx
        mov edx, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x20], ecx
        lea ecx, ss:[esp+0x28]
        push ecx
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x20], edx
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        mov dword ptr ss : [esp+0x34], esi
        mov dword ptr ss : [esp+0x30], 0x800
        mov dword ptr ss : [esp+0x2C], 0x3DCCCCCD
        call dword ptr ds : [edx+0x1C]
        test eax, eax
        jbe public_4a1cca
        mov eax, dword ptr ss : [esp+0x2C]
        xor edi, edi
        test eax, eax
        mov dword ptr ss : [esp+0x10], 0x60AD78EC
        jbe public_4a1cca
        cmp edi, eax
        lea edx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0xC], edx
        jae public_4a1be8
        public_4a1be0 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ds : [eax]
        jmp public_4a1bea
        public_4a1be8 : nop
        xor esi, esi
        public_4a1bea : nop
        mov al, byte ptr ss : [esp+0x203C]
        test al, al
        je public_4a1c07
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x84]
        test eax, eax
        je public_4a1ca5
        public_4a1c07 : nop
        mov al, byte ptr ss : [esp+0x2040]
        test al, al
        je public_4a1c24
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x88]
        test eax, eax
        je public_4a1ca5
        public_4a1c24 : nop
        mov al, byte ptr ss : [esp+0x2044]
        test al, al
        jne public_4a1c72
        mov edx, dword ptr ds : [esi]
        push 0
        push 1
        lea ecx, ss:[esp+0x13]
        push ecx
        mov ecx, esi
        mov byte ptr ss : [esp+0x17], 0
        call dword ptr ds : [edx+4]
        push eax
        call public_4c4da0
        mov eax, dword ptr ds : [esi]
        add esp, 0x10
        mov ecx, esi
        call dword ptr ds : [eax+0x80]
        mov cl, byte ptr ss : [esp+0xB]
        or cl, al
        test cl, 1
        je public_4a1ca5
        mov al, byte ptr ss : [esp+0x2040]
        test al, al
        je public_4a1c72
        test cl, 8
        je public_4a1ca5
        public_4a1c72 : nop
        mov eax, dword ptr ss : [esp+0x2038]
        mov edx, dword ptr ds : [esi]
        push 0
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x38]
        test al, al
        je public_4a1ca5
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x30]
        fcom dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 5
        jp public_4a1ca3
        fstp dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x14], esi
        jmp public_4a1ca5
        public_4a1ca3 : nop
        fstp st(0)
        public_4a1ca5 : nop
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+0x2C]
        inc edi
        add edx, 4
        cmp edi, eax
        mov dword ptr ss : [esp+0xC], edx
        jb public_4a1be0
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        add esp, 0x2028
        ret 
        public_4a1cca : nop
        pop edi
        mov eax, esi
        pop esi
        add esp, 0x2028
        ret 
        UNREACHABLE_TRAP(0x4a1b50)
    }
}

#undef public_4a1be0
#undef public_4a1be8
#undef public_4a1bea
#undef public_4a1c07
#undef public_4a1c24
#undef public_4a1c72
#undef public_4a1ca3
#undef public_4a1ca5
#undef public_4a1cca
