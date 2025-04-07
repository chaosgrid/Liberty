#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6288800);
CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_62df940);
CLANG_FORWARD_PROC_SYMBOL(public_62dfd80);

#define public_62dff5f _public_62dff5f
#define public_62dffba _public_62dffba

PROC_DECLARE(0x62dfd80, internal_62dfd80, public_62dfd80);
extern "C" NAKED register_t __cdecl internal_62dfd80()
{
    __asm
    {
        sub esp, 0x18
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x24]
        push esi
        mov esi, dword ptr ss : [esp+0x30]
        push edi
        push esi
        lea eax, ss:[esp+0x14]
        push ebp
        push eax
        call public_6288800
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [esi+0x14]
        mov edi, dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x20]
        lea ecx, ss:[esp+0x40]
        fmul dword ptr ds : [esi+0x10]
        push ecx
        lea edx, ss:[esp+0x3C]
        push edx
        faddp 
        add esi, 0x30
        fld dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x40], 0
        fmul dword ptr ds : [esi-0x24]
        mov dword ptr ss : [esp+0x48], 0x7F7FFFFF
        push esi
        lea eax, ss:[esp+0x28]
        faddp 
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ds : [esi-0x10]
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ds : [esi-0x14]
        faddp 
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [esi-0x18]
        faddp 
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ds : [esi-4]
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ds : [esi-8]
        faddp 
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [esi-0xC]
        faddp 
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ds : [esi-0x20]
        fmul dword ptr ds : [edi+4]
        fld dword ptr ds : [esi-0x1C]
        fmul dword ptr ds : [edi+8]
        faddp 
        fld dword ptr ds : [esi-0x24]
        fmul dword ptr ds : [edi]
        faddp 
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ds : [esi-0x14]
        fmul dword ptr ds : [edi+4]
        fld dword ptr ds : [esi-0x10]
        fmul dword ptr ds : [edi+8]
        faddp 
        fld dword ptr ds : [esi-0x18]
        fmul dword ptr ds : [edi]
        faddp 
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [esi-8]
        fmul dword ptr ds : [edi+4]
        fld dword ptr ds : [esi-4]
        fmul dword ptr ds : [edi+8]
        faddp 
        fld dword ptr ds : [edi]
        fmul dword ptr ds : [esi-0xC]
        faddp 
        fstp dword ptr ss : [esp+0x30]
        push eax
        lea ecx, ss:[esp+0x38]
        push ecx
        call public_62df940
        mov edx, dword ptr ss : [esp+0x58]
        mov bl, al
        add esp, 0x20
        test bl, bl
        je public_62dffba
        fld dword ptr ss : [esp+0x2C]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_62dff5f
        fld dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [edx], 2
        fmul dword ptr ds : [edi+8]
        sub esp, 0xC
        lea ecx, ss:[esp+0x28]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ds : [edi+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ds : [edi]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x24]
        sub esp, 0xC
        fadd dword ptr ss : [ebp+8]
        lea ecx, ss:[esp+0x28]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x2C]
        fadd dword ptr ss : [ebp+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x28]
        fadd dword ptr ss : [ebp]
        fstp dword ptr ss : [esp]
        call public_628b030
        mov eax, dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, eax
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [ecx+8], edx
        fmul dword ptr ds : [edi]
        fld dword ptr ss : [esp+0x34]
        add eax, 0xC
        fmul dword ptr ds : [edi+4]
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ds : [edi+8]
        pop edi
        pop esi
        fstp dword ptr ss : [esp+0x1C]
        fxch 
        fadd dword ptr ss : [ebp]
        fstp dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+8]
        fadd dword ptr ss : [ebp+4]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0xC]
        fadd dword ptr ss : [ebp+8]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], edx
        pop ebp
        fstp dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax+8], ecx
        mov al, bl
        pop ebx
        add esp, 0x18
        ret 
        public_62dff5f : nop
        fld dword ptr ss : [esp+0x34]
        mov dword ptr ds : [edx], 1
        fmul dword ptr ds : [edi]
        mov eax, dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ds : [edi+4]
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ds : [edi+8]
        pop edi
        pop esi
        fstp dword ptr ss : [esp+0x1C]
        fxch 
        fadd dword ptr ss : [ebp]
        fstp dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+8]
        fadd dword ptr ss : [ebp+4]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0xC]
        fadd dword ptr ss : [ebp+8]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], edx
        pop ebp
        fstp dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax+8], ecx
        mov al, bl
        pop ebx
        add esp, 0x18
        ret 
        public_62dffba : nop
        pop edi
        pop esi
        pop ebp
        mov al, bl
        mov dword ptr ds : [edx], 0
        pop ebx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x62dfd80)
    }
}

#undef public_62dff5f
#undef public_62dffba
