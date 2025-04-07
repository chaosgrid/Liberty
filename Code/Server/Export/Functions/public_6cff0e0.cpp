#include "Server-PCH.h"


#define public_6cff0f0 _public_6cff0f0
#define public_6cff0fc _public_6cff0fc
#define public_6cff0fe _public_6cff0fe
#define public_6cff110 _public_6cff110
#define public_6cff11f _public_6cff11f
#define public_6cff123 _public_6cff123
#define public_6cff142 _public_6cff142

PROC_DECLARE(0x6cff0e0, internal_6cff0e0, public_6cff0e0);
extern "C" NAKED register_t __cdecl internal_6cff0e0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x18]
        mov edx, dword ptr ds : [ecx+0x1C]
        cmp eax, edx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        je public_6cff0fc
        public_6cff0f0 : nop
        cmp word ptr ds : [eax], di
        je public_6cff142
        add eax, 2
        cmp eax, edx
        jne public_6cff0f0
        public_6cff0fc : nop
        mov esi, edx
        public_6cff0fe : nop
        cmp esi, edx
        je public_6cff123
        lea eax, ds:[esi+2]
        cmp eax, edx
        je public_6cff11f
        sub esi, eax
        push ebx
        lea esp, ss:[esp]
        public_6cff110 : nop
        mov bx, word ptr ds : [eax]
        mov word ptr ds : [esi+eax], bx
        add eax, 2
        cmp eax, edx
        jne public_6cff110
        pop ebx
        public_6cff11f : nop
        add dword ptr ds : [ecx+0x1C], 0xFFFFFFFE
        public_6cff123 : nop
        mov esi, dword ptr ds : [ecx+0x2C]
        mov eax, dword ptr ds : [ecx+0x24]
        mov byte ptr ds : [ecx+0x10], 0
        mov edx, dword ptr ds : [eax]
        push esi
        add ecx, 0x28
        push edi
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x1E8]
        pop edi
        pop esi
        ret 4
        public_6cff142 : nop
        mov esi, eax
        jmp public_6cff0fe
        UNREACHABLE_TRAP(0x6cff0e0)
    }
}

#undef public_6cff0f0
#undef public_6cff0fc
#undef public_6cff0fe
#undef public_6cff110
#undef public_6cff11f
#undef public_6cff123
#undef public_6cff142
