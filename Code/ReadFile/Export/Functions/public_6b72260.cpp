#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b71980);
CLANG_FORWARD_PROC_SYMBOL(public_6b721f0);
CLANG_FORWARD_PROC_SYMBOL(public_6b74000);

#define public_6b72285 _public_6b72285
#define public_6b72297 _public_6b72297
#define public_6b722bf _public_6b722bf
#define public_6b722d2 _public_6b722d2
#define public_6b722da _public_6b722da
#define public_6b722de _public_6b722de
#define public_6b722e8 _public_6b722e8
#define public_6b722f9 _public_6b722f9
#define public_6b722fa _public_6b722fa
#define public_6b722ff _public_6b722ff
#define public_6b72358 _public_6b72358
#define public_6b7235c _public_6b7235c
#define public_6b72366 _public_6b72366
#define public_6b72368 _public_6b72368
#define public_6b72381 _public_6b72381
#define public_6b7238c _public_6b7238c
#define public_6b723c7 _public_6b723c7
#define public_6b723e1 _public_6b723e1

PROC_DECLARE(0x6b72260, internal_6b72260, public_6b72260);
extern "C" NAKED register_t __cdecl internal_6b72260()
{
    __asm
    {
        sub esp, 0x114
        mov eax, dword ptr ss : [esp+0x120]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        cmp eax, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x10], edi
        je public_6b722bf
        dec eax
        lea edx, ds:[edi+0x20]
        cmp eax, 4
        jb public_6b72297
        public_6b72285 : nop
        mov edx, dword ptr ds : [edx]
        test edx, edx
        je public_6b723e1
        sub eax, 4
        cmp eax, 4
        jae public_6b72285
        public_6b72297 : nop
        lea ecx, ds:[eax+eax*2]
        shl ecx, 3
        sub ecx, eax
        lea eax, ds:[ecx+ecx*2]
        lea eax, ds:[edx+eax*4+4]
        test eax, eax
        je public_6b723e1
        cmp dword ptr ds : [eax], 0
        je public_6b723e1
        mov edx, dword ptr ds : [eax+4]
        jmp public_6b72368
        public_6b722bf : nop
        mov eax, dword ptr ss : [esp+0x12C]
        test eax, eax
        jne public_6b722d2
        mov ecx, dword ptr ds : [edi+0xC]
        mov ebp, dword ptr ds : [ecx+4]
        jmp public_6b722da
        public_6b722d2 : nop
        cmp eax, 0xFFFFFFFF
        je public_6b722de
        mov ebp, dword ptr ds : [eax+4]
        public_6b722da : nop
        test ebp, ebp
        jne public_6b722e8
        public_6b722de : nop
        mov edx, dword ptr ds : [edi+0xC]
        mov ebp, dword ptr ds : [edx+4]
        test ebp, ebp
        je public_6b72366
        public_6b722e8 : nop
        mov esi, dword ptr ss : [esp+0x128]
        mov al, byte ptr ds : [esi]
        cmp al, 0x5C
        je public_6b722f9
        cmp al, 0x2F
        jne public_6b722fa
        public_6b722f9 : nop
        inc esi
        public_6b722fa : nop
        cmp byte ptr ds : [esi], 0
        je public_6b72366
        public_6b722ff : nop
        mov eax, dword ptr ss : [ebp]
        shr eax, 0x1F
        test al, 1
        je public_6b72358
        push esi
        call public_6b71980
        add esp, 4
        mov ebx, eax
        test ebx, ebx
        push ebp
        je public_6b7235c
        sub eax, esi
        lea edi, ss:[esp+0x24]
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x14]
        mov byte ptr ss : [esp+eax+0x24], 0
        lea eax, ss:[esp+0x24]
        push eax
        call public_6b721f0
        mov edi, dword ptr ss : [esp+0x10]
        mov ebp, eax
        test ebp, ebp
        je public_6b72366
        mov al, byte ptr ds : [ebx+1]
        lea esi, ds:[ebx+1]
        test al, al
        jne public_6b722ff
        jmp public_6b72366
        public_6b72358 : nop
        xor ebp, ebp
        jmp public_6b72366
        public_6b7235c : nop
        push esi
        mov ecx, edi
        call public_6b721f0
        mov ebp, eax
        public_6b72366 : nop
        mov edx, ebp
        public_6b72368 : nop
        xor ebx, ebx
        cmp edx, ebx
        je public_6b723e1
        lea esi, ds:[edi+0x10]
        mov edi, dword ptr ds : [edi+0x1C]
        cmp edi, ebx
        je public_6b7238c
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_6b7238c
        public_6b72381 : nop
        cmp dword ptr ds : [eax+0xC], ebx
        je public_6b723c7
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_6b72381
        public_6b7238c : nop
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x18], edx
        push ecx
        lea edx, ss:[esp+0x14]
        push eax
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], offset public_6b791f4
        mov dword ptr ss : [esp+0x28], ebx
        call public_6b74000
        mov eax, dword ptr ds : [esi+4]
        pop edi
        pop esi
        pop ebp
        mov eax, dword ptr ds : [eax+4]
        pop ebx
        add eax, 8
        add esp, 0x114
        ret 0xC
        public_6b723c7 : nop
        dec edi
        add eax, 8
        mov dword ptr ds : [esi+0xC], edi
        pop edi
        pop esi
        mov dword ptr ds : [eax+8], ebx
        pop ebp
        mov dword ptr ds : [eax+4], edx
        pop ebx
        add esp, 0x114
        ret 0xC
        public_6b723e1 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x114
        ret 0xC
        UNREACHABLE_TRAP(0x6b72260)
    }
}

#undef public_6b72285
#undef public_6b72297
#undef public_6b722bf
#undef public_6b722d2
#undef public_6b722da
#undef public_6b722de
#undef public_6b722e8
#undef public_6b722f9
#undef public_6b722fa
#undef public_6b722ff
#undef public_6b72358
#undef public_6b7235c
#undef public_6b72366
#undef public_6b72368
#undef public_6b72381
#undef public_6b7238c
#undef public_6b723c7
#undef public_6b723e1
