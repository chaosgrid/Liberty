#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6232730);

#define public_6232755 _public_6232755
#define public_6232760 _public_6232760
#define public_6232781 _public_6232781
#define public_623278c _public_623278c
#define public_62327ad _public_62327ad
#define public_62327b8 _public_62327b8
#define public_62327d9 _public_62327d9
#define public_62327e4 _public_62327e4

PROC_DECLARE(0x6232730, internal_6232730, public_6232730);
extern "C" NAKED register_t __cdecl internal_6232730()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0xF9FEBF0D
        jne public_6232760
        mov al, byte ptr ss : [esp+0xC]
        test al, al
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x5C]
        je public_6232755
        or ecx, 0x10
        mov dword ptr ds : [eax+0x5C], ecx
        xor eax, eax
        ret 0xC
        public_6232755 : nop
        and ecx, 0xFFFFFFEF
        mov dword ptr ds : [eax+0x5C], ecx
        xor eax, eax
        ret 0xC
        public_6232760 : nop
        cmp eax, 0xE2F60EEB
        jne public_623278c
        mov al, byte ptr ss : [esp+0xC]
        test al, al
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x5C]
        je public_6232781
        or ecx, 8
        mov dword ptr ds : [eax+0x5C], ecx
        xor eax, eax
        ret 0xC
        public_6232781 : nop
        and ecx, 0xFFFFFFF7
        mov dword ptr ds : [eax+0x5C], ecx
        xor eax, eax
        ret 0xC
        public_623278c : nop
        cmp eax, 0xF3D52EE4
        jne public_62327b8
        mov al, byte ptr ss : [esp+0xC]
        test al, al
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x5C]
        je public_62327ad
        or ch, 0x10
        mov dword ptr ds : [eax+0x5C], ecx
        xor eax, eax
        ret 0xC
        public_62327ad : nop
        and ch, 0xEF
        mov dword ptr ds : [eax+0x5C], ecx
        xor eax, eax
        ret 0xC
        public_62327b8 : nop
        cmp eax, 0xE8DC7F5E
        jne public_62327e4
        mov al, byte ptr ss : [esp+0xC]
        test al, al
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x5C]
        je public_62327d9
        or ch, 0x20
        mov dword ptr ds : [eax+0x5C], ecx
        xor eax, eax
        ret 0xC
        public_62327d9 : nop
        and ch, 0xDF
        mov dword ptr ds : [eax+0x5C], ecx
        xor eax, eax
        ret 0xC
        public_62327e4 : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x6232730)
    }
}

#undef public_6232755
#undef public_6232760
#undef public_6232781
#undef public_623278c
#undef public_62327ad
#undef public_62327b8
#undef public_62327d9
#undef public_62327e4
