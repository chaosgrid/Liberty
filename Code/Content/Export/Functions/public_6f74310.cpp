#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f74310);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f74324 _public_6f74324
#define public_6f74337 _public_6f74337
#define public_6f7434c _public_6f7434c
#define public_6f74371 _public_6f74371

PROC_DECLARE(0x6f74310, internal_6f74310, public_6f74310);
extern "C" NAKED register_t __cdecl internal_6f74310()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0xE0]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6f74371
        mov ecx, dword ptr ss : [esp+0xC]
        public_6f74324 : nop
        mov edx, dword ptr ds : [esi+8]
        cmp dword ptr ds : [edx+4], ecx
        je public_6f74337
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jne public_6f74324
        pop edi
        pop esi
        ret 8
        public_6f74337 : nop
        mov al, byte ptr ss : [esp+0x10]
        test al, al
        je public_6f7434c
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_6f7434c
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_6f7434c : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        push esi
        mov dword ptr ds : [eax+4], ecx
        call public_6fa8fe0
        mov eax, dword ptr ds : [edi+0xE4]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+0xE4], eax
        public_6f74371 : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6f74310)
    }
}

#undef public_6f74324
#undef public_6f74337
#undef public_6f7434c
#undef public_6f74371
