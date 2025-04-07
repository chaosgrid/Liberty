#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da1380);
CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6dab247 _public_6dab247
#define public_6dab25e _public_6dab25e
#define public_6dab270 _public_6dab270
#define public_6dab291 _public_6dab291
#define public_6dab2a3 _public_6dab2a3
#define public_6dab2c4 _public_6dab2c4
#define public_6dab2d6 _public_6dab2d6
#define public_6dab301 _public_6dab301
#define public_6dab332 _public_6dab332

PROC_DECLARE(0x6dab200, internal_6dab200, public_6dab200);
extern "C" NAKED register_t __cdecl internal_6dab200()
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
        je public_6dab247
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6dab247 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6dab25e
        mov dword ptr ds : [esi+0xC], 0x16
        public_6dab25e : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6dab270
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6dab270 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6dab291
        mov dword ptr ds : [esi+0xC], 0x16
        public_6dab291 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6dab2a3
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6dab2a3 : nop
        mov eax, dword ptr ds : [ebx]
        mov dl, byte ptr ds : [edi+0x28]
        mov byte ptr ds : [eax], dl
        inc eax
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6dab2c4
        mov dword ptr ds : [esi+0xC], 0x16
        public_6dab2c4 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6dab2d6
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6dab2d6 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edi+0x24]
        mov dword ptr ds : [eax], ecx
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
        je public_6dab301
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6dab301 : nop
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
        jbe public_6dab332
        mov dword ptr ds : [ecx+0x10], esi
        public_6dab332 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        pop edi
        pop esi
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6dab200)
    }
}

#undef public_6dab247
#undef public_6dab25e
#undef public_6dab270
#undef public_6dab291
#undef public_6dab2a3
#undef public_6dab2c4
#undef public_6dab2d6
#undef public_6dab301
#undef public_6dab332
