#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10005890);
CLANG_FORWARD_PROC_SYMBOL(public_100091a0);
CLANG_FORWARD_PROC_SYMBOL(public_1000a418);

#define public_100091b6 _public_100091b6
#define public_100091cc _public_100091cc
#define public_100091ea _public_100091ea
#define public_100091f9 _public_100091f9
#define public_1000920f _public_1000920f

PROC_DECLARE(0x100091a0, internal_100091a0, public_100091a0);
extern "C" NAKED register_t __cdecl internal_100091a0()
{
    __asm
    {
        push ebp
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        xor ebp, ebp
        test edi, edi
        jne public_100091b6
        pop edi
        mov eax, 0xFFFFFF9A
        pop ebp
        ret 4
        public_100091b6 : nop
        push esi
        mov esi, dword ptr ds : [edi+0x9C]
        test esi, esi
        jne public_100091cc
        pop esi
        pop edi
        mov eax, 0xFFFFFF9A
        pop ebp
        ret 4
        public_100091cc : nop
        mov eax, dword ptr ds : [esi+0x5C]
        test eax, eax
        jne public_100091ea
        mov eax, dword ptr ds : [esi+0x8C]
        test eax, eax
        jne public_100091ea
        mov eax, dword ptr ds : [esi+0x50]
        cmp eax, dword ptr ds : [esi+0x54]
        je public_100091ea
        mov ebp, 0xFFFFFF97
        public_100091ea : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_100091f9
        push eax
        call public_1000a418
        add esp, 4
        public_100091f9 : nop
        mov eax, dword ptr ds : [esi+0x40]
        test eax, eax
        mov dword ptr ds : [esi], 0
        je public_1000920f
        lea ecx, ds:[esi+4]
        push ecx
        call public_10005890
        public_1000920f : nop
        push esi
        mov dword ptr ds : [esi+0x40], 0
        call public_1000a418
        add esp, 4
        pop esi
        mov dword ptr ds : [edi+0x9C], 0
        pop edi
        mov eax, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x100091a0)
    }
}

#undef public_100091b6
#undef public_100091cc
#undef public_100091ea
#undef public_100091f9
#undef public_1000920f
