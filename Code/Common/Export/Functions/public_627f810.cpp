#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627f340);
CLANG_FORWARD_PROC_SYMBOL(public_627f810);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6392dc9);

#define public_627f882 _public_627f882
#define public_627f88c _public_627f88c
#define public_627f8a6 _public_627f8a6
#define public_627f8ba _public_627f8ba
#define public_627f8d1 _public_627f8d1
#define public_627f8e3 _public_627f8e3

PROC_DECLARE(0x627f810, internal_627f810, public_627f810);
extern "C" NAKED register_t __cdecl internal_627f810()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6392dc9 @0x627f812*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6392dc9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        mov eax, dword ptr ss : [esp+0x18]
        push ebx
        push ebp
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], eax
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x20], ebx
        je public_627f8e3
        mov esi, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [public_63fc424]
        lea edi, ds:[eax+8]
        inc edx
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ds : [public_63fc424], edx
        mov eax, dword ptr ds : [public_63fc420]
        cmp eax, ebx
        mov byte ptr ss : [esp+0x20], 1
        je public_627f882
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [public_63fc420], ecx
        dec dword ptr ds : [public_63fc42c]
        jmp public_627f88c
        public_627f882 : nop
        push 0xC
        call public_6391d9c
        add esp, 4
        public_627f88c : nop
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        mov ecx, dword ptr ds : [esi+0xC]
        mov ebp, dword ptr ds : [ecx]
        cmp ebp, ecx
        mov esi, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x2C], ecx
        je public_627f8e3
        public_627f8a6 : nop
        mov ebx, dword ptr ds : [esi+4]
        push 0xC
        mov ecx, edi
        call public_627f340
        test ebx, ebx
        mov dword ptr ds : [eax], esi
        jne public_627f8ba
        mov ebx, eax
        public_627f8ba : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        test eax, eax
        je public_627f8d1
        mov ecx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [eax], ecx
        public_627f8d1 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ss : [esp+0x2C]
        inc ecx
        mov dword ptr ds : [edi+8], ecx
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, eax
        jne public_627f8a6
        public_627f8e3 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x627f810)
    }
}

#undef public_627f882
#undef public_627f88c
#undef public_627f8a6
#undef public_627f8ba
#undef public_627f8d1
#undef public_627f8e3
