#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661f8b0);
CLANG_FORWARD_PROC_SYMBOL(public_6620500);

#define public_66211c4 _public_66211c4
#define public_66211ec _public_66211ec
#define public_66211f8 _public_66211f8
#define public_662120e _public_662120e
#define public_662121b _public_662121b
#define public_6621237 _public_6621237
#define public_6621244 _public_6621244
#define public_6621256 _public_6621256
#define public_662127d _public_662127d
#define public_6621286 _public_6621286
#define public_6621297 _public_6621297
#define public_66212a5 _public_66212a5

PROC_DECLARE(0x6621150, internal_6621150, public_6621150);
extern "C" NAKED register_t __cdecl internal_6621150()
{
    __asm
    {
        sub esp, 0x38
        push ebx
        mov ebx, dword ptr ss : [esp+0x44]
        push ebp
        push esi
        push edi
        mov ecx, 0xB
        xor eax, eax
        lea edi, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x18], offset public_662a030
        mov dword ptr ss : [esp+0x10], 0
        rep stosd
        mov eax, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0x24], 0x80000000
        test eax, eax
        mov dword ptr ss : [esp+0x28], 1
        mov dword ptr ss : [esp+0x30], 3
        mov dword ptr ss : [esp+0x34], 0x8000080
        mov dword ptr ss : [esp+0x20], offset public_662a7f0
        mov dword ptr ss : [esp+0x14], 0x34
        mov dword ptr ss : [esp+0x44], 0xFFFFFFFF
        jne public_66211c4
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0x38
        ret 0xC
        public_66211c4 : nop
        mov esi, dword ptr ss : [esp+0x4C]
        push ebx
        mov ecx, esi
        call public_661f8b0
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        je public_66211f8
        mov eax, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [eax+0x38]
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        je public_66211ec
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_66211ec : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x38
        ret 0xC
        public_66211f8 : nop
        mov ebp, dword ptr ss : [esp+0x54]
        test ebp, ebp
        jne public_662121b
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        je public_662120e
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_662120e : nop
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0x38
        ret 0xC
        public_662121b : nop
        mov eax, dword ptr ds : [esi]
        push ebx
        push esi
        call dword ptr ds : [eax+0x2C]
        mov ebx, eax
        mov eax, dword ptr ss : [esp+0x10]
        cmp ebx, 0xFFFFFFFF
        jne public_6621244
        test eax, eax
        je public_6621237
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_6621237 : nop
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0x38
        ret 0xC
        public_6621244 : nop
        test eax, eax
        je public_6621256
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x10], 0
        public_6621256 : nop
        mov eax, dword ptr ss : [ebp]
        lea ecx, ss:[esp+0x10]
        lea edx, ss:[esp+0x14]
        push ecx
        push edx
        push ebp
        call dword ptr ds : [eax+0xC]
        test eax, eax
        jl public_662127d
        mov eax, dword ptr ss : [esp+0x10]
        push ebp
        push eax
        push ebx
        mov ecx, esi
        call public_6620500
        test eax, eax
        jge public_6621297
        public_662127d : nop
        mov edi, dword ptr ds : [esi+0x58]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_6621297
        public_6621286 : nop
        mov eax, dword ptr ds : [esi+0x38]
        push ebp
        push ebx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x10]
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        jne public_6621286
        public_6621297 : nop
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        je public_66212a5
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_66212a5 : nop
        pop edi
        pop esi
        mov eax, ebx
        pop ebp
        pop ebx
        add esp, 0x38
        ret 0xC
        UNREACHABLE_TRAP(0x6621150)
    }
}

#undef public_66211c4
#undef public_66211ec
#undef public_66211f8
#undef public_662120e
#undef public_662121b
#undef public_6621237
#undef public_6621244
#undef public_6621256
#undef public_662127d
#undef public_6621286
#undef public_6621297
#undef public_66212a5
