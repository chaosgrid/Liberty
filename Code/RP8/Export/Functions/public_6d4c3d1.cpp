#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4c3d1);

#define public_6d4c3fe _public_6d4c3fe
#define public_6d4c414 _public_6d4c414
#define public_6d4c420 _public_6d4c420
#define public_6d4c458 _public_6d4c458

PROC_DECLARE(0x6d4c3d1, internal_6d4c3d1, public_6d4c3d1);
extern "C" NAKED register_t __cdecl internal_6d4c3d1()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ebx
        mov ebx, dword ptr ss : [ebp+8]
        push esi
        mov esi, dword ptr ds : [ebx+0x188]
        cmp dword ptr ds : [esi+0x18], 0
        push edi
        jne public_6d4c3fe
        mov eax, dword ptr ds : [ebx+4]
        push 0
        push dword ptr ds : [esi+0x10]
        push dword ptr ds : [esi+0x14]
        push dword ptr ds : [esi+8]
        push ebx
        call dword ptr ds : [eax+0x1C]
        add esp, 0x14
        mov dword ptr ds : [esi+0xC], eax
        public_6d4c3fe : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        mov ecx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ss : [ebp+0x20]
        sub edi, dword ptr ds : [esi+0x18]
        sub eax, ecx
        cmp edi, eax
        jbe public_6d4c414
        mov edi, eax
        public_6d4c414 : nop
        mov eax, dword ptr ds : [ebx+0x60]
        sub eax, dword ptr ds : [esi+0x14]
        cmp edi, eax
        jbe public_6d4c420
        mov edi, eax
        public_6d4c420 : nop
        mov edx, dword ptr ss : [ebp+0x18]
        mov eax, dword ptr ds : [ebx+0x1A4]
        lea ecx, ds:[edx+ecx*4]
        mov edx, dword ptr ds : [esi+0xC]
        push edi
        push ecx
        mov ecx, dword ptr ds : [esi+0x18]
        lea ecx, ds:[edx+ecx*4]
        push ecx
        push ebx
        call dword ptr ds : [eax+4]
        mov eax, dword ptr ss : [ebp+0x1C]
        add dword ptr ds : [eax], edi
        add dword ptr ds : [esi+0x18], edi
        mov ecx, dword ptr ds : [esi+0x18]
        mov eax, dword ptr ds : [esi+0x10]
        add esp, 0x10
        cmp ecx, eax
        jb public_6d4c458
        add dword ptr ds : [esi+0x14], eax
        and dword ptr ds : [esi+0x18], 0
        public_6d4c458 : nop
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d4c3d1)
    }
}

#undef public_6d4c3fe
#undef public_6d4c414
#undef public_6d4c420
#undef public_6d4c458
