#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf65b0);

#define public_6cf65d0 _public_6cf65d0
#define public_6cf65ec _public_6cf65ec
#define public_6cf6609 _public_6cf6609
#define public_6cf6623 _public_6cf6623

PROC_DECLARE(0x6cf65b0, internal_6cf65b0, public_6cf65b0);
extern "C" NAKED register_t __cdecl internal_6cf65b0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov ebp, ecx
        call dword ptr ds : [public_6d641c0]
        test al, al
        jne public_6cf6623
        mov eax, dword ptr ss : [ebp+0xC]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6cf6623
        mov ebx, dword ptr ss : [esp+0x14]
        lea ecx, ds:[ecx]
        public_6cf65d0 : nop
        mov edi, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x20]
        cmp eax, dword ptr ds : [ebx]
        je public_6cf65ec
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [ebp+0xC]
        jne public_6cf65d0
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        public_6cf65ec : nop
        mov al, byte ptr ds : [edi+0x2F0]
        test al, al
        je public_6cf6609
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov eax, dword ptr ss : [ebp+0x38]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push eax
        call dword ptr ds : [edx+0xD8]
        public_6cf6609 : nop
        fld dword ptr ds : [ebx+0x20]
        mov edx, dword ptr ds : [edi+8]
        sub esp, 8
        lea eax, ds:[ebx+4]
        fstp qword ptr ss : [esp]
        lea ecx, ds:[edi+8]
        push eax
        add ebx, 0x14
        push ebx
        call dword ptr ds : [edx+4]
        public_6cf6623 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6cf65b0)
    }
}

#undef public_6cf65d0
#undef public_6cf65ec
#undef public_6cf6609
#undef public_6cf6623
