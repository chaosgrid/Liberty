#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_555f60);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_55606b _public_55606b

PROC_DECLARE(0x555f60, internal_555f60, public_555f60);
extern "C" NAKED register_t __cdecl internal_555f60()
{
    __asm
    {
        sub esp, 0x1C
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x20]
        mov eax, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [eax+0x18]
        mov ecx, dword ptr ds : [public_5c6d90]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0x90]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x18], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x1C], edx
        mov eax, dword ptr ds : [eax+8]
        lea ecx, ss:[esp+0x14]
        push ecx
        mov dword ptr ss : [esp+0x24], eax
        lea edx, ss:[esp+0xC]
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        mov eax, dword ptr ss : [esp+0x34]
        lea ecx, ss:[esp+0x18]
        push ecx
        push 0x3F800000
        lea edx, ss:[esp+0x2C]
        push edx
        push eax
        call dword ptr ds : [public_5c6bac]
        add esp, 0x1C
        test eax, eax
        je public_55606b
        fld dword ptr ss : [esp+0xC]
        push ebx
        fld dword ptr ss : [esp+0xC]
        push ebp
        fmul qword ptr ds : [public_5e1220]
        sub esp, 8
        mov byte ptr ds : [esi+0x24], 0
        fsubp 
        fadd qword ptr ds : [public_5c75e8]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_5c71c4]
        call public_5b7ec0
        fld dword ptr ss : [esp+0x20]
        fsub dword ptr ss : [esp+0x18]
        mov edi, eax
        fadd qword ptr ds : [public_5c75e8]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_5c71c4]
        call public_5b7ec0
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_5c9800]
        mov ebx, eax
        fadd qword ptr ds : [public_5c75e8]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_5c71c4]
        call public_5b7ec0
        fld dword ptr ss : [esp+0x18]
        fadd st(0), st
        mov ebp, eax
        fadd qword ptr ds : [public_5c75e8]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_5c71c4]
        add esp, 8
        call public_5b7ec0
        add esi, 0x10
        mov dword ptr ds : [esi], edi
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebp
        pop ebp
        pop ebx
        pop edi
        mov dword ptr ds : [esi+0xC], eax
        pop esi
        add esp, 0x1C
        ret 4
        public_55606b : nop
        mov byte ptr ds : [esi+0x24], 1
        xor edi, edi
        xor eax, eax
        xor ecx, ecx
        xor edx, edx
        add esi, 0x10
        mov dword ptr ds : [esi], edi
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [esi+8], ecx
        pop edi
        mov dword ptr ds : [esi+0xC], eax
        pop esi
        add esp, 0x1C
        ret 4
        UNREACHABLE_TRAP(0x555f60)
    }
}

#undef public_55606b
