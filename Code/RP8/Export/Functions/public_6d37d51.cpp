#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f2a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f87d);
CLANG_FORWARD_PROC_SYMBOL(public_6d2fc9d);
CLANG_FORWARD_PROC_SYMBOL(public_6d37d51);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cd8c);
CLANG_FORWARD_JUMP_SYMBOL(public_6d5d113);

#define public_6d37d9c _public_6d37d9c
#define public_6d37daf _public_6d37daf
#define public_6d37dbb _public_6d37dbb
#define public_6d37dbd _public_6d37dbd

PROC_DECLARE(0x6d37d51, internal_6d37d51, public_6d37d51);
extern "C" NAKED register_t __cdecl internal_6d37d51()
{
    __asm
    {
        mov eax, public_6d5d113
        call public_6d5cd8c
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ss : [ebp+8]
        cmp eax, dword ptr ds : [ecx+8]
        je public_6d37dbb
        push ebx
        push edi
        mov edi, dword ptr ds : [esi+0x1058]
        mov eax, edi
        shl eax, 4
        push eax
        call public_6d2f2a0
        mov ebx, eax
        pop ecx
        mov dword ptr ss : [ebp-0x10], ebx
        xor eax, eax
        cmp ebx, eax
        mov dword ptr ss : [ebp-4], eax
        je public_6d37d9c
/*FIXUP push offset _public_6d2f87d @0x6d37d8c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d2f87d
        push edi
        push 0x10
        push ebx
        call public_6d2fc9d
        mov eax, ebx
        public_6d37d9c : nop
        test eax, eax
        pop edi
        mov dword ptr ds : [esi+0x104C], eax
        pop ebx
        jne public_6d37daf
        mov eax, 0x8007000E
        jmp public_6d37dbd
        public_6d37daf : nop
        mov eax, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [esi+0x1048], eax
        public_6d37dbb : nop
        xor eax, eax
        public_6d37dbd : nop
        mov ecx, dword ptr ss : [ebp-0xC]
        pop esi
        mov dword ptr fs : [0], ecx
        leave 
        ret 4
        UNREACHABLE_TRAP(0x6d37d51)
    }
}

#undef public_6d37d9c
#undef public_6d37daf
#undef public_6d37dbb
#undef public_6d37dbd
