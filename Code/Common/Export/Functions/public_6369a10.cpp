#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634e0b0);
CLANG_FORWARD_PROC_SYMBOL(public_6362f90);
CLANG_FORWARD_PROC_SYMBOL(public_6363280);
CLANG_FORWARD_PROC_SYMBOL(public_6369a10);

#define public_6369a45 _public_6369a45
#define public_6369a47 _public_6369a47

PROC_DECLARE(0x6369a10, internal_6369a10, public_6369a10);
extern "C" NAKED register_t __cdecl internal_6369a10()
{
    __asm
    {
        sub esp, 0x20
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        mov esi, dword ptr ss : [ebp+0x20]
        mov ebx, dword ptr ds : [esi+0x18]
        mov eax, dword ptr ds : [ebx+0x78]
        push edi
        mov edi, dword ptr ss : [ebp+0x30]
        lea edx, ss:[esp+0x14]
        push edx
        inc eax
        lea edx, ss:[esp+0x14]
        push edx
        mov dword ptr ds : [ebx+0x78], eax
        mov ecx, dword ptr ds : [ebx+0x1C]
        mov eax, dword ptr ds : [ecx]
        push edi
        push esi
        call dword ptr ds : [eax]
        test ebp, ebp
        je public_6369a45
        lea eax, ss:[ebp+0x14]
        jmp public_6369a47
        public_6369a45 : nop
        xor eax, eax
        public_6369a47 : nop
        fld dword ptr ss : [esp+0x10]
        push eax
        fadd dword ptr ss : [esp+0x18]
        push 0
        push 0
        push 0
        push 0
        lea eax, ss:[ebp+0x38]
        push eax
        push ecx
        fstp dword ptr ss : [esp]
        push edi
        push esi
        call public_634e0b0
        mov ecx, dword ptr ds : [ebx+0xF8]
        mov edx, dword ptr ds : [ebx+0xFC]
        mov eax, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x3C], eax
        mov eax, dword ptr ss : [ebp+0x1C]
        lea ebx, ss:[ebp+0x18]
        add esp, 0x24
        mov dword ptr ss : [esp+0x28], ecx
        mov dword ptr ss : [esp+0x20], ecx
        lea ecx, ds:[esi+0x64]
        push eax
        mov dword ptr ss : [esp+0x30], edx
        mov dword ptr ss : [esp+0x28], edx
        mov dword ptr ss : [esp+0x20], ecx
        call public_6363280
        fld dword ptr ss : [esp+0x20]
        fsub dword ptr ds : [esi+0x44]
        push ecx
        mov ecx, dword ptr ss : [esp+0x20]
        fadd dword ptr ss : [esp+0x28]
        fsub dword ptr ds : [esi+0x48]
        fmul dword ptr ds : [esi+0x4C]
        fadd dword ptr ds : [esi+0x54]
        fadd dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp]
        push ebx
        call public_6362f90
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ebx+4], eax
        mov edx, dword ptr ss : [ebp+0x2C]
        add ebp, 0x28
        mov dword ptr ss : [esp+0x1C], ecx
        lea esi, ds:[edi+0x64]
        push edx
        mov ecx, esi
        call public_6363280
        fld dword ptr ss : [esp+0x28]
        fsub dword ptr ds : [edi+0x44]
        push ecx
        mov ecx, esi
        fadd dword ptr ss : [esp+0x30]
        fsub dword ptr ds : [edi+0x48]
        fmul dword ptr ds : [edi+0x4C]
        fadd dword ptr ds : [edi+0x54]
        fadd dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp]
        push ebp
        call public_6362f90
        pop edi
        pop esi
        mov dword ptr ss : [ebp+4], eax
        pop ebp
        pop ebx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x6369a10)
    }
}

#undef public_6369a45
#undef public_6369a47
