#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f080);
CLANG_FORWARD_PROC_SYMBOL(public_503f40);
CLANG_FORWARD_PROC_SYMBOL(public_514110);
CLANG_FORWARD_PROC_SYMBOL(public_514960);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_5149be _public_5149be
#define public_5149c0 _public_5149c0
#define public_5149d9 _public_5149d9
#define public_5149e4 _public_5149e4
#define public_5149e7 _public_5149e7
#define public_514adf _public_514adf
#define public_514ae3 _public_514ae3
#define public_514aef _public_514aef
#define public_514af1 _public_514af1
#define public_514b2f _public_514b2f
#define public_514be3 _public_514be3

PROC_DECLARE(0x514960, internal_514960, public_514960);
extern "C" NAKED register_t __cdecl internal_514960()
{
    __asm
    {
        sub esp, 0x58
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x68]
        mov al, byte ptr ds : [edi+0x185]
        test al, 1
        mov esi, ecx
        mov dword ptr ss : [esp+0xC], esi
        jne public_514be3
        or al, 1
        push ebx
        mov byte ptr ds : [edi+0x185], al
        call public_54baf0
        cmp edi, eax
        mov eax, dword ptr ds : [esi+0x14]
        sete bl
        test eax, eax
        je public_5149be
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_5149be
        add eax, 0xC
        test eax, eax
        je public_5149be
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_5149be
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x303
        cmp ecx, 0x303
        je public_5149c0
        public_5149be : nop
        xor eax, eax
        public_5149c0 : nop
        push 0x800000
        lea ecx, ds:[eax+0xE4]
        call dword ptr ds : [public_5c649c]
        test eax, eax
        jne public_5149d9
        xor ebp, ebp
        jmp public_5149e7
        public_5149d9 : nop
        mov eax, dword ptr ds : [eax+0xC]
        test eax, eax
        jne public_5149e4
        xor ebp, ebp
        jmp public_5149e7
        public_5149e4 : nop
        mov ebp, dword ptr ds : [eax+4]
        public_5149e7 : nop
        test bl, bl
        pop ebx
        je public_514ae3
        lea esi, ss:[ebp+0x5C]
        mov ecx, esi
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_514adf
        mov edx, dword ptr ds : [edi]
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x6C]
        push ecx
        mov ecx, edi
        call dword ptr ds : [edx+0x2C]
        fld dword ptr ss : [esp+0x68]
        fchs 
        mov dword ptr ss : [esp+0x10], 0
        mov edx, dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x14], 0
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x60], ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x54], 0x3F800000
        mov dword ptr ss : [esp+0x44], 0x3F800000
        mov dword ptr ss : [esp+0x34], 0x3F800000
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x58], edx
        mov dword ptr ss : [esp+0x5C], eax
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_514be3
        push 0
        lea edx, ss:[esp+0x14]
        push edx
        lea eax, ss:[esp+0x3C]
        push eax
        push esi
        call public_40f080
        add esp, 4
        mov ecx, offset public_674c5c
        push eax
        call public_503f40
        pop edi
        pop esi
        pop ebp
        add esp, 0x58
        ret 4
        public_514adf : nop
        mov esi, dword ptr ss : [esp+0xC]
        public_514ae3 : nop
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        je public_514aef
        lea esi, ds:[eax-8]
        jmp public_514af1
        public_514aef : nop
        xor esi, esi
        public_514af1 : nop
        mov cl, byte ptr ds : [edi+0x184]
        and cl, 1
        mov byte ptr ss : [esp+0x68], cl
        mov edx, dword ptr ss : [esp+0x68]
        push edx
        lea eax, ss:[esp+0x2C]
        push esi
        push eax
        call public_514110
        mov edx, dword ptr ds : [esi]
        add esp, 0xC
        mov ecx, esi
        mov edi, eax
        call dword ptr ds : [edx+0x10]
        mov esi, eax
        mov eax, dword ptr ds : [public_6751f8]
        test eax, eax
        jne public_514b2f
        call public_5b73e0
        mov dword ptr ds : [public_6751f8], eax
        public_514b2f : nop
        mov ecx, dword ptr ds : [eax]
        push edi
        push esi
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x5C], ecx
        lea esi, ss:[ebp+0x70]
        mov ecx, esi
        mov dword ptr ss : [esp+0x54], 0x3F800000
        mov dword ptr ss : [esp+0x44], 0x3F800000
        mov dword ptr ss : [esp+0x34], 0x3F800000
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x58], eax
        mov dword ptr ss : [esp+0x60], edx
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_514be3
        push 0
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x3C]
        push ecx
        push esi
        call public_40f080
        add esp, 4
        mov ecx, offset public_674c60
        push eax
        call public_503f40
        public_514be3 : nop
        pop edi
        pop esi
        pop ebp
        add esp, 0x58
        ret 4
        UNREACHABLE_TRAP(0x514960)
    }
}

#undef public_5149be
#undef public_5149c0
#undef public_5149d9
#undef public_5149e4
#undef public_5149e7
#undef public_514adf
#undef public_514ae3
#undef public_514aef
#undef public_514af1
#undef public_514b2f
#undef public_514be3
