#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_595840);
CLANG_FORWARD_PROC_SYMBOL(public_595ca0);
CLANG_FORWARD_PROC_SYMBOL(public_59da70);
CLANG_FORWARD_PROC_SYMBOL(public_5a0650);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_59777b _public_59777b
#define public_59778e _public_59778e
#define public_5977e5 _public_5977e5
#define public_5978c2 _public_5978c2
#define public_59792c _public_59792c
#define public_597958 _public_597958
#define public_59797b _public_59797b
#define public_5979bf _public_5979bf
#define public_5979c9 _public_5979c9

PROC_DECLARE(0x597760, internal_597760, public_597760);
extern "C" NAKED register_t __cdecl internal_597760()
{
    __asm
    {
        sub esp, 0x24
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x32C]
        test al, al
        push edi
        jne public_59777b
        pop edi
        xor al, al
        pop esi
        add esp, 0x24
        ret 4
        public_59777b : nop
        mov edi, dword ptr ss : [esp+0x30]
        cmp dword ptr ds : [edi], 0xFFFFFFFF
        je public_59778e
        pop edi
        xor al, al
        pop esi
        add esp, 0x24
        ret 4
        public_59778e : nop
        lea eax, ss:[esp+0x20]
        push eax
        call public_59da70
        fld dword ptr ds : [esi+0x68]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x20], eax
        fdiv dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [public_67d9fc]
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x1C], edx
        add esp, 4
        test eax, eax
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x1C]
        jne public_5977e5
        call public_5b73e0
        mov dword ptr ds : [public_67d9fc], eax
        public_5977e5 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x14]
        push edx
        lea edx, ds:[esi+0x3DC]
        push edx
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        fld dword ptr ss : [esp+8]
        fcomp dword ptr ds : [public_5c7474]
        mov dword ptr ds : [esi+0x3B8], 0xFFFFFFFF
        fnstsw ax
        test ah, 1
        jne public_5979c9
        fld dword ptr ss : [esp+8]
        fcomp dword ptr ds : [esi+0x334]
        fnstsw ax
        test ah, 5
        jp public_5979c9
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jp public_5979c9
        fld dword ptr ds : [esi+0x338]
        fchs 
        fcomp dword ptr ss : [esp+0xC]
        fnstsw ax
        test ah, 5
        jp public_5979c9
        cmp dword ptr ds : [edi+4], 2
        jne public_5979bf
        fld dword ptr ss : [esp+8]
        fcomp dword ptr ds : [esi+0x33C]
        fnstsw ax
        test ah, 1
        jne public_5978c2
        fld dword ptr ss : [esp+8]
        fcomp dword ptr ds : [esi+0x344]
        fnstsw ax
        test ah, 0x41
        jp public_5978c2
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [esi+0x340]
        fnstsw ax
        test ah, 0x41
        jp public_5978c2
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [esi+0x348]
        fnstsw ax
        test ah, 1
        jne public_5978c2
        fld dword ptr ds : [esi+0x3C8]
        mov dword ptr ds : [esi+0x3B8], 0
        fsub dword ptr ds : [esi+0x3D0]
        jmp public_59792c
        public_5978c2 : nop
        fld dword ptr ss : [esp+8]
        fcomp dword ptr ds : [esi+0x350]
        fnstsw ax
        test ah, 1
        jne public_5979bf
        fld dword ptr ss : [esp+8]
        fcomp dword ptr ds : [esi+0x358]
        fnstsw ax
        test ah, 0x41
        jp public_5979bf
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [esi+0x354]
        fnstsw ax
        test ah, 0x41
        jp public_5979bf
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [esi+0x35C]
        fnstsw ax
        test ah, 1
        jne public_5979bf
        fld dword ptr ds : [esi+0x3D0]
        mov dword ptr ds : [esi+0x3B8], 1
        fadd dword ptr ds : [esi+0x3C8]
        public_59792c : nop
        mov al, byte ptr ds : [esi+0x3B4]
        fstp dword ptr ds : [esi+0x3C8]
        test al, al
        mov dword ptr ds : [esi+0x3BC], 0x3E99999A
        je public_597958
        fld dword ptr ds : [esi+0x3C4]
        fsub dword ptr ds : [public_5c75dc]
        fstp dword ptr ds : [esi+0x3C4]
        public_597958 : nop
        mov ecx, esi
        call public_595ca0
        mov al, byte ptr ds : [esi+0x3B4]
        test al, al
        je public_59797b
        fld dword ptr ds : [esi+0x3C4]
        fadd dword ptr ds : [public_5c75dc]
        fstp dword ptr ds : [esi+0x3C4]
        public_59797b : nop
        mov ecx, esi
        call public_595840
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_5979bf
        mov eax, dword ptr ds : [ecx]
        push 0
        push esi
        push 0xF005
        call dword ptr ds : [eax+0x5C]
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+8]
        mov edi, eax
        test edi, edi
        je public_5979bf
        fld dword ptr ds : [esi+0x3C8]
        push ebx
        mov ebx, dword ptr ds : [edi]
        call public_5b7ec0
        push eax
        push esi
        push 0x3E
        mov ecx, edi
        call dword ptr ds : [ebx+0xA8]
        pop ebx
        public_5979bf : nop
        pop edi
        mov al, 1
        pop esi
        add esp, 0x24
        ret 4
        public_5979c9 : nop
        push edi
        mov ecx, esi
        call public_5a0650
        pop edi
        pop esi
        add esp, 0x24
        ret 4
        UNREACHABLE_TRAP(0x597760)
    }
}

#undef public_59777b
#undef public_59778e
#undef public_5977e5
#undef public_5978c2
#undef public_59792c
#undef public_597958
#undef public_59797b
#undef public_5979bf
#undef public_5979c9
