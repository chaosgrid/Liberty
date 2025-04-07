#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecaa00);
CLANG_FORWARD_PROC_SYMBOL(public_6ecc4e0);

#define public_6ecce9e _public_6ecce9e
#define public_6eccee0 _public_6eccee0
#define public_6eccf05 _public_6eccf05
#define public_6eccf15 _public_6eccf15
#define public_6eccf30 _public_6eccf30
#define public_6eccf50 _public_6eccf50
#define public_6eccf5d _public_6eccf5d
#define public_6eccf65 _public_6eccf65
#define public_6eccf6f _public_6eccf6f
#define public_6eccf76 _public_6eccf76
#define public_6eccf7a _public_6eccf7a

PROC_DECLARE(0x6ecce90, internal_6ecce90, public_6ecce90);
extern "C" NAKED register_t __cdecl internal_6ecce90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0xFFFFFFFF
        jne public_6ecce9e
        or eax, eax
        ret 0x10
        public_6ecce9e : nop
        test eax, eax
        push ebx
        push ebp
        push esi
        push edi
        je public_6eccf15
        mov ebx, dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        lea ecx, ds:[ebx+0x28]
        call public_6ecaa00
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, dword ptr ds : [ebx+0x2C]
        je public_6eccf7a
        mov edi, dword ptr ds : [eax+0x1C]
        mov esi, dword ptr ds : [eax+0x18]
        cmp esi, edi
        je public_6eccf7a
        mov ebp, dword ptr ss : [esp+0x20]
        nop 
        lea esp, ss:[esp]
        public_6eccee0 : nop
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, ebx
        mov dword ptr ss : [esp+0x18], edx
        call public_6ecc4e0
        test eax, eax
        je public_6eccf05
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        push ebp
        push edx
        push eax
        call dword ptr ds : [ecx+0x18]
        public_6eccf05 : nop
        add esi, 4
        cmp esi, edi
        jne public_6eccee0
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0x10
        public_6eccf15 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ebp, dword ptr ds : [eax+0x18]
        mov esi, dword ptr ss : [ebp]
        cmp esi, ebp
        je public_6eccf7a
        mov edi, dword ptr ss : [esp+0x20]
        mov ebx, dword ptr ss : [esp+0x1C]
        nop 
        lea esp, ss:[esp]
        public_6eccf30 : nop
        mov eax, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [eax]
        push edi
        push ebx
        push eax
        call dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ds : [esi+8]
        mov cl, byte ptr ds : [eax+0x19]
        test cl, cl
        jne public_6eccf5d
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x19]
        test cl, cl
        jne public_6eccf76
        public_6eccf50 : nop
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x19]
        test cl, cl
        je public_6eccf50
        jmp public_6eccf76
        public_6eccf5d : nop
        mov eax, dword ptr ds : [esi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6eccf6f
        public_6eccf65 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        je public_6eccf65
        public_6eccf6f : nop
        cmp dword ptr ds : [esi+8], eax
        je public_6eccf76
        mov esi, eax
        public_6eccf76 : nop
        cmp esi, ebp
        jne public_6eccf30
        public_6eccf7a : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6ecce90)
    }
}

#undef public_6ecce9e
#undef public_6eccee0
#undef public_6eccf05
#undef public_6eccf15
#undef public_6eccf30
#undef public_6eccf50
#undef public_6eccf5d
#undef public_6eccf65
#undef public_6eccf6f
#undef public_6eccf76
#undef public_6eccf7a
