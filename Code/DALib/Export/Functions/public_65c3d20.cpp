#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c6a60);
CLANG_FORWARD_PROC_SYMBOL(public_65c6a66);

#define public_65c3d50 _public_65c3d50
#define public_65c3d68 _public_65c3d68
#define public_65c3d80 _public_65c3d80
#define public_65c3dd5 _public_65c3dd5
#define public_65c3de7 _public_65c3de7
#define public_65c3df0 _public_65c3df0
#define public_65c3e25 _public_65c3e25
#define public_65c3e30 _public_65c3e30
#define public_65c3e45 _public_65c3e45
#define public_65c3e5c _public_65c3e5c
#define public_65c3e77 _public_65c3e77
#define public_65c3e7b _public_65c3e7b
#define public_65c3ea7 _public_65c3ea7

PROC_DECLARE(0x65c3d20, internal_65c3d20, public_65c3d20);
extern "C" NAKED register_t __cdecl internal_65c3d20()
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
        public_65c3d50 : nop
        mov si, word ptr ds : [edx+eax]
        mov word ptr ds : [eax], si
        add eax, 2
        dec ecx
        jne public_65c3d50
        lea eax, ss:[ebp+0x258]
        mov ecx, 0x104
        public_65c3d68 : nop
        mov si, word ptr ds : [eax+edx]
        mov word ptr ds : [eax], si
        add eax, 2
        dec ecx
        jne public_65c3d68
        lea eax, ss:[ebp+0x460]
        mov ecx, 0x40
        public_65c3d80 : nop
        mov esi, dword ptr ds : [eax+edx]
        mov dword ptr ds : [eax], esi
        add eax, 4
        dec ecx
        jne public_65c3d80
        mov ecx, dword ptr ds : [ebx+0x560]
        mov dword ptr ss : [ebp+0x560], ecx
        mov al, byte ptr ds : [ebx+0x564]
        mov byte ptr ss : [ebp+0x564], al
        mov ecx, dword ptr ds : [ebx+0x568]
        mov dword ptr ss : [ebp+0x568], ecx
        lea ecx, ds:[ebx+0x570]
        lea eax, ss:[ebp+0x570]
        cmp eax, ecx
        je public_65c3e7b
        mov esi, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        mov ecx, dword ptr ds : [ecx+4]
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x10], ecx
        je public_65c3de7
        public_65c3dd5 : nop
        cmp ebx, ecx
        je public_65c3de7
        mov edi, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax+8], edi
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        mov ebx, dword ptr ds : [ebx]
        jne public_65c3dd5
        public_65c3de7 : nop
        cmp eax, esi
        mov edi, eax
        je public_65c3e25
        lea ecx, ds:[ecx]
        public_65c3df0 : nop
        mov eax, edi
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [edx+4], ecx
        call public_65c6a60
        mov ecx, dword ptr ss : [ebp+0x578]
        add esp, 4
        dec ecx
        cmp edi, esi
        mov dword ptr ss : [ebp+0x578], ecx
        jne public_65c3df0
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        public_65c3e25 : nop
        cmp ebx, ecx
        je public_65c3e77
        lea esp, ss:[esp]
        public_65c3e30 : nop
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        call public_65c6a66
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_65c3e45
        mov edi, eax
        public_65c3e45 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        test eax, eax
        je public_65c3e5c
        mov ecx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax], ecx
        public_65c3e5c : nop
        mov ecx, dword ptr ss : [ebp+0x578]
        mov eax, dword ptr ss : [esp+0x10]
        inc ecx
        mov dword ptr ss : [ebp+0x578], ecx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jne public_65c3e30
        mov edx, dword ptr ss : [esp+0x14]
        public_65c3e77 : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_65c3e7b : nop
        lea esi, ds:[ebx+0x57C]
        lea edi, ss:[ebp+0x57C]
        mov ecx, 6
        rep movsd
        mov eax, dword ptr ds : [ebx+0x594]
        mov esi, 0xFFFFFA68
        mov dword ptr ss : [ebp+0x594], eax
        lea eax, ss:[ebp+0x598]
        sub esi, ebp
        public_65c3ea7 : nop
        mov cl, byte ptr ds : [eax+edx]
        mov byte ptr ds : [eax], cl
        inc eax
        lea ecx, ds:[esi+eax]
        cmp ecx, 0x400
        jb public_65c3ea7
        mov edx, dword ptr ds : [ebx+0x998]
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x998], edx
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x65c3d20)
    }
}

#undef public_65c3d50
#undef public_65c3d68
#undef public_65c3d80
#undef public_65c3dd5
#undef public_65c3de7
#undef public_65c3df0
#undef public_65c3e25
#undef public_65c3e30
#undef public_65c3e45
#undef public_65c3e5c
#undef public_65c3e77
#undef public_65c3e7b
#undef public_65c3ea7
