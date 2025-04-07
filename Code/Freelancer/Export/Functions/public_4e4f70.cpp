#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4e4f70);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_4e4f93 _public_4e4f93
#define public_4e4fb0 _public_4e4fb0
#define public_4e4fc7 _public_4e4fc7
#define public_4e4fd6 _public_4e4fd6
#define public_4e4fd8 _public_4e4fd8
#define public_4e5039 _public_4e5039
#define public_4e50a0 _public_4e50a0
#define public_4e50b5 _public_4e50b5

PROC_DECLARE(0x4e4f70, internal_4e4f70, public_4e4f70);
extern "C" NAKED register_t __cdecl internal_4e4f70()
{
    __asm
    {
        sub esp, 0x94
        push ebx
        mov ebx, ecx
        mov edx, dword ptr ds : [ebx+0x58C]
        cmp dword ptr ds : [ebx+0x590], edx
        push esi
        push edi
        jl public_4e4f93
        mov dword ptr ds : [ebx+0x590], 0
        public_4e4f93 : nop
        mov eax, dword ptr ds : [ebx+0x590]
        lea ecx, ds:[eax+1]
        cmp ecx, edx
        mov dword ptr ds : [ebx+0x590], ecx
        jl public_4e4fb0
        mov dword ptr ds : [ebx+0x590], 0
        public_4e4fb0 : nop
        mov edx, dword ptr ds : [ebx+0x580]
        shl eax, 4
        add eax, edx
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        jne public_4e4fc7
        mov eax, dword ptr ds : [public_5c7078]
        public_4e4fc7 : nop
        mov ecx, dword ptr ds : [ebx+0x398]
        test ecx, ecx
        je public_4e4fd6
        add ecx, 0xFFFFFFF8
        jmp public_4e4fd8
        public_4e4fd6 : nop
        xor ecx, ecx
        public_4e4fd8 : nop
        lea edx, ss:[esp+0x58]
        push edx
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x1C]
        push eax
        call dword ptr ds : [public_5c6588]
        add esp, 0x10
        test al, al
        je public_4e50b5
        mov ecx, dword ptr ss : [esp+0xC]
        cmp ecx, 0xFFFFFFFF
        je public_4e50b5
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0xA0]
        mov esi, eax
        mov eax, dword ptr ds : [public_674afc]
        test eax, eax
        mov ecx, 0xC
        lea edi, ss:[esp+0x28]
        rep movsd
        jne public_4e5039
        call public_5b73e0
        mov dword ptr ds : [public_674afc], eax
        public_4e5039 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x5C]
        push edx
        lea edx, ss:[esp+0x2C]
        push edx
        lea edx, ss:[esp+0x24]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov ecx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ss : [esp+0xA4]
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x14], ecx
        lea ecx, ss:[esp+0x10]
        push ecx
        lea edi, ds:[ebx+0x3B8]
        push esi
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [edi]
        push edi
        mov dword ptr ss : [esp+0x24], edx
        call dword ptr ds : [eax+0x44]
        test al, al
        jne public_4e50a0
        fld dword ptr ds : [ebx+0x420]
        pop edi
        fstp dword ptr ds : [esi]
        fld dword ptr ds : [ebx+0x424]
        fstp dword ptr ds : [esi+4]
        pop esi
        pop ebx
        add esp, 0x94
        ret 4
        public_4e50a0 : nop
        mov edx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [edx+0x14]
        fild dword ptr ds : [eax]
        fsubr dword ptr ds : [esi]
        fstp dword ptr ds : [esi]
        fild dword ptr ds : [eax+4]
        fsubr dword ptr ds : [esi+4]
        fstp dword ptr ds : [esi+4]
        public_4e50b5 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x94
        ret 4
        UNREACHABLE_TRAP(0x4e4f70)
    }
}

#undef public_4e4f93
#undef public_4e4fb0
#undef public_4e4fc7
#undef public_4e4fd6
#undef public_4e4fd8
#undef public_4e5039
#undef public_4e50a0
#undef public_4e50b5
