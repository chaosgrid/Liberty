#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f31d40);

#define public_6f2f410 _public_6f2f410
#define public_6f2f418 _public_6f2f418
#define public_6f2f429 _public_6f2f429
#define public_6f2f43a _public_6f2f43a
#define public_6f2f455 _public_6f2f455
#define public_6f2f464 _public_6f2f464
#define public_6f2f46a _public_6f2f46a
#define public_6f2f47b _public_6f2f47b
#define public_6f2f48d _public_6f2f48d
#define public_6f2f499 _public_6f2f499

PROC_DECLARE(0x6f2f3e0, internal_6f2f3e0, public_6f2f3e0);
extern "C" NAKED register_t __cdecl internal_6f2f3e0()
{
    __asm
    {
        sub esp, 8
        push esi
        push edi
        mov edi, ecx
        lea eax, ss:[esp+0x14]
        lea esi, ds:[edi+0x10]
        push eax
        mov ecx, esi
        call public_6f31d40
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+8], eax
        je public_6f2f410
        cmp ecx, dword ptr ds : [eax+0xC]
        jl public_6f2f410
        lea eax, ss:[esp+8]
        jmp public_6f2f418
        public_6f2f410 : nop
        mov dword ptr ss : [esp+0xC], esi
        lea eax, ss:[esp+0xC]
        public_6f2f418 : nop
        mov edx, dword ptr ds : [eax]
        cmp edx, dword ptr ds : [edi+0x14]
        jne public_6f2f429
        pop edi
        xor al, al
        pop esi
        add esp, 8
        ret 0x14
        public_6f2f429 : nop
        test ecx, ecx
        je public_6f2f464
        cmp ecx, 1
        jne public_6f2f43a
        fld dword ptr ds : [public_6f5a1b8]
        jmp public_6f2f46a
        public_6f2f43a : nop
        fld dword ptr ss : [esp+0x18]
        fcom dword ptr ds : [public_6f5a1b8]
        fnstsw ax
        test ah, 0x41
        jne public_6f2f455
        fstp st(0)
        fld dword ptr ds : [public_6f5a1b8]
        jmp public_6f2f46a
        public_6f2f455 : nop
        fcom dword ptr ds : [public_6f5a1d4]
        fnstsw ax
        test ah, 5
        jp public_6f2f46a
        fstp st(0)
        public_6f2f464 : nop
        fld dword ptr ds : [public_6f5a1d4]
        public_6f2f46a : nop
        fcom qword ptr ds : [public_6f5a228]
        fnstsw ax
        test ah, 0x44
        jp public_6f2f47b
        test ecx, ecx
        jne public_6f2f48d
        public_6f2f47b : nop
        fcom qword ptr ds : [public_6f5a1c0]
        fnstsw ax
        test ah, 0x44
        jp public_6f2f499
        cmp ecx, 1
        je public_6f2f499
        public_6f2f48d : nop
        pop edi
        fstp st(0)
        xor al, al
        pop esi
        add esp, 8
        ret 0x14
        public_6f2f499 : nop
        mov eax, dword ptr ds : [edx+0x10]
        mov ecx, dword ptr ss : [esp+0x1C]
        fstp dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax+4], ecx
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x34]
        pop edi
        mov al, 1
        pop esi
        add esp, 8
        ret 0x14
        UNREACHABLE_TRAP(0x6f2f3e0)
    }
}

#undef public_6f2f410
#undef public_6f2f418
#undef public_6f2f429
#undef public_6f2f43a
#undef public_6f2f455
#undef public_6f2f464
#undef public_6f2f46a
#undef public_6f2f47b
#undef public_6f2f48d
#undef public_6f2f499
