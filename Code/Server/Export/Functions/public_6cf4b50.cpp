#include "Server-PCH.h"


#define public_6cf4b6e _public_6cf4b6e
#define public_6cf4b70 _public_6cf4b70
#define public_6cf4bb3 _public_6cf4bb3
#define public_6cf4bb5 _public_6cf4bb5
#define public_6cf4c00 _public_6cf4c00

PROC_DECLARE(0x6cf4b50, internal_6cf4b50, public_6cf4b50);
extern "C" NAKED register_t __cdecl internal_6cf4b50()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx-0x50]
        test ecx, ecx
        push esi
        je public_6cf4b6e
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 0xA7
        cmp al, 0xA7
        jne public_6cf4b6e
        mov esi, ecx
        jmp public_6cf4b70
        public_6cf4b6e : nop
        xor esi, esi
        public_6cf4b70 : nop
        mov edx, dword ptr ds : [esi+0xFC]
        test edx, edx
        je public_6cf4c00
        fld dword ptr ds : [esi+0x100]
        fcomp dword ptr ds : [edx+8]
        fnstsw ax
        test ah, 1
        jne public_6cf4c00
        fld dword ptr ds : [edx+0x10]
        fadd dword ptr ds : [edx+8]
        fcomp dword ptr ds : [esi+0x100]
        fnstsw ax
        test ah, 1
        jne public_6cf4c00
        test ecx, ecx
        je public_6cf4bb3
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0xA7
        cmp dl, 0xA7
        je public_6cf4bb5
        public_6cf4bb3 : nop
        xor ecx, ecx
        public_6cf4bb5 : nop
        mov eax, dword ptr ds : [ebx-0x60]
        push edi
        mov edi, dword ptr ds : [ecx+0xFC]
        lea esi, ds:[ebx-0x60]
        mov ecx, esi
        call dword ptr ds : [eax+0xC]
        fld dword ptr ds : [eax+0x20]
        fld dword ptr ds : [eax+0x14]
        mov edx, dword ptr ds : [esi]
        fld dword ptr ds : [eax+8]
        mov ecx, esi
        fstp dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x14]
        call dword ptr ds : [edx+0x30]
        fmul dword ptr ds : [edi+0xC]
        mov eax, dword ptr ss : [esp+0x1C]
        push ecx
        lea ecx, ss:[esp+0x10]
        fmul dword ptr ds : [eax]
        fchs 
        fstp dword ptr ss : [esp]
        push ecx
        mov ecx, ebx
        call dword ptr ds : [public_6d64478]
        pop edi
        public_6cf4c00 : nop
        pop esi
        pop ebx
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x6cf4b50)
    }
}

#undef public_6cf4b6e
#undef public_6cf4b70
#undef public_6cf4bb3
#undef public_6cf4bb5
#undef public_6cf4c00
