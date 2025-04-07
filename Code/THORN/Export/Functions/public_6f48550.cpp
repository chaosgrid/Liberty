#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4af00);
CLANG_FORWARD_PROC_SYMBOL(public_6f57f16);

#define public_6f48565 _public_6f48565
#define public_6f4856e _public_6f4856e
#define public_6f48595 _public_6f48595
#define public_6f4859d _public_6f4859d
#define public_6f485cb _public_6f485cb

PROC_DECLARE(0x6f48550, internal_6f48550, public_6f48550);
extern "C" NAKED register_t __cdecl internal_6f48550()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, ecx
        test byte ptr ds : [ebx+0x30], 1
        push esi
        push edi
        je public_6f48565
        mov dword ptr ds : [ebx+0x1C], 0xFFFFFFFF
        jmp public_6f4856e
        public_6f48565 : nop
        mov eax, dword ptr ds : [ebx+0x40]
        add eax, dword ptr ds : [ebx+0x2C]
        mov dword ptr ds : [ebx+0x1C], eax
        public_6f4856e : nop
        mov edi, dword ptr ss : [esp+0x14]
        lea esi, ds:[ebx+0x14]
        push esi
        mov ecx, edi
        call public_6f4af00
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        je public_6f48595
        mov edx, dword ptr ds : [esi]
        cmp edx, dword ptr ds : [eax+0xC]
        jl public_6f48595
        lea eax, ss:[esp+0x14]
        jmp public_6f4859d
        public_6f48595 : nop
        mov dword ptr ss : [esp+0xC], ecx
        lea eax, ss:[esp+0xC]
        public_6f4859d : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        je public_6f485cb
        mov eax, dword ptr ds : [eax+0x10]
        mov esi, dword ptr ds : [eax+0x108]
        test esi, esi
        je public_6f485cb
        fld dword ptr ds : [ebx+0x54]
        mov edi, dword ptr ds : [esi]
        call public_6f57f16
        push eax
        push esi
        call dword ptr ds : [edi+0xC]
        neg eax
        pop edi
        sbb eax, eax
        pop esi
        inc eax
        pop ebx
        pop ecx
        ret 8
        public_6f485cb : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f48550)
    }
}

#undef public_6f48565
#undef public_6f4856e
#undef public_6f48595
#undef public_6f4859d
#undef public_6f485cb
