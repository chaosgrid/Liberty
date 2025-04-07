#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ac230);
CLANG_FORWARD_PROC_SYMBOL(public_62ce740);
CLANG_FORWARD_PROC_SYMBOL(public_62e74e0);

#define public_62ce76d _public_62ce76d
#define public_62ce76f _public_62ce76f
#define public_62ce79d _public_62ce79d
#define public_62ce7a7 _public_62ce7a7
#define public_62ce7b3 _public_62ce7b3
#define public_62ce7bf _public_62ce7bf
#define public_62ce7c1 _public_62ce7c1
#define public_62ce7d2 _public_62ce7d2
#define public_62ce7d4 _public_62ce7d4
#define public_62ce83a _public_62ce83a
#define public_62ce83c _public_62ce83c
#define public_62ce844 _public_62ce844
#define public_62ce848 _public_62ce848
#define public_62ce857 _public_62ce857

PROC_DECLARE(0x62ce740, internal_62ce740, public_62ce740);
extern "C" NAKED register_t __cdecl internal_62ce740()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [ebp]
        push esi
        mov ebx, ecx
        push edi
        mov ecx, ebp
        call dword ptr ds : [eax+0x150]
        xor edi, edi
        cmp eax, edi
        je public_62ce76d
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x803
        cmp ecx, 0x803
        je public_62ce76f
        public_62ce76d : nop
        xor eax, eax
        public_62ce76f : nop
        cmp dword ptr ds : [eax+0xF0], 1
        ja public_62ce857
        mov ecx, dword ptr ds : [ebx+0x24]
        push 0x7F0000
        lea edx, ss:[esp+0x1C]
        push edx
        add ecx, 0x34
        mov dword ptr ss : [esp+0x20], edi
        call public_62e74e0
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, edi
        jne public_62ce7a7
        public_62ce79d : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        pop ecx
        ret 4
        public_62ce7a7 : nop
        cmp dword ptr ds : [ecx+0x800], edi
        jbe public_62ce857
        public_62ce7b3 : nop
        mov eax, dword ptr ds : [ecx+edi*8]
        test eax, eax
        je public_62ce7bf
        lea esi, ds:[eax-8]
        jmp public_62ce7c1
        public_62ce7bf : nop
        xor esi, esi
        public_62ce7c1 : nop
        mov eax, dword ptr ds : [ebx+0x24]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62ce7d2
        add eax, 0xFFFFFFF8
        jmp public_62ce7d4
        public_62ce7d2 : nop
        xor eax, eax
        public_62ce7d4 : nop
        cmp esi, eax
        je public_62ce848
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x88]
        test dword ptr ss : [esp+0x10], 0x7F0000
        je public_62ce844
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x150]
        test eax, eax
        je public_62ce844
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        jne public_62ce844
        mov ecx, eax
        call public_62ac230
        test eax, eax
        je public_62ce844
        cmp dword ptr ds : [eax+0xC0], 0x10
        jne public_62ce844
        mov eax, dword ptr ds : [eax+0x1B4]
        add eax, 0x174
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62ce83a
        add eax, 0xFFFFFFF8
        jmp public_62ce83c
        public_62ce83a : nop
        xor eax, eax
        public_62ce83c : nop
        cmp ebp, eax
        je public_62ce79d
        public_62ce844 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        public_62ce848 : nop
        mov eax, dword ptr ds : [ecx+0x800]
        inc edi
        cmp edi, eax
        jb public_62ce7b3
        public_62ce857 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x62ce740)
    }
}

#undef public_62ce76d
#undef public_62ce76f
#undef public_62ce79d
#undef public_62ce7a7
#undef public_62ce7b3
#undef public_62ce7bf
#undef public_62ce7c1
#undef public_62ce7d2
#undef public_62ce7d4
#undef public_62ce83a
#undef public_62ce83c
#undef public_62ce844
#undef public_62ce848
#undef public_62ce857
