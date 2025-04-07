#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f0fda0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49090);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c9c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f50f90);

#define public_6f4ca20 _public_6f4ca20
#define public_6f4ca45 _public_6f4ca45
#define public_6f4ca53 _public_6f4ca53

PROC_DECLARE(0x6f4c9c0, internal_6f4c9c0, public_6f4c9c0);
extern "C" NAKED register_t __cdecl internal_6f4c9c0()
{
    __asm
    {
        sub esp, 0x1C
        push ebx
        push esi
        xor ebx, ebx
        push edi
/*FIXUP push offset public_6fbb34c @0x6f4c9c8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb34c
        mov esi, ecx
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x28], 0xBF800000
        mov byte ptr ss : [esp+0x24], bl
        call dword ptr ds : [public_6fb3684]
        mov edi, dword ptr ds : [esi+0x200]
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ds : [public_6fbb23c]
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ds : [esi+0x204]
        add esp, 4
        cmp edi, eax
        mov byte ptr ss : [esp+0x20], 1
        je public_6f4ca53
        push ebp
        mov ebp, dword ptr ds : [public_6fb33fc]
        lea ecx, ds:[ecx]
        public_6f4ca20 : nop
        xor ecx, ecx
        mov cl, byte ptr ds : [esi+0x80]
        push ecx
        mov ecx, dword ptr ds : [edi]
        call public_6f49090
        mov eax, dword ptr ds : [edi]
        cmp dword ptr ds : [eax+0x10], ebx
        je public_6f4ca45
        mov eax, dword ptr ds : [eax+0xC]
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        call ebp
        add esp, 8
        public_6f4ca45 : nop
        mov eax, dword ptr ds : [esi+0x204]
        add edi, 4
        cmp edi, eax
        jne public_6f4ca20
        pop ebp
        public_6f4ca53 : nop
        mov eax, dword ptr ds : [esi+0x1F8]
        mov ecx, dword ptr ds : [eax+0x14]
        push 1
        push ecx
        call public_6f50f90
        fstp dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [esi+0x1F8]
        mov edx, dword ptr ds : [esi]
        add esp, 8
        push eax
        mov eax, dword ptr ds : [ecx+0x14]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0xB0]
        mov ecx, esi
        call public_6f0fda0
        pop edi
        pop esi
        pop ebx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6f4c9c0)
    }
}

#undef public_6f4ca20
#undef public_6f4ca45
#undef public_6f4ca53
