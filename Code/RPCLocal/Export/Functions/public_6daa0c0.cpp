#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da1380);
CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6daa107 _public_6daa107
#define public_6daa11e _public_6daa11e
#define public_6daa130 _public_6daa130
#define public_6daa153 _public_6daa153
#define public_6daa165 _public_6daa165
#define public_6daa190 _public_6daa190
#define public_6daa1c1 _public_6daa1c1

PROC_DECLARE(0x6daa0c0, internal_6daa0c0, public_6daa0c0);
extern "C" NAKED register_t __cdecl internal_6daa0c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        lea esi, ds:[edi+0x10]
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+0xC], 0
        mov eax, dword ptr ds : [edi+0x14]
        push esi
        push eax
        lea ebx, ds:[edi+0x18]
        push ebx
        mov ecx, edi
        call public_6da1380
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6daa107
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6daa107 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6daa11e
        mov dword ptr ds : [esi+0xC], 0x16
        public_6daa11e : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6daa130
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6daa130 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6daa153
        mov dword ptr ds : [esi+0xC], 0x16
        public_6daa153 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6daa165
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6daa165 : nop
        mov eax, dword ptr ds : [ebx]
        fld dword ptr ds : [edi+0x24]
        fstp dword ptr ds : [eax]
        mov edx, dword ptr ds : [edi+0x14]
        push esi
        push edx
        add eax, 4
        push ebx
        mov ecx, edi
        mov dword ptr ds : [ebx], eax
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6daa190
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6daa190 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [edi+0xC]
        push edx
        call public_6da16b0
        mov ecx, eax
        mov edi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx+0x18]
        add esp, 4
        inc edi
        mov dword ptr ds : [ecx], edi
        mov eax, dword ptr ds : [esi]
        add edx, eax
        mov eax, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [ecx+0x18], edx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jbe public_6daa1c1
        mov dword ptr ds : [ecx+0x10], esi
        public_6daa1c1 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        pop edi
        pop esi
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6daa0c0)
    }
}

#undef public_6daa107
#undef public_6daa11e
#undef public_6daa130
#undef public_6daa153
#undef public_6daa165
#undef public_6daa190
#undef public_6daa1c1
