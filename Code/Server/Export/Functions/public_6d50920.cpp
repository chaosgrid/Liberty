#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0f620);
CLANG_FORWARD_PROC_SYMBOL(public_6d50920);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6d50977 _public_6d50977
#define public_6d50995 _public_6d50995
#define public_6d50997 _public_6d50997
#define public_6d5099b _public_6d5099b
#define public_6d509a5 _public_6d509a5
#define public_6d509e2 _public_6d509e2
#define public_6d509fc _public_6d509fc
#define public_6d50a29 _public_6d50a29

PROC_DECLARE(0x6d50920, internal_6d50920, public_6d50920);
extern "C" NAKED register_t __cdecl internal_6d50920()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x3D0]
        test eax, eax
        je public_6d509a5
        mov esi, dword ptr ds : [edi+0x348]
        mov ebx, dword ptr ds : [public_6d90260]
        imul esi, 0x418
        mov esi, dword ptr ds : [esi+ebx-0x34]
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        push esi
        push eax
        call dword ptr ds : [edx+0x1B0]
        mov eax, dword ptr ds : [edi+0x3D0]
        mov ecx, dword ptr ds : [public_6d90260]
        imul eax, 0x418
        mov ebx, dword ptr ds : [eax+ecx-0x40]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        lea ebp, ds:[eax+ecx-0x44]
        je public_6d5099b
        public_6d50977 : nop
        mov edx, dword ptr ds : [esi+8]
        cmp edx, dword ptr ds : [edi+0x348]
        jne public_6d50995
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, ebp
        call public_6d0f620
        jmp public_6d50997
        public_6d50995 : nop
        mov esi, dword ptr ds : [esi]
        public_6d50997 : nop
        cmp esi, ebx
        jne public_6d50977
        public_6d5099b : nop
        mov dword ptr ds : [edi+0x3D0], 0
        public_6d509a5 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [public_6d90260]
        imul ecx, 0x418
        mov eax, dword ptr ds : [ecx+edx-0xD0]
        test eax, eax
        lea ebx, ds:[ecx+edx-0x418]
        je public_6d50a29
        mov esi, dword ptr ds : [ebx+0x3D8]
        mov ebp, dword ptr ds : [esi+4]
        push 0xC
        call public_6d60012
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], esi
        jne public_6d509e2
        mov ebp, eax
        public_6d509e2 : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6d509fc
        mov edx, dword ptr ds : [edi+0x348]
        mov dword ptr ds : [eax], edx
        public_6d509fc : nop
        mov ebp, dword ptr ds : [ebx+0x3DC]
        mov eax, dword ptr ss : [esp+0x18]
        inc ebp
        mov dword ptr ds : [ebx+0x3DC], ebp
        mov esi, dword ptr ds : [edi+0x3E4]
        mov dword ptr ds : [edi+0x3D0], eax
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        push esi
        push eax
        call dword ptr ds : [edx+0x1AC]
        public_6d50a29 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6d50920)
    }
}

#undef public_6d50977
#undef public_6d50995
#undef public_6d50997
#undef public_6d5099b
#undef public_6d509a5
#undef public_6d509e2
#undef public_6d509fc
#undef public_6d50a29
