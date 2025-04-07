#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f526a0);

#define public_6f526b2 _public_6f526b2
#define public_6f526bd _public_6f526bd
#define public_6f526bf _public_6f526bf
#define public_6f526d4 _public_6f526d4
#define public_6f526e8 _public_6f526e8
#define public_6f526fc _public_6f526fc
#define public_6f52700 _public_6f52700
#define public_6f52707 _public_6f52707
#define public_6f52715 _public_6f52715

PROC_DECLARE(0x6f526a0, internal_6f526a0, public_6f526a0);
extern "C" NAKED register_t __cdecl internal_6f526a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx+8]
        push esi
        mov esi, dword ptr ds : [eax]
        mov eax, dword ptr ds : [ecx+4]
        cmp eax, edx
        push edi
        je public_6f526bd
        public_6f526b2 : nop
        cmp dword ptr ds : [eax], esi
        je public_6f526bf
        add eax, 8
        cmp eax, edx
        jne public_6f526b2
        public_6f526bd : nop
        mov eax, edx
        public_6f526bf : nop
        cmp eax, edx
        je public_6f52707
        mov edx, dword ptr ds : [eax+4]
        mov esi, dword ptr ss : [esp+0x10]
        dec edx
        test esi, esi
        mov dword ptr ds : [eax+4], edx
        je public_6f526d4
        mov dword ptr ds : [esi], edx
        public_6f526d4 : nop
        mov edx, dword ptr ds : [eax+4]
        test edx, edx
        jne public_6f52700
        mov esi, dword ptr ds : [ecx+8]
        add eax, 8
        cmp eax, esi
        je public_6f526fc
        lea edx, ds:[eax-8]
        public_6f526e8 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], edi
        mov edi, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], edi
        add eax, 8
        add edx, 8
        cmp eax, esi
        jne public_6f526e8
        public_6f526fc : nop
        add dword ptr ds : [ecx+8], 0xFFFFFFF8
        public_6f52700 : nop
        pop edi
        mov al, 1
        pop esi
        ret 8
        public_6f52707 : nop
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        je public_6f52715
        mov dword ptr ds : [eax], 0
        public_6f52715 : nop
        pop edi
        xor al, al
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6f526a0)
    }
}

#undef public_6f526b2
#undef public_6f526bd
#undef public_6f526bf
#undef public_6f526d4
#undef public_6f526e8
#undef public_6f526fc
#undef public_6f52700
#undef public_6f52707
#undef public_6f52715
