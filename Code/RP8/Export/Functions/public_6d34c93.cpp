#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f2a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f87d);
CLANG_FORWARD_PROC_SYMBOL(public_6d2fc9d);
CLANG_FORWARD_PROC_SYMBOL(public_6d34c93);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cd8c);
CLANG_FORWARD_JUMP_SYMBOL(public_6d5cfe9);

#define public_6d34d0a _public_6d34d0a
#define public_6d34d0e _public_6d34d0e
#define public_6d34d2a _public_6d34d2a
#define public_6d34d30 _public_6d34d30
#define public_6d34d57 _public_6d34d57
#define public_6d34d63 _public_6d34d63
#define public_6d34d70 _public_6d34d70
#define public_6d34d75 _public_6d34d75

PROC_DECLARE(0x6d34c93, internal_6d34c93, public_6d34c93);
extern "C" NAKED register_t __cdecl internal_6d34c93()
{
    __asm
    {
        mov eax, public_6d5cfe9
        call public_6d5cd8c
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        push edi
        mov edi, dword ptr ds : [eax+0x1058]
        cmp edi, dword ptr ds : [ecx+0x1058]
        jne public_6d34d70
        mov edx, dword ptr ds : [eax+0x105C]
        cmp edx, dword ptr ds : [ecx+0x105C]
        jne public_6d34d70
        mov eax, dword ptr ds : [eax+0x1060]
        cmp eax, dword ptr ds : [ecx+0x1060]
        jne public_6d34d70
        mov eax, edi
        shl eax, 4
        push eax
        call public_6d2f2a0
        mov ebx, eax
        pop ecx
        mov dword ptr ss : [ebp-0x10], ebx
        and dword ptr ss : [ebp-4], 0
        test ebx, ebx
        je public_6d34d0a
/*FIXUP push offset _public_6d2f87d @0x6d34cf7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d2f87d
        push edi
        push 0x10
        push ebx
        call public_6d2fc9d
        mov dword ptr ss : [ebp-0x10], ebx
        jmp public_6d34d0e
        public_6d34d0a : nop
        and dword ptr ss : [ebp-0x10], 0
        public_6d34d0e : nop
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        xor ebx, ebx
        cmp dword ptr ss : [ebp-0x10], ebx
        je public_6d34d70
        mov eax, dword ptr ds : [esi+4]
        cmp dword ptr ds : [eax+0x1060], ebx
        jbe public_6d34d63
        mov eax, dword ptr ds : [eax+0x105C]
        public_6d34d2a : nop
        xor edi, edi
        test eax, eax
        jbe public_6d34d57
        public_6d34d30 : nop
        push dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [ecx]
        push ebx
        push edi
        call dword ptr ds : [eax+4]
        push dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx]
        push ebx
        push edi
        call dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [eax+0x105C]
        inc edi
        cmp edi, eax
        jb public_6d34d30
        public_6d34d57 : nop
        mov ecx, dword ptr ds : [esi+4]
        inc ebx
        cmp ebx, dword ptr ds : [ecx+0x1060]
        jb public_6d34d2a
        public_6d34d63 : nop
        push dword ptr ss : [ebp-0x10]
        call public_6d2f249
        pop ecx
        xor eax, eax
        jmp public_6d34d75
        public_6d34d70 : nop
        mov eax, 0x80004005
        public_6d34d75 : nop
        mov ecx, dword ptr ss : [ebp-0xC]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d34c93)
    }
}

#undef public_6d34d0a
#undef public_6d34d0e
#undef public_6d34d2a
#undef public_6d34d30
#undef public_6d34d57
#undef public_6d34d63
#undef public_6d34d70
#undef public_6d34d75
