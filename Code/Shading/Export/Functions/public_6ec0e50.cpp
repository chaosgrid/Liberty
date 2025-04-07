#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec0e50);
CLANG_FORWARD_PROC_SYMBOL(public_6ec56d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ec7da0);

#define public_6ec0e90 _public_6ec0e90
#define public_6ec0ea0 _public_6ec0ea0
#define public_6ec0ea3 _public_6ec0ea3
#define public_6ec0ea7 _public_6ec0ea7
#define public_6ec0ed6 _public_6ec0ed6
#define public_6ec0ee3 _public_6ec0ee3
#define public_6ec0eec _public_6ec0eec
#define public_6ec0eff _public_6ec0eff

PROC_DECLARE(0x6ec0e50, internal_6ec0e50, public_6ec0e50);
extern "C" NAKED register_t __cdecl internal_6ec0e50()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax]
        push ebx
        push ebp
        push esi
        push edi
        push eax
        mov esi, ecx
        call dword ptr ds : [public_6ed1000]
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [esi+0x58]
        mov ebp, dword ptr ds : [esi+0x5C]
        lea ebx, ds:[esi+0x54]
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x14], eax
        mov esi, dword ptr ds : [edx+4]
        add esp, 4
        cmp esi, ebp
        mov edi, edx
        mov cl, 1
        je public_6ec0ea7
        lea esp, ss:[esp]
        public_6ec0e90 : nop
        cmp eax, dword ptr ds : [esi+0xC]
        setb cl
        test cl, cl
        mov edi, esi
        je public_6ec0ea0
        mov esi, dword ptr ds : [esi]
        jmp public_6ec0ea3
        public_6ec0ea0 : nop
        mov esi, dword ptr ds : [esi+8]
        public_6ec0ea3 : nop
        cmp esi, ebp
        jne public_6ec0e90
        public_6ec0ea7 : nop
        cmp byte ptr ds : [ebx+0xC], 0
        jne public_6ec0eec
        test cl, cl
        mov dword ptr ss : [esp+0x1C], edi
        je public_6ec0ee3
        cmp edi, dword ptr ds : [edx]
        jne public_6ec0ed6
        lea ecx, ss:[esp+0x10]
        push ecx
        push edi
        push esi
        lea edx, ss:[esp+0x2C]
        push edx
        mov ecx, ebx
        call public_6ec56d0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 8
        public_6ec0ed6 : nop
        lea ecx, ss:[esp+0x1C]
        call public_6ec7da0
        mov eax, dword ptr ss : [esp+0x10]
        public_6ec0ee3 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        cmp dword ptr ds : [ecx+0xC], eax
        jae public_6ec0eff
        public_6ec0eec : nop
        lea edx, ss:[esp+0x10]
        push edx
        push edi
        lea eax, ss:[esp+0x28]
        push esi
        push eax
        mov ecx, ebx
        call public_6ec56d0
        public_6ec0eff : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6ec0e50)
    }
}

#undef public_6ec0e90
#undef public_6ec0ea0
#undef public_6ec0ea3
#undef public_6ec0ea7
#undef public_6ec0ed6
#undef public_6ec0ee3
#undef public_6ec0eec
#undef public_6ec0eff
