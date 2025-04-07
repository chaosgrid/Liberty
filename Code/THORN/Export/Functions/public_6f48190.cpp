#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f438c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f48190);

#define public_6f481a6 _public_6f481a6
#define public_6f481a8 _public_6f481a8
#define public_6f48223 _public_6f48223
#define public_6f48230 _public_6f48230
#define public_6f48237 _public_6f48237
#define public_6f48265 _public_6f48265
#define public_6f4828c _public_6f4828c
#define public_6f4829c _public_6f4829c
#define public_6f482a8 _public_6f482a8
#define public_6f482b2 _public_6f482b2
#define public_6f482bb _public_6f482bb
#define public_6f482d8 _public_6f482d8
#define public_6f482e5 _public_6f482e5
#define public_6f482ee _public_6f482ee

PROC_DECLARE(0x6f48190, internal_6f48190, public_6f48190);
extern "C" NAKED register_t __cdecl internal_6f48190()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, ecx
        test ebp, ebp
        push esi
        push edi
        mov dword ptr ss : [esp+0x14], ebp
        je public_6f481a6
        lea eax, ss:[ebp+0x28]
        jmp public_6f481a8
        public_6f481a6 : nop
        xor eax, eax
        public_6f481a8 : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        sub esp, 0x2C
        mov edi, esp
        mov ecx, 0xB
        mov esi, ebx
        push eax
        rep movsd
        call public_6f438c0
        xor eax, eax
        mov dword ptr ss : [ebp+0x28], 9
        mov dword ptr ss : [ebp+0x54], eax
        mov dword ptr ss : [ebp+0x58], eax
        mov ecx, dword ptr ds : [ebx]
        add esp, 0x30
        cmp ecx, 9
        jne public_6f482ee
        mov esi, dword ptr ds : [ebx+0x2C]
        cmp esi, eax
        je public_6f48237
        or ecx, 0xFFFFFFFF
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        push 1
        lea ebx, ss:[ebp+0x5C]
        mov dword ptr ss : [esp+0x14], ecx
        push ecx
        mov ecx, ebx
        call dword ptr ds : [public_6f5a028]
        test al, al
        je public_6f48223
        mov ecx, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ds : [ebx+4]
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [ebx+8], eax
        mov byte ptr ds : [eax+ecx], 0
        public_6f48223 : nop
        mov ebx, dword ptr ds : [ebx+4]
        test ebx, ebx
        jne public_6f48230
        mov ebx, dword ptr ds : [public_6f5a020]
        public_6f48230 : nop
        mov dword ptr ss : [ebp+0x54], ebx
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6f48237 : nop
        mov esi, dword ptr ds : [ebx+0x30]
        test esi, esi
        je public_6f482ee
        or ecx, 0xFFFFFFFF
        xor eax, eax
        add ebp, 0x6C
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov ebx, ecx
        mov ecx, ebp
        call dword ptr ds : [public_6f5a050]
        cmp eax, ebx
        jae public_6f48265
        call dword ptr ds : [public_6f5a01c]
        public_6f48265 : nop
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        je public_6f4828c
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_6f4828c
        cmp cl, 0xFF
        je public_6f4828c
        test ebx, ebx
        jne public_6f482b2
        dec cl
        mov byte ptr ds : [eax-1], cl
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_6f5a02c]
        jmp public_6f482d8
        public_6f4828c : nop
        test ebx, ebx
        jne public_6f4829c
        push 1
        mov ecx, ebp
        call dword ptr ds : [public_6f5a02c]
        jmp public_6f482d8
        public_6f4829c : nop
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, 0x1F
        ja public_6f482a8
        cmp eax, ebx
        jae public_6f482bb
        public_6f482a8 : nop
        push 1
        mov ecx, ebp
        call dword ptr ds : [public_6f5a02c]
        public_6f482b2 : nop
        mov ecx, ebp
        push ebx
        call dword ptr ds : [public_6f5a018]
        public_6f482bb : nop
        mov edi, dword ptr ss : [ebp+4]
        mov ecx, ebx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr ss : [ebp+4]
        mov dword ptr ss : [ebp+8], ebx
        mov byte ptr ds : [ebx+eax], 0
        public_6f482d8 : nop
        mov ebp, dword ptr ss : [ebp+4]
        test ebp, ebp
        jne public_6f482e5
        mov ebp, dword ptr ds : [public_6f5a020]
        public_6f482e5 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+0x58], ebp
        mov ebp, ecx
        public_6f482ee : nop
        mov eax, dword ptr ss : [ebp+0x2C]
        mov edx, dword ptr ss : [ebp+0x28]
        mov ecx, dword ptr ss : [ebp+0x40]
        pop edi
        mov dword ptr ss : [ebp+8], eax
        mov dword ptr ss : [ebp+0x10], edx
        mov edx, dword ptr ss : [ebp+0x44]
        add ecx, eax
        mov eax, dword ptr ss : [ebp+0x48]
        pop esi
        mov dword ptr ss : [ebp+0x1C], ecx
        mov dword ptr ss : [ebp+0x14], edx
        mov dword ptr ss : [ebp+0x18], eax
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6f48190)
    }
}

#undef public_6f481a6
#undef public_6f481a8
#undef public_6f48223
#undef public_6f48230
#undef public_6f48237
#undef public_6f48265
#undef public_6f4828c
#undef public_6f4829c
#undef public_6f482a8
#undef public_6f482b2
#undef public_6f482bb
#undef public_6f482d8
#undef public_6f482e5
#undef public_6f482ee
