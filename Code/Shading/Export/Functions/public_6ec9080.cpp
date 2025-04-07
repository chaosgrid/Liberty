#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);

#define public_6ec9091 _public_6ec9091
#define public_6ec90a1 _public_6ec90a1
#define public_6ec90c1 _public_6ec90c1
#define public_6ec90c5 _public_6ec90c5
#define public_6ec90ca _public_6ec90ca
#define public_6ec90ce _public_6ec90ce
#define public_6ec90d4 _public_6ec90d4
#define public_6ec90dd _public_6ec90dd
#define public_6ec9106 _public_6ec9106
#define public_6ec911a _public_6ec911a

PROC_DECLARE(0x6ec9080, internal_6ec9080, public_6ec9080);
extern "C" NAKED register_t __cdecl internal_6ec9080()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebp
        mov ebp, dword ptr ds : [eax+0x58]
        push esi
        push edi
        mov edi, dword ptr ss : [ebp]
        cmp edi, ebp
        je public_6ec90d4
        public_6ec9091 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        cmp dword ptr ds : [edi+8], ecx
        jne public_6ec90ce
        mov esi, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ss : [esp+0x18]
        public_6ec90a1 : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ds : [esi]
        jne public_6ec90c5
        test cl, cl
        je public_6ec90c1
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ds : [esi+1]
        jne public_6ec90c5
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6ec90a1
        public_6ec90c1 : nop
        xor eax, eax
        jmp public_6ec90ca
        public_6ec90c5 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6ec90ca : nop
        test eax, eax
        je public_6ec90dd
        public_6ec90ce : nop
        mov edi, dword ptr ds : [edi]
        cmp edi, ebp
        jne public_6ec9091
        public_6ec90d4 : nop
        pop edi
        pop esi
        or eax, 0xFFFFFFFF
        pop ebp
        ret 0xC
        public_6ec90dd : nop
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [edi]
        mov esi, dword ptr ds : [public_6ed1054]
        mov dword ptr ds : [eax], ecx
        mov eax, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [edi]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        je public_6ec9106
        push eax
        call esi
        add esp, 4
        mov dword ptr ds : [edi+0xC], 0
        public_6ec9106 : nop
        mov eax, dword ptr ds : [edi+0x10]
        test eax, eax
        je public_6ec911a
        push eax
        call esi
        add esp, 4
        mov dword ptr ds : [edi+0x10], 0
        public_6ec911a : nop
        push edi
        call public_6ed0c50
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+0x5C]
        add esp, 4
        pop edi
        dec ecx
        pop esi
        mov dword ptr ds : [eax+0x5C], ecx
        xor eax, eax
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6ec9080)
    }
}

#undef public_6ec9091
#undef public_6ec90a1
#undef public_6ec90c1
#undef public_6ec90c5
#undef public_6ec90ca
#undef public_6ec90ce
#undef public_6ec90d4
#undef public_6ec90dd
#undef public_6ec9106
#undef public_6ec911a
