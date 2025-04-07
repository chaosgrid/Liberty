#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_637fd60);
CLANG_FORWARD_PROC_SYMBOL(public_6381270);
CLANG_FORWARD_PROC_SYMBOL(public_63862c0);

#define public_63862e2 _public_63862e2
#define public_63862e8 _public_63862e8
#define public_638634f _public_638634f

PROC_DECLARE(0x63862c0, internal_63862c0, public_63862c0);
extern "C" NAKED register_t __cdecl internal_63862c0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0xC
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [esi+0x50]
        test ah, 8
        mov eax, dword ptr ds : [esi+0x34]
        push edi
        je public_63862e2
        mov edi, dword ptr ds : [eax+4]
        mov ebx, dword ptr ds : [eax+8]
        jmp public_63862e8
        public_63862e2 : nop
        mov ebx, dword ptr ds : [eax+4]
        mov edi, dword ptr ds : [eax+8]
        public_63862e8 : nop
        add dword ptr ds : [public_658bb70], 2
        mov ecx, dword ptr ds : [edi+8]
        lea eax, ss:[esp+0x10]
        push eax
        push esi
        push ecx
        call public_637fd60
        fld qword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [ebp+0x14]
        push eax
        fstp qword ptr ds : [edx]
        mov edx, dword ptr ds : [edi+8]
        push ecx
        push esi
        push edx
        call public_6381270
        mov ecx, dword ptr ss : [ebp+0xC]
        lea edx, ss:[esp+0x2C]
        push edx
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [ebx+8]
        push esi
        push eax
        call public_637fd60
        mov ecx, dword ptr ss : [ebp+0x14]
        fld qword ptr ds : [ecx]
        add esp, 0x28
        fcomp qword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 0x41
        jne public_638634f
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [ecx+4], eax
        public_638634f : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ebx+8]
        push ecx
        push edx
        push esi
        push eax
        call public_6381270
        mov ecx, dword ptr ss : [ebp+0x10]
        add esp, 0x10
        pop edi
        pop esi
        mov dword ptr ds : [ecx], eax
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x63862c0)
    }
}

#undef public_63862e2
#undef public_63862e8
#undef public_638634f
