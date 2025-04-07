#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4af00);

#define public_6f48333 _public_6f48333
#define public_6f4833c _public_6f4833c
#define public_6f48365 _public_6f48365
#define public_6f4836d _public_6f4836d
#define public_6f48396 _public_6f48396

PROC_DECLARE(0x6f48320, internal_6f48320, public_6f48320);
extern "C" NAKED register_t __cdecl internal_6f48320()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, ecx
        test byte ptr ds : [ebx+0x30], 1
        je public_6f48333
        mov dword ptr ds : [ebx+0x1C], 0xFFFFFFFF
        jmp public_6f4833c
        public_6f48333 : nop
        mov eax, dword ptr ds : [ebx+0x40]
        add eax, dword ptr ds : [ebx+0x2C]
        mov dword ptr ds : [ebx+0x1C], eax
        public_6f4833c : nop
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        lea esi, ds:[ebx+0x14]
        push esi
        mov ecx, edi
        call public_6f4af00
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        je public_6f48365
        mov edx, dword ptr ds : [esi]
        cmp edx, dword ptr ds : [eax+0xC]
        jl public_6f48365
        lea eax, ss:[esp+0x14]
        jmp public_6f4836d
        public_6f48365 : nop
        mov dword ptr ss : [esp+0xC], ecx
        lea eax, ss:[esp+0xC]
        public_6f4836d : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        pop edi
        pop esi
        je public_6f48396
        mov eax, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [eax+0xCC]
        test eax, eax
        je public_6f48396
        mov ecx, dword ptr ds : [eax]
        add ebx, 0x28
        push ebx
        push eax
        call dword ptr ds : [ecx+0x1C]
        neg eax
        sbb eax, eax
        inc eax
        pop ebx
        pop ecx
        ret 8
        public_6f48396 : nop
        xor al, al
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f48320)
    }
}

#undef public_6f48333
#undef public_6f4833c
#undef public_6f48365
#undef public_6f4836d
#undef public_6f48396
