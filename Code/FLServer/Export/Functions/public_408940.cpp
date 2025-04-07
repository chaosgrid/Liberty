#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418978);
CLANG_FORWARD_PROC_SYMBOL(public_418a9e);

#define public_408970 _public_408970
#define public_408988 _public_408988
#define public_4089a0 _public_4089a0
#define public_4089f5 _public_4089f5
#define public_408a07 _public_408a07
#define public_408a10 _public_408a10
#define public_408a45 _public_408a45
#define public_408a50 _public_408a50
#define public_408a65 _public_408a65
#define public_408a7c _public_408a7c
#define public_408a97 _public_408a97
#define public_408a9b _public_408a9b
#define public_408ac7 _public_408ac7

PROC_DECLARE(0x408940, internal_408940, public_408940);
extern "C" NAKED register_t __cdecl internal_408940()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ebx+4]
        push ebp
        mov ebp, ecx
        push esi
        push edi
        mov edx, ebx
        mov dword ptr ss : [ebp+4], eax
        lea esi, ds:[ebx+8]
        lea edi, ss:[ebp+8]
        mov ecx, 0x12
        sub edx, ebp
        rep movsd
        lea eax, ss:[ebp+0x50]
        mov dword ptr ss : [esp+0x14], edx
        mov ecx, 0x104
        public_408970 : nop
        mov si, word ptr ds : [edx+eax]
        mov word ptr ds : [eax], si
        add eax, 2
        dec ecx
        jne public_408970
        lea eax, ss:[ebp+0x258]
        mov ecx, 0x104
        public_408988 : nop
        mov si, word ptr ds : [eax+edx]
        mov word ptr ds : [eax], si
        add eax, 2
        dec ecx
        jne public_408988
        lea eax, ss:[ebp+0x460]
        mov ecx, 0x40
        public_4089a0 : nop
        mov esi, dword ptr ds : [eax+edx]
        mov dword ptr ds : [eax], esi
        add eax, 4
        dec ecx
        jne public_4089a0
        mov ecx, dword ptr ds : [ebx+0x560]
        mov dword ptr ss : [ebp+0x560], ecx
        mov al, byte ptr ds : [ebx+0x564]
        mov byte ptr ss : [ebp+0x564], al
        mov ecx, dword ptr ds : [ebx+0x568]
        mov dword ptr ss : [ebp+0x568], ecx
        lea ecx, ds:[ebx+0x570]
        lea eax, ss:[ebp+0x570]
        cmp eax, ecx
        je public_408a9b
        mov esi, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        mov ecx, dword ptr ds : [ecx+4]
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x10], ecx
        je public_408a07
        public_4089f5 : nop
        cmp ebx, ecx
        je public_408a07
        mov edi, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax+8], edi
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        mov ebx, dword ptr ds : [ebx]
        jne public_4089f5
        public_408a07 : nop
        cmp eax, esi
        mov edi, eax
        je public_408a45
        lea ecx, ds:[ecx]
        public_408a10 : nop
        mov eax, edi
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [edx+4], ecx
        call public_418978
        mov ecx, dword ptr ss : [ebp+0x578]
        add esp, 4
        dec ecx
        cmp edi, esi
        mov dword ptr ss : [ebp+0x578], ecx
        jne public_408a10
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        public_408a45 : nop
        cmp ebx, ecx
        je public_408a97
        lea esp, ss:[esp]
        public_408a50 : nop
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        call public_418a9e
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_408a65
        mov edi, eax
        public_408a65 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        test eax, eax
        je public_408a7c
        mov ecx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax], ecx
        public_408a7c : nop
        mov ecx, dword ptr ss : [ebp+0x578]
        mov eax, dword ptr ss : [esp+0x10]
        inc ecx
        mov dword ptr ss : [ebp+0x578], ecx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jne public_408a50
        mov edx, dword ptr ss : [esp+0x14]
        public_408a97 : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_408a9b : nop
        lea esi, ds:[ebx+0x57C]
        lea edi, ss:[ebp+0x57C]
        mov ecx, 6
        rep movsd
        mov eax, dword ptr ds : [ebx+0x594]
        mov esi, 0xFFFFFA68
        mov dword ptr ss : [ebp+0x594], eax
        lea eax, ss:[ebp+0x598]
        sub esi, ebp
        public_408ac7 : nop
        mov cl, byte ptr ds : [eax+edx]
        mov byte ptr ds : [eax], cl
        inc eax
        lea ecx, ds:[esi+eax]
        cmp ecx, 0x400
        jb public_408ac7
        mov edx, dword ptr ds : [ebx+0x998]
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x998], edx
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x408940)
    }
}

#undef public_408970
#undef public_408988
#undef public_4089a0
#undef public_4089f5
#undef public_408a07
#undef public_408a10
#undef public_408a45
#undef public_408a50
#undef public_408a65
#undef public_408a7c
#undef public_408a97
#undef public_408a9b
#undef public_408ac7
