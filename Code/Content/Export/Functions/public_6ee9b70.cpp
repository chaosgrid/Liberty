#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee9b70);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6ee9ba1 _public_6ee9ba1
#define public_6ee9bbc _public_6ee9bbc

PROC_DECLARE(0x6ee9b70, internal_6ee9b70, public_6ee9b70);
extern "C" NAKED register_t __cdecl internal_6ee9b70()
{
    __asm
    {
        sub esp, 0x10
        mov eax, dword ptr ss : [esp+0x18]
        push ebx
        push ebp
        mov ebp, dword ptr ds : [eax]
        push esi
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [ebx+0x1C]
        push edi
        mov edi, dword ptr ds : [esi+4]
        push 0x10
        mov dword ptr ss : [esp+0x20], edx
        call public_6fa912a
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6ee9ba1
        mov edi, eax
        public_6ee9ba1 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6ee9bbc
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ebp
        mov dword ptr ds : [eax+4], edx
        public_6ee9bbc : nop
        mov ebp, dword ptr ds : [ebx+0x20]
        fild dword ptr ss : [esp+0x2C]
        inc ebp
        mov dword ptr ds : [ebx+0x20], ebp
        mov eax, dword ptr ds : [public_6fcf0f4]
        mov ecx, dword ptr ds : [ebx+0x1C]
        push ecx
        mov dword ptr ss : [esp+0x14], eax
        fstp dword ptr ss : [esp]
        mov dword ptr ss : [esp+0x18], 0
        mov edx, dword ptr ds : [ecx+4]
        lea eax, ss:[esp+0x14]
        push eax
        add edx, 8
/*FIXUP push offset public_6fd1c74 @0x6ee9bea*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd1c74
        mov dword ptr ss : [esp+0x20], edx
        call dword ptr ds : [public_6fb342c]
        add esp, 0xC
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x6ee9b70)
    }
}

#undef public_6ee9ba1
#undef public_6ee9bbc
