#include "Server-PCH.h"


#define public_6d20294 _public_6d20294
#define public_6d202ad _public_6d202ad
#define public_6d202c0 _public_6d202c0
#define public_6d202c8 _public_6d202c8
#define public_6d202d5 _public_6d202d5
#define public_6d202f6 _public_6d202f6

PROC_DECLARE(0x6d20260, internal_6d20260, public_6d20260);
extern "C" NAKED register_t __cdecl internal_6d20260()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x18]
        cmp eax, 0xFFFFFFFF
        push esi
        push edi
        je public_6d202c8
        mov edi, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ds : [ecx+4]
        shl eax, 5
        mov ecx, dword ptr ds : [edx+eax+0xC]
        lea eax, ds:[edx+eax+0xC]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], edx
        mov eax, dword ptr ds : [ebx+0xC]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x10], ecx
        je public_6d202ad
        public_6d20294 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx]
        push edx
        push edi
        call dword ptr ds : [eax+4]
        test al, al
        jne public_6d202f6
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [ebx+0xC]
        jne public_6d20294
        public_6d202ad : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [ebx+0x18]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ss : [esp+0x10]
        shl ecx, 5
        mov dword ptr ds : [edx+ecx+0xC], eax
        public_6d202c0 : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 8
        public_6d202c8 : nop
        mov eax, dword ptr ds : [ebx+0xC]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6d202c0
        mov edi, dword ptr ss : [esp+0x14]
        public_6d202d5 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx]
        push edi
        push eax
        call dword ptr ds : [edx+4]
        test al, al
        jne public_6d202f6
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [ebx+0xC]
        jne public_6d202d5
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 8
        public_6d202f6 : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6d20260)
    }
}

#undef public_6d20294
#undef public_6d202ad
#undef public_6d202c0
#undef public_6d202c8
#undef public_6d202d5
#undef public_6d202f6
