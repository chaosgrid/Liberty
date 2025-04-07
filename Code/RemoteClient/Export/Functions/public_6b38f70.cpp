#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b38fa0 _public_6b38fa0
#define public_6b38fb8 _public_6b38fb8
#define public_6b38fd0 _public_6b38fd0
#define public_6b39025 _public_6b39025
#define public_6b39037 _public_6b39037
#define public_6b39040 _public_6b39040
#define public_6b39075 _public_6b39075
#define public_6b39080 _public_6b39080
#define public_6b39095 _public_6b39095
#define public_6b390ac _public_6b390ac
#define public_6b390c7 _public_6b390c7
#define public_6b390cb _public_6b390cb
#define public_6b390f7 _public_6b390f7

PROC_DECLARE(0x6b38f70, internal_6b38f70, public_6b38f70);
extern "C" NAKED register_t __cdecl internal_6b38f70()
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
        public_6b38fa0 : nop
        mov si, word ptr ds : [edx+eax]
        mov word ptr ds : [eax], si
        add eax, 2
        dec ecx
        jne public_6b38fa0
        lea eax, ss:[ebp+0x258]
        mov ecx, 0x104
        public_6b38fb8 : nop
        mov si, word ptr ds : [eax+edx]
        mov word ptr ds : [eax], si
        add eax, 2
        dec ecx
        jne public_6b38fb8
        lea eax, ss:[ebp+0x460]
        mov ecx, 0x40
        public_6b38fd0 : nop
        mov esi, dword ptr ds : [eax+edx]
        mov dword ptr ds : [eax], esi
        add eax, 4
        dec ecx
        jne public_6b38fd0
        mov ecx, dword ptr ds : [ebx+0x560]
        mov dword ptr ss : [ebp+0x560], ecx
        mov al, byte ptr ds : [ebx+0x564]
        mov byte ptr ss : [ebp+0x564], al
        mov ecx, dword ptr ds : [ebx+0x568]
        mov dword ptr ss : [ebp+0x568], ecx
        lea ecx, ds:[ebx+0x570]
        lea eax, ss:[ebp+0x570]
        cmp eax, ecx
        je public_6b390cb
        mov esi, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        mov ecx, dword ptr ds : [ecx+4]
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6b39037
        public_6b39025 : nop
        cmp ebx, ecx
        je public_6b39037
        mov edi, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax+8], edi
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        mov ebx, dword ptr ds : [ebx]
        jne public_6b39025
        public_6b39037 : nop
        cmp eax, esi
        mov edi, eax
        je public_6b39075
        lea ecx, ds:[ecx]
        public_6b39040 : nop
        mov eax, edi
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [edx+4], ecx
        call public_6b6a092
        mov ecx, dword ptr ss : [ebp+0x578]
        add esp, 4
        dec ecx
        cmp edi, esi
        mov dword ptr ss : [ebp+0x578], ecx
        jne public_6b39040
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        public_6b39075 : nop
        cmp ebx, ecx
        je public_6b390c7
        lea esp, ss:[esp]
        public_6b39080 : nop
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        call public_6b6a134
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6b39095
        mov edi, eax
        public_6b39095 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        test eax, eax
        je public_6b390ac
        mov ecx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax], ecx
        public_6b390ac : nop
        mov ecx, dword ptr ss : [ebp+0x578]
        mov eax, dword ptr ss : [esp+0x10]
        inc ecx
        mov dword ptr ss : [ebp+0x578], ecx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jne public_6b39080
        mov edx, dword ptr ss : [esp+0x14]
        public_6b390c7 : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6b390cb : nop
        lea esi, ds:[ebx+0x57C]
        lea edi, ss:[ebp+0x57C]
        mov ecx, 6
        rep movsd
        mov eax, dword ptr ds : [ebx+0x594]
        mov esi, 0xFFFFFA68
        mov dword ptr ss : [ebp+0x594], eax
        lea eax, ss:[ebp+0x598]
        sub esi, ebp
        public_6b390f7 : nop
        mov cl, byte ptr ds : [eax+edx]
        mov byte ptr ds : [eax], cl
        inc eax
        lea ecx, ds:[esi+eax]
        cmp ecx, 0x400
        jb public_6b390f7
        mov edx, dword ptr ds : [ebx+0x998]
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x998], edx
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6b38f70)
    }
}

#undef public_6b38fa0
#undef public_6b38fb8
#undef public_6b38fd0
#undef public_6b39025
#undef public_6b39037
#undef public_6b39040
#undef public_6b39075
#undef public_6b39080
#undef public_6b39095
#undef public_6b390ac
#undef public_6b390c7
#undef public_6b390cb
#undef public_6b390f7
