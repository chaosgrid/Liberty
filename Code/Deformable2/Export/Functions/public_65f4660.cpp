#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f41d0);
CLANG_FORWARD_PROC_SYMBOL(public_65f4580);
CLANG_FORWARD_PROC_SYMBOL(public_65f45a0);
CLANG_FORWARD_PROC_SYMBOL(public_65f4660);
CLANG_FORWARD_PROC_SYMBOL(public_65f4c50);
CLANG_FORWARD_PROC_SYMBOL(public_6600de0);

#define public_65f4716 _public_65f4716
#define public_65f4722 _public_65f4722
#define public_65f4740 _public_65f4740
#define public_65f47fa _public_65f47fa
#define public_65f4847 _public_65f4847
#define public_65f493a _public_65f493a
#define public_65f4995 _public_65f4995
#define public_65f49f8 _public_65f49f8
#define public_65f4a0b _public_65f4a0b
#define public_65f4a38 _public_65f4a38
#define public_65f4a7e _public_65f4a7e
#define public_65f4ac0 _public_65f4ac0
#define public_65f4b17 _public_65f4b17
#define public_65f4bce _public_65f4bce

PROC_DECLARE(0x65f4660, internal_65f4660, public_65f4660);
extern "C" NAKED register_t __cdecl internal_65f4660()
{
    __asm
    {
        sub esp, 0x6B0
        mov eax, dword ptr ds : [public_6603134]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x6E4]
        mov esi, ecx
        mov ecx, dword ptr ds : [eax]
        push edi
        push eax
        mov dword ptr ss : [esp+0x80], esi
        call dword ptr ds : [ecx+0x90]
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x80], edx
        mov edx, dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+0x6E0]
        mov dword ptr ss : [esp+0x84], ecx
        mov ecx, dword ptr ss : [esp+0x6DC]
        xor ebx, ebx
        push ebx
        push eax
        mov eax, dword ptr ss : [esp+0x6DC]
        push ecx
        mov ecx, dword ptr ss : [esp+0x6DC]
        mov dword ptr ss : [esp+0x94], edx
        mov edx, dword ptr ss : [esp+0x6E4]
        push edx
        mov edx, dword ptr ss : [esp+0x6DC]
        push eax
        mov eax, dword ptr ss : [esp+0x6DC]
        push ecx
        mov ecx, dword ptr ss : [esp+0x6DC]
        push edx
        push eax
        push ecx
        mov ecx, esi
        call public_65f41d0
        mov esi, dword ptr ds : [esi+8]
        mov ebp, eax
        or eax, 0xFFFFFFFF
        cmp esi, ebx
        mov dword ptr ss : [esp+0x1C], ebp
        mov dword ptr ss : [esp+0x68], eax
        mov dword ptr ss : [esp+0x60], ebx
        mov dword ptr ss : [esp+0x64], ebx
        mov dword ptr ss : [esp+0x5C], ebx
        jne public_65f4716
        mov dword ptr ss : [esp+0x18], eax
        jmp public_65f4722
        public_65f4716 : nop
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x18], ecx
        public_65f4722 : nop
        cmp edi, dword ptr ss : [esp+0x18]
        mov esi, edi
        je public_65f4847
        lea edx, ss:[esp+0x2C0]
        mov dword ptr ss : [esp+0x48], edx
        lea esp, ss:[esp]
        public_65f4740 : nop
        mov eax, dword ptr ds : [public_6603134]
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0xD4]
        mov edi, eax
        mov eax, dword ptr ds : [public_6603134]
        mov edx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [edx+0xC4]
        lea edx, ss:[esp+0x5C]
        push edx
        mov dword ptr ss : [esp+ebx*4+0x1C4], eax
        mov eax, dword ptr ds : [public_6603138]
        push ebp
        mov dword ptr ss : [esp+0x70], esi
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x68]
        mov ecx, dword ptr ds : [public_660313c]
        mov edx, dword ptr ds : [ecx]
        lea esi, ss:[esp+0x10]
        push esi
        push eax
        push ecx
        call dword ptr ds : [edx+0x18]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xE4]
        push edx
        push eax
        call dword ptr ds : [ecx+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x7C]
        push edx
        lea edx, ss:[esp+0x90]
        push edx
        lea edx, ss:[esp+0xA4]
        push edx
        mov edx, dword ptr ss : [esp+0x6D8]
        push edx
        push eax
        call dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [public_6603170]
        test eax, eax
        mov edx, dword ptr ss : [esp+0x7C]
        mov esi, dword ptr ss : [esp+0x8C]
        mov ebp, dword ptr ss : [esp+0x9C]
        mov dword ptr ss : [esp+0x14], edx
        jne public_65f47fa
        call public_6600de0
        mov dword ptr ds : [public_6603170], eax
        public_65f47fa : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax]
        push edx
        push esi
        push ebp
        lea edx, ss:[esp+0x30]
        push edx
        push eax
        call dword ptr ds : [ecx+0x58]
        mov eax, dword ptr ss : [esp+0x48]
        mov edx, dword ptr ss : [esp+0x24]
        mov ebp, dword ptr ss : [esp+0x1C]
        mov ecx, eax
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+0x2C]
        add eax, 0x10
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x48], eax
        mov eax, dword ptr ss : [esp+0x18]
        inc ebx
        cmp edi, eax
        mov dword ptr ds : [ecx+0xC], edx
        mov esi, edi
        jne public_65f4740
        public_65f4847 : nop
        mov eax, dword ptr ss : [esp+0x18]
        lea edx, ss:[esp+0x5C]
        push edx
        mov dword ptr ss : [esp+0x6C], eax
        mov eax, dword ptr ds : [public_6603138]
        push ebp
        mov dword ptr ss : [esp+0x64], 1
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x68]
        mov ecx, dword ptr ds : [public_660313c]
        mov edx, dword ptr ds : [ecx]
        lea esi, ss:[esp+0x20]
        push esi
        push eax
        push ecx
        call dword ptr ds : [edx+0x18]
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xE0]
        push edx
        push eax
        call dword ptr ds : [ecx+0x14]
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x44]
        push edx
        lea edx, ss:[esp+0x44]
        push edx
        lea edx, ss:[esp+0x54]
        push edx
        mov edx, dword ptr ss : [esp+0x6D8]
        push edx
        push eax
        call dword ptr ds : [ecx+0x18]
        mov esi, dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ss : [esp+0x44]
        push esi
        push ecx
        lea edx, ss:[esp+0xA8]
        push edx
        mov dword ptr ss : [esp+0x20], eax
        call public_65f4c50
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        lea ecx, ss:[esp+0xB0]
        push ecx
        lea edx, ss:[esp+0x48]
        push edx
        call public_65f45a0
        fld dword ptr ss : [esp+0x54]
        fadd dword ptr ds : [esi+8]
        add esp, 0xC
        lea ecx, ss:[esp+0xB8]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x44]
        fadd dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x40]
        fadd dword ptr ds : [esi]
        fstp dword ptr ss : [esp]
        call public_65f4580
        mov eax, dword ptr ss : [esp+0x44]
        mov ecx, dword ptr ss : [esp+0x40]
        mov edx, dword ptr ss : [esp+0x4C]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [public_6603170]
        test eax, eax
        lea esi, ds:[ecx+0xC]
        lea edi, ds:[edx+0xC]
        jne public_65f493a
        call public_6600de0
        mov dword ptr ds : [public_6603170], eax
        public_65f493a : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax]
        push edx
        push esi
        push edi
        lea edx, ss:[esp+0x30]
        push edx
        push eax
        call dword ptr ds : [ecx+0x58]
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0xD0], eax
        mov eax, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0xDC], eax
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0xD4], ecx
        mov dword ptr ss : [esp+0xD8], edx
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [public_6603170]
        test eax, eax
        jne public_65f4995
        call public_6600de0
        mov dword ptr ds : [public_6603170], eax
        public_65f4995 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0xD0]
        push ecx
        lea ecx, ss:[esp+0xEC]
        push ecx
        push eax
        call dword ptr ds : [edx+0x54]
        dec ebx
        mov ecx, dword ptr ss : [esp+0xB4]
        mov edx, dword ptr ss : [esp+0xAC]
        mov eax, dword ptr ss : [esp+0xB0]
        mov dword ptr ss : [esp+0x58], ecx
        mov ecx, 9
        lea esi, ss:[esp+0xE8]
        lea edi, ss:[esp+0x10C]
        mov dword ptr ss : [esp+0x50], edx
        mov dword ptr ss : [esp+0x54], eax
        rep movsd
        js public_65f4bce
        mov edx, ebx
        shl edx, 4
        lea eax, ss:[esp+edx+0x2C0]
        mov dword ptr ss : [esp+0x10], eax
        public_65f49f8 : nop
        mov eax, dword ptr ds : [public_6603170]
        test eax, eax
        jne public_65f4a0b
        call public_6600de0
        mov dword ptr ds : [public_6603170], eax
        public_65f4a0b : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        push edx
        lea edx, ss:[esp+0x17C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x54]
        mov eax, dword ptr ds : [public_6603170]
        test eax, eax
        mov ebp, dword ptr ss : [esp+ebx*4+0x1C0]
        jne public_65f4a38
        call public_6600de0
        mov dword ptr ds : [public_6603170], eax
        public_65f4a38 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x178]
        push edx
        lea edx, ss:[esp+0x110]
        push edx
        lea edx, ss:[esp+0x138]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ds : [public_6603170]
        test eax, eax
        mov ecx, 9
        lea esi, ss:[esp+0x130]
        lea edi, ss:[esp+0x19C]
        rep movsd
        jne public_65f4a7e
        call public_6600de0
        mov dword ptr ds : [public_6603170], eax
        public_65f4a7e : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[ebp+0x1C]
        push edx
        lea edx, ss:[esp+0x1A0]
        push edx
        lea edx, ss:[esp+0x15C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ds : [public_6603170]
        test eax, eax
        mov ecx, 9
        lea esi, ss:[esp+0x154]
        lea edi, ss:[esp+0xE8]
        rep movsd
        jne public_65f4ac0
        call public_6600de0
        mov dword ptr ds : [public_6603170], eax
        public_65f4ac0 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[ebp+0x10]
        push edx
        lea edx, ss:[esp+0xEC]
        push edx
        lea edx, ss:[esp+0xCC]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        mov eax, dword ptr ss : [esp+0xC4]
        mov ecx, dword ptr ss : [esp+0xC8]
        mov edx, dword ptr ss : [esp+0xCC]
        mov dword ptr ss : [esp+0x90], eax
        mov eax, dword ptr ds : [public_6603170]
        test eax, eax
        mov dword ptr ss : [esp+0x94], ecx
        mov dword ptr ss : [esp+0x98], edx
        jne public_65f4b17
        call public_6600de0
        mov dword ptr ds : [public_6603170], eax
        public_65f4b17 : nop
        mov ecx, dword ptr ds : [eax]
        add ebp, 4
        push ebp
        lea edx, ss:[esp+0x110]
        push edx
        lea edx, ss:[esp+0xA8]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        fld dword ptr ss : [esp+0xA0]
        fadd dword ptr ss : [esp+0x50]
        lea esi, ss:[esp+0xE8]
        fld dword ptr ss : [esp+0xA4]
        lea edi, ss:[esp+0x10C]
        fadd dword ptr ss : [esp+0x54]
        dec ebx
        fld dword ptr ss : [esp+0xA8]
        fadd dword ptr ss : [esp+0x58]
        fstp dword ptr ss : [esp+0x2C]
        fxch 
        fsub dword ptr ss : [esp+0x90]
        fstp dword ptr ss : [esp+0x6C]
        mov eax, dword ptr ss : [esp+0x6C]
        fsub dword ptr ss : [esp+0x94]
        mov dword ptr ss : [esp+0x34], eax
        mov dword ptr ss : [esp+0x50], eax
        fstp dword ptr ss : [esp+0x70]
        mov ecx, dword ptr ss : [esp+0x70]
        fld dword ptr ss : [esp+0x2C]
        fsub dword ptr ss : [esp+0x98]
        mov dword ptr ss : [esp+0x38], ecx
        mov dword ptr ss : [esp+0x54], ecx
        mov ecx, 9
        rep movsd
        mov ecx, dword ptr ss : [esp+0x10]
        sub ecx, 0x10
        test ebx, ebx
        fstp dword ptr ss : [esp+0x74]
        mov edx, dword ptr ss : [esp+0x74]
        mov dword ptr ss : [esp+0x3C], edx
        mov dword ptr ss : [esp+0x58], edx
        mov dword ptr ss : [esp+0x10], ecx
        jge public_65f49f8
        mov ebp, dword ptr ss : [esp+0x1C]
        public_65f4bce : nop
        mov eax, dword ptr ss : [esp+0x78]
        fld dword ptr ss : [esp+0x80]
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [edx+4]
        fsub dword ptr ds : [eax+0x30]
        add eax, 0x30
        fld dword ptr ss : [esp+0x84]
        lea edx, ss:[esp+0xB8]
        fsub dword ptr ds : [eax+4]
        push edx
        fld dword ptr ss : [esp+0x8C]
        push ebp
        fsub dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [public_6603138]
        push eax
        fstp dword ptr ss : [esp+0x38]
        fxch 
        fsub dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+0xC4]
        fsub dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp+0xC8]
        fld dword ptr ss : [esp+0x38]
        fsub dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp+0xCC]
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x58]
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0x6B0
        ret 0x24
        UNREACHABLE_TRAP(0x65f4660)
    }
}

#undef public_65f4716
#undef public_65f4722
#undef public_65f4740
#undef public_65f47fa
#undef public_65f4847
#undef public_65f493a
#undef public_65f4995
#undef public_65f49f8
#undef public_65f4a0b
#undef public_65f4a38
#undef public_65f4a7e
#undef public_65f4ac0
#undef public_65f4b17
#undef public_65f4bce
