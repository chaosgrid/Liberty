#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_406880);
CLANG_FORWARD_PROC_SYMBOL(public_446d90);
CLANG_FORWARD_PROC_SYMBOL(public_5574a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_446df0 _public_446df0
#define public_446e78 _public_446e78
#define public_446e8d _public_446e8d
#define public_446ea2 _public_446ea2

PROC_DECLARE(0x446d90, internal_446d90, public_446d90);
extern "C" NAKED register_t __cdecl internal_446d90()
{
    __asm
    {
        sub esp, 0x90
        push ebx
        mov ebx, ecx
        cmp dword ptr ds : [ebx], 0
        je public_446ea2
        mov eax, dword ptr ds : [ebx+0xC]
        mov edx, dword ptr ds : [ebx+0x14]
        push esi
        push edi
        lea esi, ds:[ebx+0x18]
        mov ecx, 9
        lea edi, ss:[esp+0xC]
        rep movsd
        mov ecx, dword ptr ds : [ebx+0x10]
        mov dword ptr ss : [esp+0x30], eax
        mov eax, dword ptr ds : [public_5c6d90]
        mov dword ptr ss : [esp+0x38], edx
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ss : [esp+0x34], ecx
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0xA0]
        mov esi, eax
        mov eax, dword ptr ds : [public_668a98]
        test eax, eax
        jne public_446df0
        call public_5b73e0
        mov dword ptr ds : [public_668a98], eax
        public_446df0 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xC]
        push edx
        push esi
        lea edx, ss:[esp+0x44]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        lea eax, ss:[esp+0x3C]
        push eax
        lea ecx, ss:[esp+0x70]
        call public_406880
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x6C]
        push edx
        push 0
        push eax
        call dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ds : [ebx]
        mov esi, dword ptr ss : [esp+0xA0]
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [edx+0x20]
        mov al, byte ptr ds : [ebx+0x3C]
        test al, al
        pop edi
        pop esi
        jne public_446e8d
        fld dword ptr ds : [ebx+0x40]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 1
        jne public_446ea2
        fld dword ptr ds : [ebx+0x40]
        fsub dword ptr ss : [esp+0x98]
        fst dword ptr ds : [ebx+0x40]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x41
        jp public_446ea2
        mov eax, dword ptr ds : [ebx]
        test eax, eax
        je public_446e78
        mov ecx, dword ptr ds : [eax]
        push 1
        push eax
        call dword ptr ds : [ecx+0x34]
        public_446e78 : nop
        mov byte ptr ds : [ebx+0x3C], 1
        mov dword ptr ds : [ebx+0x40], 0
        pop ebx
        add esp, 0x90
        ret 4
        public_446e8d : nop
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        push 4
        push eax
        call dword ptr ds : [edx+0x2C]
        test al, al
        je public_446ea2
        mov ecx, ebx
        call public_5574a0
        public_446ea2 : nop
        pop ebx
        add esp, 0x90
        ret 4
        UNREACHABLE_TRAP(0x446d90)
    }
}

#undef public_446df0
#undef public_446e78
#undef public_446e8d
#undef public_446ea2
