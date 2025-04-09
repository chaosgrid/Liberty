#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41f7b0);

#define public_41f7d0 _public_41f7d0
#define public_41f7e6 _public_41f7e6
#define public_41f83a _public_41f83a

PROC_DECLARE(0x41f7b0, internal_41f7b0, public_41f7b0);
extern "C" NAKED register_t __cdecl internal_41f7b0()
{
    __asm
    {
        push esi
        mov esi, ecx
        test byte ptr ds : [esi+0x14], 4
        push edi
        jne public_41f83a
        call dword ptr ds : [public_5c72ac]
        cmp eax, dword ptr ds : [public_67eca0]
        jne public_41f83a
        xor edi, edi
        mov edi, edi
        public_41f7d0 : nop
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x1C]
        cmp eax, 0x8007001E
        jne public_41f7e6
        inc edi
        cmp edi, 0x64
        jl public_41f7d0
        public_41f7e6 : nop
        mov cl, byte ptr ds : [esi+0x14]
        test eax, eax
        setge al
        shl al, 2
        xor al, cl
        and al, 4
        xor al, cl
        test al, 4
        mov byte ptr ds : [esi+0x14], al
        je public_41f83a
        test al, 2
        je public_41f83a
        mov eax, dword ptr ds : [esi+0x10]
        mov edx, dword ptr ds : [eax]
        lea edi, ds:[esi+0x2C]
        push edi
        push 0x14
        push eax
        call dword ptr ds : [edx+0x24]
        test eax, eax
        jl public_41f83a
        mov eax, dword ptr ds : [edi]
        mov edi, dword ptr ds : [public_616840]
        mov ecx, dword ptr ds : [esi+0x30]
        sub eax, edi
        mov dword ptr ds : [esi+0x18], eax
        sub ecx, dword ptr ds : [public_616844]
        mov edx, dword ptr ds : [esi+0x34]
        mov dword ptr ds : [esi+0x1C], ecx
        sub edx, dword ptr ds : [public_616848]
        mov dword ptr ds : [esi+0x20], edx
        public_41f83a : nop
        mov al, byte ptr ds : [esi+0x14]
        shr al, 2
        pop edi
        and al, 1
        pop esi
        ret 
        UNREACHABLE_TRAP(0x41f7b0)
    }
}

#undef public_41f7d0
#undef public_41f7e6
#undef public_41f83a
