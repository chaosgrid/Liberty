#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418a9e);

#define public_408600 _public_408600
#define public_408615 _public_408615
#define public_40862c _public_40862c
#define public_408641 _public_408641

PROC_DECLARE(0x4085c0, internal_4085c0, public_4085c0);
extern "C" NAKED register_t __cdecl internal_4085c0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        mov al, byte ptr ss : [ebp+4]
        push esi
        push edi
        mov ebx, ecx
        push 0xC
        mov byte ptr ds : [ebx+4], al
        call public_418a9e
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx+0xC], 0
        mov ecx, dword ptr ss : [ebp+8]
        mov edi, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [eax]
        add esp, 4
        cmp edi, ecx
        mov dword ptr ss : [esp+0x10], ecx
        je public_408641
        lea esp, ss:[esp]
        public_408600 : nop
        mov ebp, dword ptr ds : [esi+4]
        push 0xC
        call public_418a9e
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], esi
        jne public_408615
        mov ebp, eax
        public_408615 : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_40862c
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], edx
        public_40862c : nop
        mov ecx, dword ptr ds : [ebx+0xC]
        mov eax, dword ptr ss : [esp+0x10]
        inc ecx
        mov dword ptr ds : [ebx+0xC], ecx
        mov edi, dword ptr ds : [edi]
        cmp edi, eax
        jne public_408600
        mov ebp, dword ptr ss : [esp+0x18]
        public_408641 : nop
        lea esi, ss:[ebp+0x10]
        lea edi, ds:[ebx+0x10]
        mov ecx, 6
        rep movsd
        mov eax, dword ptr ss : [ebp+0x28]
        pop edi
        pop esi
        mov dword ptr ds : [ebx+0x28], eax
        pop ebp
        mov dword ptr ds : [ebx], offset public_41cb40
        mov eax, ebx
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x4085c0)
    }
}

#undef public_408600
#undef public_408615
#undef public_40862c
#undef public_408641
