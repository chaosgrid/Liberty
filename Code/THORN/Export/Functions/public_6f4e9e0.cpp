#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4c990);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e510);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e970);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e9a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e9e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4eab0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4eb60);
CLANG_FORWARD_PROC_SYMBOL(public_6f4eba0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f2b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f300);
CLANG_FORWARD_PROC_SYMBOL(public_6f4fca0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4fd10);

#define public_6f4ea95 _public_6f4ea95

PROC_DECLARE(0x6f4e9e0, internal_6f4e9e0, public_6f4e9e0);
extern "C" NAKED register_t __cdecl internal_6f4e9e0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [public_6f61e28]
        push ebx
        mov ebx, dword ptr ds : [eax+0x78]
        push ebp
        push esi
        push edi
        call public_6f4eba0
        call public_6f4eab0
        call public_6f4f300
        mov ecx, dword ptr ds : [public_6f61e28]
        add ecx, 0x50
        push ecx
        mov esi, eax
        call public_6f4eb60
        mov edx, dword ptr ds : [public_6f61e28]
        add edx, 0x40
        push edx
        mov edi, eax
        call public_6f4eb60
        mov ebp, eax
        mov eax, dword ptr ds : [public_6f61e28]
        add eax, 0x48
        push eax
        call public_6f4eb60
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax+0x74]
        shl ecx, 2
        push edi
        mov dword ptr ds : [eax+0x74], ecx
        call public_6f4e970
        push esi
        call public_6f4e9a0
/*FIXUP push offset public_6f60a08 @0x6f4ea4c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60a08
        call public_6f4c990
        push edi
        call public_6f4e510
        push esi
        call public_6f4f2b0
        push ebp
        call public_6f4fca0
        mov edx, dword ptr ss : [esp+0x34]
        push edx
        call public_6f4fd10
        mov ecx, dword ptr ds : [public_6f61e28]
        mov eax, dword ptr ds : [ecx+0x78]
        mov edx, dword ptr ss : [esp+0x40]
        add esp, 0x28
        sub ebx, eax
        test edx, edx
        jne public_6f4ea95
        pop edi
        add eax, eax
        pop esi
        mov dword ptr ds : [ecx+0x74], eax
        pop ebp
        mov eax, ebx
        pop ebx
        pop ecx
        ret 
        public_6f4ea95 : nop
        pop edi
        add eax, edx
        pop esi
        mov dword ptr ds : [ecx+0x74], eax
        pop ebp
        mov eax, ebx
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f4e9e0)
    }
}

#undef public_6f4ea95
