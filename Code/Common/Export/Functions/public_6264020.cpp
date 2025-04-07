#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626c1e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6264050 _public_6264050
#define public_6264071 _public_6264071
#define public_6264077 _public_6264077
#define public_62640a2 _public_62640a2
#define public_62640b0 _public_62640b0
#define public_62640c5 _public_62640c5
#define public_62640f1 _public_62640f1

PROC_DECLARE(0x6264020, internal_6264020, public_6264020);
extern "C" NAKED register_t __cdecl internal_6264020()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ebp, ecx
        push esi
        push edi
        je public_62640f1
        mov ebx, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [ebx]
        cmp eax, ebx
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x18], edx
        je public_6264071
        lea esp, ss:[esp]
        public_6264050 : nop
        cmp edx, dword ptr ss : [esp+0x10]
        je public_6264071
        lea esi, ds:[edx+8]
        lea edi, ds:[eax+8]
        mov eax, dword ptr ds : [eax]
        cmp eax, ebx
        mov ecx, 8
        rep movsd
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x18], ecx
        mov edx, ecx
        jne public_6264050
        public_6264071 : nop
        cmp eax, ebx
        mov esi, eax
        je public_62640a2
        public_6264077 : nop
        mov eax, esi
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [edx+4], ecx
        call public_6391d5a
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 4
        dec ecx
        cmp esi, ebx
        mov dword ptr ss : [ebp+8], ecx
        jne public_6264077
        mov edx, dword ptr ss : [esp+0x18]
        public_62640a2 : nop
        cmp edx, dword ptr ss : [esp+0x10]
        mov esi, edx
        je public_62640f1
        lea ebx, ds:[ebx]
        public_62640b0 : nop
        mov edi, dword ptr ds : [ebx+4]
        push 0x28
        call public_6391d9c
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], ebx
        jne public_62640c5
        mov edi, eax
        public_62640c5 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [ebx+4], eax
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx], eax
        push ecx
        add eax, 8
        push eax
        call public_626c1e0
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x18]
        add esp, 8
        inc ecx
        mov dword ptr ss : [ebp+8], ecx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jne public_62640b0
        public_62640f1 : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6264020)
    }
}

#undef public_6264050
#undef public_6264071
#undef public_6264077
#undef public_62640a2
#undef public_62640b0
#undef public_62640c5
#undef public_62640f1
