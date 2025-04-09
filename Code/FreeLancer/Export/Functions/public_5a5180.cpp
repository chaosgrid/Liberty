#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_5a51b0 _public_5a51b0
#define public_5a51c8 _public_5a51c8
#define public_5a51e0 _public_5a51e0
#define public_5a5235 _public_5a5235
#define public_5a5247 _public_5a5247
#define public_5a5250 _public_5a5250
#define public_5a5285 _public_5a5285
#define public_5a5290 _public_5a5290
#define public_5a52a5 _public_5a52a5
#define public_5a52bc _public_5a52bc
#define public_5a52d7 _public_5a52d7
#define public_5a52db _public_5a52db
#define public_5a5307 _public_5a5307

PROC_DECLARE(0x5a5180, internal_5a5180, public_5a5180);
extern "C" NAKED register_t __cdecl internal_5a5180()
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
        public_5a51b0 : nop
        mov si, word ptr ds : [edx+eax]
        mov word ptr ds : [eax], si
        add eax, 2
        dec ecx
        jne public_5a51b0
        lea eax, ss:[ebp+0x258]
        mov ecx, 0x104
        public_5a51c8 : nop
        mov si, word ptr ds : [eax+edx]
        mov word ptr ds : [eax], si
        add eax, 2
        dec ecx
        jne public_5a51c8
        lea eax, ss:[ebp+0x460]
        mov ecx, 0x40
        public_5a51e0 : nop
        mov esi, dword ptr ds : [eax+edx]
        mov dword ptr ds : [eax], esi
        add eax, 4
        dec ecx
        jne public_5a51e0
        mov ecx, dword ptr ds : [ebx+0x560]
        mov dword ptr ss : [ebp+0x560], ecx
        mov al, byte ptr ds : [ebx+0x564]
        mov byte ptr ss : [ebp+0x564], al
        mov ecx, dword ptr ds : [ebx+0x568]
        mov dword ptr ss : [ebp+0x568], ecx
        lea ecx, ds:[ebx+0x570]
        lea eax, ss:[ebp+0x570]
        cmp eax, ecx
        je public_5a52db
        mov esi, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        mov ecx, dword ptr ds : [ecx+4]
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x10], ecx
        je public_5a5247
        public_5a5235 : nop
        cmp ebx, ecx
        je public_5a5247
        mov edi, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax+8], edi
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        mov ebx, dword ptr ds : [ebx]
        jne public_5a5235
        public_5a5247 : nop
        cmp eax, esi
        mov edi, eax
        je public_5a5285
        lea ecx, ds:[ecx]
        public_5a5250 : nop
        mov eax, edi
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [edx+4], ecx
        call public_5b7e1d
        mov ecx, dword ptr ss : [ebp+0x578]
        add esp, 4
        dec ecx
        cmp edi, esi
        mov dword ptr ss : [ebp+0x578], ecx
        jne public_5a5250
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        public_5a5285 : nop
        cmp ebx, ecx
        je public_5a52d7
        lea esp, ss:[esp]
        public_5a5290 : nop
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        call public_5b7e84
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_5a52a5
        mov edi, eax
        public_5a52a5 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        test eax, eax
        je public_5a52bc
        mov ecx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax], ecx
        public_5a52bc : nop
        mov ecx, dword ptr ss : [ebp+0x578]
        mov eax, dword ptr ss : [esp+0x10]
        inc ecx
        mov dword ptr ss : [ebp+0x578], ecx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jne public_5a5290
        mov edx, dword ptr ss : [esp+0x14]
        public_5a52d7 : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_5a52db : nop
        lea esi, ds:[ebx+0x57C]
        lea edi, ss:[ebp+0x57C]
        mov ecx, 6
        rep movsd
        mov eax, dword ptr ds : [ebx+0x594]
        mov esi, 0xFFFFFA68
        mov dword ptr ss : [ebp+0x594], eax
        lea eax, ss:[ebp+0x598]
        sub esi, ebp
        public_5a5307 : nop
        mov cl, byte ptr ds : [eax+edx]
        mov byte ptr ds : [eax], cl
        inc eax
        lea ecx, ds:[esi+eax]
        cmp ecx, 0x400
        jb public_5a5307
        mov edx, dword ptr ds : [ebx+0x998]
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x998], edx
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x5a5180)
    }
}

#undef public_5a51b0
#undef public_5a51c8
#undef public_5a51e0
#undef public_5a5235
#undef public_5a5247
#undef public_5a5250
#undef public_5a5285
#undef public_5a5290
#undef public_5a52a5
#undef public_5a52bc
#undef public_5a52d7
#undef public_5a52db
#undef public_5a5307
