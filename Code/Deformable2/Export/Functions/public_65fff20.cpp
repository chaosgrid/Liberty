#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f7120);
CLANG_FORWARD_PROC_SYMBOL(public_66001c0);

#define public_65fff63 _public_65fff63
#define public_65fff86 _public_65fff86
#define public_65fff88 _public_65fff88
#define public_65fffc7 _public_65fffc7
#define public_65ffff0 _public_65ffff0
#define public_6600020 _public_6600020
#define public_660003a _public_660003a
#define public_6600040 _public_6600040
#define public_6600058 _public_6600058
#define public_66000e0 _public_66000e0
#define public_66001a6 _public_66001a6

PROC_DECLARE(0x65fff20, internal_65fff20, public_65fff20);
extern "C" NAKED register_t __cdecl internal_65fff20()
{
    __asm
    {
        sub esp, 0x58
        push ebx
        mov ebx, dword ptr ss : [esp+0x60]
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [eax]
        push ebp
        push esi
        lea edx, ds:[ebx+0x20]
        push edx
        push eax
        call dword ptr ds : [ecx+0xAC]
        mov ebp, dword ptr ss : [esp+0x6C]
        test ebp, ebp
        je public_65fff63
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_65fff63
        mov ecx, dword ptr ds : [eax+0x2C]
        test ecx, ecx
        je public_65fff63
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0x8D
        push eax
        call dword ptr ds : [ecx+0xF0]
        public_65fff63 : nop
        mov esi, dword ptr ds : [ebx+4]
        mov edx, dword ptr ds : [esi]
        push edi
        mov edi, dword ptr ds : [ebx+0x18]
        mov eax, dword ptr ds : [edi+8]
        push eax
        push 0
        push esi
        call dword ptr ds : [edx+0x108]
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, 4
        jb public_65fff86
        add eax, 0xFFFFFFFC
        jmp public_65fff88
        public_65fff86 : nop
        xor eax, eax
        public_65fff88 : nop
        mov ecx, dword ptr ds : [esi]
        push eax
        push 0xB
        push 0
        push esi
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [edi+0x20]
        mov edx, dword ptr ds : [esi]
        inc eax
        push eax
        push 0xD
        push 0
        push esi
        call dword ptr ds : [edx+0xF8]
        mov edx, dword ptr ds : [edi+0x24]
        mov ecx, dword ptr ds : [esi]
        inc edx
        push edx
        push 0xE
        push 0
        push esi
        call dword ptr ds : [ecx+0xF8]
        mov edi, dword ptr ds : [ebx+4]
        mov esi, offset public_660146c
        mov eax, 1
        public_65fffc7 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push 0
        push edi
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_65fffc7
        mov edi, dword ptr ds : [ebx+4]
        mov esi, offset public_66014a4
        mov eax, 1
        mov edi, edi
        public_65ffff0 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push 1
        push edi
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_65ffff0
        mov al, byte ptr ds : [ebx+0x64]
        mov edi, dword ptr ds : [ebx+4]
        test al, al
        mov eax, 0x89
        je public_660003a
        mov esi, offset public_660143c
        mov edi, edi
        public_6600020 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push edi
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_6600020
        jmp public_6600058
        public_660003a : nop
        mov esi, offset public_660141c
        nop 
        public_6600040 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push edi
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_6600040
        public_6600058 : nop
        test ebp, ebp
        pop edi
        je public_66001a6
        mov esi, dword ptr ss : [ebp+0x20]
        test esi, esi
        je public_66001a6
        cmp dword ptr ds : [esi], 0
        je public_66001a6
        mov eax, dword ptr ds : [esi+4]
        fld dword ptr ds : [eax+0x2C]
        mov ecx, dword ptr ds : [public_6603134]
        fld dword ptr ds : [eax+0x20]
        fld dword ptr ds : [eax+0x14]
        fstp dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0xD4]
        cmp eax, 0xFFFFFFFF
        je public_66000e0
        mov ecx, dword ptr ds : [public_6603134]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0x98]
        lea ecx, ss:[esp+0xC]
        push ecx
        push eax
        lea edx, ss:[esp+0x20]
        push edx
        call public_65f7120
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x2C]
        add esp, 0xC
        mov dword ptr ss : [esp+0xC], eax
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], edx
        public_66000e0 : nop
        lea eax, ss:[esp+0x6C]
        push eax
        lea ecx, ss:[esp+0x6C]
        push ecx
        mov ecx, dword ptr ds : [esi]
        lea edx, ss:[esp+0x14]
        push edx
        call public_66001c0
        test al, al
        je public_66001a6
        mov eax, dword ptr ss : [esp+0x68]
        mov ecx, dword ptr ss : [esp+0x6C]
        push 2
        push 0x18
        mov dword ptr ss : [esp+0x34], eax
        mov eax, dword ptr ds : [ebx+4]
        push 0
        mov dword ptr ss : [esp+0x6C], 0x3F800000
        mov dword ptr ss : [esp+0x58], 0x3F800000
        mov dword ptr ss : [esp+0x44], 0x3F800000
        mov dword ptr ss : [esp+0x30], 0x3F800000
        mov dword ptr ss : [esp+0x68], 0
        mov dword ptr ss : [esp+0x64], 0
        mov dword ptr ss : [esp+0x60], 0
        mov dword ptr ss : [esp+0x5C], 0
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x48], ecx
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0xF8]
        mov ebx, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [ebx]
        lea ecx, ss:[esp+0x24]
        push ecx
        push 0
        push ebx
        call dword ptr ds : [eax+0x100]
        inc dword ptr ds : [esi+8]
        public_66001a6 : nop
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x58
        ret 8
        UNREACHABLE_TRAP(0x65fff20)
    }
}

#undef public_65fff63
#undef public_65fff86
#undef public_65fff88
#undef public_65fffc7
#undef public_65ffff0
#undef public_6600020
#undef public_660003a
#undef public_6600040
#undef public_6600058
#undef public_66000e0
#undef public_66001a6
