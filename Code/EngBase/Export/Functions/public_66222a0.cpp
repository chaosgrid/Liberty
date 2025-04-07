#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6612e70);

#define public_66222c2 _public_66222c2
#define public_66222e1 _public_66222e1
#define public_6622305 _public_6622305
#define public_6622324 _public_6622324
#define public_6622331 _public_6622331
#define public_6622339 _public_6622339
#define public_6622343 _public_6622343
#define public_662234a _public_662234a
#define public_6622356 _public_6622356

PROC_DECLARE(0x66222a0, internal_66222a0, public_66222a0);
extern "C" NAKED register_t __cdecl internal_66222a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        cmp eax, 0xFFFFFFFF
        jne public_66222c2
        mov eax, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        je public_6622356
        mov eax, dword ptr ds : [ecx+0xC]
        pop esi
        ret 8
        public_66222c2 : nop
        mov esi, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [esi+8]
        mov cl, byte ptr ds : [esi+0x2C]
        inc edx
        test cl, cl
        mov dword ptr ds : [esi+8], edx
        je public_66222e1
        mov edx, dword ptr ds : [esi+0x28]
        cmp dword ptr ds : [edx+0xC], eax
        jne public_66222e1
        inc dword ptr ds : [esi+0xC]
        jmp public_6622305
        public_66222e1 : nop
        lea ecx, ss:[esp+0xC]
        lea edx, ss:[esp+8]
        push ecx
        push edx
        lea ecx, ds:[esi+0x10]
        call public_6612e70
        mov eax, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ss : [esp+8]
        cmp edx, eax
        je public_6622305
        mov dword ptr ds : [esi+0x28], edx
        mov byte ptr ds : [esi+0x2C], 1
        public_6622305 : nop
        mov esi, dword ptr ds : [esi+0x14]
        mov ecx, edx
        cmp edx, esi
        je public_6622356
        mov eax, dword ptr ds : [edx+8]
        push ebx
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_6622331
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x15]
        test dl, dl
        jne public_662234a
        public_6622324 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x15]
        test dl, dl
        je public_6622324
        jmp public_662234a
        public_6622331 : nop
        mov eax, dword ptr ds : [edx+4]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6622343
        public_6622339 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [eax+4]
        cmp ecx, dword ptr ds : [eax+8]
        je public_6622339
        public_6622343 : nop
        cmp dword ptr ds : [ecx+8], eax
        je public_662234a
        mov ecx, eax
        public_662234a : nop
        cmp ecx, esi
        pop ebx
        je public_6622356
        mov eax, dword ptr ds : [ecx+0xC]
        pop esi
        ret 8
        public_6622356 : nop
        or eax, 0xFFFFFFFF
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x66222a0)
    }
}

#undef public_66222c2
#undef public_66222e1
#undef public_6622305
#undef public_6622324
#undef public_6622331
#undef public_6622339
#undef public_6622343
#undef public_662234a
#undef public_6622356
