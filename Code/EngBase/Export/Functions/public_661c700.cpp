#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661af30);
CLANG_FORWARD_PROC_SYMBOL(public_661c270);
CLANG_FORWARD_PROC_SYMBOL(public_661caa0);
CLANG_FORWARD_PROC_SYMBOL(public_6628190);

#define public_661c810 _public_661c810
#define public_661c879 _public_661c879
#define public_661c88c _public_661c88c
#define public_661c917 _public_661c917
#define public_661c954 _public_661c954
#define public_661c9d3 _public_661c9d3
#define public_661ca0a _public_661ca0a
#define public_661ca5a _public_661ca5a

PROC_DECLARE(0x661c700, internal_661c700, public_661c700);
extern "C" NAKED register_t __cdecl internal_661c700()
{
    __asm
    {
        sub esp, 0xD4
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xE0]
        push esi
        push edi
        push ebp
        mov ebx, ecx
        call public_661af30
        cmp dword ptr ds : [ebx+8], 1
        jne public_661ca5a
        fld dword ptr ss : [ebp]
        fcomp dword ptr ds : [public_66291e0]
        fnstsw ax
        test ah, 0x44
        jnp public_661c9d3
        test byte ptr ss : [ebp+4], 0x40
        jne public_661c9d3
        mov eax, dword ptr ds : [ebx+0x24]
        lea edx, ss:[esp+0x30]
        fld dword ptr ds : [ebx+0x1C]
        mov ecx, dword ptr ds : [eax]
        push edx
        lea edx, ss:[esp+0x30]
        push edx
        lea edx, ss:[esp+0x30]
        push edx
        push ecx
        fstp dword ptr ss : [esp]
        push eax
        call dword ptr ds : [ecx+0x18]
        fld dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [ebx]
        sub esp, 8
        fstp qword ptr ss : [esp]
        push ecx
        lea ecx, ss:[esp+0x68]
        push edx
        push ecx
        mov ecx, ebx
        call dword ptr ds : [eax]
        fld dword ptr ds : [ebx+0x30]
        fmul dword ptr ds : [ebx+0x2C]
        fld dword ptr ss : [esp+0x64]
        sub esp, 0xC
        lea ecx, ss:[esp+0x1C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x6C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x68]
        fmul st, st(1)
        fstp dword ptr ss : [esp]
        fstp st(0)
        call public_661c270
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [ebp+0x18]
        mov dword ptr ss : [esp+0x34], edx
        mov edx, dword ptr ss : [esp+0x68]
        mov dword ptr ss : [esp+0x38], eax
        mov eax, dword ptr ss : [esp+0x6C]
        mov dword ptr ss : [esp+0x3C], ecx
        mov ecx, dword ptr ss : [esp+0x70]
        mov dword ptr ss : [esp+0x4C], edx
        mov edx, dword ptr ss : [esp+0x74]
        test esi, esi
        mov dword ptr ss : [esp+0x50], eax
        mov dword ptr ss : [esp+0x54], ecx
        mov dword ptr ss : [esp+0x58], edx
        je public_661c879
        lea edi, ds:[ebx+0x3C]
        mov ecx, 9
        rep movsd
        mov eax, dword ptr ds : [public_662acf4]
        test eax, eax
        jne public_661c810
        call public_6628190
        mov dword ptr ds : [public_662acf4], eax
        public_661c810 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x34]
        push ecx
        lea ecx, ds:[ebx+0x3C]
        push ecx
        lea ecx, ss:[esp+0x18]
        push ecx
        push eax
        call dword ptr ds : [edx+0x2C]
        mov eax, dword ptr ss : [ebp+0x18]
        sub esp, 0xC
        add eax, 0x24
        lea ecx, ss:[esp+0x28]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax]
        fsub dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp]
        call public_661c270
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x24]
        add ebx, 0x60
        pop edi
        pop esi
        mov dword ptr ds : [ebx], edx
        pop ebp
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], ecx
        pop ebx
        add esp, 0xD4
        ret 4
        public_661c879 : nop
        mov eax, dword ptr ds : [public_662acf4]
        test eax, eax
        jne public_661c88c
        call public_6628190
        mov dword ptr ds : [public_662acf4], eax
        public_661c88c : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x4C]
        push ecx
        lea ecx, ss:[esp+0x7C]
        push ecx
        push eax
        call dword ptr ds : [edx+0x54]
        mov edx, dword ptr ss : [esp+0x98]
        mov eax, dword ptr ss : [esp+0x8C]
        mov ecx, dword ptr ss : [esp+0x80]
        push edx
        mov edx, dword ptr ss : [esp+0x98]
        push eax
        mov eax, dword ptr ss : [esp+0x90]
        push ecx
        mov ecx, dword ptr ss : [esp+0x88]
        push edx
        mov edx, dword ptr ss : [esp+0xA0]
        push eax
        mov eax, dword ptr ss : [esp+0x98]
        push ecx
        mov ecx, dword ptr ss : [esp+0x90]
        push edx
        push eax
        push ecx
        lea ecx, ss:[esp+0xC0]
        call public_661caa0
        mov eax, dword ptr ds : [public_662acec]
        mov ecx, dword ptr ds : [ebx+0x14]
        push ecx
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+0x98]
        mov esi, eax
        mov eax, dword ptr ds : [public_662acf4]
        test eax, eax
        jne public_661c917
        call public_6628190
        mov dword ptr ds : [public_662acf4], eax
        public_661c917 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x9C]
        push ecx
        lea ecx, ss:[esp+0xC4]
        push esi
        push ecx
        push eax
        call dword ptr ds : [edx+0x20]
        lea ebp, ds:[ebx+0x3C]
        mov ecx, 9
        lea esi, ss:[esp+0xC0]
        mov edi, ebp
        rep movsd
        mov eax, dword ptr ds : [public_662acf4]
        test eax, eax
        jne public_661c954
        call public_6628190
        mov dword ptr ds : [public_662acf4], eax
        public_661c954 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x34]
        push ecx
        lea ecx, ss:[esp+0x44]
        push ebp
        push ecx
        push eax
        call dword ptr ds : [edx+0x2C]
        mov eax, dword ptr ss : [esp+0x44]
        mov ecx, dword ptr ss : [esp+0x48]
        mov edx, dword ptr ss : [esp+0x40]
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ds : [public_662acec]
        mov dword ptr ss : [esp+0x24], ecx
        mov ecx, dword ptr ds : [ebx+0x14]
        mov dword ptr ss : [esp+0x1C], edx
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x90]
        fld dword ptr ds : [eax]
        fsub dword ptr ss : [esp+0x1C]
        add ebx, 0x60
        pop edi
        pop esi
        pop ebp
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+4]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [ebx], edx
        fstp dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], ecx
        pop ebx
        add esp, 0xD4
        ret 4
        public_661c9d3 : nop
        mov esi, dword ptr ss : [ebp+0x18]
        test esi, esi
        je public_661ca0a
        lea edi, ds:[ebx+0x3C]
        mov ecx, 9
        rep movsd
        mov edx, dword ptr ss : [ebp+0x18]
        pop edi
        add edx, 0x24
        add ebx, 0x60
        pop esi
        pop ebp
        mov eax, dword ptr ds : [edx]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [ebx+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [ebx+8], edx
        pop ebx
        add esp, 0xD4
        ret 4
        public_661ca0a : nop
        mov eax, dword ptr ds : [public_662acec]
        mov edx, dword ptr ds : [ebx+0x14]
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x98]
        mov edx, dword ptr ds : [ebx+0x14]
        lea edi, ds:[ebx+0x3C]
        mov ecx, 9
        mov esi, eax
        rep movsd
        mov eax, dword ptr ds : [public_662acec]
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x90]
        mov ecx, dword ptr ds : [eax]
        add ebx, 0x60
        pop edi
        pop esi
        mov dword ptr ds : [ebx], ecx
        mov edx, dword ptr ds : [eax+4]
        pop ebp
        mov dword ptr ds : [ebx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ebx+8], eax
        pop ebx
        add esp, 0xD4
        ret 4
        public_661ca5a : nop
        mov eax, 0x3F800000
        pop edi
        mov dword ptr ds : [ebx+0x5C], eax
        mov dword ptr ds : [ebx+0x4C], eax
        mov dword ptr ds : [ebx+0x3C], eax
        xor eax, eax
        mov dword ptr ds : [ebx+0x58], eax
        mov dword ptr ds : [ebx+0x54], eax
        mov dword ptr ds : [ebx+0x50], eax
        mov dword ptr ds : [ebx+0x48], eax
        mov dword ptr ds : [ebx+0x44], eax
        mov dword ptr ds : [ebx+0x40], eax
        pop esi
        mov dword ptr ds : [ebx+0x68], eax
        mov dword ptr ds : [ebx+0x64], eax
        mov dword ptr ds : [ebx+0x60], eax
        pop ebp
        pop ebx
        add esp, 0xD4
        ret 4
        UNREACHABLE_TRAP(0x661c700)
    }
}

#undef public_661c810
#undef public_661c879
#undef public_661c88c
#undef public_661c917
#undef public_661c954
#undef public_661c9d3
#undef public_661ca0a
#undef public_661ca5a
