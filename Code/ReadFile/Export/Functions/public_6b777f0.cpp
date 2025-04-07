#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b777f0);

#define public_6b7784a _public_6b7784a
#define public_6b77850 _public_6b77850
#define public_6b7785f _public_6b7785f
#define public_6b77864 _public_6b77864
#define public_6b7786e _public_6b7786e
#define public_6b7788f _public_6b7788f
#define public_6b77897 _public_6b77897
#define public_6b778b1 _public_6b778b1
#define public_6b778d0 _public_6b778d0
#define public_6b778ea _public_6b778ea
#define public_6b778f3 _public_6b778f3
#define public_6b778f6 _public_6b778f6

PROC_DECLARE(0x6b777f0, internal_6b777f0, public_6b777f0);
extern "C" NAKED register_t __cdecl internal_6b777f0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        mov ebx, ecx
        push esi
        push edi
        mov ecx, dword ptr ss : [ebp+0x28]
        mov eax, 0xFFFFFFFE
        test ecx, ecx
        jne public_6b778f6
        mov esi, dword ptr ss : [ebp+8]
        test esi, esi
        je public_6b778f3
        mov edi, offset public_6b7a1f0
        mov ecx, 4
        xor eax, eax
        repe cmpsb
        jne public_6b778f3
        mov ecx, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [ebx+0x18], ecx
        mov al, byte ptr ss : [ebp+0x3C]
        mov ecx, 1
        test cl, al
        mov eax, dword ptr ss : [ebp+0x34]
        je public_6b77864
        test eax, eax
        mov dword ptr ds : [ebx+8], eax
        jne public_6b7784a
        mov dword ptr ds : [ebx+0xC], eax
        jmp public_6b77850
        public_6b7784a : nop
        mov edx, dword ptr ss : [ebp+0x38]
        mov dword ptr ds : [ebx+0xC], edx
        public_6b77850 : nop
        mov dl, byte ptr ss : [ebp+0x3C]
        mov eax, 2
        test al, dl
        je public_6b7785f
        or dword ptr ds : [ebx+0x14], ecx
        public_6b7785f : nop
        or dword ptr ds : [ebx+0x14], eax
        jmp public_6b77897
        public_6b77864 : nop
        test eax, eax
        je public_6b7786e
        mov eax, dword ptr ss : [ebp+0x38]
        mov dword ptr ds : [ebx+0xC], eax
        public_6b7786e : nop
        mov eax, dword ptr ds : [ebx+0xC]
        test eax, eax
        je public_6b7788f
        push 4
        push 0x1000
        push eax
        push 0
        call dword ptr ds : [public_6b79060]
        test eax, eax
        mov dword ptr ds : [ebx+8], eax
        jne public_6b7788f
        mov dword ptr ds : [ebx+0xC], eax
        public_6b7788f : nop
        mov eax, dword ptr ds : [ebx+0x14]
        or al, 5
        mov dword ptr ds : [ebx+0x14], eax
        public_6b77897 : nop
        mov eax, dword ptr ds : [ebx+8]
        test eax, eax
        je public_6b778d0
        mov eax, dword ptr ss : [ebp+0x1C]
        cmp eax, 3
        jb public_6b778b1
        cmp eax, 4
        ja public_6b778b1
        mov ecx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [ebx+0x1C], ecx
        public_6b778b1 : nop
        mov esi, dword ptr ss : [ebp+0x34]
        test esi, esi
        je public_6b778d0
        mov edi, dword ptr ds : [ebx+8]
        cmp esi, edi
        je public_6b778d0
        mov ecx, dword ptr ds : [ebx+0xC]
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        public_6b778d0 : nop
        mov ebp, dword ptr ss : [ebp+0xC]
        test ebp, ebp
        je public_6b778ea
        push 0x107
        add ebx, 0x20
        push ebp
        push ebx
        call dword ptr ds : [public_6b79074]
        add esp, 0xC
        public_6b778ea : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 4
        public_6b778f3 : nop
        or eax, 0xFFFFFFFF
        public_6b778f6 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6b777f0)
    }
}

#undef public_6b7784a
#undef public_6b77850
#undef public_6b7785f
#undef public_6b77864
#undef public_6b7786e
#undef public_6b7788f
#undef public_6b77897
#undef public_6b778b1
#undef public_6b778d0
#undef public_6b778ea
#undef public_6b778f3
#undef public_6b778f6
