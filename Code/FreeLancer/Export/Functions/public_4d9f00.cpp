#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4d9f00);

#define public_4d9f21 _public_4d9f21
#define public_4d9f57 _public_4d9f57
#define public_4d9f72 _public_4d9f72
#define public_4d9f97 _public_4d9f97
#define public_4d9fa9 _public_4d9fa9
#define public_4d9fc3 _public_4d9fc3
#define public_4d9fea _public_4d9fea
#define public_4d9ffb _public_4d9ffb
#define public_4da015 _public_4da015
#define public_4da02f _public_4da02f
#define public_4da097 _public_4da097

PROC_DECLARE(0x4d9f00, internal_4d9f00, public_4d9f00);
extern "C" NAKED register_t __cdecl internal_4d9f00()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp dword ptr ss : [esp+4], eax
        je public_4da097
        mov ecx, dword ptr ss : [esp+0xC]
        push ebx
        push ebp
        push esi
        lea edx, ds:[ecx+0xAC]
        push edi
        lea ebp, ds:[eax+0x28]
        xor ecx, ecx
        public_4d9f21 : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        sub eax, 0x148
        sub ebp, 0x148
        mov dword ptr ss : [esp+0x18], eax
        sub ebx, 0x148
        lea eax, ss:[ebp-0x24]
        sub edx, 0x148
        test eax, eax
        mov dword ptr ss : [esp+0x1C], ebx
        jne public_4d9f57
        mov eax, ebx
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [edx-0xA8], cl
        jmp public_4d9f97
        public_4d9f57 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        lea esi, ss:[ebp-0x24]
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        jb public_4d9f72
        mov eax, 0x1F
        public_4d9f72 : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        lea edi, ds:[edx-0xA8]
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov esi, dword ptr ss : [esp+0x1C]
        xor ecx, ecx
        mov byte ptr ds : [edx+eax-0xA8], cl
        mov dword ptr ds : [esi], eax
        public_4d9f97 : nop
        cmp ebp, ecx
        jne public_4d9fa9
        mov dword ptr ds : [edx-0x88], ecx
        mov byte ptr ds : [edx-0x84], cl
        jmp public_4d9fea
        public_4d9fa9 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebp
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x80
        jb public_4d9fc3
        mov eax, 0x7F
        public_4d9fc3 : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        lea edi, ds:[edx-0x84]
        mov esi, ebp
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        xor ecx, ecx
        mov byte ptr ds : [edx+eax-0x84], cl
        mov dword ptr ds : [edx-0x88], eax
        public_4d9fea : nop
        lea esi, ss:[ebp+0x84]
        cmp esi, ecx
        jne public_4d9ffb
        mov dword ptr ds : [edx-4], ecx
        mov byte ptr ds : [edx], cl
        jmp public_4da02f
        public_4d9ffb : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x80
        jb public_4da015
        mov eax, 0x7F
        public_4da015 : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, edx
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        xor ecx, ecx
        mov byte ptr ds : [edx+eax], cl
        mov dword ptr ds : [edx-4], eax
        public_4da02f : nop
        mov eax, dword ptr ss : [ebp+0x104]
        mov esi, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx+0x80], eax
        mov eax, dword ptr ss : [ebp+0x108]
        mov dword ptr ds : [edx+0x84], eax
        mov eax, dword ptr ss : [ebp+0x10C]
        mov dword ptr ds : [edx+0x88], eax
        mov eax, dword ptr ss : [ebp+0x110]
        mov dword ptr ds : [edx+0x8C], eax
        mov al, byte ptr ss : [ebp+0x114]
        mov byte ptr ds : [edx+0x90], al
        mov eax, dword ptr ss : [ebp+0x118]
        mov dword ptr ds : [edx+0x94], eax
        mov eax, dword ptr ss : [ebp+0x11C]
        mov dword ptr ds : [edx+0x98], eax
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, esi
        jne public_4d9f21
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_4da097 : nop
        mov eax, dword ptr ss : [esp+0xC]
        ret 
        UNREACHABLE_TRAP(0x4d9f00)
    }
}

#undef public_4d9f21
#undef public_4d9f57
#undef public_4d9f72
#undef public_4d9f97
#undef public_4d9fa9
#undef public_4d9fc3
#undef public_4d9fea
#undef public_4d9ffb
#undef public_4da015
#undef public_4da02f
#undef public_4da097
