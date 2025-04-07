#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63327f0);
CLANG_FORWARD_PROC_SYMBOL(public_6332c60);

#define public_6332ca5 _public_6332ca5
#define public_6332d1f _public_6332d1f

PROC_DECLARE(0x6332c60, internal_6332c60, public_6332c60);
extern "C" NAKED register_t __cdecl internal_6332c60()
{
    __asm
    {
        sub esp, 0x28
        push ebx
        push esi
        mov esi, ecx
        mov eax, esi
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        xor ebx, ebx
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ds : [esi+0x34]
        mov dword ptr ss : [esp+8], eax
        mov dword ptr ss : [esp+0xC], ebx
        fild qword ptr ss : [esp+8]
        push edi
        mov edi, 1
        cmp eax, edi
        fdivr qword ptr ds : [public_6399410]
        mov dword ptr ds : [esi+0x30], ebx
        mov dword ptr ss : [esp+0x1C], ecx
        mov dword ptr ss : [esp+0x20], edx
        fstp dword ptr ss : [esp+0xC]
        jb public_6332d1f
        public_6332ca5 : nop
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x18], ebx
        fild qword ptr ss : [esp+0x14]
        push ecx
        lea ecx, ss:[esp+0x2C]
        fmul dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp]
        push ecx
        mov ecx, esi
        call public_63327f0
        fld dword ptr ss : [esp+0x28]
        fsub dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x28]
        fsub dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x20], eax
        fsub dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [esi+0x34]
        fld st(0)
        inc edi
        cmp edi, eax
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        mov dword ptr ss : [esp+0x1C], edx
        faddp 
        mov dword ptr ss : [esp+0x24], ecx
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fmul dword ptr ss : [esp+0xC]
        fadd dword ptr ds : [esi+0x30]
        fstp dword ptr ds : [esi+0x30]
        jbe public_6332ca5
        public_6332d1f : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x28
        ret 
        UNREACHABLE_TRAP(0x6332c60)
    }
}

#undef public_6332ca5
#undef public_6332d1f
