#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4aa40);
CLANG_FORWARD_PROC_SYMBOL(public_6f4af00);
CLANG_FORWARD_PROC_SYMBOL(public_6f57de0);

#define public_6f4699e _public_6f4699e
#define public_6f469a8 _public_6f469a8
#define public_6f469d3 _public_6f469d3
#define public_6f469db _public_6f469db
#define public_6f469fc _public_6f469fc
#define public_6f46a1c _public_6f46a1c

PROC_DECLARE(0x6f46910, internal_6f46910, public_6f46910);
extern "C" NAKED register_t __cdecl internal_6f46910()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        mov ebx, ecx
        push esi
        push edi
        lea eax, ds:[ebx+0x14]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        xor edi, edi
        mov ecx, ebp
        mov dword ptr ds : [ebx+0x104], edi
        call public_6f4aa40
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, dword ptr ss : [ebp+4]
        je public_6f469a8
        mov ecx, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x14]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[ebx+0xDC]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x18]
        mov esi, eax
        mov eax, dword ptr ss : [esp+0x1C]
        lea edi, ds:[ebx+0xB8]
        mov ecx, 9
        rep movsd
        mov ecx, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x18]
        mov esi, eax
        mov eax, dword ptr ds : [public_6f61e20]
        test eax, eax
        lea edi, ds:[ebx+0xE8]
        jne public_6f4699e
        call public_6f57de0
        mov dword ptr ds : [public_6f61e20], eax
        public_6f4699e : nop
        mov ecx, dword ptr ds : [eax]
        push esi
        push edi
        push eax
        call dword ptr ds : [ecx+0x50]
        xor edi, edi
        public_6f469a8 : nop
        mov eax, dword ptr ds : [ebx+0x18]
        cmp eax, 0xFFFFFFFF
        lea esi, ds:[ebx+0x18]
        je public_6f469fc
        push esi
        mov ecx, ebp
        call public_6f4af00
        mov ecx, dword ptr ss : [ebp+4]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        je public_6f469d3
        mov edx, dword ptr ds : [esi]
        cmp edx, dword ptr ds : [eax+0xC]
        jl public_6f469d3
        lea eax, ss:[esp+0x10]
        jmp public_6f469db
        public_6f469d3 : nop
        mov dword ptr ss : [esp+0x14], ecx
        lea eax, ss:[esp+0x14]
        public_6f469db : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        je public_6f469fc
        mov ecx, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x14]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[ebx+0x7C]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        public_6f469fc : nop
        mov cl, byte ptr ds : [ebx+0x30]
        mov al, 1
        test al, cl
        mov dword ptr ds : [ebx+0x100], edi
        je public_6f46a1c
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+0x1C], 0xFFFFFFFF
        pop ebx
        add esp, 8
        ret 8
        public_6f46a1c : nop
        mov ecx, dword ptr ds : [ebx+0x40]
        mov edx, dword ptr ds : [ebx+0x2C]
        pop edi
        pop esi
        add ecx, edx
        pop ebp
        mov dword ptr ds : [ebx+0x1C], ecx
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6f46910)
    }
}

#undef public_6f4699e
#undef public_6f469a8
#undef public_6f469d3
#undef public_6f469db
#undef public_6f469fc
#undef public_6f46a1c
