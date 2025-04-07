#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630e450);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_630e460 _public_630e460
#define public_630e46d _public_630e46d
#define public_630e46f _public_630e46f
#define public_630e49d _public_630e49d
#define public_630e49f _public_630e49f
#define public_630e4cf _public_630e4cf
#define public_630e4d9 _public_630e4d9
#define public_630e4f9 _public_630e4f9
#define public_630e504 _public_630e504

PROC_DECLARE(0x630e450, internal_630e450, public_630e450);
extern "C" NAKED register_t __cdecl internal_630e450()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        xor ebx, ebx
        mov ebp, 0x3F800000
        lea ecx, ds:[ecx]
        public_630e460 : nop
        test ebx, ebx
        jne public_630e46d
        mov eax, dword ptr ss : [esp+0x14]
        mov ebx, dword ptr ds : [eax+4]
        jmp public_630e46f
        public_630e46d : nop
        mov ebx, dword ptr ds : [ebx]
        public_630e46f : nop
        test ebx, ebx
        je public_630e504
        push 0x10
        call dword ptr ds : [public_6399328]
        add esp, 4
        test eax, eax
        je public_630e49d
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+4], 0xFFFFFFFF
        mov dword ptr ds : [eax+8], ebp
        mov dword ptr ds : [eax+0xC], ebp
        mov esi, eax
        jmp public_630e49f
        public_630e49d : nop
        xor esi, esi
        public_630e49f : nop
        mov ecx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ds : [ecx]
        mov edx, esi
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], eax
        mov ecx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [edx+0xC], ecx
        mov al, byte ptr ds : [edi+0xC]
        test al, al
        je public_630e4cf
        mov eax, dword ptr ds : [edi+0x10]
        test eax, eax
        je public_630e4cf
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [edi+0x10], edx
        jmp public_630e4d9
        public_630e4cf : nop
        push 0xC
        call public_6391d9c
        add esp, 4
        public_630e4d9 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+8], esi
        mov ecx, dword ptr ds : [edi+8]
        test ecx, ecx
        je public_630e4f9
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [edi+8], eax
        jmp public_630e460
        public_630e4f9 : nop
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        jmp public_630e460
        public_630e504 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x630e450)
    }
}

#undef public_630e460
#undef public_630e46d
#undef public_630e46f
#undef public_630e49d
#undef public_630e49f
#undef public_630e4cf
#undef public_630e4d9
#undef public_630e4f9
#undef public_630e504
