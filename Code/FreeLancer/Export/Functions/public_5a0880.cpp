#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a0880);

#define public_5a08b8 _public_5a08b8
#define public_5a08e2 _public_5a08e2
#define public_5a0927 _public_5a0927
#define public_5a0930 _public_5a0930
#define public_5a093f _public_5a093f

PROC_DECLARE(0x5a0880, internal_5a0880, public_5a0880);
extern "C" NAKED register_t __cdecl internal_5a0880()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        sub esp, 0x18
        push esi
        mov esi, ecx
        push edi
        lea edi, ds:[esi+0x60]
        mov ecx, edi
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ds : [esi+0x84]
        cmp ecx, 0xFFFFFFFF
        je public_5a0927
        test byte ptr ds : [esi+0x2F4], 1
        jne public_5a08b8
        mov eax, edi
        jmp public_5a08e2
        public_5a08b8 : nop
        fld dword ptr ds : [esi+0xA8]
        lea eax, ss:[esp+8]
        fadd dword ptr ds : [edi]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [edi+4]
        fadd dword ptr ds : [esi+0xAC]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [edi+8]
        fadd dword ptr ds : [esi+0xB0]
        fstp dword ptr ss : [esp+0x10]
        public_5a08e2 : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x14], edx
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        push ebx
        mov dword ptr ss : [esp+0x1C], edx
        mov edx, dword ptr ds : [public_5c6d90]
        lea ebx, ss:[esp+0x18]
        push ebx
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x8C]
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ds : [esi+0x84]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        pop ebx
        public_5a0927 : nop
        mov esi, dword ptr ds : [esi+0xC]
        test esi, esi
        je public_5a093f
        mov edi, edi
        public_5a0930 : nop
        mov eax, dword ptr ds : [esi]
        push edi
        mov ecx, esi
        call dword ptr ds : [eax+0x14]
        mov esi, dword ptr ds : [esi+8]
        test esi, esi
        jne public_5a0930
        public_5a093f : nop
        pop edi
        pop esi
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x5a0880)
    }
}

#undef public_5a08b8
#undef public_5a08e2
#undef public_5a0927
#undef public_5a0930
#undef public_5a093f
