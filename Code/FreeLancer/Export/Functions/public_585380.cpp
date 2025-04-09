#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_410190);
CLANG_FORWARD_PROC_SYMBOL(public_411d60);
CLANG_FORWARD_PROC_SYMBOL(public_420d60);
CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_423b30);
CLANG_FORWARD_PROC_SYMBOL(public_423b60);
CLANG_FORWARD_PROC_SYMBOL(public_4e6880);
CLANG_FORWARD_PROC_SYMBOL(public_4e69c0);
CLANG_FORWARD_PROC_SYMBOL(public_4e7090);
CLANG_FORWARD_PROC_SYMBOL(public_585380);
CLANG_FORWARD_PROC_SYMBOL(public_585630);
CLANG_FORWARD_PROC_SYMBOL(public_59eee0);

#define public_58555a _public_58555a
#define public_5855cc _public_5855cc
#define public_5855fa _public_5855fa
#define public_58561c _public_58561c

PROC_DECLARE(0x585380, internal_585380, public_585380);
extern "C" NAKED register_t __cdecl internal_585380()
{
    __asm
    {
        sub esp, 0x8C
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0x94]
        cmp ecx, 0xFFFFFFFF
        push esi
        je public_5855fa
        push ebx
        mov dword ptr ss : [ebp+0x4B8], ecx
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push edi
        push ecx
        push eax
        call dword ptr ds : [edx+0xA0]
        lea edx, ss:[esp+0x20]
        push edx
        mov esi, eax
        mov eax, dword ptr ds : [public_5c6d90]
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, 0xC
        lea edi, ss:[esp+0x74]
        rep movsd
        mov edi, dword ptr ss : [ebp+0x4B8]
        xor ebx, ebx
        push ebx
        mov dword ptr ss : [esp+0x1C], 0
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edi
        push eax
        call dword ptr ds : [ecx+0x88]
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edi
        push eax
        call dword ptr ds : [ecx+0xA0]
        lea edx, ss:[esp+0x20]
        push edx
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, eax
        call public_4e7090
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x20], edx
        lea edx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x24], eax
        push edx
        lea eax, ss:[esp+0x54]
        mov dword ptr ss : [esp+0x2C], ecx
        push eax
        lea ecx, ss:[esp+0x74]
        call public_4e6880
        mov esi, dword ptr ss : [esp+0x10]
        push esi
        push esi
        push esi
        lea ecx, ss:[esp+0x6C]
        call public_422b80
        push eax
        lea ecx, ss:[esp+0x54]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        call public_423b60
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x28]
        add esp, 0xC
        mov dword ptr ss : [esp+0x44], eax
        mov dword ptr ss : [esp+0x48], ecx
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x54]
        push ecx
        lea ecx, ss:[esp+0x74]
        mov dword ptr ss : [esp+0x54], edx
        call public_4e6880
        push esi
        push esi
        push esi
        lea ecx, ss:[esp+0x6C]
        call public_422b80
        push eax
        lea edx, ss:[esp+0x54]
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        call public_423b30
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x28]
        add esp, 0xC
        mov dword ptr ss : [esp+0x38], ecx
        push 1
        lea ecx, ss:[esp+0x70]
        push ecx
        push edi
        lea ecx, ss:[esp+0x44]
        mov dword ptr ss : [esp+0x48], edx
        mov dword ptr ss : [esp+0x4C], eax
        call public_4e69c0
        lea edx, ss:[esp+0x44]
        push edx
        lea eax, ss:[esp+0x3C]
        push eax
        lea ecx, ss:[esp+0x58]
        push ecx
        lea esi, ss:[ebp+0x4A8]
        call public_423b30
        push 0x3F000000
        lea edx, ss:[esp+0x60]
        push edx
        lea eax, ss:[esp+0x28]
        push eax
        call public_411d60
        mov edx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, esi
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [ecx+4], eax
        push esi
        lea eax, ss:[esp+0x54]
        mov dword ptr ds : [ecx+8], edx
        push eax
        lea ecx, ss:[esp+0x40]
        push ecx
        call public_423b60
        add esp, 0x24
        lea ecx, ss:[esp+0x20]
        call public_410190
        fstp dword ptr ss : [ebp+0x4A4]
        fld dword ptr ss : [esp+0x38]
        fsub dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x40]
        fsub dword ptr ss : [esp+0x4C]
        fstp dword ptr ss : [esp+0x10]
        fcom dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 0x41
        je public_58555a
        fstp st(0)
        fld dword ptr ss : [esp+0x10]
        public_58555a : nop
        fmul qword ptr ds : [public_5c75e8]
        fst dword ptr ss : [ebp+0x4A4]
        mov edx, dword ptr ds : [public_5c6d90]
        fstp dword ptr ss : [esp+0x5C]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x2C]
        push edx
        lea edx, ss:[esp+0x60]
        push edx
        mov edx, dword ptr ss : [ebp+0x4B8]
        push ebx
        push edx
        push eax
        call dword ptr ds : [ecx+0x88]
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x30]
        mov al, byte ptr ss : [esp+0xA4]
        cmp al, bl
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x34]
        faddp 
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x2C]
        faddp 
        fsqrt 
        fadd dword ptr ss : [ebp+0x4A4]
        fstp dword ptr ss : [ebp+0x4A4]
        je public_5855cc
        mov dword ptr ss : [ebp+0x4A4], 0x41600000
        public_5855cc : nop
        push 1
        mov ecx, ebp
        call public_585630
        pop edi
        mov dword ptr ss : [ebp+0x4A0], ebx
        mov dword ptr ss : [ebp+0x49C], ebx
        mov dword ptr ss : [ebp+0x498], ebx
        mov dword ptr ss : [ebp+0x494], ebx
        pop ebx
        pop esi
        pop ebp
        add esp, 0x8C
        ret 8
        public_5855fa : nop
        lea esi, ss:[ebp+0x330]
        mov ecx, esi
        mov dword ptr ss : [ebp+0x4B8], 0xFFFFFFFF
        call public_420d60
        test al, al
        je public_58561c
        mov ecx, esi
        call public_59eee0
        public_58561c : nop
        pop esi
        pop ebp
        add esp, 0x8C
        ret 8
        UNREACHABLE_TRAP(0x585380)
    }
}

#undef public_58555a
#undef public_5855cc
#undef public_5855fa
#undef public_58561c
