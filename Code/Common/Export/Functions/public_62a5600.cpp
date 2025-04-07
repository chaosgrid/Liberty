#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a5600);
CLANG_FORWARD_PROC_SYMBOL(public_62a56e0);
CLANG_FORWARD_PROC_SYMBOL(public_62a6c60);
CLANG_FORWARD_PROC_SYMBOL(public_62a7c10);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62a5620 _public_62a5620
#define public_62a563b _public_62a563b
#define public_62a5643 _public_62a5643
#define public_62a564d _public_62a564d
#define public_62a5652 _public_62a5652
#define public_62a5654 _public_62a5654
#define public_62a5668 _public_62a5668
#define public_62a5680 _public_62a5680
#define public_62a568b _public_62a568b
#define public_62a5693 _public_62a5693
#define public_62a569d _public_62a569d
#define public_62a56a4 _public_62a56a4
#define public_62a56ad _public_62a56ad
#define public_62a56c2 _public_62a56c2
#define public_62a56cb _public_62a56cb

PROC_DECLARE(0x62a5600, internal_62a5600, public_62a5600);
extern "C" NAKED register_t __cdecl internal_62a5600()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ss : [ebp+0x18]
        push esi
        mov esi, dword ptr ds : [ecx]
        xor ebx, ebx
        cmp esi, ecx
        mov dword ptr ss : [esp+0xC], ecx
        je public_62a56ad
        push edi
        lea esp, ss:[esp]
        public_62a5620 : nop
        cmp dword ptr ds : [esi+0x50], 3
        jne public_62a5668
        mov eax, dword ptr ds : [esi+8]
        cmp byte ptr ds : [eax+0x69], bl
        mov edi, esi
        jne public_62a563b
        push eax
        call public_62a7c10
        add esp, 4
        jmp public_62a5652
        public_62a563b : nop
        mov eax, dword ptr ds : [esi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_62a564d
        public_62a5643 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        je public_62a5643
        public_62a564d : nop
        cmp dword ptr ds : [esi+8], eax
        je public_62a5654
        public_62a5652 : nop
        mov esi, eax
        public_62a5654 : nop
        push edi
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[ebp+0x14]
        call public_62a6c60
        mov ecx, dword ptr ss : [esp+0x10]
        jmp public_62a56a4
        public_62a5668 : nop
        mov dword ptr ds : [esi+0x50], ebx
        mov eax, dword ptr ds : [esi+8]
        cmp byte ptr ds : [eax+0x69], bl
        jne public_62a568b
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        cmp byte ptr ds : [eax+0x69], bl
        jne public_62a56a4
        lea esp, ss:[esp]
        public_62a5680 : nop
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        cmp byte ptr ds : [eax+0x69], bl
        je public_62a5680
        jmp public_62a56a4
        public_62a568b : nop
        mov eax, dword ptr ds : [esi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_62a569d
        public_62a5693 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        je public_62a5693
        public_62a569d : nop
        cmp dword ptr ds : [esi+8], eax
        je public_62a56a4
        mov esi, eax
        public_62a56a4 : nop
        cmp esi, ecx
        jne public_62a5620
        pop edi
        public_62a56ad : nop
        mov esi, dword ptr ss : [ebp+0x2C]
        cmp esi, ebx
        je public_62a56cb
        mov ecx, dword ptr ds : [esi+0x10]
        cmp ecx, ebx
        je public_62a56c2
        push 1
        call public_62a56e0
        public_62a56c2 : nop
        push esi
        call public_6391d5a
        add esp, 4
        public_62a56cb : nop
        pop esi
        mov dword ptr ss : [ebp+0x2C], ebx
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x62a5600)
    }
}

#undef public_62a5620
#undef public_62a563b
#undef public_62a5643
#undef public_62a564d
#undef public_62a5652
#undef public_62a5654
#undef public_62a5668
#undef public_62a5680
#undef public_62a568b
#undef public_62a5693
#undef public_62a569d
#undef public_62a56a4
#undef public_62a56ad
#undef public_62a56c2
#undef public_62a56cb
