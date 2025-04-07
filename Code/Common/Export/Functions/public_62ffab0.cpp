#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ffab0);
CLANG_FORWARD_PROC_SYMBOL(public_6301640);

#define public_62ffaf5 _public_62ffaf5
#define public_62ffb06 _public_62ffb06
#define public_62ffb14 _public_62ffb14
#define public_62ffb22 _public_62ffb22
#define public_62ffb37 _public_62ffb37
#define public_62ffb52 _public_62ffb52
#define public_62ffb85 _public_62ffb85

PROC_DECLARE(0x62ffab0, internal_62ffab0, public_62ffab0);
extern "C" NAKED register_t __cdecl internal_62ffab0()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov esi, ecx
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        lea ecx, ds:[esi+0x94]
        mov dword ptr ss : [esp+0x1C], edi
        call public_6301640
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [esi+0x98]
        xor ebx, ebx
        cmp eax, ecx
        je public_62ffb52
        lea ecx, ds:[eax+0x10]
        cmp ecx, ebx
        je public_62ffb52
        mov eax, dword ptr ds : [ecx+0xC]
        xor edx, edx
        cmp eax, ebx
        je public_62ffaf5
        mov edx, dword ptr ds : [eax]
        public_62ffaf5 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], edx
        mov esi, dword ptr ds : [ecx+8]
        xor edx, edx
        cmp esi, ebx
        je public_62ffb06
        mov edx, dword ptr ds : [esi]
        public_62ffb06 : nop
        mov dword ptr ds : [eax+4], edx
        mov esi, dword ptr ds : [ecx+0x10]
        xor edx, edx
        cmp esi, ebx
        je public_62ffb14
        mov edx, dword ptr ds : [esi]
        public_62ffb14 : nop
        mov dword ptr ds : [eax+8], edx
        mov esi, dword ptr ds : [ecx+0x14]
        xor edx, edx
        cmp esi, ebx
        je public_62ffb22
        mov edx, dword ptr ds : [esi]
        public_62ffb22 : nop
        mov dword ptr ds : [eax+0xC], edx
        mov esi, dword ptr ds : [ecx+0x38]
        xor edx, edx
        cmp esi, ebx
        mov dword ptr ds : [eax+0x30], esi
        jle public_62ffb85
        lea esi, ds:[eax+0x10]
        add ecx, 0x18
        public_62ffb37 : nop
        mov edi, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [eax+0x30]
        inc edx
        add ecx, 4
        add esi, 4
        cmp edx, edi
        jl public_62ffb37
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 8
        public_62ffb52 : nop
        mov edx, dword ptr ds : [public_6399028]
        push edi
        push 0x27B
/*FIXUP push offset public_63a234c @0x62ffb5e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a234c
        mov eax, 0x100001
/*FIXUP push offset public_63a2318 @0x62ffb68*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a2318
        push eax
        call dword ptr ds : [edx]
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 0x14
        mov dword ptr ds : [eax], ebx
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [eax+8], ebx
        mov dword ptr ds : [eax+0xC], ebx
        mov dword ptr ds : [eax+0x30], ebx
        public_62ffb85 : nop
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x62ffab0)
    }
}

#undef public_62ffaf5
#undef public_62ffb06
#undef public_62ffb14
#undef public_62ffb22
#undef public_62ffb37
#undef public_62ffb52
#undef public_62ffb85
