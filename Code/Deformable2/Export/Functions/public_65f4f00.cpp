#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f4de0);
CLANG_FORWARD_PROC_SYMBOL(public_65f4f00);

#define public_65f4f34 _public_65f4f34
#define public_65f4fac _public_65f4fac
#define public_65f4fb7 _public_65f4fb7
#define public_65f4ffe _public_65f4ffe
#define public_65f500d _public_65f500d
#define public_65f5017 _public_65f5017
#define public_65f5023 _public_65f5023
#define public_65f502b _public_65f502b

PROC_DECLARE(0x65f4f00, internal_65f4f00, public_65f4f00);
extern "C" NAKED register_t __cdecl internal_65f4f00()
{
    __asm
    {
        sub esp, 0x34
        push ebx
        push esi
        push edi
        mov edi, ecx
        call public_65f4de0
        mov ebx, dword ptr ss : [esp+0x44]
        mov esi, dword ptr ds : [edi+0xC]
        mov eax, ebx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x18], eax
        xor al, al
        test esi, esi
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], edx
        je public_65f500d
        public_65f4f34 : nop
        cmp byte ptr ds : [esi], 0
        jne public_65f4ffe
        mov eax, dword ptr ds : [public_6603138]
        lea edx, ss:[esp+0xC]
        push edx
        mov edx, dword ptr ds : [esi+4]
        push edx
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x38], 0
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x60]
        test eax, eax
        je public_65f4fac
        mov eax, dword ptr ds : [public_6603138]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x28]
        push edx
        lea edx, ss:[esp+0x38]
        push edx
        mov edx, dword ptr ds : [esi+4]
        push edx
        push eax
        call dword ptr ds : [ecx+0x54]
        fld dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x44], eax
        jmp public_65f4fb7
        public_65f4fac : nop
        fld dword ptr ds : [edi+0x24]
        mov dword ptr ss : [esp+0x44], 0
        public_65f4fb7 : nop
        fadd dword ptr ss : [esp+0x44]
        mov ecx, ebx
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        fadd dword ptr ds : [edi+0x20]
        mov dword ptr ss : [esp+0x20], edx
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x1C], eax
        fstp dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [public_6603138]
        lea edx, ss:[esp+0x1C]
        push edx
        mov dword ptr ss : [esp+0x1C], ecx
        mov edx, dword ptr ds : [esi+4]
        push edx
        mov dword ptr ss : [esp+0x2C], ecx
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x48]
        mov al, 1
        public_65f4ffe : nop
        mov esi, dword ptr ds : [esi+0x10]
        test esi, esi
        jne public_65f4f34
        test al, al
        jne public_65f5017
        public_65f500d : nop
        fld dword ptr ds : [edi+0x24]
        fadd dword ptr ds : [edi+0x20]
        fstp dword ptr ss : [esp+0x14]
        public_65f5017 : nop
        mov edi, dword ptr ds : [edi+8]
        test edi, edi
        jne public_65f5023
        or eax, 0xFFFFFFFF
        jmp public_65f502b
        public_65f5023 : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [ecx+4]
        public_65f502b : nop
        mov ecx, dword ptr ds : [public_6603134]
        mov edx, dword ptr ds : [ecx]
        lea esi, ss:[esp+0x10]
        push esi
        push eax
        push ecx
        call dword ptr ds : [edx+0x8C]
        pop edi
        pop esi
        pop ebx
        add esp, 0x34
        ret 4
        UNREACHABLE_TRAP(0x65f4f00)
    }
}

#undef public_65f4f34
#undef public_65f4fac
#undef public_65f4fb7
#undef public_65f4ffe
#undef public_65f500d
#undef public_65f5017
#undef public_65f5023
#undef public_65f502b
