#include "Common-PCH.h"


#define public_62bcb65 _public_62bcb65
#define public_62bcb7f _public_62bcb7f
#define public_62bcba2 _public_62bcba2
#define public_62bcba4 _public_62bcba4
#define public_62bcbab _public_62bcbab

PROC_DECLARE(0x62bcb40, internal_62bcb40, public_62bcb40);
extern "C" NAKED register_t __cdecl internal_62bcb40()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        mov dword ptr ss : [ebp], 0
        mov dword ptr ds : [ebx], 0
        mov esi, dword ptr ds : [ecx+8]
        push edi
        mov edi, dword ptr ds : [ecx+0xC]
        xor al, al
        cmp esi, edi
        je public_62bcba4
        public_62bcb65 : nop
        mov al, byte ptr ss : [esp+0x20]
        test al, al
        je public_62bcb7f
        mov eax, dword ptr ds : [esi]
        fld dword ptr ds : [eax+4]
        fcomp dword ptr ds : [public_639e884]
        fnstsw ax
        test ah, 0x41
        je public_62bcba2
        public_62bcb7f : nop
        mov ecx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx]
        fcom dword ptr ds : [public_639b984]
        fnstsw ax
        test ah, 0x41
        je public_62bcbab
        add esi, 4
        fstp st(0)
        cmp esi, edi
        jne public_62bcb65
        public_62bcba2 : nop
        xor al, al
        public_62bcba4 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x10
        public_62bcbab : nop
        mov ecx, dword ptr ds : [esi]
        pop edi
        pop esi
        mov dword ptr ss : [ebp], ecx
        fstp dword ptr ds : [ebx]
        pop ebp
        mov al, 1
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x62bcb40)
    }
}

#undef public_62bcb65
#undef public_62bcb7f
#undef public_62bcba2
#undef public_62bcba4
#undef public_62bcbab
