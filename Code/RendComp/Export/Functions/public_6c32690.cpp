#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2a270);
CLANG_FORWARD_PROC_SYMBOL(public_6c2f7d0);
CLANG_FORWARD_PROC_SYMBOL(public_6c31e60);
CLANG_FORWARD_PROC_SYMBOL(public_6c31e80);
CLANG_FORWARD_PROC_SYMBOL(public_6c31e90);
CLANG_FORWARD_PROC_SYMBOL(public_6c31eb0);
CLANG_FORWARD_PROC_SYMBOL(public_6c31ff0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34170);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ab0);

#define public_6c32731 _public_6c32731
#define public_6c32739 _public_6c32739
#define public_6c32760 _public_6c32760
#define public_6c3278b _public_6c3278b

PROC_DECLARE(0x6c32690, internal_6c32690, public_6c32690);
extern "C" NAKED register_t __cdecl internal_6c32690()
{
    __asm
    {
        sub esp, 0x38
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x4C]
        mov ebp, dword ptr ds : [edi+0xC]
        lea eax, ss:[esp+0x54]
        push eax
        lea ecx, ss:[esp+0x50]
        lea esi, ds:[edi+8]
        push ecx
        mov ecx, esi
        call public_6c2a270
        mov ebx, dword ptr ss : [esp+0x4C]
        cmp ebx, ebp
        je public_6c3278b
        lea ecx, ss:[esp+0x1C]
        call public_6c31e60
        mov edx, dword ptr ss : [esp+0x50]
        push eax
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x34], edx
        call public_6c31e90
        lea eax, ss:[esp+0x30]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, esi
        call public_6c34170
        lea ecx, ss:[esp+0x34]
        call public_6c31e80
        lea ecx, ss:[esp+0x1C]
        call public_6c31e80
        mov al, byte ptr ss : [esp+0x18]
        test al, al
        je public_6c3278b
        mov edi, dword ptr ds : [edi+0xC]
        lea edx, ss:[esp+0x50]
        push edx
        mov ecx, esi
        call public_6c34ab0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0x10], eax
        je public_6c32731
        mov ecx, dword ptr ss : [esp+0x50]
        cmp ecx, dword ptr ds : [eax+0xC]
        jl public_6c32731
        lea eax, ss:[esp+0x10]
        jmp public_6c32739
        public_6c32731 : nop
        mov dword ptr ss : [esp+0x14], esi
        lea eax, ss:[esp+0x14]
        public_6c32739 : nop
        mov ebp, dword ptr ds : [eax]
        cmp ebp, edi
        je public_6c3278b
        add ebx, 0x10
        add ebp, 0x10
        push ebx
        mov ecx, ebp
        call public_6c31eb0
        mov ecx, ebx
        call public_6c2f7d0
        xor esi, esi
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jle public_6c3278b
        mov edi, edi
        public_6c32760 : nop
        push esi
        mov ecx, ebx
        call public_6c31ff0
        push esi
        mov ecx, ebp
        mov edx, eax
        call public_6c31ff0
        mov edx, dword ptr ds : [edx]
        mov edi, eax
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [edi], eax
        mov eax, dword ptr ss : [esp+0x14]
        inc esi
        cmp esi, eax
        jl public_6c32760
        public_6c3278b : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x38
        ret 0xC
        UNREACHABLE_TRAP(0x6c32690)
    }
}

#undef public_6c32731
#undef public_6c32739
#undef public_6c32760
#undef public_6c3278b
