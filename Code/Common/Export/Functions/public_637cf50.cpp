#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_637cf50);
CLANG_FORWARD_PROC_SYMBOL(public_637cfe0);

#define public_637cf6b _public_637cf6b
#define public_637cf73 _public_637cf73
#define public_637cfa9 _public_637cfa9
#define public_637cfbe _public_637cfbe
#define public_637cfc9 _public_637cfc9

PROC_DECLARE(0x637cf50, internal_637cf50, public_637cf50);
extern "C" NAKED register_t __cdecl internal_637cf50()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        xor eax, eax
        mov al, byte ptr ds : [esi+public_658bfe8]
        push edi
        xor edi, edi
        mov cl, byte ptr ds : [eax+public_658c540]
        test cl, cl
        jne public_637cf6b
        inc esi
        public_637cf6b : nop
        cmp esi, dword ptr ds : [public_658c710]
        jge public_637cfbe
        public_637cf73 : nop
        xor eax, eax
        mov al, byte ptr ds : [esi+public_658bfe8]
        mov cl, byte ptr ds : [eax+public_658c540]
        test cl, cl
        je public_637cfc9
        push eax
        call public_637cfe0
        add esp, 4
        test eax, eax
        jne public_637cfa9
        xor ecx, ecx
        mov cl, byte ptr ds : [esi+public_658bfe8]
        mov al, byte ptr ds : [ecx+public_658c602]
        test al, al
        jne public_637cfa9
        mov edi, 1
        public_637cfa9 : nop
        mov eax, dword ptr ds : [public_658c710]
        inc esi
        cmp esi, eax
        jl public_637cf73
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, edi
        pop edi
        mov dword ptr ds : [edx], esi
        pop esi
        ret 
        public_637cfbe : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], esi
        mov eax, edi
        pop edi
        pop esi
        ret 
        public_637cfc9 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, edi
        pop edi
        mov dword ptr ds : [ecx], esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x637cf50)
    }
}

#undef public_637cf6b
#undef public_637cf73
#undef public_637cfa9
#undef public_637cfbe
#undef public_637cfc9
