#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634d090);
CLANG_FORWARD_PROC_SYMBOL(public_63609c0);

#define public_6360b1e _public_6360b1e
#define public_6360b43 _public_6360b43
#define public_6360b6c _public_6360b6c
#define public_6360b90 _public_6360b90
#define public_6360b96 _public_6360b96

PROC_DECLARE(0x6360ad0, internal_6360ad0, public_6360ad0);
extern "C" NAKED register_t __cdecl internal_6360ad0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi+0xF8]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x108], eax
        mov ebx, ecx
        mov ecx, dword ptr ds : [esi+0xFC]
        mov dword ptr ds : [esi+0x10C], ecx
        fld dword ptr ds : [esi+0x108]
        fst dword ptr ss : [esp+8]
        push edi
        fld dword ptr ds : [esi+0xAC]
        fadd dword ptr ds : [esi+0x10C]
        fcom dword ptr ds : [public_63a53d0]
        fst dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 0x41
        jne public_6360b90
        public_6360b1e : nop
        fxch 
        fadd dword ptr ds : [public_63a53d0]
        fxch 
        fsub dword ptr ds : [public_63a53d0]
        fcom dword ptr ds : [public_63a53d0]
        fnstsw ax
        test ah, 0x41
        je public_6360b1e
        fstp dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0xC]
        public_6360b43 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+0x100], eax
        mov dword ptr ds : [esi+0x104], ecx
        fld dword ptr ds : [esi+0x10C]
        mov edi, dword ptr ds : [edx+8]
        fadd dword ptr ds : [esi+0x108]
        xor ecx, ecx
        mov cx, word ptr ds : [edi+0xE]
        public_6360b6c : nop
        cmp ecx, 0xFFFF
        je public_6360b96
        mov eax, dword ptr ds : [edi+4]
        shl ecx, 4
        add eax, ecx
        xor ecx, ecx
        test eax, eax
        mov cx, word ptr ds : [eax+4]
        je public_6360b96
        fld dword ptr ds : [eax+8]
        fsub st, st(1)
        fstp dword ptr ds : [eax+8]
        jmp public_6360b6c
        public_6360b90 : nop
        fstp st(0)
        fstp st(0)
        jmp public_6360b43
        public_6360b96 : nop
        mov eax, dword ptr ds : [edx+8]
        fld dword ptr ds : [eax+8]
        fsub st, st(1)
        fstp dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [esi+0x108]
        mov dword ptr ds : [edx+0x14], eax
        mov ecx, dword ptr ds : [esi+0x10C]
        fstp st(0)
        mov dword ptr ds : [edx+0x18], ecx
        mov dword ptr ds : [edx+0x10], 0
        mov edx, dword ptr ds : [esi+0x10C]
        mov eax, dword ptr ds : [esi+0x108]
        push edx
        push eax
        mov ecx, esi
        call public_634d090
        mov ecx, dword ptr ds : [esi+0x104]
        mov edx, dword ptr ds : [esi+0x100]
        push ecx
        mov ecx, dword ptr ds : [esi+4]
        push edx
        push ebx
        call public_63609c0
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6360ad0)
    }
}

#undef public_6360b1e
#undef public_6360b43
#undef public_6360b6c
#undef public_6360b90
#undef public_6360b96
