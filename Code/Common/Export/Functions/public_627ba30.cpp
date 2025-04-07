#include "Common-PCH.h"


#define public_627bad0 _public_627bad0
#define public_627bb1c _public_627bb1c
#define public_627bb20 _public_627bb20
#define public_627bb3f _public_627bb3f
#define public_627bb71 _public_627bb71
#define public_627bb88 _public_627bb88
#define public_627bb95 _public_627bb95
#define public_627bc0d _public_627bc0d
#define public_627bc25 _public_627bc25

PROC_DECLARE(0x627ba30, internal_627ba30, public_627ba30);
extern "C" NAKED register_t __cdecl internal_627ba30()
{
    __asm
    {
        sub esp, 0x44
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x54]
        test esi, esi
        mov dword ptr ss : [esp+0x10], 0
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x14], 0
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x18], 0
        mov edx, dword ptr ss : [esp+0x18]
        push edi
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], ecx
        mov dword ptr ss : [esp+0x28], edx
        mov dword ptr ss : [esp+0x4C], 0x3F800000
        mov dword ptr ss : [esp+0x3C], 0x3F800000
        mov dword ptr ss : [esp+0x2C], 0x3F800000
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x30], 0
        je public_627bc0d
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+0x18]
        xor ebx, ebx
        test eax, eax
        mov dword ptr ss : [esp+0x10], eax
        jle public_627bb95
        mov edi, edi
        public_627bad0 : nop
        mov ecx, dword ptr ds : [esi]
        push ebx
        push esi
        call dword ptr ds : [ecx+0x24]
        mov edi, eax
        test edi, edi
        je public_627bb88
        cmp dword ptr ds : [edi], 2
        jne public_627bb88
        mov edx, dword ptr ds : [edi+0x44]
        mov eax, dword ptr ds : [esi]
        push ebx
        push esi
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ss : [esp+0x60], 0
        call dword ptr ds : [eax+0x1C]
        mov ecx, dword ptr ds : [esi]
        lea edx, ss:[esp+0x58]
        push edx
/*FIXUP push offset public_639b588 @0x627bb07*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b588
        push eax
        push esi
        call dword ptr ds : [ecx+0x84]
        test eax, eax
        je public_627bb1c
        xor eax, eax
        jmp public_627bb20
        public_627bb1c : nop
        mov eax, dword ptr ss : [esp+0x58]
        public_627bb20 : nop
        mov ecx, dword ptr ss : [esp+0x5C]
        test ecx, ecx
        jne public_627bb71
        test eax, eax
        je public_627bb3f
/*FIXUP push offset public_639b580 @0x627bb2c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b580
        push eax
        call dword ptr ds : [public_639902c]
        add esp, 8
        test eax, eax
        je public_627bb88
        public_627bb3f : nop
        lea eax, ds:[edi+8]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x20], ecx
        lea esi, ds:[edi+0x14]
        mov dword ptr ss : [esp+0x24], edx
        mov ecx, 9
        lea edi, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x28], eax
        rep movsd
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x24], ecx
        jmp public_627bc0d
        public_627bb71 : nop
        test eax, eax
        je public_627bb88
        push ecx
        push eax
        call dword ptr ds : [public_639902c]
        add esp, 8
        test eax, eax
        je public_627bc25
        public_627bb88 : nop
        mov eax, dword ptr ss : [esp+0x10]
        inc ebx
        cmp ebx, eax
        jl public_627bad0
        public_627bb95 : nop
        mov dword ptr ss : [esp+0x14], 0
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x18], 0
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x1C], 0
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x20], ecx
        mov dword ptr ss : [esp+0x24], edx
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0x4C], 0x3F800000
        mov dword ptr ss : [esp+0x3C], 0x3F800000
        mov dword ptr ss : [esp+0x2C], 0x3F800000
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x30], 0
        public_627bc0d : nop
        mov eax, dword ptr ss : [esp+0x54]
        mov ecx, 0xC
        lea esi, ss:[esp+0x20]
        mov edi, eax
        rep movsd
        pop edi
        pop esi
        pop ebx
        add esp, 0x44
        ret 
        public_627bc25 : nop
        lea edx, ds:[edi+8]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x24], ecx
        lea esi, ds:[edi+0x14]
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, 9
        lea edi, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x28], edx
        rep movsd
        mov dword ptr ss : [esp+0x24], eax
        jmp public_627bc0d
        UNREACHABLE_TRAP(0x627ba30)
    }
}

#undef public_627bad0
#undef public_627bb1c
#undef public_627bb20
#undef public_627bb3f
#undef public_627bb71
#undef public_627bb88
#undef public_627bb95
#undef public_627bc0d
#undef public_627bc25
