#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6352b90);
CLANG_FORWARD_PROC_SYMBOL(public_6362c70);
CLANG_FORWARD_PROC_SYMBOL(public_6362d60);
CLANG_FORWARD_PROC_SYMBOL(public_6362d90);
CLANG_FORWARD_PROC_SYMBOL(public_6362f90);
CLANG_FORWARD_PROC_SYMBOL(public_6363280);

#define public_6362dbf _public_6362dbf

PROC_DECLARE(0x6362d90, internal_6362d90, public_6362d90);
extern "C" NAKED register_t __cdecl internal_6362d90()
{
    __asm
    {
        sub esp, 0x20
        push ebp
        mov ebp, ecx
        call public_6352b90
        mov eax, dword ptr ss : [ebp+0x14]
        test ah, 0xC0
        jne public_6362dbf
        fld dword ptr ss : [ebp+0x54]
        fcomp dword ptr ds : [public_658ab1c]
        fnstsw ax
        test ah, 0x41
        jne public_6362dbf
        mov ecx, ebp
        call public_6362d60
        pop ebp
        add esp, 0x20
        ret 
        public_6362dbf : nop
        push ebx
        mov ebx, dword ptr ss : [ebp+0x44]
        push esi
        mov esi, dword ptr ss : [ebp+0x28]
        push edi
        mov edi, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [edi+0x1C]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x14]
        push edx
        lea edx, ss:[esp+0x14]
        push edx
        push ebx
        push esi
        call dword ptr ds : [eax]
        mov edx, dword ptr ds : [edi+0x78]
        inc edx
        mov dword ptr ds : [edi+0x78], edx
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ss : [esp+0x14]
        push ecx
        mov ecx, ebp
        fstp dword ptr ss : [esp]
        call public_6362c70
        mov ecx, dword ptr ds : [edi+0xFC]
        mov eax, dword ptr ds : [edi+0xF8]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x18], edx
        mov edx, dword ptr ss : [ebp+0x1C]
        lea edi, ss:[ebp+0x18]
        mov dword ptr ss : [esp+0x2C], ecx
        mov dword ptr ss : [esp+0x24], ecx
        lea ecx, ds:[esi+0x64]
        push edx
        mov dword ptr ss : [esp+0x2C], eax
        mov dword ptr ss : [esp+0x24], eax
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
        push edi
        call public_6362f90
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ss : [ebp+0x38]
        mov eax, dword ptr ss : [esp+0x14]
        add ebp, 0x34
        lea esi, ds:[ebx+0x64]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], eax
        call public_6363280
        fld dword ptr ss : [esp+0x28]
        fsub dword ptr ds : [ebx+0x44]
        push ecx
        mov ecx, esi
        fadd dword ptr ss : [esp+0x30]
        fsub dword ptr ds : [ebx+0x48]
        fmul dword ptr ds : [ebx+0x4C]
        fadd dword ptr ds : [ebx+0x54]
        fadd dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp]
        push ebp
        call public_6362f90
        pop edi
        pop esi
        pop ebx
        mov dword ptr ss : [ebp+4], eax
        pop ebp
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x6362d90)
    }
}

#undef public_6362dbf
