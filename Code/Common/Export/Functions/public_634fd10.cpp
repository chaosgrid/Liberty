#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6344070);
CLANG_FORWARD_PROC_SYMBOL(public_634fd10);
CLANG_FORWARD_PROC_SYMBOL(public_6356bc0);
CLANG_FORWARD_PROC_SYMBOL(public_635a1e0);

#define public_634fe3c _public_634fe3c
#define public_634fe4f _public_634fe4f

PROC_DECLARE(0x634fd10, internal_634fd10, public_634fd10);
extern "C" NAKED register_t __cdecl internal_634fd10()
{
    __asm
    {
        sub esp, 0x1C
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x28]
        mov ebx, dword ptr ds : [esi+0x28]
        test ebx, ebx
        je public_634fe4f
        mov eax, dword ptr ds : [esi+0x18]
        mov eax, dword ptr ds : [eax+0xA4]
        inc word ptr ds : [eax+0x10]
        push edi
        push 1
        push 0
        lea edx, ss:[esp+0x18]
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        call public_6356bc0
        mov edi, eax
        cmp dword ptr ss : [esp+0x10], 1
        jne public_634fe3c
        movsx esi, word ptr ds : [ebx+0xC]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ds : [edx+0xF8]
        add esi, ebx
        mov ebx, dword ptr ds : [esi+0x68]
        push ebp
        mov ebp, dword ptr ds : [esi+0x6C]
        mov dword ptr ds : [esi+0x68], eax
        mov ecx, dword ptr ds : [edx+0xFC]
        mov dword ptr ds : [esi+0x6C], ecx
        mov ecx, esi
        call public_635a1e0
        mov edx, dword ptr ds : [esi+0x54]
        mov eax, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [edi+0x54], edx
        mov dword ptr ds : [esi+0x54], 0
        mov dword ptr ds : [edi+0x68], ebx
        mov dword ptr ds : [edi+0x58], eax
        mov dword ptr ds : [edi+0x6C], ebp
        mov eax, dword ptr ds : [esi+0x40]
        fld dword ptr ds : [esi+0x38]
        fld st(0)
        mov ecx, dword ptr ds : [esi+0x3C]
        mov dword ptr ds : [esi+0x68], ebx
        mov dword ptr ds : [esi+0x6C], ebp
        fmul dword ptr ds : [eax+0x78]
        mov dword ptr ss : [esp+0x34], ecx
        mov esi, dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp+0x1C]
        pop ebp
        fld st(0)
        fmul dword ptr ds : [eax+0x7C]
        fstp dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [eax+0x80]
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ds : [eax+0x8C]
        fadd dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ds : [eax+0x90]
        faddp 
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ds : [eax+0x88]
        mov eax, dword ptr ds : [edi+0x40]
        fadd dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x18]
        fld st(0)
        fmul dword ptr ds : [eax+0x90]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [eax+0x8C]
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [eax+0x88]
        faddp 
        fxch 
        fmul dword ptr ds : [eax+0x80]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [eax+0x7C]
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [eax+0x78]
        faddp 
        fstp dword ptr ds : [edi+0x38]
        fstp dword ptr ds : [edi+0x3C]
        public_634fe3c : nop
        mov edx, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [edx+0xA4]
        dec word ptr ds : [ecx+0x10]
        call public_6344070
        pop edi
        public_634fe4f : nop
        pop esi
        pop ebx
        add esp, 0x1C
        ret 8
        UNREACHABLE_TRAP(0x634fd10)
    }
}

#undef public_634fe3c
#undef public_634fe4f
