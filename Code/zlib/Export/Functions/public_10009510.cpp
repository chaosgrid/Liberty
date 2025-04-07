#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_100058e0);
CLANG_FORWARD_PROC_SYMBOL(public_10008cb0);
CLANG_FORWARD_PROC_SYMBOL(public_100091a0);
CLANG_FORWARD_PROC_SYMBOL(public_10009510);
CLANG_FORWARD_PROC_SYMBOL(public_1000a418);
CLANG_FORWARD_PROC_SYMBOL(public_1000a46a);

#define public_10009524 _public_10009524
#define public_10009531 _public_10009531
#define public_1000953f _public_1000953f
#define public_1000956d _public_1000956d
#define public_100095b7 _public_100095b7
#define public_100095c6 _public_100095c6
#define public_100095d6 _public_100095d6
#define public_10009601 _public_10009601
#define public_10009609 _public_10009609
#define public_1000960f _public_1000960f
#define public_10009674 _public_10009674

PROC_DECLARE(0x10009510, internal_10009510, public_10009510);
extern "C" NAKED register_t __cdecl internal_10009510()
{
    __asm
    {
        sub esp, 8
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push edi
        xor edi, edi
        cmp ebp, edi
        je public_10009524
        cmp dword ptr ss : [ebp+0x38], edi
        jne public_10009531
        public_10009524 : nop
        pop edi
        mov eax, 0xFFFFFF9A
        pop ebp
        add esp, 8
        ret 0x10
        public_10009531 : nop
        cmp dword ptr ss : [ebp+0x9C], edi
        je public_1000953f
        push ebp
        call public_100091a0
        public_1000953f : nop
        push ebx
        push esi
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        mov esi, ebp
        call public_10008cb0
        add esp, 0xC
        test eax, eax
        je public_1000956d
        pop esi
        pop ebx
        pop edi
        mov eax, 0xFFFFFF99
        pop ebp
        add esp, 8
        ret 0x10
        public_1000956d : nop
        push 0x90
        call public_1000a46a
        mov ebx, eax
        add esp, 4
        cmp ebx, edi
        je public_100095b7
        push 0x4000
        call public_1000a46a
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [ebx+0x48], edx
        mov edx, dword ptr ss : [esp+0x2C]
        add esp, 4
        cmp eax, edi
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [ebx+0x44], ecx
        mov dword ptr ds : [ebx+0x4C], edi
        mov dword ptr ds : [ebx+0x8C], edx
        jne public_100095c6
        push ebx
        call public_1000a418
        add esp, 4
        public_100095b7 : nop
        pop esi
        pop ebx
        pop edi
        mov eax, 0xFFFFFF98
        pop ebp
        add esp, 8
        ret 0x10
        public_100095c6 : nop
        mov eax, dword ptr ss : [esp+0x20]
        cmp eax, edi
        mov dword ptr ds : [ebx+0x40], edi
        je public_100095d6
        mov ecx, dword ptr ss : [ebp+0x54]
        mov dword ptr ds : [eax], ecx
        public_100095d6 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        cmp ecx, edi
        je public_1000960f
        mov dword ptr ds : [ecx], 6
        mov eax, dword ptr ss : [ebp+0x50]
        and eax, 6
        sub eax, 2
        je public_10009609
        sub eax, 2
        je public_10009601
        sub eax, 2
        jne public_1000960f
        mov dword ptr ds : [ecx], 1
        jmp public_1000960f
        public_10009601 : nop
        mov dword ptr ds : [ecx], 2
        jmp public_1000960f
        public_10009609 : nop
        mov dword ptr ds : [ecx], 9
        public_1000960f : nop
        mov eax, dword ptr ss : [ebp+0x5C]
        mov dword ptr ds : [ebx+0x50], edi
        mov dword ptr ds : [ebx+0x54], eax
        mov ecx, dword ptr ss : [ebp+0x54]
        mov dword ptr ds : [ebx+0x84], ecx
        mov eax, dword ptr ss : [ebp+0x20]
        mov dword ptr ds : [ebx+0x80], eax
        lea edi, ds:[ebx+0x60]
        mov ecx, 8
        mov esi, ebp
        rep movsd
        mov ecx, dword ptr ss : [ebp+0x2C]
        xor esi, esi
        mov dword ptr ds : [ebx+0x88], ecx
        mov dword ptr ds : [ebx+0x18], esi
        cmp dword ptr ss : [ebp+0x54], 8
        jne public_10009674
        cmp edx, esi
        jne public_10009674
        push 0x38
/*FIXUP push offset public_1000b068 @0x10009650*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_1000b068
        push 0xFFFFFFF1
        lea edx, ds:[ebx+4]
        push edx
        mov dword ptr ds : [ebx+0x24], esi
        mov dword ptr ds : [ebx+0x28], esi
        mov dword ptr ds : [ebx+0x2C], esi
        call public_100058e0
        test eax, eax
        jne public_10009674
        mov dword ptr ds : [ebx+0x40], 1
        public_10009674 : nop
        mov eax, dword ptr ss : [ebp+0x60]
        mov dword ptr ds : [ebx+0x58], eax
        mov ecx, dword ptr ss : [ebp+0x64]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ebx+0x5C], ecx
        mov edx, dword ptr ss : [ebp+0x98]
        lea ecx, ds:[edx+eax+0x1E]
        mov dword ptr ds : [ebx+8], esi
        pop esi
        mov dword ptr ds : [ebx+0x3C], ecx
        mov dword ptr ss : [ebp+0x9C], ebx
        pop ebx
        pop edi
        xor eax, eax
        pop ebp
        add esp, 8
        ret 0x10
        UNREACHABLE_TRAP(0x10009510)
    }
}

#undef public_10009524
#undef public_10009531
#undef public_1000953f
#undef public_1000956d
#undef public_100095b7
#undef public_100095c6
#undef public_100095d6
#undef public_10009601
#undef public_10009609
#undef public_1000960f
#undef public_10009674
